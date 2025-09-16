# Установка компилятора GCC и редактор кода VS Code

Все написанное далее взято и переведено с официального [сайта](https://code.visualstudio.com/docs/cpp/config-mingw) Vs Code. Я распишу основную часть.

## Устанвливаем редактор VS code

1. Заходим на официальный сайт [VS Code](https://code.visualstudio.com/download) и скачиваем последнию версию установщика. Инструкция внутри:

    ```{toggle}
    ![](/_static/lecture_specific/how_to_install_cpp/setup-1.png)

    ![](/_static/lecture_specific/how_to_install_cpp/setup-2.png)

    ```

2. На всякий случай перезагружаемся
3. Открываем vs code, переходим во вкладку Extensions

    ```{figure} /_static/lecture_specific/how_to_install_cpp/setup-3.png
    ```

4. Устанавливаем C/C++ расширение

    ```{figure} /_static/lecture_specific/how_to_install_cpp/setup-4.png
    ```

     ```{figure} /_static/lecture_specific/how_to_install_cpp/setup-5.png
    ```

## Установка набора инструментов MinGW-w64

1. Загружаем последнюю версию программы установки по этой прямой [ссылкой на программу установки](https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe).

    ```{figure} /_static/lecture_specific/how_to_install_cpp/MSYS2_Setup.gif
    ```

2. Оставляем флаг на открытие MSYS2 Setup. Должен открыться терминал, внутрь терминала необходимо добавить следующию команду, а затем нажать `Enter`:

    ```console
    pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
    ```

    ```{note}
    При работе с терминалом лучше не использовать стандартные сочетания клавиш, такие как `Ctrl+V`. Это может привести к неожиданным результатам, если вы не уверены, как терминал отреагирует на это сочетание.

    Чтобы вставить текст из буфера обмена в терминал, выполните следующие шаги:

    1. Нажмите правой кнопкой мыши по полю терминала.
    2. В появившемся контекстном меню выберите опцию `Вставить`.

    Текст из буфера обмена будет добавлен в терминал.
    ```

3. Должен появиться список пакетов, жмем `Enter`. Затем пишем `Y`, жмем `Enter`. Начнется установка, после оканачния пишем в терминал `exit`, жмем `Enter`.

```{figure} /_static/lecture_specific/how_to_install_cpp/Terminal_Setup.gif
```

## Добаление пути в переменную среды Windows PATH

Чтобы ваш компьютер мог находить и запускать программы из папки MinGW-w64/bin, нужно добавить путь к этой папке в переменную среды PATH в Windows. Это позволит операционной системе легко находить нужные файлы. Я опишу самый простой способ. Он проверен на Windows 11. Если у вас более старая версия ОС и что-то идет не так на каком-то шаге, пожалуйста, сообщите мне.

1. Необходимо запустить окно Свойства системы. Сделать это можно нескольками способами:
    + Нажмите одновременно клавиши Win (обычно это значок с логотипом Windows) и R на клавиатуре.
    + Откройте поиск
2. Введите внутрь следующию команду: ``` sysdm.cpl ```. Должено открыться окно *Свойства системы*. Вверху переходим в пункт *Дополнительно*, внизу находим клавишу *Переменные среды...*
3. В вверхей части находим строку `Path`. Кликаем на нее два раза. Нажимаем на кнопку `Создать`. И вставляем адрес `C:\msys64\ucrt64\bin`, при условии что мы не меняли путь установки MSYS2. Далее нажимаем несколько раз `ОК`.

    ```{figure} /_static/lecture_specific/how_to_install_cpp/Path_setup.mp4
    ---
    width: 100%
    ---
    ```

4. Проверка установки. Жмем комбинацию клавищ `Win+R`, вводим `cmd`, `Enter`. На экране должен появится терминал. Пишем команду `gcc --version`, `Enter`. Вы должны увидеть выходные данные, в которых указано, какиую версию GCC вы установили. Если это не так, то сочувствую. На самом деле, в таком случае советую перейти на [официальную страницу](https://code.visualstudio.com/docs/cpp/config-mingw#_check-your-mingw-installation) и изучить этот вопрос там.

```{figure} /_static/lecture_specific/how_to_install_cpp/gcc_ver.mp4
---
width: 100%
---
```

## Проверяем Hello World

Документация на [официальном сайте](https://code.visualstudio.com/docs/cpp/config-mingw#_add-a-hello-world-source-code-file) достаточно хорошо написана. Я не буду повторять всё, что там сказано. Но я добавлю видео и текст, который вы сможете скопировать и использовать.

<iframe width="720" height="405" src="https://rutube.ru/play/embed/559fa7ef853b05720a0fbb83f644e98a/" frameBorder="0" allow="clipboard-write; autoplay" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>

Команды используемые в видео

1. ```c++
        #include <iostream>
        #include <vector>
        #include <string>

        using namespace std;

        int main()
        {
            vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

            for (const string& word : msg)
            {
                cout << word << " ";
            }
            cout << endl;
        }
    ```

2. ```text
        Code runner Run In Terminal
    ```
