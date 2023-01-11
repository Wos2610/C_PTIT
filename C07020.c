#include<stdio.h>
#include<string.h>

struct Team{
    char name[1000];
    int k;
    int m;
    int count;
};

struct Team f[76];

void tinh(int n){
    char maxname[1000];
    int max = 0;
    long long dem = 0;
    for(int i = 0; i < n; i++){
        while(f[i].m / f[i].k > 0){
            int a = f[i].m/f[i].k;
            f[i].count += a;
            f[i].m = f[i].m - a*f[i].k + a*2;
        }
        if(f[i].count > max){
        	strcpy(maxname, f[i].name);
            max = f[i].count;
        }
        dem += f[i].count;
    }
    printf("%d\n%s", dem, maxname);
}


int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", &f[i].name) ;
        scanf("%d%d", &f[i].k, &f[i].m);
    }
    tinh(n);
}