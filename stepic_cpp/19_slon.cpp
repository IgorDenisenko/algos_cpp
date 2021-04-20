// Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите,
// может ли слон попасть с первой клетки на вторую одним ходом.

#include <iostream>
using namespace std;

int main()
{
	int h1,v1,h2,v2;

    cin >> h1 >> v1 >> h2 >> v2;

    if (h1 - h2 == v1 - v2 || h1-h2 == -1*(v1-v2)){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int y1,x1,y2,x2;
// 	cin >> y1 >> x1 >> y2 >> x2;

// 	if ((y1+x1 == y2 + x2) || ((y2 - y1 == x2 - x1) && (abs(y2 - y1 <= 7)  && (abs(x2-x1) <= 7)))) {
// 		cout << "YES";
// 	}
// 	else {
// 		cout << "NO";
// 	}
// 	return 0;

// }