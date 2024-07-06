#include<stdio.h>
#include<math.h>
int main(){
    float actual_value,approximate_value,actual_error,relative_error,percentage_error;

    printf("Enter your actual and apporixmate value");
    scanf("%f%f",&actual_value,&approximate_value);

    int rootValue=sqrt(actual_value);
    actual_error=fabs(rootValue-approximate_value);
    relative_error=actual_error/rootValue;
    percentage_error=(relative_error*100);

    printf("\n Actual Error: : %f",actual_error);
    printf("\n Relative ERror : %f",relative_error);
    printf("\n Percentage Error : %f",percentage_error);

    
}