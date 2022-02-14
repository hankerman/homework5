#include <iostream>
using namespace std;

const int size = 5;

void init(int arr[][::size],int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 1000;
        }
    }

}
void init(double arr[][::size], int size) {



    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = (rand() % 10000) / 100.0;
        }
    }

}
void init(char arr[][::size], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 100 + 1;
        }
    }

}

void print(int arr[][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void print(double arr[][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void print(char arr[][::size], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void max_and_min(int arr[][::size], int size) {

    int max = arr[0][0];
    int min = arr[0][0];
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
void max_and_min(double arr[][::size], int size) {

    double max = arr[0][0];
    double min = arr[0][0];
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
void max_and_min(char arr[][::size], int size) {

    char max = arr[0][0];
    char min = arr[0][0];
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

void sort(int arr[][::size], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int t = 0; t < size - 1; t++) {
                if (arr[i][t] > arr[i][t + 1]) {
                    int buf = arr[i][t];
                    arr[i][t] = arr[i][t + 1];
                    arr[i][t + 1] = buf;
                }
            }
        }
    }
}
void sort(double arr[][::size], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int t = 0; t < size - 1; t++) {
                if (arr[i][t] > arr[i][t + 1]) {
                    double buf = arr[i][t];
                    arr[i][t] = arr[i][t + 1];
                    arr[i][t + 1] = buf;
                }
            }
        }
    }
}
void sort(char arr[][::size], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int t = 0; t < size - 1; t++) {
                if (arr[i][t] > arr[i][t + 1]) {
                    char buf = arr[i][t];
                    arr[i][t] = arr[i][t + 1];
                    arr[i][t + 1] = buf;
                }
            }
        }
    }
}

int main()
{
    /*Написать перегруженные функции (int, double, char) для выполнения следующих задач:
     Инициализация квадратной матрицы;
     Вывод матрицы на экран;
     Определение максимального и минимального элемента на главной диагонали матрицы;
     Сортировка элементов по возрастанию отдельно для каждой строки матрицы.*/

    srand(time(NULL));
    
    int arr[::size][::size];
    double arr2[::size][::size];
    char arr3[::size][::size];

    init(arr, ::size);
    init(arr2, ::size);
    init(arr3, ::size);
    print(arr, ::size);
    print(arr2, ::size);
    print(arr3, ::size);
    max_and_min(arr, ::size);
    max_and_min(arr2, ::size);
    max_and_min(arr3, ::size);
    sort(arr, ::size);
    sort(arr2, ::size);
    sort(arr3, ::size);
    print(arr, ::size);
    print(arr2, ::size);
    print(arr3, ::size);

}
