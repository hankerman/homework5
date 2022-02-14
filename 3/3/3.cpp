#include <iostream>
using namespace std;

const int size = 10;

template <typename T> 
void init(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}
template <typename T>
void init(T arr[][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = (rand() % 10000) /  100;
        }
    }
}
template <typename T>
void init(T arr[][::size][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int t = 0; t < size; t++) {
                arr[i][j][t] = rand() % 100;
            }
        }
    }
}

template <typename T>
void print(T arr[][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

template <typename T>
void max_and_min(T arr[][::size], int size) {

    T max = arr[0][0];
    T min = arr[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                if (max < arr[i][j]) {
                    max = arr[i][j];
                }
                if (min > arr[i][j]) {
                    min = arr[i][j];
                }
            }
        }
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    cout << endl;
}

template <typename T>
void sor(T arr[][::size], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int t = 0; t < size - 1; t++) {
                if (arr[i][t] > arr[i][t + 1]) {
                    T buf = arr[i][t];
                    arr[i][t] = arr[i][t + 1];
                    arr[i][t + 1] = buf;
                }
            }
        }
    }
}

template <typename T>
void max(T arr[], int size) {

    int max = arr[0];
    for (int i = 0; i < ::size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "Max 1 = " << max << endl;

}
template <typename T>
void max(T arr[][::size], int size) {

    int max = arr[0][0];
    for (int i = 0; i < ::size; i++) {
        for (int j = 0; j < ::size; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    cout << "Max 2 = " << max << endl;
}
template <typename T>
void max(T arr[][::size][::size], int size) {

    int max = arr[0][0][0];
    for (int i = 0; i < ::size; i++) {
        for (int j = 0; j < ::size; j++) {
            for (int t = 0; t < ::size; t++) {
                if (max < arr[i][j][t]) {
                    max = arr[i][j][t];
                }
            }
        }
    }
    cout << "Max 3 = " << max << endl;
}
int max(int a, int b) {
    int res;
    if (a > b) {
        res = a;
    }
    else {
        res = b;
    }

    return res;
}

int max(int a, int b, int c) {
    int res;
    if (a > b) {
        if (a > c) {
            res = a;
        }
        else {
            res = c;
        }
    }
    else {
        if (b > c) {
            res = b;
        }
        else {
            res = c;
        }
    }

    return res;
}

int main()
{
    /*Написать перегруженные функции (int, double, char) для выполнения следующих задач:
     Инициализация квадратной матрицы;
     Вывод матрицы на экран;
     Определение максимального и минимального элемента на главной диагонали матрицы;
     Сортировка элементов по возрастанию отдельно для каждой строки матрицы.
    Задание 2:
    Написать перегруженные функции и протестировать их в основной программе:
     Нахождения максимального значения в одномерном массиве;
     Нахождения максимального значения в двумерном массиве;
     Нахождения максимального значения в трёхмерном массиве;
     Нахождения максимального значения двух целых;
     Нахождения максимального значения трёх целых;
    Задание 3:
    Измените программы из первого и второго задания с помощью шаблонов*/
    srand(time(NULL));
    int Matr[::size][::size], iarr[::size], iarr2[::size][::size], iarr3[::size][::size][::size];
    double Matr2[::size][::size], darr[::size], darr2[::size][::size], darr3[::size][::size][::size];
    char Matr3[::size][::size], carr[::size], carr2[::size][::size], carr3[::size][::size][::size];
    int a = 10, b = 40, c = 7;


    init(Matr, ::size);
    init(Matr2, ::size);
    init(Matr3, ::size);
    init(iarr, ::size);
    init(iarr2, ::size);
    init(iarr3, ::size);
    init(darr, ::size);
    init(darr2, ::size);
    init(darr3, ::size);
    init(carr, ::size);
    init(carr2, ::size);
    init(carr3, ::size);
    print(Matr, ::size);
    print(Matr2, ::size);
    print(Matr3, ::size);
    max_and_min(Matr, ::size);
    max_and_min(Matr2, ::size);
    max_and_min(Matr3, ::size);
    sor(Matr, ::size);
    sor(Matr2, ::size);
    sor(Matr3, ::size);
    print(Matr, ::size);
    print(Matr2, ::size);
    print(Matr3, ::size);
    max(iarr, ::size);
    max(iarr2, ::size);
    max(iarr3, ::size);
    max(darr, ::size);
    max(darr2, ::size);
    max(darr3, ::size);
    max(carr, ::size);
    max(carr2, ::size);
    max(carr3, ::size);

    cout << max(a, b) << endl;
    cout << max(a, b, c) << endl;

}
