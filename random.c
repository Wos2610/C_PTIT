// Ham sinh so ngau nhien

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int i;
	for(i = 0; i < 10; i++){
		int random = 1+rand()%6;
		printf("%5d", random);
	}
	return 0;
}
