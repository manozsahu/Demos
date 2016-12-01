#include<stdio.h>
int sum(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
int main()
{
int (*calculateme)(int, int)=sum;//declaration

int a=calculateme(20,10);//call
printf("sum is=%d\n",a);

calculateme=diff(20,10);
int b=calculateme;//call
printf("diff is=%d\n",b);

calculateme=mul(20,10);
printf("mul is=%d\n",*calculateme);//call

return 0;
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
