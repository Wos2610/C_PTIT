// Vi du ve viec su dung vong lap do - while

#include<stdio.h>

int main(){
	int sum = 0, i = 1;
	do{
		sum = sum + i;
		++i;}
	
	while(i<10);
	printf("Sum = %d\n", sum);
	return 0;
}
