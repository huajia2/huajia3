#include<iostream>
using namespace std;
class Student{
public:
	void study();
	void exam();
	void setName(string name);			//�������������ĳ�Ա����
	void setAge(int age);
	string getName();					//������ȡ�����ĳ�Ա����
	int getAge();
private:
	string _name;						//������Ա����
	int _age;
};
void Student::study()
{
	cout << "ѧϰC++" << endl;
}
void Student::exam()
{
	cout << "����100��" << endl;
}
void Student::setName(string name)			//����ʵ��steName()��Ա����
{
	_name=name;
}
void Student::setAge(int age)
{
	_age=age;	
}
string Student::getName()					//����ʵ��getAge()��Ա����
{
	return _name;
}
int Student::getAge()
{
	return _age;
}
int main()
{
	Student stu;
	stu.setName("����");
	stu.setAge(20);
	cout << stu.getName() << stu.getAge() << "��" << endl;
	stu.study();
	stu.exam();
	Student stu1;
	stu1.setName("��һ");
	stu1.setAge(18);
	cout << stu1.getName() << stu1.getAge() << "��" << endl;
	stu.study();
	stu1.exam();
	return 0;
	
}






















