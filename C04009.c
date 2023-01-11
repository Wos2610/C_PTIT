#include<stdio.h>

int chan[1000000] ={0};
int le[1000000] ={0};
int main(){
	int n;
	scanf("%d", &n);
	int countc = 0;
	int countl = 0;
	int i;
	for(i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x % 2 == 0){
			chan[countc] = x;
			countc++;
		}
		else{
			le[countl] = x;
			countl++;
		}
	}
	for(i = 0; i < countc ; i++){
		printf("%d ", chan[i]);
	}
	printf("\n");
	for(i = 0; i < countl ; i++){
		printf("%d ", le[i]);
	}
	return 0;
}