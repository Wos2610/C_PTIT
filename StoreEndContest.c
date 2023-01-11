	// Bai A
long long a[1000000];
long long count[1000000] = {0};
int main(){
	long long n;
	scanf("%lld", &n);
	long long l,r;
	scanf("%lld%lld", &l, &r);
	long long i,j;
	int dem = 0;
	for(i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	for(i = l; i <= r; i++){
		for(j = 0 ; j < n; j++){
			if(i % a[j] == 0){
				count[i]++;
				if(count[i] > 1){
					break;
				}
			}
		}
		if(count[i] == 1){
			dem++;
		}
	}
	printf("%d", dem);
	
	return 0;
}

	// Bai B


	// Bai C


	// Bai D


	// Bai E


	// Bai F


	// Bai G



