#include <stdio.h>
#include<math.h>
double  func1(double x,double a1,double b,double c,double d,double e,double f,double g,double z)
{
  
  

double  a2= a1*(exp(b*x))+c*(sin(d*x))+z*(cos(f*x))+g*(x*x*x*x*x);
 
 return a2;
}

int differentiation ()
{
  double a1,b,c,d,e,f,g,i,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
 printf("enter coffecient of e^nx");
 scanf ("%lf",&a1);
  
  printf("enter value of n  in e^nx" );
 scanf ("%lf",&b);
  printf("enter coffecient of sin(nx)");
 scanf ("%lf",&c);
  printf("enter value of n in sin(nx)");
 scanf ("%lf",&d);
  printf("enter coffecient of cos(nx)");
 scanf ("%lf",&z);
  printf("enter value of n in cos(nx)");
 scanf ("%lf",&f);
  printf("enter coffecient x^5 ");
 scanf ("%lf",&g);
double a;
  printf("enter value at which you want to find differentiation of your function ");
  
  scanf("%lf",&a);
 double h=0.000001;
 double j=a+h;
  double k;


  
  k = ((func1(a+h,a1, b,c,d,e, f, g, z)-func1(a,a1, b,c,d,e, f, g, z))/h);
  printf("the value of differentiation at x=%lf is %lf",a,k);
 return 0;
  
}

int main() {
  differentiation ();
  printf("Hello World\n");
  return 0;
}
