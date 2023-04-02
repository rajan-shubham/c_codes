//merging two arrays with sorting and no user defined func
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //input for size of both arrays
    printf("enter the array size :");
    int size1 ;
    scanf("%d",&size1);
    printf("enter the size for second array :");
    int size2;
    scanf("%d",&size2);

    //memory allocation and naming of both array
    int *arr1 = malloc(size1 * sizeof(int));
    if(arr1 == NULL)
    {
        printf("not able to allocate memory \n");
        return 1;
    }
    int *arr2 = malloc(size2 * sizeof(int));
    if(arr2 == NULL)
    {
        printf("not able to allocate memory \n");
        return 1;
    }


    //input for array elements for both arrays
    //arr1
    printf("enter array element : \n");
    for (int i =0 ; i<size1 ; i++)
    {
        scanf("%d" , (arr1+i));
    }
    //arr2
    printf("enter array element : \n");
    for (int i =0 ; i<size2 ; i++)
    {
        scanf("%d", (arr2+i));
    }

    //sorting arr1
    for(int i=0 ; i<size1 ; i++)
    {
        for (int j =0 ; j<size1-i-1 ;j++)
        {
            if (arr1[j]>arr1[j+1])
            {
                int l = arr1[j+1];
                arr1[j+1] = arr1[j];
                arr1[j] = l;
            }
        }
    }

    //sorting arr2
    for(int i=0 ; i<size2 ; i++)
    {
        for (int j =0 ; j<size2-i-1 ;j++)
        {
            if (arr2[j]>arr2[j+1])
            {
                int l = arr2[j+1];
                arr2[j+1] = arr2[j];
                arr2[j] = l;
            }
        }
    }

    //merging both arrays

    int *arr3 = malloc ( (size1 + size2) * sizeof(int));
    for(int i =0 ; i< size1 ; i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i =0 ; i <size2  ; i++)
    {
        arr3[size1+i]=arr2[i];
    }


    //sorting merged array
    int total = size1 + size2;
    for(int i=0 ; i<total ; i++)
    {
        for (int j =0 ; j<total-i-1 ;j++)
        {
            if (arr3[j]>arr3[j+1])
            {
                int l = arr3[j+1];
                arr3[j+1] = arr3[j];
                arr3[j] = l;
            }
        }
    }


    //printing merged array
    printf("final merged and sorted array :");
    for ( int i =0 ; i< total ; i++)
    {
        printf("%d   ",arr3[i]);
    }
    printf("\n");

    //free memory
    free(arr1);
    free(arr2);
}