# PriorityQueue
Тестовое задание МПОВТ

Реализовано на МК STM32F030R8T6. Команды для работы с очередью принимаются по UART
Функции для работы с приоритетной очередью оформлены отдельной библиотекой в Core\Inc\priorityQueue.h и Core\Src\priorityQueue.c

Результат работы:

(TX) create()

(RX) OK

(TX) push(Vasya,5)

(RX) OK

(TX) push(Masha,2)

(RX) OK

(TX) push(Vadim,3)

(RX) OK

(TX) push(Oleg,2)

(RX) OK

(TX) push(Paul, 6)

(RX) OK

(TX) push(Anton,7)

(RX) OK

(TX) push(Egor, 4)

(RX) OK

(TX) pop()

(RX) Oleg,2

(TX) push(Helen, 7)

(RX) OK

(TX) pop()

(RX) Masha,2

(TX) pop()

(RX) Vadim,3

(TX) pop()

(RX) Egor,4

(TX) pop()

(RX) Vasya,5

(TX) pop()

(RX) Helen,7

(TX) pop()

(RX) Empty,0

(TX) pop()

(RX) Empty,0

(TX) push(Dima, 4)

(RX) OK

(TX) pop()

(RX) Dima,4

(TX) pop()

(RX) Empty,0

(TX) delete()

(RX) OK
