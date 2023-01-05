#include <stdio.h>
int input();
void add(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  return n;
}
int find_largest(int a, int b, int c)
{
  
  return a>b?(a>c?a:c):(b>c?b:c);
  
}
void output(int a, int b, int c, int largest)
{
  printf("enter a number \n");
}
