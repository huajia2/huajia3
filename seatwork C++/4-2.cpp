#include<iostream>
using namespace std;
class Animal
{
	public:
		void move();
};
void Animal::move()
{
	cout<<"������Ϊ"<<endl;
}
class Cat:public Animal
{
	public:
		Cat(string name);
		void walk();
	private:
		string _name;
};
Cat::Cat(string name)
{
	_name=name;
}
void Cat::walk()
{
	cout<<_name<<"����"<<endl;
}
int main()
{
	Cat cat("è");
	cat.move();
	cat.walk();
	return 0;
	
}










