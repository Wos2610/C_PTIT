// Bai 
#include<stdio.h>
#include<math.h>
 
void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
 
void sortDe(int b[], int m){
	int n;
	int i, j;
	for(i = 0; i < m; i++){
		for(j = m - 1; j > i; j--){
			if(b[j] > b[j - 1]){
				int temp = b[j - 1];
				b[j - 1] = b[j];
				b[j] = temp;
			}
		}
	}
}
 
void hienThi(int a[],int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
 
int main(){
	int n;
	scanf("%d", &n);
	int a[100000];
	nhapMang(a, n);
	int cs[100000] = {0};
	int after[100000] = {0};
	
	int i,k;
	for(i = 0; i < n; i++){
		int temp = a[i];
		int soCs = 0;
		while( abs(temp) > 0 ){
			cs[soCs] = temp % 10;
			soCs++;
			temp /= 10;
		}
		sortDe(cs, soCs);
		
		int j ;
		if( cs[0] == 0 ){
			for(j = 1; j < soCs; j++){
				if(cs[j] != 0){
					int tg= cs[j];
					cs[j] = cs[0];
					cs[0] = tg;
					break;
				}
			}
		}
		
		for(k = 0; k < soCs; k++){
			after[i] = (after[i] * 10 + cs[k]);
		}
	}
	sortDe(after, n);
	hienThi(after, n);
	return 0;
}
