#include<stdio.h>

int f(int x)
{

int i;
if(x<=1)
{
  return 0;
 }
else if(x==2)
{
 return 1;
}


else
{
  return f(x-1)+ f(x-2);
}

}

int main()

{ 
int b=0;
   int a ;
scanf("%d",&a);
for (int i=1;i<=a;i++)
{
  b++;
}
 int Fibonacci= f(b);
printf(" Fibonacci series is %d", Fibonacci);

 
return 0;

}