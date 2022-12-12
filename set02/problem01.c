#include<stdio.h>

float input(float base, float height);
float find_area(float base , float height, float area);
void output(float base, float height, float area);

int main()
{
  float base,height,area;
  base=input();
  height=input();
  find_area(base,height,area);
  output(base,height,area);
  return 0;
}

float input(float base, float height){
  float n;
  printf("Enter base and height:");
  scanf("%f",&n);
  return 0;
}

float find_area(float base , float height, float *area){
  return (1/2)*base*height;
}

void output(float base, float height, float area){
  area=(1/2)*base*height;
  printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}