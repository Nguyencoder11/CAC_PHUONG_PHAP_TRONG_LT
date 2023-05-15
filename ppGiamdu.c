#include<stdio.h>
#include<math.h>

/*
- Nhap n, aij, xi
- Bien doi he phuong trinh dang (1) ve dang (2)
 for(i=1; i<=n; i++)
    {
      for(j=1; j<=n+1; j++)
        {
           if(i!=j)   a[i,j]=a[i,j]/a[i,i]
           a[i,j] = 1
		}
	}
- Tinh r[i] ban dau (i=1->n)
   for i=1 -> n do
       {
           r[i]=a[i, n+1]
           for j=1->n do r[i]=r[i]-a[i,j]*x[j]
	   }
- Lap 
    t=0 //cho thoat
    Tim rs=max{|r[i]|} (i=1->n)&tinh lai xs
    max = |r[1]|; k=1
    for i=2 ->n do
        if(max<|r[i]|) {max = |r[i]|;  k=i}
        x[k]=x[k]+r[k]
    Tinh lai R[i] kiem tra kha nang lap tiep theo
    d=r[k]
    for i=1->n {
        r[i]=r[i]-a[i,k]*d
        if(|r[i]| >= epsilon) thi t=1 //cho lap
	}
	while(t)
- Xuat nghiem: x[i] (i=1-> n)
*/

int main(){
	
}