# Задача
Даны α, буква x и натуральное число k. Вывести, есть ли в языке L слова, содержащие кратное k число букв x.
# Алгоритм
Стандартный разбор обратной польской записи. На стеке поддерживаем множество возможных остатков. Пересчёт остатков очевиден.
# Оценка сложности
Обработка конкатенации - O(k^2)

Обработка объединения - O(k)

Обработка звезды Клини - O(k^2)

Обработка добавления символа - O(1)

Итого O(k^2 * (#конкатенаций + #клини) + k * #операций)

# Тестирование
На гите тестируется через travis