#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    return x*x*x-9*x+1;
}

void main(){
    float x1,f1,f2,f3,x2,x3;

    int i,n;

    printf("Enter initial assumptions : ");
    scanf("%f%f",&x1,&x2);

    printf("Enter the number of iterations for checking convergence");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        f1=f(x1);
        f2=f(x2);
        x3=((x1*f2)-(x2*f1))/(f2-f1);
        f3=f(x3);

        if((fabs((x2-x1)/x2))<0.003 || f(x2)==0){
            printf("Required root is %f found at %d iterations",x3,i+1);
            exit(1);
        }

        x1=x2;
        f1=f2;
        x2=x3;
        f2=f3;
    }

    printf("Solutions does not converge in %d iterations ",n);
}