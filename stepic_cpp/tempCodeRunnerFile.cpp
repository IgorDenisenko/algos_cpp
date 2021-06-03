#include <iostream>
using namespace std;

int main()
{
    int now,counter,counter_max,last;
    cin >> now;
    last = now;
    counter = 0;
    counter_max=1;

    while (now !=0){
        if (now == last) {
           counter+=1; 
           counter_max = counter;
        } else {
            last = now;
            counter_max = counter; 
            counter=1;
        }
        cin >> now;

    }
    cout << counter_max;
    return 0;
}