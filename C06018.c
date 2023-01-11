#include<stdio.h>
#include<string.h>

char s1[1000];
char s2[1000];
char temp[1000];
char save1[1000][1000];
char save2[1000][1000];
char save[1000][1000];
int mark[1000];
int index = 0;

// Sap xep mang cuoi cung theo thu tu tu dien
void bubbleSort(){
	for(int i = 0; i < index - 1; i++){
		for(int j = i + 1; j < index; j++){
			if(strcmp(save[j], save[j - 1]) < 0){
				strcpy(temp, save[j]);
				strcpy(save[j], save[j - 1]);
				strcpy(save[j - 1], temp);
			}
		}
	}
}
void process(){
	index = 0;
	gets(s1);
	gets(s2);
	
	// Tach xau
	int a = 0, b = 0;
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
	// Danh dau cac phan tu s2 co trong s1
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(strcmp(save2[j], save1[i]) == 0){
				mark[i] = 1;
			}
		}
	}
	
	// Danh dau cac phan tu trung nhau trong phan con lai cua s1 ( phan ma khong trung s2)
	for(int i = 0; i < a - 1; i++){
		for(int j = i + 1; j < a; j++){
			if(strcmp(save1[j], save1[i]) == 0){
				mark[j] = 1;
			}
		}
	}
	
	// Luu lai cac phan tu thoa man vao mang save
	for(int i = 0; i < a; i++){
		if(mark[i] == 0){
			strcpy(save[index], save1[i]);
			index++;
		}
	}
	
	// Sap xep theo thu tu tu dien
	bubbleSort();
	// Reset lai mang mark
	for(int i = 0; i < a; i++){
		mark[i] = 0;
	}
}

int main(){
	int T;
	scanf("%d\n", &T);
	while(T--){
		process();
		for(int i = 0; i < index; i++){
			printf("%s ", save[i]);
		}
		printf("\n");
	}
	
}