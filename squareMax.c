#include <math.h>
#include <stdio.h>

int ar[505][505] = {0};
int c,d;

int check(int* x,int* y,int* k)
{
    c=*x+*k-1;
    d=*y+*k-1;
    int i;
    for(i = 0; i < *k;i++)
    {
        if(!ar[c][*y+i])
        {
            return 0;
        }
        if(!ar[*x+i][d])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    long long a,b;
    int ans;
    int tmp;
    int sv[501];

    int T;
    scanf("%d", &T);
    while(T--){
        ans=0;
        int co[501]={};
        long long a, b;
        scanf("%lld%lld", &a, &b);
        int i,j;
        for(i = 0;i < a; i++)
            for(j = 0;j < b;j++)
            {
                scanf("%d",&ar[i][j]);
                if(ar[i][j])sv[co[i]++]=j;
            }
        for(i = 0;i < a; i++)
        {
            for(j = 0;j < co[i];j++)
            {
                tmp = 1;
                if (i + ans >= a || sv[j] + ans >= b)continue;
                while (i + tmp < a && sv[j] + tmp < b)
                {
                    if (check(&i, &sv[j], &tmp))tmp++;
                    else
                    {
                        break;
                    }
                }
                if(!check(&i, &sv[j], &tmp))tmp--;
                if(ans < tmp){
                	ans = tmp;
				}
            }
        }
        printf("%lld\n",ans);

    }
    return 0;
}


