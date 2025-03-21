# Перегрузка оператора обращения к элементу массиву `[]` и метод `insert`

В данном разделе предлагается самостоятельное изучения класса динамического массива `massiv_point` элементов класса `CPoint` из файла *Cpoint.cpp* в [данной директории](https://drive.google.com/open?id=13dTHiiZy9Gs7dosF-s2HOadJXHCG4Sp_&usp=drive_fs). Здесь же будет краткие пояснения.

(over_massiv)=

## Оператор `[]`

```cpp
class massiv_point
{
    public:
    ...
        // перегрузка оператора [] для доступа к элементам массива по индексу
        CPoint & operator [] (int index) 
        {
            cout << "left" << endl;
            if (index < 0 || index >= size)
            {
                cout << "Error !" << endl;
                exit(1);
            }
            return pPoint[index];
        }

        // реализация константного оператора []
        CPoint operator [] (int index) const 
            { 
                cout << "right" << endl;
                if (index < 0 || index >= size)
                {
                    cout << "Error!" << endl;
                    exit(1);
                }
                return pPoint[index]; 
            }

    ...
};
```

Объявление оператора как `CPoint & operator [] (int index)` --- универсальное определение, иногда его называют левая перегрузка оператора квадратные скобочки. Название *левое* связано с тем, что данное определение возвращает ссылку на элемент, по которому можно будет изменить сам элемент, **тем самым использовать оператор `[]` слева от знака `=`**.

Но прочитать логично можно будет и с данным определением, за исключением случая когда объект класса передается как константная ссылка, тогда вызова данного оператора будет невозможным. В таком случае сработает константное определение: `CPoint operator [] (int index) const`, так называемое правое определение оператора `[]`.

```cpp
int get_y(const massiv_point & p, int index)
{
    return p[index].y;  // вызов константного оператора []
                        // Это пример, когда необходимо использовать константный оператор []
                        // Так называемый правый оператор []
                        // так как объект p является константным
}
```

(method_insert)=

## Метод insert

```cpp
class massiv_point
{
    public:
    ...

        void insert(int index, CPoint point)
        {   
            CPoint * temp = new CPoint [size + 1];  // создаем новый массив на 1 элемент больше
            for (int i = 0; i < index; i++)         // копируем все элементы до индекса
            {
                temp[i] = pPoint[i];
            }

            temp[index] = point;    // вставляем новый элемент

            for (int i = index + 1; i < size + 1; i++)  // копируем все элементы после индекса
            {
                temp[i] = pPoint[i - 1];
            }

            size += 1;
            delete [] pPoint;   // удаляем старый массив
            pPoint = temp;      // присваиваем указателю pPoint адрес нового массива
                                // delete [] temp; не нужно, так как pPoint теперь указывает на temp
                                // а переменная temp уничтожится сама при выходе из функции
        }

    ...
};
```
