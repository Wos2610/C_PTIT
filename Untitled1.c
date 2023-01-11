#include<stdio.h>
 
int main(){
	long long n;
	scanf("%lld", &n);
	int csCuoiKhac0 = 0;
	
	if(n == 0 || n == 1){
		printf("1");
	}
	else{
		unsigned long long tich1 = 1;
		unsigned long long tich = 1;
		int dem2 = 0;
		int dem5 = 0;
		long long i,j;
		for(i = 2; i <= n; i++){
			long long a = i;
			j = 2;
			while(a > 1){
				if(a % j == 0){
					if(j == 2){
						dem2++;
					}
					else if(j == 5){
						dem5++;
					}
					else{
						tich1 *= j;
					}
					a /= j;
				}
				else{
					j++;
				}
			}
		}
		tich1 = tich1 % 10;
		printf("%d ", tich1);
		int m = dem2 - dem5;
		if(m == 0){
			tich = tich1;
		}
		else if(m % 4 == 1){
			tich = tich1 * 2;
		}
		else if(m % 4 == 2){
			tich = tich1 * 4;
		}
		else if(m % 4 == 3){
			tich = tich1 * 8;
		}
		else if(m % 4 == 0){
			tich = tich1 * 6;
		}
		
		csCuoiKhac0 = tich % 10;
		printf("%d", csCuoiKhac0);
	}
	
	return 0;
}

