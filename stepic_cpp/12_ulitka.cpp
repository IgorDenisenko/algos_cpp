

#include <iostream>
using namespace std;

int main()
{
	int h,a,b;
    cin >> h >> a >> b;
	int otriv = h - a;
    int diff_day = a - b  ;
    int res = (otriv + diff_day -1) / diff_day;
	cout << res + 1;
	return 0;
}