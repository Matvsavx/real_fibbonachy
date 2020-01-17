#include "lib.h"
int Fibbanachy (int n)
{
    int sum = 0;
    int next = 1;
    int prev = 1;
    for ( int i = 1; i < n; i++)
    {
        sum = next+prev;
        prev = next;
        next = sum;
    }
    return sum;

}
