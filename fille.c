#include <stdio.h>
#include<conio.h>
int main()
{
int year;
printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if( year%150 == 0)
        {
            if ( year%450 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}
