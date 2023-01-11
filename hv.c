#include<stdio.h>
#include<string.h>

int a[1000][1000] = {0};

int check(int indexi, int indexj){
	int i, j;
	for(i = indexi - 1; i >= 1; i--){
		if(a[i][indexj] != 1){
			return 0;
		}
	}
	for(i = indexj - 1; j >= 1; j--){
		if(a[indexi][j] != 1){
			return 0;
		}
	}
	return 1;
}

void deQuy(int n, int m){
	int i, j;
	int max = 0;
	for(i = 1; i <= n; i++){
    	for(j = 1; j <= m; j++){
    		if(a[i][j] == 1){
    			int indexi = i;
    			int indexj = j;
    			int count = 1;
    			while(1){
    				indexi++;
    				indexj++;
    				count++;
    				if(count > max){
    					max = count;
					}
    				if(indexi > n){
    					break;
					}
    				if(indexj > m){
    					break;
					}
					if(check(indexi, indexj) == 0){
						break;
					};
				}
			}	
		}
	}
	printf("%d\n", max);	
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	int n, m;
    	scanf("%d%d", &n, &m);
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= m; j++){
    			scanf("%d", &a[i][j]);
			}
		}
		deQuy(n, m);
	}
}