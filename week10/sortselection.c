#include<stdio.h>
#define SIZE 10

int main(void)
{
    //some variables for sorting
    int i, j, temp, least;

    // Making list with it's unsorted values
    int list[SIZE] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};

    //printing list before sorted
    printf("Before list is sorted:\n");
    for(i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    printf("\n");
    //loop for sorting algorithm
    for(i=0; i<SIZE-1; i++)
    {
        //least var for saving i index
        least = i;
        //loop for sorting algorithm
        for(j = i + 1; j < SIZE; j++)
            if(list[j] < list[least])
                least = j;
        //swapping values
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }

    //print list after sorted
    printf("After list is sorted:\n");
    for(i = 0; i < SIZE; i++)
        printf("%d ", list[i]);
    
    printf("\n");
    return 0;
}