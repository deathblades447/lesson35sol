#include "logic.h"
#define number_of_students 5

double calculate_avr_mark(int mark1, int mark2, int mark3, int mark4, int mark5) {
	double s = mark1 + mark2 + mark3 + mark4 + mark5;
	return s / number_of_students;
}