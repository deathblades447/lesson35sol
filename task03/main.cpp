#include <iostream>
#define size 100
using namespace std;

int  get_min(int* numbers,int count ) {	
	int min = numbers[0];

	for (int i = 0; i < count; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	return min;

}
int  get_max(int* numbers, int count) {
	int max = numbers[0];

	for (int i = 0; i < count; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;

}

int main() {
	int numbers[size];

	int count;
	cout << "enter count of numbers: ";
	cin >> count;

	cout << "input numbers: ";
	for (int i = 0; i < count; i++) {
		cin >> numbers[i];
	}
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 0; i < count; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}

		cout << "max value is " << get_max(numbers, count) << endl;
		cout << "min value is " << get_min(numbers,count) << endl;

	return 0;
}