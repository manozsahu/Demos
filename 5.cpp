//When data member name and constructor parameter name are sam then 
//they can be initialized by using this pointer or initializer list
//else garbage values
#include <iostream>
using namespace std;

class Base
{
private:
int i;
float f;
public:
/*
//L1
Base(int i, float f){
cout<<"Base::Base"<<endl;
i=i;
f=f;
*/

//L2
Base(int i, float f){
cout<<"Base::Base"<<endl;
this->i=i;
this->f=f;

//L3
//Base(int i, float f):i(i),f(f){cout<<"Base::Base"<<endl;}

}
float getSum(){return (i+f);}
};

int main()
{
Base b1(10,10.5);
cout<<b1.getSum()<<endl;

return 0;
}
