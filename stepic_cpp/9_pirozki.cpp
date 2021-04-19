// Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.


#include <iostream>

using namespace std;

int main() {

    int a,b,n,rub,cop;
    cin >> a >> b >> n;
    cop = (100*a + b) * n;
    rub = (cop  - cop % 100) / 100;
    cout << rub << ' ' << cop % 100;
    return 0;
}