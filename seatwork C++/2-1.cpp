#include<iostream>
using namespace std;
class Student
{
	public:
		void study();
		void exam();
		string _name;
		int _age;
};
void Student::study()
{
	cout << "ѧϰC++" << endl;
}
void Student::exam()
{
	cout << "C++����100��" << endl;
}
int main()
{
	Student stu;
	stu._name = "����";
	stu._age = 18;
	cout << stu._name << stu._age << "��" <<endl;
	stu.study();
	stu.exam();
	return 0;
	
	
}
