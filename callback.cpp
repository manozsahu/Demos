//callback function pointer example in c++ class
#include<iostream>
using namespace std;

class called
{
private:
	int i;
public:
	called(int ii):i(ii){}
	void show()
	{
	cout<<"called::show i="<<i<<endl;
	}
};
class callback
{
private:
	called *c;
	void (called::*fptr)();
public:
	callback(called *c1,void (called::*func)()):c(c1),fptr(func){}
	void check()
	{	
	(c->*fptr)();
	}
};

int main()
{
called c1(100);
callback *cb = new callback(&c1,&called::show);
cb->check();//called::show i=100

return 0;
}
