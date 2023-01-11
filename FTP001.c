#include<stdio.h>
int a[100][100];
void matrix(int n){
	int i,j;
	for(i = 0; i < n; i++){
		int tmp = 0;
		for(j = 0; j < n; j++){
			if(j <= i){
				a[i][j] = tmp;
			}
			else{
				tmp++;
				a[i][j] = tmp;
			}
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	matrix(n);
}