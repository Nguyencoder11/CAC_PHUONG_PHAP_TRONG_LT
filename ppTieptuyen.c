#include<stdio.h>
#include<math.h>
/*
- Khai báo hàm f(x), fdh(x) 
- Nhập x 
- Lặp y= x 
 x = y – f(y)/fdh(y) 
 trong khi ⏐x - y⏐> ε 
- Xuất nghiệm: x (hoặc y)
*/
float a, b;
float epsilon;
float f(float x){
	return pow(x, 3)+x-5;
}
float fdh(float x){
	return 3*pow(x, 2)+1;
}

float tt(float a, float b){
	float epsilon = 0.001;
	float x=b;
	do{
		float y = x;
		x = y - f(y)/fdh(y);
	}while(fabs(x-y)>epsilon);
	return x;
}

int main(){
	
	printf("Nhap a, b: ");
	scanf("%f%f", &a, &b);
	printf("x = %.4f", tt(a, b));
}