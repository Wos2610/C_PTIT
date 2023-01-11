#include<stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long dao = 0;
	while(n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	printf("%lld", dao);
	return 0;
}








	// Bai 1
//int n;
//	scanf("%d", &n);
//	int i;
//	for(i = 1; i <= n; i++){
//		if(i % 2 ==0){
//			printf("%d ", i);
//		}
//	}
	// Bai 2
//long long n;
//	scanf("%lld", &n);
//	if(n < 2){
//		printf("%lld khong phai so nguyen to", n);
//	}
//	else{
//		long long i;
//		int mark = 1;
//		for(i = 2; i <= sqrt(n); i++){
//			if(n % i == 0){
//				mark = 0;
//			}
//		}
//		if(mark == 1){
//			printf("%lld la so nguyen to", n);
//		}
//		else{
//			printf("%lld khong phai so nguyen to", n);
//		}
//	}

	// Bai 3
//	long long n;
//	scanf("%lld", &n);
//	long long sum = 0;
//	while( n > 0 ){
//			sum += (n % 10);
//			n /= 10;
//		}
//	printf("Sum = %lld", sum);
	// Bai 4
//long long n;
//	scanf("%lld", &n);
//	long long sum = 0;
//	while( n > 0 ){
//			sum += (n % 10);
//			n /= 10;
//		}
//	printf("Sum = %lld", sum);
	// Bai 5
//int n;
//	scanf("%d", &n);
//	int i;
//	for(i = 1; i <= n; i++){
//		if(i == 1 || i == n){
//			int j;
//			for(j = 1; j <= n; j++){
//				printf(" * ");
//			}
//			printf("\n");
//		}
//		else{
//			int j;
//			for(j = 1; j <= n; j++){
//				if(j == 1 || j == n){
//					printf(" * ");
//				}
//			else{
//				printf("   ");
//				}
//			}
//			printf("\n");
//		}
//		
//	}
//	
	// Bai 6

	// Bai 7

	// Bai 8
