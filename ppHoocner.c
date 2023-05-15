#include<stdio.h>
#include<math.h>

/*
  + Nhập vào: n, c, các hệ số ai (i = 0,n ) 
  + Xử lý: Đặt p = a0 
    Lặp i = 1 → n : p = p * c + a[i]
  + Xuất kết quả: p
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
	p = a[0];
	for(i=1;i<=n;i++){
		p = p*c + a[i];
	}
	printf("Gia tri cua da thuc: %.3f", p);
}