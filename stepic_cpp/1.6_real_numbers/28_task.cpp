// Дано положительное действительное число X. Выведите его дробную часть.


#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x;

    cin >> x;
    // cout << x - trunc(x);
    cout << x -  trunc(x);
    return 0;
}