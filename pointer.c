#include <stdio.h>
int main()
{
    // int a=10;
    // int *ptr;
    // // ptr=&a;
    // // char name[20];
    // // scanf("%s",name);
    // // scanf("%d",&a);
    int a[3]={1,2,3};
    printf("\nvalue of a[0] %d",a[0]);
    printf("\nvalue of a[0] %d",*(a+0));
    printf("\nvalue of a[1] %d",*(a+1));
    printf("\nvalue of a[2] %d",*(a+2));    // ptr=&a[0];
    
    // printf("\naddress of a[0]=%u and its value=%d",&a,a[0]);
    // printf("\naddress of a[1]=%u and its value=%d",&a,a[1]);
    // printf("\naddress of a[2]=%u and its value=%d",&a,a[2]);
    
    // printf("\naddress of ptr=%u and its value=%d",&ptr,ptr);
    
    // ptr+=1;
    // printf("\na[1] value using ptr =%d\n",*ptr);
    
    // printf("\nvalue of the a %d",a);
    // printf("\nvalue of the ptr %d",*ptr);
    
    // printf("\naddress of a %d",&a);
    // printf("\naddress of ptr %d",&ptr);
    
    
    
    
}
