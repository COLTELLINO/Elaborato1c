#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    unsigned char exuchar = 'A';
    signed char exchar = 'B';
    signed short exshort = -5;
    unsigned short exushort = 5;
    signed int exint = -10;
    unsigned int exuint = 10;
    signed long exlong = -999999999;
    unsigned long exulong = 999999999;
    float exfloat = 1.5;
    double exdouble = 1.55;
    long double exldouble = 5.1111;

    printf("TYPE: unsigned char\tNAME: exuchar\t\tVALUE: ""%c", exuchar);
    printf("\t\tMIN: 0");
    printf("\t\t\tMAX: %u", UCHAR_MAX);
    printf("\t\tBYTE: %lu", sizeof(char));

    printf("\nTYPE: signed char\tNAME: exchar\t\tVALUE: ""%c", exchar);
    printf("\t\tMIN: %d", SCHAR_MIN);
    printf("\t\tMAX: %u", SCHAR_MAX);
    printf("\t\tBYTE: %lu", sizeof(signed char));

    printf("\nTYPE: signed short\tNAME: exshort\t\tVALUE: " "%hd", exshort);
    printf("\t\tMIN: %d", SHRT_MIN);
    printf("\t\tMAX: %u", SHRT_MAX);
    printf("\t\tBYTE: %lu", sizeof(short));

    printf("\nTYPE: unsigned short\tNAME: exushort\t\tVALUE: " "%hu", exushort);
    printf("\t\tMIN: 0");
    printf("\t\t\tMAX: %u", USHRT_MAX);
    printf("\t\tBYTE: %lu", sizeof(unsigned short));

    printf("\nTYPE: signed int\tNAME: exint\t\tVALUE: " "%d", exint);
    printf("\t\tMIN: %d", INT_MIN);
    printf("\tMAX: %u", INT_MAX);
    printf("\t\tBYTE: %lu", sizeof(int));

    printf("\nTYPE: unsigned int\tNAME: exuint\t\tVALUE: " "%u", exuint);
    printf("\t\tMIN: 0");
    printf("\t\t\tMAX: %u", UINT_MAX);
    printf("\t\tBYTE: %lu", sizeof(unsigned int));

    printf("\nTYPE: signed long\tNAME: exlong\t\tVALUE: " "%ld", exlong);
    printf("\tMIN: %ld", LONG_MIN);
    printf("\tMAX: %ld", LONG_MAX);
    printf("\t\tBYTE: %lu", sizeof(long));

    printf("\nTYPE: unsigned long\tNAME: exulong\t\tVALUE: " "%lu", exulong);
    printf("\tMIN: 0");
    printf("\t\t\tMAX: %lu", ULONG_MAX);
    printf("\t\tBYTE: %lu", sizeof(unsigned long));

    printf("\nTYPE: float\t\tNAME: exfloat\t\tVALUE: " "%f", exfloat);
    printf("\t\tMIN: %e", FLT_MIN);
    printf("\tMAX: %e", FLT_MAX);
    printf("\tBYTE: %lu", sizeof(float));

    printf("\nTYPE: double\t\tNAME: exdouble\t\tVALUE: " "%lf", exdouble);
    printf("\t\tMIN: %e", DBL_MIN);
    printf("\tMAX: %e", DBL_MAX);
    printf("\tBYTE: %lu", sizeof(double));

    printf("\nTYPE: long double\tNAME: exldouble\t\tVALUE: " "%Lf", exldouble);
    printf("\t\tMIN: %Le", LDBL_MIN);
    printf("\tMAX: %Le", LDBL_MAX);
    printf("\tBYTE: %lu", sizeof(long double));

    return 0;
}