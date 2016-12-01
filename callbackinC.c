//callback implementation in C
#include<stdio.h>
int sum(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
int main()
{
int setcallback(int a, int b, int (*fnptr)(int,int));//declaration of a function taking a function ptr as argument

int x=setcallback(10,20,sum);//passing function as argument
printf("sum is =%d\n",x);

//OR
int (*fn)(int,int)=diff;
int y=setcallback(10,20,fn);//passing function as argument
printf("sum is =%d\n",y);

return 0;
}
int setcallback(int a, int b, int (*fnptr)(int,int))
{
return (*fnptr)(a,b);
}
int sum(int a, int b)
{
return a+b;
}
int diff(int a, int b)
{
return a-b;
}
int mul(int a, int b)
{
return a*b;
}
