#include<stdio.h>
#include<math.h>

#define M 1000006
int mark[1000006] = {0};
long long save[1000006];
void sieve(){
	mark[0] = mark[1] = -1;
	int i,j;
	for(i = 2; i * i <= M ; i++){
		if(mark[i] == 0){
			for(j = i * i; j <= M; j += i){
				mark[j] = -1;
			}	
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	sieve();
	int i;
	int index = 0;
	for(i = 2; i <= M; i++){
		if(mark[i] == 0){
			save[index] = i;
			index++;
		}
	}
	while(T--){
		long long L, R;
		scanf("%lld%lld", &L, &R);
		int i;
		int count = 0;
		for(i = 0; i < index; i++){
			if((save[i] * save[i] >= L) && (save[i] * save[i] <= R)){
				count++;
			}
		}
		printf("%d\n", count);
		
	}
}