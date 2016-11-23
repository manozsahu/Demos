//Initialization list must be used to call argumented constructor of base class from derived class.
#include <iostream>
using namespace std;

class Base
{
private:
	int a;
public:
	Base(){cout<<"No arg default constr"<<endl;}
	Base(int aa):a(aa)
	{
	cout<<"Base::Base a="<<a<<endl;//10
	}
};
class Derived: public Base 
{
private:
	float f;
public:
	//Derived(int aa=0, float ff=0.0):Base(),f(ff)//L1
	Derived(int aa=0, float ff=0.0):Base(),f(ff)//L2
	{
	cout<<"Derive:Derived f="<<f<<endl;//10.5
	}
};

int main()
{
Derived d(10,10.5);
cout<<endl;
Derived d2;

return 0;
}
/*L1 Output:
No arg default constr
Derive:Derived f=10.5

No arg default constr
Derive:Derived f=0
*/
/*
L2:Output
Base::Base a=10
Derive:Derived f=10.5

Base::Base a=0
Derive:Derived f=0
*/
