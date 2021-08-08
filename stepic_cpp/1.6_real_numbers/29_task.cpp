// Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
// 1.79 -> 7

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x;

    cin >> x;

    cout << int((x - int(x)) * 10);
    // cout << x -  trunc(x);
    return 0;
}