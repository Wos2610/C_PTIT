#include<stdio.h>
#include<string.h>

char str[1000];

struct Word{
	char s[1000];
	int l;
	int c;
};

struct Word a[1000];

int check(char str[]){
	int n = strlen(str);
	for(int i = 0; i < n/2; i++){
		if(str[i] != str[n - i - 1]){
			return 0;
		}
	}
	return 1;
}

int isAppear(int index, char x[]){
	for(int i = 0; i < index; i++){
		if(strcmp(x, a[i].s) == 0){
			return i;
		}
	}
	return -1;
}

int main(){
	int index = 0;
	int max = 0;
	while(scanf("%s", str) != -1){
		int k = isAppear(index, str);
		if(k == -1){
			strcpy(a[index].s, str);
			a[index].l = strlen(str);
			if(strlen(str) > max){
				max = strlen(str);		
			}
			a[index].c = 1;
			index++;
		}
		else{
			a[k].c++;
		}
	}
	for(int i = 0; i < index; i++){
		if(a[i].l == max){
			printf("%s %d %d\n", a[i].s, a[i].l, a[i].c);
		}
	}
}