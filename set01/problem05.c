#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  return n;
}
int compare(int a, int b, int c)
{
 a=largest;
 if (b>largest)
 {
   largest=b;
 }
 if (c>largest)
 {
   largest=c;
 }
 return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("the larger of %d,%d,%d is %d",a,b,c,largest);
}
