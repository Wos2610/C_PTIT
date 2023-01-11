#include<stdio.h>
#include<string.h>

struct Student {
	int num;
	char name[100006];
	char date[100006];
	double mark1;
	double mark2;
	double mark3;
	double marksum;
};

struct Student f[100];

void compare(struct Student f1, struct Student f2) {
	if (f1.marksum < f2.marksum) {
		struct Student tmp;
		
		tmp.num = f2.num;
		f2.num = f1.num;
		f1.num = tmp.num;
		
		strcpy(tmp.name, f2.name);
		strcpy(f2.name, f1.name);
		strcpy(f1.name, tmp.name);
		
		strcpy(tmp.date, f2.date);
		strcpy(f2.date, f1.date);
		strcpy(f1.date, tmp.date);
		
		tmp.marksum = f2.marksum;
		f2.marksum = f1.marksum;
		f1.marksum = tmp.marksum;
	}
}

void hienThi(int n) {
	int i, j;
	double max = 0;
	for(i = 0; i < n ; i++){
		for(j = n - 1; j > i; j--){
			if (f[j - 1].marksum < f[j].marksum) {
				struct Student tmp;
				
				tmp.num = f[j].num;
				f[j].num = f[j - 1].num;
				f[j - 1].num = tmp.num;
				
				strcpy(tmp.name, f[j].name);
				strcpy(f[j].name, f[j - 1].name);
				strcpy(f[j - 1].name, tmp.name);
				
				strcpy(tmp.date, f[j].date);
				strcpy(f[j].date, f[j - 1].date);
				strcpy(f[j - 1].date, tmp.date);
				
				tmp.marksum = f[j].marksum;
				f[j].marksum = f[j - 1].marksum;
				f[j - 1].marksum = tmp.marksum;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", f[i].num);
		printf("%s ", f[i].name);
		printf("%s ", f[i].date);
		printf("%0.1lf\n", f[i].marksum);
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
		gets(f[i].date);
		scanf("%lf", &f[i].mark1);
		scanf("%lf", &f[i].mark2);
		scanf("%lf", &f[i].mark3);
		f[i].marksum = f[i].mark1 + f[i].mark2 + f[i].mark3;
	}
	hienThi(n);
}