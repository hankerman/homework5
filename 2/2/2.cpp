#include <iostream>
using namespace std;

const int size = 5;

void init(int arr[]) {

    for (int i = 0; i < ::size; i++) {
        arr[i] = rand() % 100;
    }
}
void init(int arr[][::size]) {

    for (int i = 0; i < ::size; i++) {\
        for (int j = 0; j < ::size; j++) {
            arr[i][j] = rand() % 100;
        }
    }
}
void init(int arr[][::size][::size]) {

    for (int i = 0; i < ::size; i++) {        
        for (int j = 0; j < ::size; j++) {
            for (int t = 0; t < ::size; t++) {
                arr[i][j][t] = rand() % 100;
            }
        }
    }
}
void print(int arr[]) {

    for (int i = 0; i < ::size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void print(int arr[][::size]) {

    for (int i = 0; i < ::size; i++) {
        for (int j = 0; j < ::size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void print(int arr[][::size][::size]) {

    for (int i = 0; i < ::size; i++) {
        for (int j = 0; j < ::size; j++) {
            for (int t = 0; t < ::size; t++) {
                cout << arr[i][j][t] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}

void max(int arr[]) {

    int max = arr[0];
    for (int i = 0; i < ::size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "Max 1 = " << max << endl;

}
void max(int arr[][::size]) {

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
void max(int arr[][::size][::size]) {

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
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    /*Написать перегруженные функции и протестировать их в основной программе:
     Нахождения максимального значения в одномерном массиве;
     Нахождения максимального значения в двумерном массиве;
     Нахождения максимального значения в трёхмерном массиве;
     Нахождения максимального значения двух целых;
     Нахождения максимального значения трёх целых;*/

    int arr[::size], arr2[::size][::size], arr3[::size][::size][::size];
    int a, b, c;

    init(arr);
    init(arr2);
    init(arr3);
    //print(arr);
    //print(arr2);
    //print(arr3);
    max(arr);
    max(arr2);
    max(arr3);

    cout << "Введите первое целое число: ";
    cin >> a;
    cout << "Введите второе целое число: ";
    cin >> b;
    cout << "Максимальное число - " << max(a, b) << endl;
    cout << "Введите первое целое число: ";
    cin >> a;
    cout << "Введите второе целое число: ";
    cin >> b;
    cout << "Введите третье целое число: ";
    cin >> c;
    cout << "Максимальное число - " << max(a, b, c) << endl;
}
