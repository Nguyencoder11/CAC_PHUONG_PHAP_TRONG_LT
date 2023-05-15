#include<stdio.h>
#include<math.h>
/*
- Nhap n, a[ij] (i=1->n, j=1->n+1)
- Nhap x[i] = (i=1->n)
- Lap 
    t=0
    lap i=1 -> n
     {S=0
     lap j=1->n do
        if (j!=i) S= S+a[ij]*x[i]
    y[i]=(a[in+1]-S)/a[ij]
    if(|a1[i]-x0[i]|.= epsilon)  t=1
    xi = yi}
    while(t)
- xuat xi(i=1->n)
*/

int main(){
	int n; float a[50][50];
	float x[50]; float y[50];
	printf("Nhap n: "); scanf("%d", &n);
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n+1; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=1; i<=n; i++){
		printf("Nhap x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	do{
		int t=0;
		for(i=0; i<=n; i++){
			float S=0;
			for(j=1; j<=n; j++){
				if(j!=i){
					S = S + a[i][j] * x[j];
				}
			}
			y[i] = (a[i*n+1] - S)/a[i][j];
			if(abs)
		}
	}while(t)
}