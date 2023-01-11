	// Bai A
void timMax1Max2(int a[], int n){
	int max1 = -1000000;
	int max2 = -1000000;
	int j;
	for(j = 0; j < n; j++){
		if(a[j] > max1){
			max2 = max1;
			max1 = a[j];
		}
		else if( (a[j] > max2) && (a[j] != max1)){
			max2 = a[j];
		}
	}
	if(max2 == -1000000){
		printf("0");
	}
	else{
		printf("%d %d\n", max2, max1);
	}
}

int main(){
	int T;
	scanf("%d", &T);
	int a[100000];
	int i,j;
	while(T > 0){
		int n;
		scanf("%d", &n);
		for(j = 0; j < n; j++){
			scanf("%d", &a[j]);
		}
		timMax1Max2(a, n);
		T--;
	}
	return 0;
}

	// Bai B
int count[1000000] = {0};
char str[1000000];
int main(){
	int n;
	scanf("%d", &n);
	fflush(stdin);
	fgets(str, n + 1 , stdin);
	
	char hoa[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char thuong[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < 1; j++){
			if(str[i] == hoa[j] || str[i] == thuong[j]){
				count[j]++;
			}
			if((double)count[j] > (double)(n/2)){
				printf("So ugly");
				return 0;
			}
		}
	}
	printf("So beautiful");
	
	return 0;
}
// Cach 2
int count[1000000] = {0};
char str[1000000];
int main(){
	int n;
	scanf("%d", &n);
	fflush(stdin);
	fgets(str, n + 1 , stdin);
	
	int i;
	for(i = 0; i < n; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			count[str[i] - 'a']++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			count[str[i] - 'A']++;
		}
	}
	for(i = 0; i < 26; i++){
		if( (double)count[i] > (double)(n/2) ){
				printf("So ugly");
				return 0;
			}
	}
	printf("So beautiful");
	
	return 0;
}

	// Bai C
	void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

int chiSo(int save[], int soGT, int x){
	int j;
	for(j = 0; j < soGT; j++){
		if(x == save[j]){
			return j;
		}
	}
	return -1;
}

int main(){
	int n;
	scanf("%d", &n);

	int a[100000];
	nhapMang(a, n);
	
	int save[100000]; // luu so cac gia tri khong trung nhau cua mang
	int soGT = 0;
	int count[100000]; // luu so lan xuat hien cua cac phan tu trong mang save
	
	int i;
	for(i = 0; i < n; i++){
		int index = chiSo(save, soGT, a[i]); // chi so cua phan tu trong mang save
		if( index == -1){
			save[soGT] = a[i];
			count[soGT] = 1;
			soGT++;
		}
		else{
			count[index]++;
		}
	}
	
	// Tim ra so lan xuat hien nhieu nhat
	int maxcount = -1000000;
	for(i = 0; i < soGT; i++){
		if(maxcount < count[i]){
			maxcount = count[i];
		}
	}
	
	// Tim ra so lon nhat co so lan xuat hien nhieu nhat
	int max = -1000000;
	for(i = 0; i < soGT; i++){
		if(count[i] == maxcount){
			if(max < save[i]){
				max = save[i];
			}
		}
	}
	
	printf("%d %d", max, maxcount);

	return 0;
}

	// Bai D
void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void sortDe(int b[], int m){
	int n;
	int i, j;
	for(i = 0; i < m; i++){
		for(j = m - 1; j > i; j--){
			if(b[j] > b[j - 1]){
				int temp = b[j - 1];
				b[j - 1] = b[j];
				b[j] = temp;
			}
		}
	}
}

void hienThi(int a[],int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[100000];
	nhapMang(a, n);
	int cs[100000] = {0};
	int after[100000] = {0};
	
	int i,k;
	for(i = 0; i < n; i++){
		int temp = a[i];
		int soCs = 0;
		while( abs(temp) > 0 ){
			cs[soCs] = temp % 10;
			soCs++;
			temp /= 10;
		}
		sortDe(cs, soCs);
		
		int j ;
		if( cs[0] == 0 ){
			for(j = 1; j < soCs; j++){
				if(cs[j] != 0){
					int tg= cs[j];
					cs[j] = cs[0];
					cs[0] = tg;
					break;
				}
			}
		}
		
		for(k = 0; k < soCs; k++){
			after[i] = (after[i] * 10 + cs[k]);
		}
	}
	sortDe(after, n);
	hienThi(after, n);
	return 0;
}

	// Bai E
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

	// Bai F
