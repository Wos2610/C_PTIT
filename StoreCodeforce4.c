	// Bai A
long long dinhThuc(int matrix[100][100], int n){
	if(n == 1){
		long long sum1 = matrix[1][1];
		return sum1;
	}
	if(n == 2){
		long long sum2 = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
		return sum2;
	}
	int subMatrix[100][100];
	int k,i,j;
	long long sum = 0;
	for(k = 1; k <= n; k++){
		int sign = 1;
		for(i = 2; i <= n; i++){
			for(j = 1; j <= n; j++){
				if(j < k){
					subMatrix[i - 1][j] = matrix[i][j];
				}
				else if(j > k){
					subMatrix[i - 1][j - 1] = matrix[i][j];
				}
			}
		}
		if(k % 2 == 0){
			sign = -1;
		}
		sum += (matrix[1][k] * sign * dinhThuc(subMatrix, n - 1));
	}
	return sum;
}
int matrix[100][100];
int main(){
	int n = 3;
	int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("%lld", dinhThuc(matrix, n));
	return 0;
}
	// Bai B

	// Bai C

	// Bai D
int main(){
	long long a,b;
	scanf("%lld%lld", &a, &b);
	long long tich = a*b;
	while(b != 0){
		int x = b;
		b = a % b;
		a = x;
	}
	printf("%lld %lld", a, tich / a);
	return 0;
}
	// Bai E

	// Bai F

	// Bai G
long long tongCS(long long n){
	int sum = 0;
	while(n > 0){
		sum += (n % 10);
		n /= 10;
	}
	return sum ;
}

int main(){
	long long n;
	scanf("%lld", &n);
	long long tong = tongCS(n);
	if(n % tong == 0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
	// Bai H
int a[100][100];

int main(){
	int n ;
	scanf("%d", &n);
	int c1 = 1;		int h1 = 1;
	int cn = n;		int hn = n;
	int gt = 1;
	int i,j;
	while( (c1 <= (n + 1)/2) && (h1 <= (n + 1)/2) ){
		for(i = c1; i <= cn; i++){
			a[h1][i] = gt;
			gt++;
		}
		for(j = h1 + 1; j <= hn; j++){
			a[j][cn] = gt;
			gt++;
		}
		for(i = (cn - 1); i >= c1; i--){
			a[hn][i] = gt;
			gt++;
		}
		for(j = (hn - 1); j >= (h1 + 1); j--){
			a[j][c1] = gt;
			gt++;
		}
		c1++;
		h1++;
		cn--;
		hn--;
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
	// Bai I
int a[1000000];
int count[1000000];
int main(){
	int n;
	scanf("%d", &n);
	int i,j;
	count[0] = 0;
	a[0] = -99999;
	
	for(i = 1; i <= n ; i++){
		scanf("%d", &a[i]);
		if(a[i] > a[i - 1]){
			count[i] = count[i - 1] + 1;
		}
		else{
			count[i] = 1;
		}
	}
	
	int countmax = 0;
	for(i = 1; i <= n; i++){
//		printf("%d ", count[i]);
		if((countmax < count[i]) ){
			countmax = count[i];
		}
	}
	printf("%d\n", countmax);
	
	for(i = 1; i <= n; i++){
		if(count[i] == countmax){
			for(j = (i - countmax + 1); j <= i; j++){
				printf("%d ", a[j]);
			}
			printf("\n");
		}
	}
		
	return 0;
}

	// Bai J
int a[1000000];
int luyThua[1000000];

void hienThi(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		int i,j;
		for(i = 0; i < 10 ; i++){
			luyThua[i] = pow(3,i);
		}
		int k = 0;
		a[0] = 1; 
		int index = 0;
		for(i = 1 ; i < 10 ;i++){
			k = 2*k + 1;
			a[k] = luyThua[i];
			for(j = 0; j < k; j++){
				index = k + j + 1;
				a[index] = a[k] + a[j]; 
				
			}
		}
		for(i = 0 ; i < (index + 1); i++){
			if(a[i] >= n){
				printf("%d", a[i]);
				break;
			}
		}
		printf("\n");
		T--;
	}
	return 0;
}

	// Bai K

	// Bai L

	// Bai M

	// Bai N
void inSort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
}

void hienThi(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[100000] = {0};
	int i;
	int k = 0;
	for(i = 1; i * i <= n ; i++){
		if(n % i == 0){
			if( i != (n/i) ){
				a[k] = i;
				a[k + 1] = n/i;
				k = k + 2;
			}
			else{
				a[k] = i;
				k++;
			}
		}
	}
	
	inSort(a, k);
	
	hienThi(a, k);
	
	return 0;
}
