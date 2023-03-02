#include <iostream>;
using namespace std;

int main() {
	int x, y, result = 1;
	cout << "Enter the number x: ";
	cin >> x;
	cout << "Enter the power of y: ";
	cin >> y;

	for (int i = 0; i < y; i++) {
		result *= x;
	}

	cout << x << " to the power of " << y << " is " << result;
}