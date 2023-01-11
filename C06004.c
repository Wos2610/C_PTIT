#include<stdio.h>
#include<string.h>

char str[1000006] = "";
int main(){
	gets(str);
	int n = strlen(str);
	int cCount = 0;
	int nCount = 0;
	int lCount = 0;
	int i;
	for(i = 0; i < n; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			cCount++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			cCount++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			nCount++;
		}
		else{
			lCount++;
		}
	}
	printf("%d %d %d", cCount, nCount, lCount);
}