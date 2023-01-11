#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,j;
	long long int a[30][30];
	for (i=0; i<=25; i++) a[0][i] = 1;
	for (i=0; i<=25; i++) a[i][0] = 1;
	for (i=1; i<=25; i++)
	{
		for (j=1; j<=25; j++) 
		{
			a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n,m;
		scanf("%d %d", &n, &m);
		printf("%lld\n", a[n][m]);
	}
	return 0;
}