//Initializer list must be used to create object of a contained class inside another class when no default constructor.
//class One is contained as a dm  of class Two and class One has no default constructor.
//It will be successful if initialiser list is given
#include <iostream>
using namespace std;

class One
{
private:
	
public:
	One(int i=0)
	{
	cout<<"One::One"<<endl;
	}
};
class Two: public One
{
private:
	One onee;//candidate expects 1 argument, 0 provided
public:
	Two(int b):One(b)
	{
	cout<<"Two::Two"<<endl;
	}
};

int main()
{
Two twoo(10);

return 0;
}
