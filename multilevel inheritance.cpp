#include <iostream>
using namespace std;

class initial
{
	public:
		int x;
		
		void read()
		{
			cout<<"Enter the value of x \n";
			cin>>x;
		}
		void display()
		{
			cout<<"X  ="<<x<<"\n";
		}
};

class middle : public initial 
{
	public:
		int y;
		
		void read1()
		{
			cout<<"Enter the value of y\n";
			cin>>y;
		}
		void display1()
		{
			cout<<"Y  ="<<y<<"\n";
		}
		
};

class final : public middle 
{
	public:
		int z;
		
		void read2()
		{
			cout<<"Enter the value of z\n";
			cin>>z;
		}
		void display2()
		{
			cout<<x+y+z;
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
