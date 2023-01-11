#include<stdio.h>
#include<stdbool.h>

bool soThuanNghich(int n){
	int dao = 0;
	int m = n;
	while(n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if(dao == m){
		return true;
	}
	else{
		return false;
	}
}

bool csChia2(int n){
	int cs = 0;
	while(n > 0){
		cs = n % 10;
		if(cs % 2 != 0){
			return false;
		}
		n /= 10;
	}
	return true;
}

bool ketThucBangChin(int n){
	if(n % 10 == 9){
		return true;
	}
	return false;
}

int main(){
	int n;
	scanf("%d", &n);
	if(soThuanNghich(n) && csChia2(n)){
		printf("YES 1\n");
	}
	else{
		printf("NO 1\n");
	}
	
	if(soThuanNghich(n) && ketThucBangChin(n)){
		printf("YES 2\n");
	}
	else{
		printf("NO 2\n");
	}
	return 0;
}