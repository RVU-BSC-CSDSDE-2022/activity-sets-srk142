#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n ,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
  return 0; 
}  
float input()
{
  float n;
  printf("Enter the number ");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float guess = n/2;
	next = 0.5*(guess + x/guess)
	while (fabs(next - guess) > 0.000001)
	{
		guess = next;
		next = 0.5(guess + x/guess);
	}
	return next;

}
void output(float n ,float sqrroot)
{
  printf("Square root of %.2lf =  %.2lf" n , sqrroot);
}
