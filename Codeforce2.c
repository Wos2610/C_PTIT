#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int n;
	scanf("%d", &n);
	char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i, j;
	int k, l;
	for(i = 1; i <= (2*n - 1); i++){
		if(i == n){
			for(j = 1; j <= (2*n - 1); j++){
				printf("%c", arr[0]);
			}
			printf("\n");
		}
		
		if(i < n){
			for(j = 1; j <= i; j++){
				k = n - i;
				printf("%c", arr[k]);
			}
			for(j = 1; j <= (n - i); j++){
				l = n - j - i;
				printf("%c", arr[l]);	
			}
			for(j = 1; j <= (n - i - 1); j++){
				l = j ;
				printf("%c", arr[l]);	
			}
			for(j = 1; j <= i; j++){
				k = n - i;
				printf("%c", arr[k]);
			}
			printf("\n");	
		}
		
		if (i > n){
			for(j = 1; j <= (2*n - i ); j++){
				k = i - n;
				printf("%c", arr[k]);
			}
			for(j = 1; j <= (i - n); j++){
				l = i - n - j;
				printf("%c", arr[l]);	
			}
			for(j = 1; j <= (i - n - 1); j++){
				l = j;
				printf("%c", arr[l]);	
			}
			for(j = 1; j <= (2*n - i ); j++){
				k = i - n;
				printf("%c", arr[k]);
			}
			printf("\n");
		}
	}
 
	return 0;
}
























	// Bai A
//	long long x,y;
//	scanf("%lld%lld", &x, &y);
//	while(x != y){
//		if(x > y){
//			x = x - y;
//		}
//		else{
//			y = y - x;
//		}
//	}
//	printf("%lld", x);
	
	// Bai B
//	long long n;
//	scanf("%lld", &n);
//	long long i = 2;
//	long long count = 0;
//	while(n > 1){
//		if(n % i == 0){
//			count++;
//			n /= i;
//			if(n % i != 0){
//				printf("%lld^%lld", i, count);
//				if(n != 1){
//				printf(" x ");
//				}
//			}
//			
//		}
//		else{
//			count = 0;
//			i++;
//		}
//	}
	
	// Bai C
//	long long n;
//	scanf("%lld", &n);
//	long long i;
//	long long count = 0;
//	for(i = 1; i <= sqrt(n); i++){
//		if(n % i == 0){
//			if(i == (n / i)){
//				count++;
//			}
//			else
//				{count = count + 2;
//			}
//		}
//	}
//	printf("%lld", count);
	
	// Bai D
//	bool soNguyenTo(long long n){
//	long long i;
//	if(n < 2){
//		return false;
//	}
//	else{
//		for(i = 2; i <= sqrt(n); i++){
//			if( n % i == 0 ){
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//int main(){
//	long long l,r;
//	scanf("%lld%lld", &l, &r);
//	
//	long long count = 0;
//	long long i;
//	for(i = (l + 1); i <= r ; i++){
//		long long sum = 0;
//		long long n = i;
//		while( n > 0 ){
//			sum += (n % 10);
//			n /= 10;
//		}
//		if( soNguyenTo(sum) ){
//			count++;
//		}
//	}
//	printf("%lld", count);
//	return 0;
//}
	
	// Bai E
//	long long l,r;
//	scanf("%lld%lld", &l, &r);
//	long long count = 0;
//	long long i, j;
//	for(i = (l + 1); i < r; i++){
//		long long soUoc = 0;
//		for(j = 1; j <= sqrt(i); j++){
//			if( i % j == 0){
//				if(j == (i / j)){
//					soUoc++;
//				}
//				else{
//					soUoc = soUoc + 2;
//				}
//			}	
//		}
//		if( (soUoc % 2) != 0 ){
//			count++;
//		}
//	}
//	printf("%lld", count);
	
	// Bai F
//	long long n, k;
//	scanf("%lld%lld", &n, &k);
//	long long day = n;
//	long long soBao = n;
//	long long soLanDoiDuoc = 0;
//	long long soBaoDu = 0;
//	while( soBao >= k ){
//		soLanDoiDuoc = soBao/k;
//		day += soLanDoiDuoc;
//		soBaoDu = soBao - soLanDoiDuoc*k;
//		soBao = soLanDoiDuoc + soBaoDu;
//	}		
//	printf("%lld", day);
	
	// Bai G
//bool soNguyenTo(long long n){
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
//	}
//	return true;
//}
//int main(){
//	long long n;
//	long long sum = 0;
//	scanf("%lld", &n);
//	if( soNguyenTo(n) ){
//		while(n > 0){
//			sum += (n % 10);
//			n /= 10;
//		}
//		if( soNguyenTo(sum) ){
//			printf("YES");
//		}
//		else{
//			printf("NO");
//		}
//	}
//	else{
//		printf("NO");
//	}
//	return 0;
//}
	
	// Bai H
