#include <iostream>;
using namespace std;

int main() {
	int k;
	cout << "Enter number of variant: ";
	cin >> k;	//Номер варіанту

	for (int i = 1; i < 10; i++) {
		cout << k << " * " << i << " = " << k * i << endl;
	}
}