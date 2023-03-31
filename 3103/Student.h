#pragma once
#include <iostream>
using namespace std;



class Student
{
protected:
	char* name;
	char* group;
	int* marks;
	int size;
public:
	Student() ;
	Student(const char*, const char*  );
	Student(const char*, const char*, int*,int);

	/*~Student() {
		if (name) delete[]name;
		if (group) delete[]group;
		if (marks) delete[]marks;
	};*/

	void SetName(const char*);
	void SetGroup(const char*);
	void SetMarks(int*,int);
	
	char* GetName(const char*) { return name; };
	char* GetGroup(const char*) { return group; };
	int* GetMarks(int*, int *) { return marks; };
	
	void PrintStudent() {
		cout << "имя  " << name << " группа " << group << "  Успеваемость  " << endl;
		for (int i = 0; i < size; i++) {
			cout << marks[i] << "/ ";
		}
	}

};



