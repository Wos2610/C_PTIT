#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int year = n / 365;
	int week = (n - year*365)/7;
	int day = n - year*365 - week*7;
	printf("%d ", year);
	printf("%d ", week);
	printf("%d", day);
	return 0;
}