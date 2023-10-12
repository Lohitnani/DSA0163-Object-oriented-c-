#include <iostream>
using namespace std;

class initial 
{
	public:
		int x;
		
		void read()
		{
			cout<<"Enter the value of x";
			cin>>x;
		}
		void display()
		{
			cout<<"X = "<<x<<"\n";
		}
};

class final : public initial
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
			cout<<"Z = "<<x*y<<"\n";
		}
};

int main()
{
	final F;
	F.read();
	F.read1();
	F.display();
	F.display1();
	
	return 0;
}
