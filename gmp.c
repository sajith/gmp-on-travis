
#include <stdio.h>
#include <gmp.h>

int main(int argc, char **argv)
{
    mpz_t z;
    
    mpz_init (z);
    gmp_printf ("%s is an mpz %Zd\n", "this", z);

    return 0;
}
