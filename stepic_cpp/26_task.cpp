// Дана последовательность натур чисел, завершающихся 0. Надо найти какое наиболее число подряд 
// идущих элементов этой последовательности равны друг другу. Если не нашлось ни одной пары, тройки и т.д.
// элементов, то программа должна вывести число 1. (число 0 является окончанием последовательности)
// 1 7 7 9 1 0 -> 2

#include <iostream>
using namespace std;

int main()
{
    int now,counter,counter_max,last;
    cin >> now;
    counter = 1;
    counter_max=1;
    last = 0;

    while (now !=0){
        if (now == last) {
           counter+=1; 
        } else {
            counter=1;
        }
        if (counter >= counter_max){
            counter_max = counter;
        }
        
        last = now; 
        cin >> now;

    }
    cout << counter_max;
    return 0;
}