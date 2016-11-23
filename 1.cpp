//Initializer list is must to initialize const data members
//How to initialize const data members of a class?
//using initialization list only
#include <iostream>
using namespace std;

class Base
{
private:
	int const ca;
public:
	//L1 const member variable must be initialized using initializer list
	//error: uninitialized member ‘Base::ca’ with ‘const’ type ‘const int’
	//error: assignment of read-only member ‘Base::ca’
	//Base(int a){ca=a;}
	
	//L2 const data member must be initialized with initializer list
	Base(int a):ca(a){}
	
	int getValue(){return ca;}
};

int main()
{
Base b1(10);
cout<<b1.getValue()<<endl;

return 0;
}
