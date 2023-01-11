#include<stdio.h>
#include<string.h>

void check(char s1[], char s2[], char s[], int n){
    char temp[2000] = "\0";
    int d = 0;
    while(strcmp(temp,s) != 0){
        if(d > 2*n){
            printf("-1\n");
            return;
        }
        int index = 0;
        int i;
        for(i = 0; i < n; i ++){
        	temp[index] = s2[i];
        	index++;
        	temp[index] = s1[i];
        	index++;
        }
        // cout << temp << " ";
        for(i = 0; i < n; i++){
            s1[i] = temp[i];
        }
        for(i = n; i < 2*n; i++){
            s2[i - n] = temp[i];
        }
        d++;
    }
    printf("%d\n", d);
    return;
}

int main(){
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }
        char s1[1000], s2[1000], s[2000];
        scanf("%s%s%s", s1, s2, s);
        check(s1, s2, s, n);
    }
}