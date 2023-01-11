#include<stdio.h>

char s[1006][1006];
long long a[1006][1006];

void process(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%s", s[i]);
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < m; j++){
			a[i][j + 1] = s[i][j] - '0'; 
		}
	}
	
	long long b[3][1006] = {0};
	long long c[1006][3] = {0};
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] != 0){
				b[a[i][j]][j]++;
				c[i][a[i][j]]++;
			}
		}
	}
	
//	for(int i = 1; i <= 2; i++){
//		for(int j = 1; j <= m; j++){
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
	
	// p1[i,j]
	// p2[i,p]
	// p3[q,p]
	long long count = 0;
	for(int i = 1 ; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] != 0 ){
				count += 
			}
		}
	}
	printf("%lld", count);
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		process();
		printf("\n");
	}
}