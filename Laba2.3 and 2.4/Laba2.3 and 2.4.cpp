#include <iostream>
//4.6
#include "decl.h"
//4.4
using namespace std;

//4.5
#define SUM(m, n)\
cout << m + n;
//3.10
int func1(int num = 1) {
    if (num <= 0) return 0;
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += i + 1;
    }
    return sum;
}
//3.12
void func2(int i1, int i2, int* l1, int* l2) {
    //3.13
    *l1 = i1 + i2;
    *l2 = i1 * i2;
}
//4.1, 2
// void func3(int a) {
//     int static m = 0;
//     cout << a+m << endl;
//     m = a;
// }

int main() {
    setlocale(LC_ALL, "Russian");
    //3.1
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    //3.2
    int sum = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];
    cout << "Сумма элементов: " << sum << endl;
    //3.3
    int arr2[3];
    //3.4
    for (int i = 0; i < 3; i++)
        arr2[i] = arr[0][i] + arr[1][i];
    cout << "Элементы массива: ";
    //3.5
    for (int i = 0; i < 3; i++) {
        cout << arr2[i];
        if (i != 2) cout << ", ";
    }
    cout << endl;
    //3.6
    float f = 20.84;
    //3.7, 8
    float* link1 = &f;
    float* link2 = &f;
    *link2 = 3.21f;
    //3.9
    cout << *link1 << " " << f << endl;

    //3.11
    cout << func1() << " " << func1(-1) << " " << func1(5) << endl;
    //3.14
    int i1 = 2;
    int i2 = 3;
    int sum1, mul2;
    func2(i1, i2, &sum1, &mul2);
    cout << sum1 << " " << mul2 << endl;
    //3.15
    string s1 = "ssss";
    cout << s1 << endl;
    //3.16
    for (int idx = 0; idx < 3; idx++) {
        //3.17
        int testvar = 666;
        cout << "{";
        for (int i = 0; i < 2; i++) {
            cout << "{";
            for (int j = 0; j < 3; j++) {
                cout << arr2[i];
                if (j != 2) cout << ", ";
            }
            cout << "}";
            if (i != 1) cout << ", ";
        }
        cout << "}\n";
        //3.18
        cout << "Переменная: " << testvar << endl;
    }
    //если пытаемся вывести переменную вне цикла - ошибка компилятора
    //cout << testvar;

    ////////////
    //страница 4/4
    //4.3
    func3(5);
    func3(10);
    //4.5 (test)
    // SUM(2, 7);
    // cout << endl;

    return 0;
}