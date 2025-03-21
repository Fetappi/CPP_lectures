# Операция new как способ выделения динамической памяти

(oper_new)=

Для выделения динамической памяти используется оператор `new`. Его синтаксис:

```cpp
new <тип данных>(<параметры конструктора>)
```

, причем круглые скобки нужны если вы хотите сразу же инициализировать переменную.

```{Important}
Оператор `new` возвращает адрес на выделенную память.
```

```cpp
    CPoint * pPoint;
    pPoint = new CPoint(1,1);
    delete pPoint;
```

## Инициализация массива переменной длины

Для создания динамического массива используется следующая запись:

```cpp
new <тип данных>[<целое число длина массива>]
```

Пример:

```cpp
    CPoint * pPoint;
    pPoint = new CPoint [N];
    delete [] pPoint;
```

Указатель `pPoint` указывает на нулевой элемент массива и работает аналогично статическим массивам.

```{note}
Следует учитывать, что при создание динамического массива вызываются **конструкторы по умолчанию**. И определение конструктора по умолчанию ключевое условие для создание динамического массива.
```

(oper_delete)=

## Освобождение памяти ключевое слово `delete`

В примерах выше, последняя строчка содержит ключевое слово `delete`. Выделенную память **необходимо освобождать** как минимум в конце программы, а корректно при окончании использования массива. Синтаксис:

```cpp
    delete <имя указателя>;     // для динамической переменной
    delete [] <имя указателя>;  // для динамического массива
```

```{note}
При освобождении памяти, сама переменная указатель не перестает существовать. После освобождения указатель по-прежнему содержит старый адрес, хотя память по нему условно освобождена. И этот указатель готов к использованию для будущих динамических объектов.

Такой указатель называется **недействительным указателем** (dangling pointer). Разыменование такого указателя и последующий доступ к объекту в лучшем случае приведёт к немедленному аварийному завершению работы программы, в худшем — к её нестабильному поведению. 

В идеале после освобождения памяти следует *обнулить указатель* следующим синтаксисом: 

`<указатель> = nullptr;`

Но не использование этого не будет считаться ошибкой.
```

При выделения динамической памяти в классах (структурах), следует освобождать память в деструкторах.

```cpp
    ~massiv_point() // деструктор
    {
        delete [] pPoint;
    }
```
