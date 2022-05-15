/*
 * piorityQueue.c
 *
 *  Created on: May 15, 2022
 *      Author: Павел
 */

#include "priorityQueue.h"

void QueueCreate(QueueID_t* QueueName, uint8_t QueueSize)
{
	QueueName->Queue = calloc(QueueSize, sizeof(QueueItem_t));				//выделяем память под очереди
	QueueName->LastIndex = 0;												//индекс последнего элмента в очереди
	QueueName->Size = QueueSize;											//размер очереди
}

void QueueDelete(QueueID_t* QueueName)
{
	free(QueueName->Queue);
}

void QueuePush(QueueID_t* QueueID, QueueItem_t item)
{
	if(QueueID->LastIndex == QueueID->Size)									//очередь переполнена
	{																		//сравниваем приоритет последнего элемента
		if(QueueID->Queue[QueueID->LastIndex-1].priority >= item.priority)	//если приоритет последнего элемента
		{																	//меньше или равен приоритету нового
			QueueID->LastIndex--;											//жертвуем последним элементом из очереди
		}																	//иначе игнорируем новый элемент
	}
	if(QueueID->LastIndex < QueueID->Size)									//в очереди есть свободные ячейки
	{
		uint8_t i;

		if(QueueID->LastIndex == 0)											//очередь пуста
			i = 0;
		else
			for(i = 0; i < QueueID->LastIndex; i++)							//поиск места для вставки элемента
			{
				if (QueueID->Queue[i].priority >= item.priority)
				{
					for(uint8_t j = QueueID->LastIndex; j > i; j--)			//сдвигаем все элементы очереди
						QueueID->Queue[j] = QueueID->Queue[j-1];			//для вставки нового элемента

					break;													//выходим из цикла
				}
			}

		QueueID->Queue[i] = item;											//вставляем элемент в очередь
		QueueID->LastIndex ++;
	}
}

QueueItem_t QueuePop(QueueID_t* QueueID)
{
	QueueItem_t FirstItem;

	if(QueueID->LastIndex == 0)												//если в очереди нет элементов
	{
		strncpy(FirstItem.name, "Empty", 5);
		FirstItem.priority = 0;
	}
	else
	{
		FirstItem = QueueID->Queue[0];										//запоминаем первый элемент в очереди

		QueueID->LastIndex--;

		for(uint8_t i = 0; i < QueueID->LastIndex; i++)						//сдвигаем все элементы очереди
			QueueID->Queue[i] = QueueID->Queue[i+1];
	}

	return FirstItem;
}
