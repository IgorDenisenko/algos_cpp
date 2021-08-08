// Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года.
//  Вклад составляет X рублей Y копеек. Определите размер вклада через год.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double P,X,Y;

    cin >> P >> X >> Y;
    
    double rate = P / 100.0;
    double coins = X * 100 + Y;


    int k_dep = coins + coins * rate;

    cout << k_dep / 100 << ' ' << k_dep % 100;
    return 0;
}