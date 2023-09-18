#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Asc_Print_Countdown(int number);

void main(void) {
	int i;
	scanf("%i", &i);
	Asc_Print_Countdown(i);
	printf("\n");
	Desc_Print_Countdown(i);
}

int Asc_Print_Countdown(int number) {
	static int j = 1;
	printf("%i ", j);
	j++;
	if (number > 1) {
		Asc_Print_Countdown(number - 1);
	}
}

int Desc_Print_Countdown(int number) {
	printf("%i ", number);
	if (number > 1) {
		Desc_Print_Countdown(number - 1);
	}
}