#include<stdio.h>
int main()
{
    float bp,da,hra,grpay ;
    printf("\nEnter Basic salary of person:");
    scanf("%f",&bp);
    da = 0.4*bp;
    hra= 0.2* bp;
    grpay = bp + da+hra;
    printf("Basic salary of person=%f\n" , bp);
    printf("Dearnesss allowance=%f\n" ,da );
    printf("House rent allowance=%f\n" ,hra );
    printf("Gross pay of the person =%f\n" ,grpay );
    return 0;
}





