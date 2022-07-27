#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void select_sort(int size  , int array[])
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {

            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

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

