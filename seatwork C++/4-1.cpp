#include<iostream>
using namespace std;
class Student
{
	public:
		void setGrade(string grade);
		void setName(string name);
		string getGrade();
		string getName();
	private:
		string _grade;
		string _name;
};
void Student::setGrade(string grade)
{
	_grade=grade;
}
void Student::setName(string name)
{
	_name=name;	
}
string Student::getGrade()
{
	return _grade;
}
string Student::getName()
{
	return _name;
}
class Undergraduate:public Student
{
	public:
		Undergraduate(string major);
		void show();
	private:
		string _major;
};
Undergraduate::Undergraduate(string major)
{
	_major=major;
}
void Undergraduate::show()
{
	cout<<"����:"<<getName()<<endl;
	cout<<"���:"<<getGrade()<<endl;
	cout<<"רҵ:"<<_major<<endl;
}
int main()
{
	Undergraduate stu("����");
	stu.setName("��ͩ");
	stu.setGrade("��һ");
	stu.show();
	return 0;
}















