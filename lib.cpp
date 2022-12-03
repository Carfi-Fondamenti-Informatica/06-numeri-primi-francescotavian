#include "provaes7.h"


bool primo (int n, int i)
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
