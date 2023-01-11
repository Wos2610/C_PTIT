#include<stdio.h>
#include<string.h>

char str[60] ;
int index1[26] = {0};
int index2[26] = {0};

void dem(){
	int i, j;
	for(i = 0; i < 26; i++){
		index1[i] = -1;
	}
	for(i = 0; i < 52; i++){
		if(index1[str[i] - 'A'] == -1){
			index1[str[i] - 'A'] = i;
		}
		else{
			index2[str[i] - 'A'] = i;
		}
	}
	int count = 0;
	for(i = 0; i < 26; i++){
		for(j = 0; j < 26; j++){
			if(index1[i] < index1[j] && index1[j] < index2[i] && index2[i] < index2[j]){
				count++;
			}
		}
//		printf("%d %d\n", index1[i], index2[i]);
	}
	printf("%d", count);
}
int main(){
	scanf("%s", &str);
	dem(str);
}