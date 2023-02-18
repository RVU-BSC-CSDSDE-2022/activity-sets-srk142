#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a,char *reverse_a);


int main()
{
  char str[100],rev_str[100];
input_string(str);
str_reverse(str,rev_str);
return 0;
}
void input_string(char *a)
{
  printf("enter a string:\n");
  scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
  int i=0, length=0,j=0;
  for( i=0 ; str[i] != '\0' ; i++);
  length = i-1;
  for(j=0 ; j<=(i-1); j++)
{
  rev_str[j]=str[length];
length;
}
rev_str[j]='\0';
}
void output(char *a, char *reverse_a)
{
   printf("normal string: %s\n",a);
   printf("reversed string: %s\n",reverse_a);
}
