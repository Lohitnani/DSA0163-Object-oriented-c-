#include <iostream>
using namespace std;

class initial
{
	public:
		int x;
		
		void read()
		{
			cout<<"Enter the value of X";
			cin>>x;
		}
		
		void display()
		{
			cout<<"X  ="<<x<<"\n";
		}
};

class middle 
{
	public:
		int y;
		
		void read1()
		{
			cout<<"Enter the value of y";
			cin>>y;
		}
		
		void display1()
		{
			cout<<"Y  ="<<y<<"\n";
		}
};

class final : public initial , public middle
{
	public:
		int z;
		
		void read2()
		{
			cout<<"Enter the value of Z";
			cin>>z;
		}
		void display2()
		{
			cout<<"Multiplication: "<<x*y*z<<"\n";
		}
};

int main()
{
	final F;
	F.read();
	F.read1();
	F.read2();
	F.display2();
}
