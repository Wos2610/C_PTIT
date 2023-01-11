//Bai tap buoi 3
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long i = 2;
	for(i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			printf("%lld ", i);
			n /= i;
		}
	}
	if(n != 1){
		printf("%lld ", n);
	}	
	return 0;
}

	//Bai1
//	int n;
//	scanf("%d", &n);
//	int i,j;
//	for(i = 1; i <= n; i++){
//		if(i == n){
//			for(j = 1; j <= n; j++){
//				printf("*");
//			}	
//		}
//		else{
//			for(j = 1; j <= i; j++){
//				if(j == 1 || j == i){
//					printf("*");
//				}
//				else{
//					printf(".");
//				}
//			}
//			printf("\n");
//		}
//	}
	
	//Bai2
//	int n;
//	scanf("%d", &n);
//	int i,j;
//	for(i = 1; i <= (2*n - 1); i++){
//		if(i ==n){
//			for(j = 1; j <= (2*n - 1); j++){
//				printf("*");
//			}
//			printf("\n");
//		}
//		else if(i < n){
//			for(j = 1; j <= (n - i); j++){
//				printf("~");
//			}
//			for(j = 1; j <= (2*i - 1); j++){
//				printf("*");
//			}
//			printf("\n");
//		}
//		else{
//			for(j = 1; j <= (i - n); j++){
//				printf("~");
//			}
//			for(j = 1; j <= ((2*n - i)*2 - 1); j++){
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
		
	//Bai3
//	long long a,b;
//	scanf("%lld%lld", &a, &b);
//	long long tich = a * b;
//	if(a == b){
//		printf("UCLN = %lld\n", a);
//		printf("BCNN = %lld", a);
//	}
//	else{
//		while(a != b){
//			if(a > b){
//				a = a - b;
//			}
//			else{
//				b = b - a;
//			}
//		}
//		printf("UCLN = %lld\n", a);
//		printf("BCNN = %lld", tich / a);
//	}
//			
			
	//Bai4
//	long long n;
//	scanf("%lld", &n);
//	long long i = 2;
//	while(n > 1){
//		if(n % i == 0){
//			printf("%lld ", i);
//			n /= i;
//		}
//		else{
//			i++;
//		}
//	}			
				
	//Bai5
//	long long n;
//	scanf("%lld", &n);
//	long long sum = 0;
//	long long i;
//	if(n == 1){printf("0");}
//else{
//	for(i = 1; i < n; i++){
//		if(n % i == 0){
//			sum += i;
//		}
//	}
//	if(sum == n){
//		printf("1");
//	}
//	else{
//		printf("0");
//	}		
//}
			
					
	//Bai6
//bool soHoanHao(long long n){
//	long long i;
//	long long sum = 1;
//	if(n == 1){
//		return false;
//	}
//	for(i = 2; i <= sqrt(n); i++){
//		if(n % i == 0){
//			if(i != (n/i)){
//				sum += (i + n/i);
//			}
//			else{
//				sum+= i;
//			}	
//		}
//	}
//	if(sum == n){
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//int main(){
//	long long a, b;
//	scanf("%lld%lld", &a, &b);
//	if(a >= b){
//		printf("Khong ton tai so hoan hao");
//	}
//	else{
//		long long i;
//		for(i = (a + 1); i < b; i++){
//			if( soHoanHao(i) ){
//				printf("%lld ", i);
//			}
//		}	
//	}
//	return 0;
//}						
						
	//Bai7
//bool soThuanNghich(long long n){
//	long long dao = 0;
//	long long m = n;
//	while(m > 0){
//		dao = dao * 10 + m % 10;
//		m /= 10;
//	}
//	if(dao == n){
//		return true;
//	}
//	return false;
//}
//
//bool soNguyenTo(long long n){
//	long long i;
//	if(n < 2){
//		return false;
//	}
//	else{
//		long long i;
//		for(i = 2; i <= sqrt(n); i++){
//			if(n % i == 0){
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//bool itNhat3UocNgTo(long long n){
//	long long i;
//	int count = 0;
//	for(i = 2; i <= n; i++){
//		if(n % i == 0){
//			if(soNguyenTo(i)){
//			count++;
//			}
//			if(count >= 3){
//				return true;
//			}
//		}	
//	}
//	return false;
//}
//
//int main(){
//	long long a, b;
//	scanf("%lld%lld", &a, &b);
//	if(a > b){
//		printf("Khong ton tai so dep trong [a,b]");
//	}
//	else{
//		long long i;
//		for(i = a; i <= b; i++){
//			if( soThuanNghich(i) && itNhat3UocNgTo(i) ){
//				printf("%10lld", i);
//			}
//		}
//	}
//	return 0;
//}
		
	//Bai8
//bool soNgTo(long long n){
//	if(n < 2){
//		return false;
//	}
//	else{
//		long long i;
//		for(i = 2; i <= sqrt(n); i++){
//			if(n % i == 0){
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//bool tatCaChuSoLaNgTo(long long n){
//	long long cs = 0;
//	while(n > 0){
//		cs = n % 10;
//		if( !soNgTo(cs) ){
//			return false;
//		}
//		n /= 10;
//	}
//	return true;
//}
//
//bool tongChuSoLaNgTo(long long n){
//	long long sum = 0;
//	while(n > 0){
//		sum += (n % 10);
//		n /= 10;
//	}
//	if( soNgTo(sum) ){
//		return true;
//	}
//	return false;
//}
//void swap(long long a, long long b){
//	long long tg = b;
//	b = a;
//	a = tg;
//}
//int main(){
//	long long a, b;
//	long long count = 0;
//	scanf("%lld%lld", &a, &b);
//	if(a > b){
//		swap(a,b);
//	}
//	long long i;
//	for(i = a; i <= b; i++){
//		if(  tatCaChuSoLaNgTo(i) && tongChuSoLaNgTo(i) && soNgTo(i) ){
//			count++;
//		}
//	}
//	printf("%lld", count);
//	return 0;
//}
