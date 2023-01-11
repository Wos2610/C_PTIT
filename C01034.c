#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool soChinhPhuong(int n){
	int can = sqrt(n);
	if(can * can == n){
		return true;
	}
	return false;
}
int a[1000000] = {0};
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int i;
	int begin = 0;
	int end = 0;
	if( soChinhPhuong(m) ){
		begin = sqrt(m);
	}
	else{
		begin = sqrt(m) + 1;
	}
	end = sqrt(n);
	printf("%d\n", end - begin + 1);
	for(i = begin; i < end; i++){
		printf("%d\n", i * i);
	}
	printf("%d", end * end);
	return 0;
}