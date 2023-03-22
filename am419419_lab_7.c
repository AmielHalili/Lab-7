#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// A function to implement bubble sort
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int swap_count = 0;

    printf("\nUsing Bubble sort\n");
    int i, j,temp;
    for (i = 0; i < n-1; i++)
    {
        
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {//then swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                swap_count ++;
            }
            
        }
    }
    //print # of swaps
    printf("\n# of swaps: %d\n\n", swap_count);
}
/* Function to print an array */
void printArray(int arr[], int size){
    {
        int i;
        for (i=0; i < size; i++)
        printf("%d ", arr[i]);
        printf("\n");
    }
}


int main()
{
    int arr[] = {97,16,45,63,13,22,7,58,72};
    int n = 9; //size of the array
    printf("Array bofore sorting: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}