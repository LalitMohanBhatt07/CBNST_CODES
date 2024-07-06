#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x){
    return x*x*x-9*x+1;
}

void main(){
    int i=1;
    float xn , x1, x2, epsilon=0.003, delta=0.003, fn , f1, f2;

    printf("Enter initial guess : ");
    scanf("%f%f",&x1, &x2);

    if(f(x1)*f(x2)>0){
        printf("Assumptions are wrong : ");
        exit(1);
    }

    do{
        if(fabs(f(x2)-f(x1))<delta){
            printf("Slope is small");
            exit(1);
        }

        xn=x1-((x2-x1)*f(x1))/(f(x2)-f(x1));
        fn=f(xn);
        if(f(xn)*f(x2)<0){
            x1=xn;
        }
        else{
            x2=xn;
        }
        printf("value after %d iteration is :%f",i,xn);
        i=i+1;
    }
    while(fabs(f(xn)>epsilon));
}