#include<iostream>
using namespace std;
class Sheep
{
	public:
		Sheep(string name, string color);
		Sheep(const Sheep& another);					//�����������캯��  ���캯�����ƣ�const ����&��������
		void show();
		~Sheep();									//�������캯��
	private:
		string _name;
		string _color;
};
Sheep::Sheep(string name,string color)
{
	_color=color;
	_name=name;
	cout<<"���ù��캯��"<<endl;
}
Sheep::Sheep(const Sheep& another)
{
	cout<<"���ÿ������캯��"<<endl;
	_name=another._name;
	_color=another._color;
}
Sheep::~Sheep()
{
	cout<<"������������"<<endl;
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<endl;
}

int main()
{
	Sheep SheepA("С��Ф��","��ɫ");
	cout<<"��A��";
	SheepA.show();
	Sheep SheepB("������","��ɫ");
	cout<<"��B��";
	SheepB.show();
}














