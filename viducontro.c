// Vi du ve con tro

#include<stdio.h>

// Khai bao + gan gia tri = khoi tao
int main(){
	// Khoi tao
	int a = 300;
	int b = 120;
	int *ptr = 0;
	int *ptr1 = NULL;
	int *ptr2 = &a;
	
	// Khai bao
	int *ptr3;
	// Gan gia tri
	ptr3 = &a;
	
	printf("Dia chi cua bien a : %x\n", &a);
	printf("Gia tri chua trong con tro : %x\n", ptr2);
	printf("Gia tri cua a : %d\n", *ptr3);
	
 
	return 0;
 }
