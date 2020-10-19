#include <stdio.h>
#include <limits.h>
int main(int argc)
{
    int a,b,i,j,k;
    i=668; /*decimal*/
    j=02467; /*octal*/
    k=0x2ab8; /*hexadecimal*/

    printf("Storage size for int: %d \n", sizeof(int));
    printf("Storage size for unsigned int: %d \n", sizeof(unsigned int));
    printf("Storage size for short int: %d \n", sizeof(short int));
    printf("Storage size for unsigned short int: %d \n", sizeof(unsigned short int));
    printf("Storage size for long int: %d \n", sizeof(long int));
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX); 
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX); 
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN); 
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);

    printf("Decimal     Octal       Hexadecimal\n");
    printf("%d          %o          %x\n", i,i,i);
    printf("%d          %o          %x\n", j,j,j);
    printf("%d          %o          %x\n", k,k,k);

    a=1;
    printf("Value of a: %d\n", a);
    a+=2;
    printf("Value of a: %d", a);
    return 0;
}