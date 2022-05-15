# PriorityQueue
Тестовое задание МПОВТ

Реализовано на МК STM32F030R8T6. Команды для работы с очередью принимаются по UART
Функции для работы с приоритетной очередью оформлены отдельной библиотекой в Core\Inc\priorityQueue.h и Core\Src\priorityQueue.c

Результат работы:

(<<) create()
(>>) OK
(<<) push(Vasya,5)
(>>) OK
(<<) push(Masha,2)
(>>) OK
(<<) push(Vadim,3)
(>>) OK
(<<) push(Oleg,2)
(>>) OK
(<<) push(Paul, 6)
(>>) OK
(<<) push(Anton,7)
(>>) OK
(<<) push(Egor, 4)
(>>) OK
(<<) pop()
(>>) Oleg,2
(<<) push(Helen, 7)
(>>) OK
(<<) pop()
(>>) Masha,2
(<<) pop()
(>>) Vadim,3
(<<) pop()
(>>) Egor,4
(<<) pop()
(>>) Vasya,5
(<<) pop()
(>>) Helen,7
(<<) pop()
(>>) Empty,0
(<<) pop()
(>>) Empty,0
(<<) push(Dima, 4)
(>>) OK
(<<) pop()
(>>) Dima,4
(<<) pop()
(>>) Empty,0
(<<) delete()
(>>) OK
