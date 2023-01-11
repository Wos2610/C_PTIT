#include<stdio.h>
#include<string.h>
 
struct Word{
	char a[1000];
};
 
struct Word f[100];

int compare(char b[], char c[]){
	char d1[1000];
	char d2[1000];
	char d3[1000];
	
	strcpy(d1, b);
	strcpy(d2, c);
	strcpy(d3, b);
	
	strcat(d1, d2);
	strcat(d2, d3);
	
	int n = strlen(d1);
	int i;
	if(strcmp(d1, d2) < 0){
		return 1;
	}
	else{
		return 0;
	}
}

void sort(int m){
	char temp[16] = "";
	int i, j;
	for(int i = 0; i < m - 1; i++){
		if(compare(f[i].a, f[i + 1].a) == 0){
//				printf("%d ", j);
			strcpy(temp,f[i + 1].a);
//				printf("%s ", temp);
			strcpy(f[i + 1].a,f[i].a);
//				printf("%s ", f[j + 1].a);
			strcpy(f[i].a,temp);
//				printf("%s ", f[j].a);
		}
	}
//	for(i = 0; i < m; i++){
//		printf("%s ", f[i].a);
//	}
}
 
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int m;
        scanf("%d", &m);
        int i;
        for(i = 0; i < m; i++){
            scanf("%s", &f[i].a);
        }
        
        sort(m);
        
        for(i = 0; i < m; i++){
            printf("%s", f[i].a);
        }
        printf("\n");
    }
} 