
// Шахматная ладья ходит по горизонтали или вертикали. Даны две различные 
// клетки шахматной доски, определите, может ли ладья попасть с первой клетки на вторую одним ходом.


#include <iostream>
using namespace std;

int main()
{
	int h1,v1,h2,v2;

    cin >> h1 >> v1 >> h2 >> v2;

    if (h1==h2 || v1==v2){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}