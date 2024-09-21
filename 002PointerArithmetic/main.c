#include<stdio.h>
int main()
{
 int a = 1;
 char b ='b';
 int array[3]={10,20,30};
 int *ptr;

ptr = array;

printf("%d\n",*ptr);//10
printf("%d\n",*array);//10
printf("%d\n",array);//6618812
printf("%p\n",array);//0064FEBC
printf("%p\n",ptr);//0064FEBC
printf("%p\n",&array);//0064FEBC
printf("%p\n",&ptr);//0064FEB8


printf("%d\n",sizeof(ptr));//4 byte
printf("%d\n",sizeof(array));//12 byte


printf("%p\n",array+1);//0064FEC0
printf("%p\n",array[1]);//00000014 ////// not address - 20 in dec - 14 in hex
printf("%p\n",&array[1]);//0064FEC0 
printf("%p\n",ptr+1);//0064FEC0


printf("%d\n",*(array+1));//20
printf("%d\n",array[1]);//20
printf("%d\n",*(ptr+1));//20
    return 0;
}