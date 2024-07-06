#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    return x*x*x-9*x-1;
}

float diff(float x){
    return 3*x*x-9;
}

void main(){
    float x1,x2,differ;
    int n,i;

    printf("Enter initial guess : ");
    scanf("%f",&x1);

    printf("Enter number of iterations to be checked : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if((fabs(diff(x1)))<0.003){
            printf("Slope is too smaill");
            exit(1);
        }

        x2=x1-(f(x1)/diff(x1));
        differ=fabs(x2-x1);

        printf("\n Value of rooot after %d iteratin is %f",i+1,x2);

        if(differ<=0.003){
            printf("\n valeu of rott is %f",x2);
            exit(1);
        }

        x1=x2;

    }
    printf("Root not found in given iterations");
}