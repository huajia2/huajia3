#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Rabbit
{
	public:
		Rabbit(string name,const char *pf);
		void show();
		~Rabbit();												//���������޲Σ��޷���ֵ
	private:
		string _name;
		char* _food;
};
Rabbit::Rabbit(string name,const char *pf)
{
	cout<<"���ù��캯��"<<endl;
	_name=name;
	_food=new char[50];
	memset(_food,0,50);
	strcpy(_food,pf);
	
}



















