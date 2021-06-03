// Элемент полседовательности называется локальным максимумом,
// если он строго больше предыдущего и последующего элемента последовательности

// Первый и последний элемент последовательности не являются локальными максимумами.
// Дана последовательность натуральных чисел, заверщающаяся числом 0.
// Определить количетсво строгих локальных максимумов в этой последовательности.
// Ex: 1 2 1 2 1 0 -> 2

#include <iostream>
using namespace std;

int main(){

    int last,med,counter,next;
    cin >> last >> med >> next;
    counter=0;

    while (next != 0){
        if (med > last && med > next) {
            counter+=1;
        } 
        last = med;
        med = next;
        cin >> next;
        }
    cout << counter;
    return 0;
}