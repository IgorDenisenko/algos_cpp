// Дано целое трехзначное число. Найдите сумму его цифр.

#include <iostream>

using namespace std;

int main() {

    int n,a,b,c,res;
    cin>>n;
    a = n % 10;
    b = ((n - a) / 10) % 10;
    c = (n - b*10 - a) / 100;
    res = a + b + c;
    cout << res;
    return 0;
}