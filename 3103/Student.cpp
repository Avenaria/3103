#include <iostream>
using namespace std;
#include "Student.h"
Student::Student() :Student(nullptr, nullptr,nullptr, 0){};
Student::Student(const char* n, const char* g) : Student(n, g, nullptr,0){};

Student::Student(const char* n, const char* g, int* m, int s):
	name{ (n) ? new char[strlen(n)] : nullptr },
group{ (g) ? new char[strlen(g)] : nullptr },
marks{ (m) ? new int[s] : nullptr }, size{ s }
{
	SetName(n);
	SetGroup(g);
	SetMarks(m,s);


};
void Student:: SetName(const char* n){
	if(n)strcpy_s(name, strlen(n) + 1, n);

};
void Student::SetGroup(const char*g){
	if(g)strcpy_s(group, strlen(g) + 1, g);
};
void Student::SetMarks(int* m, int s){
	if(m)
	for (int i{ 0 }; i < s ; i++) {
		marks[i] = m[i];
	}

};
