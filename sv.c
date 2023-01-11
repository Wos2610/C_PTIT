#include <stdio.h>
#include <stdlib.h>
struct sinhvien 
{
	int no;
	char name[100];
	float d1, d2, d3;
	float sum;
};
void imp(struct sinhvien a[] , int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		scanf("\n");
		gets(a[i].name);
		a[i].no = i+1;
		scanf("%f %f %f", &a[i].d1, &a[i].d2, &a[i].d3);
		a[i].sum = a[i].d1 + a[i].d2 + a[i].d3;
	}
	printf("%d\n",n);
}
void print(struct sinhvien a[], int n)
{
	
	int i;
	for (i=0; i<n; i++)
	{
		printf("%d %s %.1f %.1f %.1f", a[i].no, a[i].name, a[i].d1, a[i].d2, a[i].d3);
		printf("\n");
	}
}
void fix(struct sinhvien a[], int i, int n)
{
	struct sinhvien temp;
	int j;
	scanf("\n");
	temp.no = i;
	gets(temp.name);
	scanf("%f %f %f", &temp.d1, &temp.d2, &temp.d3);
	temp.sum = temp.d1 + temp.d2 + temp.d3;
	/*for (j=0; j<n; j++) if (temp.no == a[j].no) 
	{
		a[j]= temp;
		break;
	}*/
	a[i-1] = temp;
	printf("%d\n",i);
}
int compare(const void* a, const void* b)
{
    struct sinhvien* x = (struct sinhvien*) a;
    struct sinhvien* y = (struct sinhvien*) b;
    if (x->sum > y->sum)
        return 1;
    else return -1;
}
int main(int argc, char *argv[]) {
	int function,n,tmp;
	struct sinhvien student[1000];
	int check = 1;
	while (check != 0)
	{
		scanf("%d", &function);
		switch (function)
		{
			case 1:
				scanf("%d", &n);
				imp(student, n);
				break;
			case 2:
				scanf("%d", &tmp);
				fix(student, tmp, n);
				break;
			case 3:
				qsort(student,n,sizeof(struct sinhvien),compare);
				print(student, n);
				check = 0;
				break;
		}
	}
	return 0;
}

