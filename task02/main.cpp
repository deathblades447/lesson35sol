#include <iostream>
#define size 5
using namespace std;

int main() {
	//1)
	//int marks[5]
	//2)
	//const int size = 5;
	//int marks[size]
	//3)
	int marks[size];

	marks[0] = 5;
	marks[1] = 10;
	marks[2] = 8;
	marks[3] = 9;
	marks[4] = 10;

	double s = 0;

	int index = 0;
	/*s += marks[index];
	index++;
	s += marks[index];
	index++;
	s += marks[index];
	index++;
	s += marks[index];
	index++;
	s += marks[index];*/
	
	for (int i = 0; i < size; i++) {
		s += marks[i];
	}

	cout << s / size << endl;
	
	return 0;
}