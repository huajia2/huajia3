#include<iostream>
#include<iomanip>
using namespace std;
class Birth
{
	public:
		Birth(int year,int month,int day);
		void show();
	private:
		int _year;
		int _month;
		int _day;
};
Birth::Birth(int year,int month,int day):_year(year),_month(month),_day(day)			//����ʵ�ֹ��캯��
{
	cout<<"Birth�๹�캯��"<<endl;
}
void Birth::show()
{
	cout<<"��������"<<_year<<"-"<<_month<<"-"<<_day<<endl;
}
class Student
{
	public:
		Student(string name,int id,int year,int month,int day);
		void show();
	private:
		string _name;
		int _id;
		Birth birth;
};
Student::Student(string name,int id, int year, int month, int day):birth(year,month,day)
{
	cout<<"Student�๹�캯��"<<endl;
	_name=name;
	_id=id;	
}
void Student::show()
{
	cout<<"������"<<_name<<endl;
	cout<<"ѧ�ţ�"<<_id<<endl;
	birth.show();
}
int main()
{
	Student stu("��ͩ",2825,2004,2,15);
	stu.show();
	return 0;
}
























