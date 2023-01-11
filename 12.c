#include <stdio.h>

int main() {
   int a[100];
   int n;
   scanf("%d", &n); 
   int kt = 0;
   int i,j,k;
    for ( i = 0; i < n; i++) { 
   		scanf("%d", &a[i]); 
    } 
    for ( i = 0; i < n; i++) {
   		for ( j = 1; j+i <n ; j++) {
			if (a[i] == a[i+j]) {
				for ( k = 0; k < i; k++) {
					if (a[i] == a[k]) { 
						kt++; 
					} 
				} 
				if (kt == 0) { printf("%d ", a[i]); } kt = 0;
					break; 
			} 
		} 
	} 
	return 0; 
} 