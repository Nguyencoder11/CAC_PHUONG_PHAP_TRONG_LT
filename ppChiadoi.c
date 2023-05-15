#include<stdio.h>
#include<math.h>
/*
- Khai báo hàm f(x) (hàm đa thức, hàm siêu việt) 
- Nhập a, b sao cho f(a)<0 và f(b)>0 
- Lặp 
  c = (a+b)/2 
  nếu f(c) > 0 → b = c 
  ngược lại a = c 
 trong khi (⏐f(c)⏐> ε) /* ⏐a - b⏐ > ε và f(c) != 0 
-Xuat nghiem: c
*/
float f(float x){
	return 3*x*x*x - x*x - 1;
}
int main(){
	float a, b, x0, epsilon;
	printf("Nhap a, b, epsilon: ");
	scanf("%f%f%f", &a, &b, &epsilon);
	while(fabs(a-b)>=epsilon){
		x0 = (a+b)/2;
		if(f(x0)==0){
			break; 
		} 
		if(f(a)*f(x0)<0){
			b=x0;
		}else if(f(a)*f(x0)>0){
			a=x0;
		}		
	}
	printf("x0 = %lf\n", x0);
}