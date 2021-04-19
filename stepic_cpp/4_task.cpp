//Дано двузначное число. Выведите его первую цифру (число десятков)
// Звузначное число имеет вид a*10 + b

#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    cout << (n - (n % 10)) / 10;
    return 0;
}