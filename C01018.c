#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		int can = sqrt(n);
		if(can * can == n){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		T--;
	}
	return 0;
}