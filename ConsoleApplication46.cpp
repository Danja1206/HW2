#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(string _name, int _age, float _weight) : name(_name), age(_age), weight(_weight) {}
	~Person() {}
	void set(string _name, int _age, float _weight) { name = _name; age = _age; weight = _weight; }
protected:
	string name;
	int age;
	float weight;
private:
};

class Student : public Person 
{
public:
	Student() : Person("Taylor", 30, 45.4), year(2) { countS++; }
	Student(string _name, int _age, float _weight) : Person(_name, _age, _weight), year(2) { countS++; }
	~Student() {}
	void update(int _year) { year += _year; }
	void print() { cout << name << " " << age << " " << weight << " " << year << endl; }

private:
	int year;
	static int countS;

};
int Student::countS = 0;
int main()
{

	Student S, S2("Ivan", 23, 22), S3;
	S.update(5);
	S.print();
	S2.print();
	S3.print();
}

