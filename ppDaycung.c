#include<stdio.h>
#include<math.h>
/*
- Khai báo hàm f(x) 
- Nhập a, b 
- Tính x = a – (b-a)f(a) / (f(b)-f(a)) 
- Nếu f(x)*f(a) <0 
 Lặp b = x 
 x = a – (b-a)f(a) / (f(b)-f(a)) 
 trong khi ⏐x - b⏐> ε 
 Ngược lại 
 Lặp a = x 
 x = a – (b-a)f(a) / (f(b)-f(a)) 
 trong khi ⏐x - a⏐> ε 
- Xuất nghiệm: x
*/
float hamf(float x){
	return pow(x,3)+x-5;
}

