#include<stdio.h>
#include<math.h>
/*
- Khai báo hàm g(x) 
- Nhập x 
- Lặp: y= x 
 x = g(x) 
 trong khi ⏐x - y⏐> ε 
- Xuất nghiệm: x (hoặc y)
*/
float g(float x){
	return (5*pow(x, 3)+3)/20;
}
float lap(float a, float b){
	float epsilon = 0.0001;
	float x = a, y;
	do{
		y=x;
		x=g(x);
	}while(fabs(x-y)>epsilon);
	return x;

}
int main(){
	float a, b;
	printf("Nhap a, b: ");
	scanf("%f%f", &a, &b);
	
	lap(a, b);
	printf("x = %.4f", lap(a, b));
}