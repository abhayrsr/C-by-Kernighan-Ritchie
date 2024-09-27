/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit tabe*/


#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("%3s %6s\n", "Celsous", "Fahr");

	while(lower <= upper){
		celsius = lower;
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.0f\n", celsius, fahr);
		lower = lower + step; 
	}
}
