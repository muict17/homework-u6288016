#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        do
        {
            scanf("%d",&array[i]);
        }while(array[i]<0 || array[i]>=n);
    }
    int count, repeat=1;
    int maximum = array[0];
    for(i=0;i<n;i++)
    {
        count =0;
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            if(array[i]>maximum)
            {
                maximum = array[i];
            }
        }
    }
    printf("The maximum repeating number is: %d\n",maximum);
    return 0;
}