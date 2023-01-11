#include<stdio.h>
#include<stdlib.h>

int a[10000] = {0};

struct Student{
	int stt;
	char name[1000];
	float a, b, c;
	
};

struct Student s[106];

void add(int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		s[i].stt = i + 1;
		gets(s[i].name);
		scanf("%f%f%f", &s[i].a, &s[i].b, &s[i].c);
	}
}

void add(int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		s[i].stt = i + 1;
		gets(s[i].name);
		scanf("%f%f%f", &s[i].a, &s[i].b, &s[i].c);
	}
}

int main(){
	int choice = 0;
	
	while(choice != 3){
		scanf("%d", &choice);
		switch(){
			case 1:
				int n;
				scanf("%d", &n);
				add(n);
				
			case 2:
				int x;
				scanf("%d", &x);
				add(n);
				
		}
	}
	return 0;
}