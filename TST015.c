#include<stdio.h>
#include<math.h>

int n;
struct Triangle{
	float a, b, c;
	float p;
	float S;
};

struct Triangle f[100], temp;

void nhap(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%f%f%f", &f[i].a, &f[i].b, &f[i].c);
		f[i].p = (f[i].a + f[i].b + f[i].c)*0.5;
	}
}

void DT(){
	for(int i = 1; i <= n; i++){
		f[i].S = sqrt(f[i].p*(f[i].p - f[i].a)*(f[i].p - f[i].b)*(f[i].p - f[i].c));	
	}
}

void sort(){
	for(int i = 1; i < n; i++){
		for(int j = n; j > i; j--){
			if(f[j].S < f[j - 1].S){
				temp = f[j];
				f[j] = f[j - 1];
				f[j - 1] = temp;
			}
		}
	}
}
void show(){
	for(int i = 1; i <= n; i++){
		printf("%1.f %1.f %1.f\n", f[i].a, f[i].b, f[i].c);
	}
}

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	nhap();
	DT();
	sort();
	show();
}