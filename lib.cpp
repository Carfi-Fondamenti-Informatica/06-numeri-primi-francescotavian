
#include "lib.h"
bool funzione (int n, int i)
{
    for ( i=2; i<n; i++ )
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}
