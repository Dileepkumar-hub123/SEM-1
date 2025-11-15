// selection sort descending//
#include <stdio.h>

int main()
{
    int i, j, n, A[50], temp, max;

    printf("enter n value:");
    scanf("%d", &n);

    printf("enter array values:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        max = i;
        for(j = i + 1; j < n; j++)
        {
            if(A[j] > A[max])   //  Change < to > for descending//
            {
                max = j;
            }
        }
        if(max != i)
        {
            temp = A[i];
            A[i] = A[max];
            A[max] = temp;      
        }
    }

    printf("descending order:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

