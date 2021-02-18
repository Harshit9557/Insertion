#include<stdio.h>
int main()
{
    int n,i,a[100],index,k;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the perspective values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value of Index : ");
    scanf("%d",&index);
    for(i=n;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    printf("Enter the value that you want to insert : ");
    scanf("%d",&k);
    a[index]=k;
    printf("Required Array is : ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
