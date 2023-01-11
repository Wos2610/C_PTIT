#include<stdio.h>

int a[1000000] = {0};
int catDoi(int cs){
	if(cs == 0 || cs == 8 || cs == 9){
		return 0;
	}
	if(cs == 1){
		return 1;
	}
	return -1;
}

void kTra(long long n){
	int cs = 0;
	int count = 1;
	int mark = 0;
	long long temp = 0;
	while(n > 0){
		cs = n % 10;
		n /= 10;
		a[count]= catDoi(cs);
		count++;
	}
	
	int i;
	for(i = count - 1; i >= 1; i--){
		if(a[i] == -1){
			printf("INVALID\n");
			return;
		}
		if(a[i] == 1){
			temp = 1;
			mark = i;
			break;
		}
	}
	
	for(i = mark - 1; i >= 1; i--){
		temp = temp * 10 + a[i];
	}
	
	if(temp == 0){
		printf("INVALID\n");
		return;
	}
	printf("%lld\n", temp);
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		kTra(n);
	}
	return 0;
}