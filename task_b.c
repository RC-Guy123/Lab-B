#include <stdio.h>
int main(void){
    double height = 0;
	double volume = 0;
	printf("Enter height: ");
	scanf("%lf", &height);
	// Your code below here
	double radius = 2.2;
    volume = 3.14159 * radius * radius * height;
	// Do not edit below here
	printf("Volume: %.2f", volume);
	return 0;
}