//	bool soNguyenTo(long long n){
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
//	}
//	return true;
//}
//int main(){
//	long long n;
//	scanf("%lld", &n);
//	long long count = 0;
//	long long i;
//	for(i = 1; i <= n; i++){
//		if( soNguyenTo(i) ){
//			long long mark = 1;
//			long long m = i;
//			while( m > 0 ){
//				if((m >= 1) && (m <= 9)){
//					if(!soNguyenTo(m)){
//						mark = 0;
//					}
//				}
//				if(!soNguyenTo(m)){
//						mark = 0;
//				}
//				m = m / 10;
//			}
//			if(mark == 1){
//				printf("%lld ", i);
//				count++;
//			}
//		}
//	}
//	if(count == 0){
//		printf("-1");
//	}
//	return 0;
//}
	// Bai I
//	long long n;
//	scanf("%lld", &n);
//	long long i;
//	for(i = 0; i <= 30; i++){
//		printf("%lld x %lld = %lld\n", n, i, n * i);
//	}
	
	// Bai J
//	int n;
//	scanf("%d", &n);
//	int i,j;
//	for(i = 1; i <= (2*n - 1); i++){
//		if(i == n){
//			for(j = 1; j <= (2*i - 1); j++){
//				printf("*");
//			}
//		}
//		else if(i < n){
//			for(j = 1; j <= (2*i - 1); j++){
//				if(j == 1 || j == i){
//					printf("*");
//				}
//				else{
//					printf(" ");
//				}
//			}
//		}
//		else{
//			for(j = 1; j <= (2*i - 1); j++){
//				if(j == (2*n - 1) || j == i){
//					printf("*");
//				}
//				else{
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
	
	// Bai K
//	long long n;
//	scanf("%lld", &n);
//	long long i;
//	for(i = n - 1; i >= 0; i--){ 
//		printf("%lld ", i);
//		}

	// Bai L
//	int main(){
//	long long n;
//	scanf("%lld", &n);
//	int csCuoiKhac0 = 0;
//	
//	if(n == 0 || n == 1){
//		printf("1");
//	}
//	else{
//		unsigned long long tich1 = 1;
//		unsigned long long tich = 1;
//		long dem2 = 0;
//		long dem5 = 0;
//		long long i;
//		for(i = 2; i <= n; i++){
//			long long a = i;
//			while((a % 2 == 0) || (a % 5 == 0)){
//				if(a % 2 == 0){
//					dem2++;
//					a /= 2;
//				}
//				if(a % 5 == 0){
//					dem5++;
//					a /= 5;
//				}
//			}
//			tich1 *= a;
//			tich1 = tich1 % 10;
//		}
//		
//		
//		long long m = dem2 - dem5;
//		
//		if(m == 0){
//			tich = tich1;
//		}
//		else{
//			long long du = m % 4;
//			if(du == 1){
//				tich = tich1 * 2;
//			}
//			else if(du == 2){
//				tich = tich1 * 4;
//			}
//			else if(du == 3){
//				tich = tich1 * 8;
//			}
//			else {
//				tich = tich1 * 6;
//			}
//		}
//
//		csCuoiKhac0 = tich % 10;
//		printf("%d", csCuoiKhac0);
//	}
//	
//	return 0;
//}	
	// Bai M
//int main(){
//	int n;
//	scanf("%d", &n);
//	char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//	int i, j;
//	int k, l;
//	for(i = 1; i <= (2*n - 1); i++){
//		if(i == n){
//			for(j = 1; j <= (2*n - 1); j++){
//				printf("%c", arr[0]);
//			}
//			printf("\n");
//		}
//		
//		if(i < n){
//			for(j = 1; j <= i; j++){
//				k = n - i;
//				printf("%c", arr[k]);
//			}
//			for(j = 1; j <= (n - i); j++){
//				l = n - j - i;
//				printf("%c", arr[l]);	
//			}
//			for(j = 1; j <= (n - i - 1); j++){
//				l = j ;
//				printf("%c", arr[l]);	
//			}
//			for(j = 1; j <= i; j++){
//				k = n - i;
//				printf("%c", arr[k]);
//			}
//			printf("\n");	
//		}
//		
//		if (i > n){
//			for(j = 1; j <= (2*n - i ); j++){
//				k = i - n;
//				printf("%c", arr[k]);
//			}
//			for(j = 1; j <= (i - n); j++){
//				l = i - n - j;
//				printf("%c", arr[l]);	
//			}
//			for(j = 1; j <= (i - n - 1); j++){
//				l = j;
//				printf("%c", arr[l]);	
//			}
//			for(j = 1; j <= (2*n - i ); j++){
//				k = i - n;
//				printf("%c", arr[k]);
//			}
//			printf("\n");
//		}
//	}
// 
//	return 0;
//}		
	// Bai N
	
	// Bai O
