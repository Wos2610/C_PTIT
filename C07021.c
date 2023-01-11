#include<stdio.h>
#include<string.h>

struct Student{
	int msv;
	char name[100];
	float a ,b ,c ;
};

struct Student f[100];

char str[100];
void add(int n){
    int d = 1;
    while(d <= n){
        f[d].msv = d;
        scanf("\n");
        gets(f[d].name);
//        scanf("\n%[^\n]s", f[d].name);
        scanf("%f%f%f", &f[d].a, &f[d].b, &f[d].c);
//        printf("%f%f%f\n",d, f[d].a, f[d].b, f[d].c);
        d++;
    }
}

void change(int d){
	scanf("\n");
    gets(f[d].name);
	scanf("%f%f%f", &f[d].a, &f[d].b, &f[d].c);
}

void show(int d){
	for(int i = d; i >= 1; i--){
		printf("%d ",f[i].msv);
		printf("%s ", f[i].name);
		printf("%.1f %.1f %.1f\n",f[i].a, f[i].b, f[i].c);
	}
}

int main(){
    int n;
	while(1){
		int choice = 0;
		scanf("%d", &choice);
		if(choice == 1){
			scanf("%d\n", &n);
			add(n);
			printf("%d\n", n);
		}
		else if(choice == 2){
			int m;
			scanf("%d", &m);
			change(m);
			printf("%d\n", m);
		}
		else{
			show(n);
			return 0;
		}
	}
}