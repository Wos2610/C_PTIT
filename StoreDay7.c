// Buoi 7

	//Bai 1
int main(){
	int n,m;
	printf("Nhap n, m : ");
	scanf("%d%d", &n, &m);
	
	int a[100][100];
	int b[100][100];
	int sum[100][100] = {0};
	
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	// Bai 2
int main(){
	int n,m;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[100][100];
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	long long sum = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == i){
				sum += a[i][j];
			}
		}
	}
	printf("Sum = %lld", sum);
	return 0;
}

	// Bai 3
	int main(){
	int n,m;
	printf("Nhap n, m: ");
	scanf("%d%d", &n, &m);
	
	int a[100][100];
	int b[100][100];
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	// Bai 4
		
	// Bai 5
