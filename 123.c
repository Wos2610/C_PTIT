#include<stdio.h>

int count[1000000] = {0};

void nhapMang(int a[], int n, int count[]){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		count[a[i]]++;
	}
}
int a[10000000];
int main(){
	int n;
	scanf("%d", &n);
	nhapMang(a, n, count);
	
	int so = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(count[i] == 1){
			so++;
		}
	}
	if(so == n){
		long long sum = (long long )n*(n + 1)/2;
		printf("YES %lld", sum);
	}	
	else{
		printf("NO");
	}
	return 0;
}

//    #include<stdio.h>
//
//    int count[1000000]={0};
//    int main(){
//    	int n;
//    	scanf("%d", &n);
//    	int t;
//    	int i;
//    	for(i = 0; i<n; i++){
//    		scanf("%d", &t);
//    		count[t]++;
//    	}
//    	int so = 0;
//    	for(i = 1; i <= n; i++){
//    		if( count[i]==1 ) {
//				so++;
//    		}
//		}
//    	if(so == n){
//    		long long sum = n*(n+1)/2;
//    		printf("YES %lld", sum) ;
//    	}
//		else{
//    		printf("NO");
//    	}
//    	return 0;
//    }
