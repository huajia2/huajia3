#include<iostream>
#include<iomanip>
using namespace std;
class Clock
{
	public:
		Clock(int hour, int main, int sec);				//�����вι��캯��
		void showTime();
	private:
		int _hour;
		int _min;
		int _sec;
};
Clock::Clock(int hour, int min, int sec)			//��Ҫ����Ա��ʼ��
{
	_hour=hour;
	_min=min;
	_sec=sec;	
}
void Clock::showTime()
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"		//setw���������ȣ�setwĬ��ֵ���Ҷ������ͨ��left��������롣setfill������������ַ���
		<<setw(2)<<setfill('0')<<_min<<":"
		<<setw(2)<<setfill('0')<<_sec<<endl;
} 
int main()
{
	Clock clock1(9,59,59);
	cout<<"����ʱ�䣺";
	clock1.showTime();
	return 0;
	
}
