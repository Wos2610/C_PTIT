#include<stdio.h>

struct Number{
	int num;
	int count;
};

struct Number a[1000000], temp;

int isKoGiam(int n){
	int cssau = 0;
	int cstruoc = n % 10;
	n /= 10;
	while(n > 0){
		cssau = cstruoc;
		cstruoc = n % 10;
		n /= 10;
		if(cssau < cstruoc){
			return 0;
		}
	}
	return 1;
}

int isAppear(struct Number a[], int index, int x){
	for(int i = 0; i < index; i++){
		if(x == a[i].num){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	int index = 0;
	int i,j;
	char c = ' ';
	while(scanf("%d", &n) != -1){
		if(isKoGiam(n)){
			if(isAppear(a, index, n) == -1){
				a[index].num = n;
				a[index].count = 1;
				index++;
			}
			else{
				a[isAppear(a, index, n)].count++;
			}
		}
		c = getchar();
	}
	
	for(i = 0; i < index - 1; i++){
		for(int j = index - 1; j > i; j--){
			if(a[j].count > a[j - 1].count){
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	
	for(i = 0; i < index; i++){
		printf("%d %d\n", a[i].num, a[i].count);
	}
	
}