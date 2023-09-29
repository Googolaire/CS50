#include <cs50.h>
#include <stdio.h> 
int get_size(void);
void print_grid(int size);
/* Question Marks
int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}
*/ 
/*
// vertical wall
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}
*/
/* const variable multi row wall
int main(void)
{
   const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        } 
        printf("\n");
    }
    
}
*/
/* Promte user to get the size
int main(void)
{
   int n = get_int("Size: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        } 
        printf("\n");
    }
    
}
*/
/* 
// Get size of Grid via do while loop
int main(void)
{
   int n;
   do 
   {
    n = get_int("Size: ");
   }
   while (n < 1);
   // prints grid of bricks 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        } 
        printf("\n");
    }
    
}
*/

//Abstracted with callback functions 
int main(void)
{
    // Get size of Grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);

}










int get_size(void)
{
   int n;
   do 
   {
    n = get_int("Size: ");
   }
   while (n < 1);
   return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        } 
        printf("\n");
    }
}