#include<stdio.h>
#include<math.h>

int kTra(int n){
	int dao = 0;
	int m = n;
	int sum = 0;
	while(n > 0){
		int cs = n % 10;
		if(cs == 4){
			return 0;
		}
		dao = dao * 10 + cs;
		sum += cs;
		n /= 10;
	}
	if(dao != m){
		return 0;
	}
	if(sum % 10 != 0){
		return 0;
	}
	return 1;
}




int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n);
		int begin = pow(10, n - 1);
		int end = pow(10, n);
		int i;
		for(i = begin; i < end; i++){
			if(kTra(i)){
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}