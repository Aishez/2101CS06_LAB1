#include<stdio.h>

void insertion_sort( int n , int a[])
{
    int temp;

    for(int j,i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j] > a[j+1] )
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }
    }
}

int main()
{
    int n;  scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    insertion_sort(n,a);

    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    


    return 0;
}

