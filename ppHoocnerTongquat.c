#include<stdio.h>
#include<math.h>
/*
  - Nhap n, c, a [i] (i = 0, n ) 
  - Lap k = n -> 1 
    Lap i = 1 -> k : a[i] = a[i-1] * c + a[i]
  - Xuat a[i] (i = 0, n )
*/
int main(){
	int i, n;
	float c, p, a[10];
	printf("Nhap c: "); scanf("%f", &c);
	printf("Nhap bac da thuc: "); scanf("%d",&n);
	printf("Nhap cac he so: \n");
	for(i=0;i<=n;i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	for(i=0;i<=n;i++){
		printf("\ta[%d]",i);
		printf("\n");
	}
	p = a[0];
	for(i=1;i<=n;i++){
		p = p*c + a[i];
		printf("\t%0.0f",p);
	}
	printf("\nGia tri cua da thuc: %0.0f",p);
}