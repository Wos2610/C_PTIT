// Vi du ve con tro va mang mot chieu

#include<stdio.h>
#define LENGTH 10

int* nhapMang(){
	static int arr[LENGTH];
	printf("Nhap mang : ");
	int i;
	for(i = 0; i < LENGTH; i++){
		scanf("%d", &arr[i]);
	}
	return arr;
}


int main(){
	int* arr ;
	arr = nhapMang();
	int* ptr = arr;
	int i;
	// Cach 1
	for(i = 0; i < LENGTH; i++){
		printf("%6d", arr[i]);
	}
	
	printf("\n");
	
	// Cach 2
	for(i = 0; i < LENGTH; i++){
		printf("%6d", *(ptr+i));
	}
	
	printf("\n");
	
	// Cach 3
	
	for(; ptr < &arr[LENGTH]; ptr++){  // ptr++: nhay tu dia chi nay sang dia chi khac -> ptr = ptr + ( 1 * 4 )
		printf("%6d", *ptr);	
	}
	
	return 0;
	
}
