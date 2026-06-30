#include<stdio.h>

int main()
{
float radius, area, perimeter;

printf("Enter Radius: ");
scanf("%f",&radius);

area = 3.14 * radius * radius;
perimeter = 2 * 3.14 * radius;

printf("Area = %.2f\n", area);
printf("Perimeter = %.2f", perimeter);

return 0;
}