#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int count, major=1;
    int majority = array[0];
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
        if(count>major)
        {
            major = count;
            majority = array[i];
        }
    }
    printf("The majority of the Element : %d\n",majority);
    return 0;
}