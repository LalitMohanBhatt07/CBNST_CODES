#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
    return x*x*x-9*x+1;
}

void main(){
    float fNum,sNum,xmid;
    int i=1;

    printf("Enter initial guess : ");
    scanf("%f%f",&fNum,&sNum);

    if(f(fNum)*f(sNum)>0){
        printf("Assumptions are wrong");
        exit(1);
    }

    do{
        xmid=(fNum+sNum)/2;
        printf("\n mid is %f",xmid);

        if(f(xmid)==0){
            printf("Rott is %f",xmid);
            exit(1);
        }

        if(f(xmid)*f(fNum)<0){
            sNum=xmid;
        }
        else{
            fNum=xmid;
        }
        i++;
        printf("Root after %d iteration is : %f",i,xmid);
    }
    while(fabs(fNum-sNum)>=0.003);
}