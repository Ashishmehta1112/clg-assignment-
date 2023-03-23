#include<stdio.h>
 #include<conio.h>

 int  printarray(int arr[], int n)
{ int i;

printf("array elements are:");

  for(i=0;i<n;i++)

{ 

  printf("%d", arr[i]);

} printf("\n");

return 0;}


int main(){
int n;

printf("how much size array you want for traversal");
scanf("%d",&n);
int array[]={5,6,8,9,9,9,9,88,9,8};
    

printarray(array,n);
}