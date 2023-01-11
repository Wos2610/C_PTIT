	// Bai 1
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld", a * b);
	// Bai 2
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 1; i <=(2*n - 1); i++){
		if(i <= n){
			for(j = 1; j <= (2*n - i) ; j++){
				if(j == i || j == (2*n - i)){
					printf("%d",i);
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
		else{
			for(j = 1; j <= i; j++){
				if(j == (2*n - i) || j == i){
					printf("%d", 2*n - i );
				}
				else{
					printf(" ");
				}
				}
				printf("\n");
			}
		}
	// Bai 3
	int n;
	scanf("%d", &n);
	double sum = 1;
	int i;
	for(i = 1; i <= n; i++){
		sum += (double) 1/(2*i +1);
	}
	printf("%0.6lf", sum);
	return 0;
	// Bai 4
int main(){
	long long n,m;
	scanf("%lld%lld", &n, &m);
	long long landong = 0;
	long long p = 3;
	if(m < 3){
		p = m; 
		m = 3;			// m = 3 > p
	}
	long long du = n % m;
	while(du % p != 0){
		du += m;
		if(du > n || du > (p*m)){
			printf("-1");
			return 0;
		}
	}
	landong = (n - du)/m + du/p;
	printf("%lld", landong);
	return 0;
}
	// Bai 5
bool ngTo(long long n){
	if(n < 2){
		return false;
	}
	else{
		long long i;
		for(i = 2; i*i <= n; i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	long long n;
	scanf("%lld", &n);
	long long count = 0;
	long long i;
	for(i = 1; i*i <= n; i++){
		if(i == 1){
			if(ngTo(n/i)){
				count++;
			}
		}
		else{
			if( (n % i == 0) ){
				if(ngTo(i)){
					if(i != (n/i) && ngTo(n/i)){
						count = count + 2;
					}
					else{
						count++;
					}
				}
				else{
					if(i != (n/i) && ngTo(n/i)){
						count = count + 1;
					}
				}
				
			}
		}
		
	}
	printf("%lld", count);
	return 0;
}
	// Bai 6

	// Bai 7
	double n;
	scanf("%lf", &n);
	double xacSuat = 0.5*(n - 2)/(n - 1) + 1/(n - 1);
	printf("%lf", xacSuat);

