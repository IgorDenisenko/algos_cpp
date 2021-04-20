


#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
    cin >> a >> b >> c;
    if (a==b && b==c) {
        cout << 3;
    } else if (a==b || a==c || b==c) {
        cout << 2;
    } else {
        cout << 0;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a,b,c;
// 	cin >> a >> b >> c;
// 	cout << 2 * (a == b || a == c || c == b) + (a == b && a == c);
// 	return 0;

// }