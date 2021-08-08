// Даны длины сторон треугольника. Вычислите площадь треугольника.
// p = (a + b + c) / 2;    //полупериметр

// sqrt( p * (p - a) * (p - b) * (p - c) );    //формула герона

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a,b,c,p;

    cin >> a >> b >> c;
    
    p = (a + b + c) / 2;
    
    cout << sqrt( p * (p - a) * (p - b) * (p - c) );
    return 0;
}