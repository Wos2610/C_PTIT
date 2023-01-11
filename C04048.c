#include<stdio.h>

int a[10000];
int save[10000];
int mark[10000];

int main(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= m; i++){
		scanf("%d", &a[i]);
		for(int j = a[i] - k; j <= a[i] + k; j++){
			mark[j] = 1;
		}
	}
	
	int index = 0;
	for(int i = 1; i <= n; i++){
		if(mark[i] == 0){
			save[index] = i;
			index++;
		}
	}
	
	int count = 0;
	for(int i = 1; i < index; i++){
		if(mark[save[i]] == 0){
			count++;
			for(int j = save[i] - k; j <= save[i] + k; j++){
				mark[j] = 1;
			}
		}
	}
	if(mark[save[0]] == 0){
		count++;
	}
	printf("%d", count);
}