// Дано три числа. Упорядочите их в порядке неубывания.


#include <iostream>
using namespace std;

int main()
{
	int a,b,c,temp1,temp2;
    cin >> a >> b >> c;
    if (a >= b) {
        temp1 = a;
        temp2 = b;
    } else {
        temp1 = b;
        temp2 = a;
    }
    if (c >= temp1){
        cout << temp2 << ' '  << temp1 << ' '  << c;
    } else {
        if (c >= temp2){
            cout << temp2<< ' '  << c << ' '  << temp1;
        } else {
            cout << c << ' '  << temp2 << ' '  << temp1;
        }
    }
    return 0;

}

