#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void revstr(char *str1)  
{  
    
    int i, len, temp;  
    len = strlen(str1);   
    for (i = 0; i < len/2; i++)  
    {    
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
void cong (char dup[], char b[])
{
	int x,y,nho,tong,i;
	nho=0;
	char a[501];
	strcpy(a,dup);
	char c[501]="\0";
	int l1=strlen(a);
	int l2=strlen(b);
	while (l1 < l2 ) 
	{
		char temp[501]="0";
		strcat(temp,a);
		strcpy(a,temp);
		l1=strlen(a);
	}
	while (l2 < l1 ) 
	{
		char temp[501]="0";
		strcat(temp,b);
		strcpy(b,temp);
		l2=strlen(b);
	}
	char temp[501]="\0";
	for (i=strlen(a)-1; i>=0; i--)
	{
		x = a[i] - '0';
		y = b[i] - '0';
		tong = x + y + nho;
		nho = tong /10;
		sprintf(temp, "%d", tong %10);
		strcat(c,temp);
	}
	if (nho > 0) strcat(c,"1");
	revstr(c);
	strcpy(b,c);
	//printf("%s\n", b);
}
int isCircle(char a[], char x[])
{
	char b[100];
	strcpy(b, x);
	if (strlen(a) != strlen (b)) return 0;
	char temp[] = " ";
	int len = strlen(b);
	int i=0;
	while (i< len)
	{
		temp[0] = b[0];
		strcat(b, temp);
		strcpy(b, b+1);
		if (strcmp(b,a) == 0) return 1;
		i++;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int t,i,kt;
	char s[505],s1[505];
	scanf("%d\n", &t);
	while (t--)
	{
		gets(s);
		strcpy(s1,s);
		kt = 1;
		for (i=1; i<strlen(s); i++)
		{
			cong (s,s1);
			if (isCircle(s, s1) == 0)
			{
				kt = 0;
				break;
			}
		}
		if (kt) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}

