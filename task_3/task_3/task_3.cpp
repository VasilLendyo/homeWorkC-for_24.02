#include <iostream>;
using namespace std;

int main() {
	int sum = 0;

	for (int i = 1; i <= 1000; i++) {
		sum += i;
	}
	double average = sum / 1000;
	cout << "Еhe arithmetic mean of all integers from 1 to 1000: " << average;
}