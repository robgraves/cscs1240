#include <stdio.h>
#include "fun.h"

int main( int argc, char * argv[ ] )
{
    int a, b;
    a = 3;
    b = one( 3 );
    printf( "%d, %d\n", a, b);
    printf( "%d, %d\n", a, two( a ) );
    return 0;
}
