#include<stdio.h>

struct People{
	int t ;
	int d ;
};
struct People p[10000];
struct People temp;
int n = 0;

void bubbleSort(){
	for(int i = 1; i < n; i++){
		for(int j = n; j > i; j--){
			if(p[j].t < p[j-1].t){
				temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
		}
	}
}

int main(){
	
	scanf("%d", &n);
	
	int i;
	for(i = 1; i <= n; i++){
		scanf("%d%d", &p[i].t, &p[i].d);
	}
	
	bubbleSort();
	
//	for(i = 1; i <= n; i++){
//	printf("%d %d\n", p[i].t, p[i].d);
//	}
	
	int sum = p[1].t;
	p[n+1].t = 0;
	for(i = 1; i <= n; i++){
		sum += p[i].d;
		if(sum < p[i + 1].t){
			sum = p[i + 1].t;
		}
	}
	printf("%d", sum);
	return 0;
}