#include <stdio.h>
#include <math.h>

int main(){
	float radius, area, circum;
	printf("Please enter the radius of a circle: ");
	scanf("%f", &radius);
	area = 3.14*pow(radius, 2);
	circum = 2*3.14*radius;
	printf("Area of circle is: %f, and its Circumference is: %f", area, circum);
}