//Initializer list must be used to  initialize reference data members
//How to initialize reference data members of a class?
//using initialization list
#include <iostream>
using namespace std;

class Base
{
private:
	int&  ra;//ra is a reference to integer
public:
	//L1 reference member variable must be initialized using initializer list
	//error: uninitialized reference member ‘Base::ra’
	//Base(int a){ra=a;}
	
	//L2 const data member must be initialized with initializer list
	Base(int a):ra(a){}
	
	int getValue(){return ra;}
};

int main()
{
Base b1(10);
cout<<b1.getValue()<<endl;//10

return 0;
}
