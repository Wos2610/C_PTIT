#include<stdio.h>

struct Fraction{
	int num;
	int den;
}f1, f2, f12, f21;

long long gcd(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

long long lcm(long long a, long long b){
	return a * b / gcd(a,b);
}

void quyDong(struct Fraction f1, struct Fraction f2){
	long long u1 = gcd(f1.num, f1.den);
	long long u2 = gcd(f2.num, f2.den);
	if(u1 != 1){
		f1.num /= u1;
		f1.den /= u1;
	}
	if(u2 != 1){
		f2.num /= u2;
		f2.den /= u2;
	}
	long long l = lcm(f1.den, f2.den);
	f12.den = f21.den = l;
	f12.num = l / f1.den * f1.num;
	f21.num = l / f2.den * f2.num;
	printf("%lld/%lld ", f12.num, f12.den);
	printf("%lld/%lld\n", f21.num, f21.den);
}

void tong(struct Fraction f1, struct Fraction f2){
	long long sumden = 0;
	long long sumnum = 0;
	sumden = f1.den * f2.den;
	sumnum = f1.num * f2.den + f1.den * f2.num;
	long long u = gcd(sumnum, sumden);
	if(u != 1){
		sumden /= u;
		sumnum /= u;
	}
	printf("%lld/%lld\n", sumnum, sumden);
}

void thuong(struct Fraction f1, struct Fraction f2){
	long long divden = 0;
	long long divnum = 0;
	divden = f1.den * f2.num;
	divnum = f1.num * f2.den;
	long long u = gcd(divnum, divden);
	if(u != 1){
		divden /= u;
		divnum /= u;
	}
	printf("%lld/%lld\n", divnum, divden);
}

int main(){
	int T;
	scanf("%d", &T);
	int T1 = T;
	while(T--){
		int m, n, p ,q;
		scanf("%d%d%d%d", &m, &n, &p, &q);
		f1.num = m;
		f1.den = n;
		f2.num = p;
		f2.den = q;
		printf("Case #%d:\n", T1 - T);
		quyDong(f1, f2);
		tong(f1, f2);
		thuong(f1, f2);
	}
}