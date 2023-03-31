#include <iostream>
using namespace std;
#include"Student.h"
#include"Asperant.h"

int main()
{
	setlocale(LC_ALL, "");
;
	
Asperant aspir{ "OOP ","Ivaniov i I "," gruup1", new int[5]{4,5,3,5,5},5 };
cout << " Information " << endl;
aspir.PrintStudent();
cout << "Dopysk  ";
(aspir.IsAdmit()) ? cout << " +" : cout << " -";
cout << " Tema ";
aspir.them();


}

