#include <stdio.h>

int main(){
	float Celsius, Fahrenheit;
	printf("Please enter the temperature in Celsius: ");
	scanf("%f", &Celsius);
	Fahrenheit = Celsius*(9/5)+32;
	printf("Temperature in Fahrenheit: %f", Fahrenheit);

	return 0;
}