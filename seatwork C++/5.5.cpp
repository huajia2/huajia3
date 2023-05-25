#include<iostream>
using namespace std;

class Teacher
{
public:
    Teacher(string name, int age, string job);
    void show();

protected: 
    string _name;
    int _age;
    string _job;
};

Teacher::Teacher(string name, int age, string job)
{
    _name = name;
    _age = age;
    _job = job;
}

void Teacher::show()
{
    cout << "������" << _name << endl;
    cout << "���䣺" << _age << endl;
    cout << "������" << _job << endl;
}

class Student : public Teacher
{
public:
    Student(string name, int age, string job) : Teacher(name, age, job) {}
    void show();
};

void Student::show()
{
    cout << "ѧ��������" << _name << endl;
    cout << "ѧ�����䣺" << _age << endl;
    cout << "ѧ��������" << _job << endl;
}

class Graduate : public Student
{
public:
    Graduate(string name, int age, string job) : Student(name, age, job) {}
    void show();
};

void Graduate::show()
{
    cout << "�о���������" << _name << endl;
    cout << "�о������䣺" << _age << endl;
    cout << "�о���������" << _job << endl;
}

int main()
{
    Teacher tea("��ʦ", 27, "��ѧ");
    Student stu("ѧ��", 18, "ѧϰ");
    Graduate gra("a�о���", 24, "��ѧ,ѧϰ");
    gra.show();
    stu.show();
    tea.show();

    return 0;
}

