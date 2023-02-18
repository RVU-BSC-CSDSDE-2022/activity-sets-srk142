#include <stdio.h>
typedef struct_triangle{
float base, altitude, area;
} triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, triangle t[n]);
void find_n_area(triangle *t);
void find_n_areas(int n, triangle t[n]);
triangle find_smallest_triangle(int n, triangle t[n]);
void output(int n, triangle t[n], triangle smallest);

int main()
{
  int n= input_n();
  triangle_n_triangles(n,t);
  find_n_areas(n,t);
  triangle smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0:
}

int input_n()(
{
  int n;
  printf("enter number of triangle\n");
if(scanf("%d",&n));
return n;
}
triangle input_triangle()
{
  triangle t;
  printf("enter the base and altitude:\n");
  if(scanf ("%f%f",&t.base,&t.altitude));
  return t:
}
  

void input_n_triangles(int n, triangle t[n])
{
  for (int i=0 ; i<n ; i++)
{
  t[i]=input_triangle();
}
}

void find_area(triangle *t)
{
  t->area=((t->base)*(t->altitude))/2;
}


void find_areas(int n, triangles t[n])
{
  for (int i=0 ; i<n ; i++)
{
  find_area(&t[i]);
}
}


triangle find_smallest_triangle(int n, triangle t[n])
{
  triangle smallest;
  smallest.area=t[1].area;
  for (int i=0 ;i<n ;i++)
{
    if (t[i].area <= smallest.area)
{
  smallest.area=t[i].area;
}
}
return smallest;
}

void output(int n, triangle t[n], triangle smallest)
{
  print("the smallest triangle out of triangles with base and height ");
for (int i=0 ; i<n ;i++)
{
  printf("(%d,%d"),(int)t[i].base,(int)t[i].altitude);
}
printf(" is the triangle haveing base %d , height %d and area %d \n",(int)t->base,(int)t->altitude,(int)smallest.area);
}