void inSort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if( a[j - 1] > a[j] ){
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tg;
			}
		}
	}
}
 
int main(){
	int a[100000];
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	inSort(a, n);
	int soDoi = 1;
	for(i = 0; i < n; i++){
		if(a[i + 1] == (a[i] + 1)){
			soDoi = 2;
		}
	}
	printf("%d", soDoi);
	return 0;
	
}
	
	// Bai G
int chiSo(int b[], int m, int x){
	int i;
	for(i = 0; i < m; i++){
		if(x == b[i]){
			return i;
		}
	}
	return -1;
}

int a[1000000];
int b[1000000];
int count[1000000] = {0};

int main(){
	
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int soCacSo= 0;
	for(i = 0; i < n; i++){
		int index = chiSo(b, soCacSo, a[i]);
		if(index == -1){
			b[soCacSo] = a[i];
			count[soCacSo] = 1; 
			soCacSo++;
		}
		else{
			count[index]++;
		}
	}
	
	unsigned long long soCap = 0;
	for(i = 0; i < soCacSo; i++){
		if( count[i] > 1 ){
			soCap += (unsigned long long) count[i] * (count[i] - 1) / 2 ;
		}
	}
	printf("%llu", soCap);
	return 0;
	
}

	// Bai H
	void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void hienThi(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int a[10000000];
int temp[10000000];
int main(){
	int n,k;
	scanf("%d%d", &n, &k);
	
	nhapMang(a, n);
	
	int i;
	k = k % n;
	for(i = 0; i < k; i++){
		temp[i] = a[i];
	}
	
	for(i = 0; i < n; i++){
		a[i] = a[i + k];
		if( i >= (n - k) ){
			a[i] = temp[i - n + k];
		}
	}
	
	hienThi(a, n);
	
	return 0;
}

	// Bai I
	int main(){
	int n,k;
	scanf("%d%d", &n, &k);
	int a[100000];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	if(k == 0){
		printf("0");
		return 0;
	}
	else{
		int count = 0;
		for(i = 0; i < n; i++){
			if(a[i] % k == 0){
				count++;
			}
		}
		printf("%d", count);
	}
	
	return 0;
}

	// Bai J
void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n ; i++){
		scanf("%d", &a[i]);
	}
}
 
 
int a[1000000];
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int x;
		scanf("%d", &x);
		int k;
		scanf("%d", &k);
		int n;
		scanf("%d", &n);
		nhapMang(a, n);
		
		long long sum = x;
		int i;
		for(i = 0; i < n; i++){
			sum += a[i];
		}
		if(sum > k){
			printf("YES");
		}
		else{
			printf("NO");
		}
		printf("\n");
		T--;
	}
	return 0;
}

	// Bai K
	
	
	// Bai L
	
	
	// Bai M
	void nhapMang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void inSort(int a[], int n){
	int i,j;
	for(i = 0; i < n; i++){
		for(j = n - 1; j > i; j--){
			if(a[j - 1] > a[j]){
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1]= tg;
			}
		}
	}
}

int a[1000000];
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int n;
		scanf("%d", &n);
		nhapMang(a, n);
		
		inSort(a, n);
		int i;
		if(a[n - 1] <= 0){
			printf("1\n");
		}
		else{
			int k = 0;
			int min = a[k];
			while(min <= 0){
				k++;
				min = a[k];
			}
			if(min > 1){
				printf("1\n");
			}
			else{
				for(i = k; i < n; i++){
					if( ( a[i + 1] != (a[i] + 1) ) && ( a[i] != a[i + 1]) ){
						int minD = a[i] + 1; 
						printf("%d\n", minD);
						break;
					}
				}
			}
		}
		T--;
	}
	return 0;
}

	// Bai N
	
	
	// Bai O
	int a[10000000];
int count[10000000];
int main(){
	int T;
	scanf("%d", &T);
	while(T > 0){
		int i;
		for(i = 0; i < 10000000; i++){
			count[i] = 0;
		}
		int n;
		scanf("%d", &n);
		int max = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			count[a[i]]++;
			if(max < a[i]){
				max = a[i];
			}
		}
		
		unsigned long long soCap = 0;
		for(i = 1; i <= max; i++){
			if(count[i] > 1){
				soCap += (unsigned long long) count[i] * (count[i] - 1) / 2 ;
			}
		}
		printf("%llu", soCap);
		printf("\n");
		T--;
	}
	return 0;
}
	
