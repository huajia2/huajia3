#include<iostream>
using namespace std;
class Person
{
	public:
		Person(string name,int age,string addr,string favFruit);
		~Person();
		void place() const;
		void myInfor() const;
		void myInfor();
	private:
		const string _name;
		const int _age;
		 string _addr;
		const string _favFruit;
};
Person::Person(string name,int age,string addr,string favFruit):_name(name),_age(age),_addr(addr),_favFruit(favFruit)
{}
void Person::myInfor() const
{
//	_favFruit="����";
//	place();
	cout<<"�ҽ�"<<_name<<"����"<<_age<<"��"<<"��ϲ����"<<_favFruit<<endl;
}
Person::~Person(){}
void Person::myInfor()
{
	
	cout<<"�ҽ�"<<_name<<"����"<<_age<<"��"<<"��ϲ����"<<_favFruit<<endl;
	place();
	
	
}
void Person::place() const
{
	cout<<"��ס��"<<_addr<<endl;
}
int main()
{
	Person Person1("Сͩ",18,"�����","����");
	Person1.myInfor();
	const Person p2("��ͩ",18,"ë����","����");
	p2.myInfor();
	return 0;	
}
