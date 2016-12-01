//callback implementaion in C++
#include<iostream>
using namespace std;
class sample
{

public:
	int sum(int a, int b){return a+b;}
	int diff(int a, int b){return a-b;}
	int mul(int a, int b){return a*b;}
};
int setcallback(int a, int b, sample *ptr,int (sample::*fnptr)(int,int)) {return (ptr->*fnptr)(a,b);}
int main()
{
sample s;
cout<<setcallback(10,10,&s,&sample::sum)<<endl;;
cout<<setcallback(10,10,&s,&sample::diff)<<endl;

//int (sample::*fn)(int, int)=&sample::mul(10,10);
//cout<<setcallback(10,10,&s,&sample::fn)<<endl;//error: fn is not a membera function

return 0;
}
