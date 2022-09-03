// pre-processor code
#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

int randomnumber(int n)
{
    return rand() % 3;
}
int main()

{

    srand(time(NULL));

    // seed(input) of srand is fixed only fixed number will be generated

    int machine;

    int humans;

    int option;

    for (int i = 1; i < 4; i++)
    {
        printf("\nenter stone(0)/paper(1)/scissor(2) press 3 to quit\n");

        scanf("%d", &option);

        if (option == 0)
        {
            printf("stone\n");
            if (randomnumber(3) == 1)
            {
                printf("paper\n");

                printf("computer wins :D\n");

                machine++;
            }
            else if (randomnumber(3) == 2)
            {
                printf("scissors\n human wins\n");
                humans++;
            }
            else
            {
                printf("stone\n Ties!!\n");
            }
        }
        else if (option == 1)
        {
            printf("paper\n");

            if (randomnumber(3) == 1)
            {
                printf("paper\n Ties!!\n");
            }
            else if (randomnumber(3) == 2)
            {
                printf("scissors\n machine wins\n");
                machine++;
            }
            else
            {
                printf("stone\n Human wins!!\n");
                humans++;
            }
        }
        else if (option == 2)
        {
            printf("scissors\n");

            if (randomnumber(3) == 1)
            {
                printf("paper\n Human wins!!");
                humans++;
            }
            else if (randomnumber(3) == 2)
            {
                printf("scissors\n ties!!");
            }
            else

            {
                printf("stone\n Machine wins!!\n");
                machine++;
            }
        }
        else if (option == 3)
        {
            break;
        }
        else
        {
            printf("incorrect option chosen");
            continue;
        }
    }

    if (humans > machine)
    {
        printf("\nhumans won the match\n");
    }
    else if (machine < humans)
    {
        printf("\nmachine won the match\n");1
    }
    else if (humans == machine)
    {
        printf("\nmatch ties\n");
    }
    // stay healthy mentally and be the best of your dreams.
    return 0;
}