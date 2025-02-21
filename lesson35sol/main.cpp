#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int mark1, mark2, mark3, mark4, mark5;

	cout << "input ur marks: ";
	cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

	double avg = calculate_avr_mark(mark1, mark2, mark3, mark4, mark5);

	cout << "ur avr mark: " << avg << endl;

	return 0;
}