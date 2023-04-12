/*c program to find the sum of two one dimensional arrays using dynamic memory allocation*/
#include<stdio.h>
void main()
{
    int i,n;
    int *a,*b,*c;
    printf("enter the size of the arrays\n");
    scanf("%d",&n);

    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    c=(int*)malloc(n*sizeof(int));
    printf("enter the element of first list:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("enter element of second list \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",b+i);
    }
    for(i=0;i<n;i++)
    {
        *(c+i)=*(a+i)+*(b+i);
    }
    printf("resultant list is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(c+i));
    }
}
