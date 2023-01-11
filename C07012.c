#include<stdio.h>
#include<string.h>

struct Item {
	int num;
	char name[100006];
	char type[100006];
	double buyPrice;
	double sellPrice;
	double profit;
};

struct Item f[100];

void compare(struct Item f1, struct Item f2) {
	if (f1.profit < f2.profit) {
		struct Item tmp;
		
		tmp.num = f2.num;
		f2.num = f1.num;
		f1.num = tmp.num;
		
		strcpy(tmp.name, f2.name);
		strcpy(f2.name, f1.name);
		strcpy(f1.name, tmp.name);
		
		strcpy(tmp.type, f2.type);
		strcpy(f2.type, f1.type);
		strcpy(f1.type, tmp.type);
		
		tmp.profit = f2.profit;
		f2.profit = f1.profit;
		f1.profit = tmp.profit;
	}
	return ;
}

void hienThi(int n) {
	int i, j;
	for(i = 0; i < n ; i++){
		for(j = n - 1; j > i; j--){
			if(f[j - 1].profit < f[j].profit) {
				struct Item tmp;
				
				tmp.num =f[j].num;
				f[j].num = f[j - 1].num;
				f[j - 1].num = tmp.num;
				
				strcpy(tmp.name,f[j].name);
				strcpy(f[j].name, f[j - 1].name);
				strcpy(f[j - 1].name, tmp.name);
				
				strcpy(tmp.type,f[j].type);
				strcpy(f[j].type, f[j - 1].type);
				strcpy(f[j - 1].type, tmp.type);
				
				tmp.profit =f[j].profit;
				f[j].profit = f[j - 1].profit;
				f[j - 1].profit = tmp.profit;
			}
		}
		
	}
	for (i = 0; i < n; i++) {
		printf("%d ", f[i].num);
		printf("%s ", f[i].name);
		printf("%s ", f[i].type);
		printf("%0.2lf\n", f[i].profit);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("\n");
		f[i].num = i + 1;
		gets(f[i].name);
		scanf("\n");
		gets(f[i].type);
		scanf("%lf", &f[i].buyPrice);
		scanf("%lf", &f[i].sellPrice);
		f[i].profit = f[i].sellPrice - f[i].buyPrice;
	}
	hienThi(n);
}