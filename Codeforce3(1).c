#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int count[1000000] = {0};
char str[1000000];
int main(){
	int n;
	scanf("%d", &n);
	fflush(stdin);
	fgets(str, n + 1 , stdin);
	
	char hoa[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char thuong[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < 1; j++){
			if(str[i] == hoa[j] || str[i] == thuong[j]){
				count[j]++;
			}
			if((double)count[j] > (double)(n/2)){
				printf("So ugly");
				return 0;
			}
		}
	}
	printf("So beautiful");
	
	return 0;
}
