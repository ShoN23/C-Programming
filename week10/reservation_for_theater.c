#include<stdio.h>
#define SIZE 10

int main()
{   
    char answer;
    int seats[SIZE] = {0};
    int i, seat_number;
    
    
    while (1)
    {
        printf("Do you want to make reservation?(y/n)");
        scanf(" %c", &answer);
        if(answer == 'y')
        {
            printf("---------------------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("\n---------------------------------\n");
            for(i=0;i<SIZE;i++)
            {
                printf("%d ", seats[i]);
            }
            printf("\n");
            printf("Which one do you wanna make reservation?");
            scanf("%d", &seat_number);
            if(seat_number <= 0 || seat_number > SIZE)
            {
                printf("Please, Select a number from 1 to 10!\n");
                continue;
            }
            if(seats[seat_number-1] == 0)
            {
                seats[seat_number-1] = 1;
                printf("Your reservation has been successfully!\n");
            }
            else
                printf("this seat is busy!! Please choose another.\n");
        
        }
        else if(answer == 'n')
            return 0;
    }
    return 0;
}
