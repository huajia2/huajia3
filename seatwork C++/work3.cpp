#include <iostream>
using namespace std;
class Student							//������������Student
{
public:									//��������
	void study();						//������ʾѧϰ�ĳ�Ա����
	void exam();	                    //������ʾ���Եĳ�Ա����
	void magic();
	string _power;			
	string _name;						//������ʾ�����ĳ�Ա����
	int _age;							//������ʾ����ĳ�Ա����
};
void Student::magic()
{
	cout <<"ӵ��ʮ��ԭ��"<< endl;
}

void Student::study()					//����ʵ��studey()��Ա����
{
	cout << "������" << endl;
}
void Student::exam()					//����ʵ��exam()��Ա����
{
	cout << "ԪӤ����" << endl;
}
int main()
{
	Student stu;						//����Student�����
	stu._name = "ҹɽ��";					//���ö�������
	stu._age = 99;
	stu._power="ӵ��ʮ��ԭ��";					//���ö�������
	cout << stu._name << stu._age << "��" << endl;
	cout <<stu._power<<endl;
	stu.study();						//����study()��Ա����
	stu.exam();							//����exam()��Ա����
 	return 0;
}
