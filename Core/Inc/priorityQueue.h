/*
 * priorityQueue.h
 *
 *  Created on: May 15, 2022
 *      Author: Павел
 */

#ifndef INC_PRIORITYQUEUE_H_
#define INC_PRIORITYQUEUE_H_

#include "main.h"
#include "string.h"
#include "stdlib.h"

typedef struct  													//Элемент очереди
{
    uint8_t priority;
    char name[10];
}QueueItem_t;

typedef struct  													//ID очереди
{
    uint8_t Size;													//Размер очереди
    uint8_t LastIndex;												//Индекс последнего элемента в очереди
    QueueItem_t *Queue;												//Указатель на массив очереди
}QueueID_t;

void QueueCreate(QueueID_t* QueueName, uint8_t QueueSize);			//Создать очередь
void QueueDelete(QueueID_t* QueueName);								//Удалить очередь
void QueuePush(QueueID_t* QueueID, QueueItem_t item);				//Вставить элемент в очередь
QueueItem_t QueuePop(QueueID_t* QueueID);							//Забрать из очереди приоритетный элемент

#endif /* INC_PRIORITYQUEUE_H_ */
