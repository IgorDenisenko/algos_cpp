// Симметричное число
// Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, 
// то выведите 1, иначе выведите любое другое целое число. Число может 
// иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int edinic = num %10;
	int desyatki = num / 10%10;



	cout << (num / 100)  - (desyatki + edinic*10) + 1;
	return 0;
}