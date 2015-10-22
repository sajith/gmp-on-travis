/*
 *  Quick check for gmp.
 *
 *  Compile with: '$CC -Wall gmp.c -o gmp -lgmp'
 *  
 *  Copying and distribution of this file, with or without
 *  modification, are permitted in any medium without royalty provided
 *  the copyright notice and this notice are preserved.  This file is
 *  offered as-is, without any warranty.
 */

#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{
    mpz_t z;
    
    mpz_init (z);
    gmp_printf ("%s is an mpz %Zd\n", "this", z);

    return 0;
}
