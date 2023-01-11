#include<stdio.h>
#include<string.h>

char s1[1000];
char s2[1000];
char temp[1000];
char save1[1000][1000];
char save2[1000][1000];
char save3[1000][1000];
char save4[1000][1000];
int mark[1000];
int index = 0, a = 0, b = 0;

void process(){
	index = 0;
	gets(s1);
	gets(s2);
	
	// Tach xau
	a = 0, b = 0;
	char *pch;
	pch = strtok(s1, " ");
	while(pch != NULL){
		strcpy(save1[a], pch);
		a++;
		pch = strtok(NULL, " ");
	}
	
	pch = strtok(s2, " ");
	while(pch != NULL){
		strcpy(save2[b], pch);
		b++;
		pch = strtok(NULL, " ");
	}
	
	for(int i = 0; i < a; i++){
		strcpy(save3[i], save1[i]);
	}
	for(int i = 0; i < b; i++){
		strcpy(save4[i], save2[i]);
	}
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < strlen(save3[i]); j++){
			if(save3[i][j] >= 'A' && save3[i][j] <= 'Z'){
				save3[i][j] += 32;
			}
		}
		
	}
	for(int i = 0; i < b; i++){
		for(int j = 0; j < strlen(save4[i]); j++){
			if(save4[i][j] >= 'A' && save4[i][j] <= 'Z'){
				save4[i][j] += 32;
			}
		}
		
	}
	
	// Danh dau cac phan tu s2 co trong s1
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(strcmp(save4[j], save3[i]) == 0){
				mark[i] = 1;
			}
		}
	}
	
	
}

int main(){
	int T;
	scanf("%d\n", &T);
	int T1 = T;
	while(T--){
		process();
		printf("Test %d: ", T1 - T);
		// In ra cac phan tu con lai trong save1
		for(int i = 0; i < a; i++){
			if(mark[i] == 0){
				printf("%s ", save1[i]);
			}
		}
		
		// Reset lai mang mark
		for(int i = 0; i < a; i++){
			mark[i] = 0;
		}
		printf("\n");
	}
}