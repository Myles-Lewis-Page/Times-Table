/* 
 * File:   Program_2
 * Author: Myles Page
 * Class: CS1120
 * Homework #4
 * Created on October 3, 2018, 2:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

void print_ttable(int outer, int inner);
int main(void) 
{
    int inner = 10;
    int outer = 10;

    printf("The Times Table:\n");
    print_ttable(outer, inner);
}

void print_ttable(int outer, int inner)
{
    int a,b;
    for (a = 1; a <= outer; a++)
    {
        for (b = 1; b <= inner; b++)
        {
            printf("%d\t", a*b);
        }
        printf("\n");
    }
}