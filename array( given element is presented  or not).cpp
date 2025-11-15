#include<stdio.h>
int main()
{
    int i,n,a[50],key,found=0;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key values:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
        printf("True");
        found=1;
        break;
        }
    }
    if(found==0)
    {
        printf("False");
    }
}
