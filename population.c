#include <cs50.h>
#include <stdio.h>

/*
// Failed to produce number
int main(void)
{
    //Promting User for starting number of llamas
    int start = get_int("How many Llamas do you have? ");
    // Prompting Them for ending # of llamas 
    int y = get_int("How many llamas do you want? ");
    // How many years will it take to get to the goal?
    //Every year, 1/3 of current llamas are born; 14 pass away
    int years = 0;
        while (x < y)
        {
            x += x /3;
            x -= x /4;
            years += 1; 
        } return years;
        
}
*/

int main(void)
{
    //Promting User for starting number of llamas
    int start;
    do
    {
        start = get_int("Start Size: ");
    }
    while (start < 9);
    
    // Prompting Them for ending # of llamas 
    int end;
    do
    { 
     end = get_int("End Size: ");   
    }
    while (end < start);

    // How many years will it take to get to the goal?
    int years = 0;
    while (start < end)
    {
    start += start / 12;
/*    start += start / 3;
    start += start / 4;
*/
    years++;
    }

    printf("Years: %i\n", years);
    //Every year, 1/3 of current llamas are born; 14 pass away

} 