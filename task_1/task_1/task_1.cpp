#include <iostream>;
using namespace std;

int main() {
	int a, sum = 0;
	cout << "Enter the value of a: ";
	cin >> a;
	for (int i = a; i <= 500; i++) {
		sum += i;
	}
	cout << "The sum integers from " << a << " to 500: " << sum << endl;
}