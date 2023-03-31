#pragma once
#include <iostream>
using namespace std;
#include "Student.h"
class Asperant: public Student
{
	char* crous;
public:
	Asperant(const char* c, const char* n, const char* g, int* m, int s) :Student(n, g, m, s),
		crous{ new char[strlen(c) + 1] } {
		strcpy_s(crous, strlen(c) + 1, c); }

	bool IsAdmit() {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += marks[i];
		}
		return(sum / size >= 4)?true:false;
	};
	void them() {
		cout << "Студент  " << name << " Готовит курсач " << crous;
	};

};

