// Vi du ve mang

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 36

int main(){
	srand(time(NULL));         	// Ham sinh so ngau nhien
	int arr[MAX];             	// Khai bao mang
	
	int i;
	for(i = 0; i < MAX; i++){  // Khoi tao cac gia tri cua mang arr[]
		arr[i] = rand();	   // Gan cho phan tu thu i mot gia tri ngau nhien
	}
	
	for(i = 0; i < MAX; i++){  // In ra man hinh cac phan tu cua mang
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	return 0;
}
