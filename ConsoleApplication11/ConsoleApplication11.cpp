#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string name;
	int age;
public:
	Person() {
		age = 0;
	};
	Person(const char* _name, int _age) {
		name.append(_name);
		age = _age;
	};
	void Input() {
		cout << "Enter your name - ";
		getline(cin, name);
		cout << "Enter your age - ";
		cin >> age;
	}
	void Print() {
		cout << "Name - " << name << endl << "Age - " << age << endl;
	}

};
class Teacher :public Person
{
	string school;
	string subject;
public:
	Teacher() :Person() {}
	Teacher(const char* n, int _a, const char* _subject, const char* school) :Person(n, _a) {
		this->school.append(school);
		this->subject.append(_subject);
	}
	void Input() {
		Person::Input();
		cout << "Enter your school";
		getline(cin, school);
		cout << "Enter your subject";
		getline(cin, subject);
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "School - " << school << endl << "Subject - " << subject << endl;
	}
};
class Doctor :public Person
{
	string hospital;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* hospital) :Person(n, _a) {
		this->hospital.append(hospital);
		this->salary = salary;
	}
	void Input() {
		Person::Input();
		cout << "Enter your Hospital Name";
		getline(cin, hospital);
		cout << "Enter your Salary";
		cin >> salary;
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "Hospital - " << hospital << endl << "Salary - " << salary << endl;
	}
};

class Doctor :public Person
{
	string school;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* school) :Person(n, _a) {
		this->school.append(school);
		this->salary = salary;
	}
	void Input() {
		Person::Input();
		cout << "Enter your Hospital Name";
		getline(cin, school);
		cout << "Enter your Salary";
		cin >> salary;
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "School - " << school << endl << "Salary - " << salary << endl;
	}
};

class Student :public Person
{
	string Academy;
public:
	Student() :Person() {}
	Student(const char* _name, int _age, const char* _academy) :Person(_name, _age) {
		Academy.append(_academy);
	}
	void Input()
	{
		Person::Input();
		cout << "Academy - ";
		cin >> Academy;
	}
	void Print() {
		Person::Print();
		cout << "Academy - " << Academy << endl;
	}


};

int main()
{
	Student a("Andrei", 31, "IT Step Academy");
	a.Print();
	a.Input();
	a.Print();

	Teacher b("Andrei", 31, "IT Step Academy", "5");
	a.Print();
	a.Input();
	a.Print();
}
