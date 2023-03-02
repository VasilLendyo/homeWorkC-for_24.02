#include <iostream>;
using namespace std;

int main() {
	int a;
	long long product = 1;

	cout << "Enter integer a (1 <= a <= 20): ";
	cin >> a;

	//перевірка на вірність введеного значення а
	if (a >= 1 && a <= 20) {

		//обчислення добутку
		for (int i = a; i <= 20; i++) {
			product *= i;
		}

		//Виведення результату
		cout << "The product of all integers from " << a << " to 20 is equal " << product;
	}
	else {
		cout << "Ivalid value of a";
	}

}