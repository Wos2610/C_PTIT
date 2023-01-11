#include<stdio.h>
#include<math.h>

int csKhongGiam(int n){
	int cs1 = n % 10;
	int cs2 = 0 ;
	while(n > 0){
		cs2 = cs1;
		n /= 10;
		cs1 = n % 10;
		if(cs1 > cs2){
			return 0;
		}	
	}
	return 1;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int begin = pow(10,n-1);
		int end = pow(10,n);
		int i;
		for(i = begin; i < end; i++){
			if(csKhongGiam(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}