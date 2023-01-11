	// Bai 1
	int main(){
	int a[100];
	int n, m;
	scanf("%d%d", &n, &m);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = m; i < n - 1; i++){
		a[i] = a[i + 1];
	}
	for(i = 0; i < n - 1; i++){
		printf("%d ", a[i]);
	}
 
	return 0;
}
	// Bai 2
int main(){
	int a[100];
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = n ; i > m; i--){
		a[i] = a[i - 1];
	}
	a[m + 1] = k;
	for(i = 0; i < n + 1; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
	// Bai 3
int main(){
	int a[100];
	int n;
	scanf("%d", &n);
	int i;
 
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int min = a[0];
	int max = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max= a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("%d", max - min);	
	return 0;
}
	// Bai 4 
// Cach 1
int main(){
	int a[100000];
	int n;
	scanf("%d", &n);
	int i,j;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tg;
			}
		}
	}
	long long tich = a[n - 2] * a[n - 1];
	printf("%lld", tich);
	return 0;
}
// Cach 2
int main(){
	int a[100000];
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max1 = -1000000;
	int max2 = -1000000;
	for(i = 0; i < n; i++){
		if(max1 < a[i]){
			max2 = max1;
			max1 = a[i];
		}
		else if(max2 < a[i]){
			max2 = a[i];
		}
	}
	
	long long tich = max1 * max2;
	printf("%lld", tich);
	return 0;
}

	// Bai 5	
int main(){
	int a[100000];
	int n,k;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Nhap k = ");
	scanf("%d", &k);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int count = 0;
	for(i = 0; i < n ; i++){
		if(a[i] == k){
			count++;
		}
	}
	
	printf("So lan xuat hien cua %d = %d", k, count);
	
	return 0;
}
