#include<iostream>
using namespace std;
int main()
{
	int a=42;
	int& b=a;
	cout<<"����a�ĵ�ַ"<<&a<<endl;
	cout<<"����b�ĵ�ַ"<<&b<<endl;
	cout<<"����b��ֵ"<<b<<endl;
	return 0;
}
