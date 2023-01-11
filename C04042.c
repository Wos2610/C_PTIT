#include<stdio.h>

int save[1000006] = {0};
int count[1000006] = {0};
int a[1000006] = {0};

int xH(int save[], int index, int x){
	int i;
	for(i = 0; i < index; i++){
		if(x == save[i]){
			return i;
		}
	}
	return -1;
}

void check(int n, int a[], int save[]){
	int i;
	int index = 0;
	for(i = 0; i < n; i++){
		if(xH(save, index, a[i]) == -1){
			save[index] = a[i];
			count[index] = 1;
			index++;
		}
		else{
			count[xH(save, index, a[i])]++;
		}
	}
	for(i = 0; i < index; i++){
		if(count[i] > 1){
			printf("%d\n", save[i]);
			return;
		}
	}
	printf("NO\n");
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        int i;
        for(i = 0; i < n; i++){
        	scanf("%d", &a[i]);
		}
		check(n, a , save);
    }
}