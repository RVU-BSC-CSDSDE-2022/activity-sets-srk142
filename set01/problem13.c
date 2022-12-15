#include <stdio.h>
int input();
void change_to_6(int *a);//add parameters to this function
int input()
{
  
int n,a,b;
  printf("enter number a:\n");
  scanf("%d",&n);
  return n;  
  
}
//para 
void change_to_6(int *a){
  *a=6;
  
}
int main(){
  int a;
  a=input();
  change_to_6(&a);
  printf("This is a: %d",a);
}