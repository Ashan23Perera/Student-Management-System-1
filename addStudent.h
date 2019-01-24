#include <iostream>

//QT libraries
#include <QDialog>
#include <QtGui>

#include <string>
using namespace std;

class Student
{
    private:
        int ID;
        string name;
        double GPA; 
        string RegNo;
		
    public:
        Student();
        Student(int ID, string name, double GPA, string RegNo);
        void setStudent(int ID, string name, double GPA, string RegNo);
        
		//setters
		void setId(int id);
		void setName(string name);
		void setGPA(double gpa);
		void setRegNo(string regno);
		//getters
		int getID();
        string getName();
        double getGPA();
        string getRegNo();
		
		
        void print();
};
#endif


Student.cpp implementation file

#include "Student.h"
#include <iostream>
using namespace std;

Student :: Student()
{
    ID = 0;
    name = "";
    GPA = 0;
    RegNo = "";
}

Student :: Student(int ID, string name, double GPA, string RegNo)
{
    this -> ID = ID;
    this -> name = name;
    this -> GPA = GPA;
    this -> RegNo = RegNo;
}

void Student :: setStudent(int ID, string name, double GPA, string RegNo)
{
    this -> ID = ID;
    this -> name = name;
    this -> GPA = GPA;
    this -> RegNo = RegNo;
}

//get ID
int Student ::  getID()
{
    return ID;
}

//get student Name
string Student :: getName()
{
    return name;
}

//get student GPA
double Student :: getGPA()
{
	return GPA;
}

//get student Reg No
string Student :: getRegNo()
{
	return RegNo;
}

void Student :: setId(int id)
{
	this -> ID = id;
}
void Student ::setName(string name)
{
	this -> name = name;
}
void Student ::setGPA(double gpa)
{
	this -> GPA = gpa;
}
void Student ::setRegNo(string regno)
{
	this-> RegNo = regno;
} 