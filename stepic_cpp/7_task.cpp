// На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>

using namespace std;

int main() {

    int n,res;
    cin>>n;
    res = n + ( 2 / ((n % 2) + 1));
    cout << res;
    return 0;
}