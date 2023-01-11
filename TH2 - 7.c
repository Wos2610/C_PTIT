// Nhap so tu nhien n roi liet ke cac uoc so. tong so uoc

#include<stdio.h>

int main(){
   unsigned int n;
   int i,j, count;
   printf("Nhap vao so tu nhien n = ");
   scanf("%u", &n);
   
   if(n == 0){
   	printf("So 0 co vo so uoc so ");
   }
   else{
   	printf("Cac uoc so duong cua %u : \n", n);
   	for(i = 1; i <= n; ++i){
   		if(n % i == 0){
   			printf("%d\n",i);
   			count++;
		   }
	   }
	printf("Cac uoc so am cua %u : \n", n);
   	for(j = 1; j <= n; ++j){
   		if(n % j == 0){
   			printf("-%d\n",j);
   			count++;
		   }
	   }
	printf("=> So %u co %d uoc so duong va am ",n,count);
   }
   return 0; 
}
