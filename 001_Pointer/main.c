#include<stdio.h>
int main(void){
    int a = 10, b =7;
    int *num1,*num2; // prefer assigning  NULL 
    printf("a = %d and its address = %p\n",a,&a);
    printf("b = %d and its address = %p\n",b,&b);
    printf("before assigning num1 = %p\n",num1);
    printf("before assigning num2 = %p\n",num2);

    num1 =NULL; num2 = NULL;
    printf("before assigning num1 = %p\n",num1);
    printf("before assigning num2 = %p\n",num2);

    num1 = &a;
    num2 = &b;
    printf("after assigning num1 = %p\n",num1);
    printf("after assigning num2 = %p\n",num2);

    *num1 =*num1 +2;
    *num2 =*num2 +2;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    
    num1 = num2;
    num2 = num1;
    printf("after assigning again num1 = %p\n",num1);
    printf("after assigning again num2 = %p\n",num2);
    printf("after assigning again their value num1 = %d\n",*num1);
    printf("after assigning again their value num2 = %d\n",*num2);

    return 0;
}