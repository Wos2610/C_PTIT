#include<stdio.h>

#define M 1000000


unsigned long long lcm(unsigned long long a, unsigned long long b){
    unsigned long long c = a;
    unsigned long long d = b;
    while(a != 0){
        unsigned long long x = a;
        a = b % a;
        b = x;
    }
    return ((c/b)*d);
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n,m;
        scanf("%d%d", &n, &m);
        unsigned long long save[100006] = {0};
        save[n - 1] = 1;
        for(int i = n; i <= m; i++){
        	save[i] = lcm(save[i - 1], i);
		}
        printf("%llu\n", save[m]);
    }
}