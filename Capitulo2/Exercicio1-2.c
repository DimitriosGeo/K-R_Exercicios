#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void){
printf("\tCHAR_BIT %d\n\n",CHAR_BIT);
printf("\tCHAR_MIN %d\n",CHAR_MIN);
printf("\tUCHAR_MAX %u\n",UCHAR_MAX);
printf("\tSCHAR_MAX %d\n",SCHAR_MAX);
printf("\tSCHAR_MIN %d\n\n",SCHAR_MIN);
printf("\tINT_MAX %d\n",INT_MAX);
printf("\tINT_MIN %d\n",INT_MIN);
printf("\tLONG_MAX %ld\n",LONG_MAX);
printf("\tLONG_MIN %ld\n",LONG_MIN);
printf("\tSHRT_MAX %d\n",SHRT_MAX);
printf("\tSHRT_MIN %d\n",SHRT_MIN);

printf("\tUINT_MAX %u\n",UINT_MAX);
printf("\tULONG_MAX %lu\n",ULONG_MAX);
printf("\tUSHRT_MAX %u\n\n",USHRT_MAX);

printf("-------------------- \n\n");

printf("\tFLT_RADIX %d\n",FLT_RADIX);
printf("\tFLT_ROUNDS %d\n",FLT_ROUNDS);
printf("\tFLT_DIG %d\n",FLT_DIG);
printf("\tFLT_EPSILON %e\n",FLT_EPSILON);
printf("\tFLT_MANT_DIG %d\n",FLT_MANT_DIG);
printf("\tFLT_MAX %e\n",FLT_MAX);
printf("\tFLT_MAX_EXP %d\n",FLT_MAX_EXP);
printf("\tFLT_MIN %f\n",FLT_MIN);
printf("\tFLT_MIN_EXP %d\n\n",FLT_MIN_EXP);

printf("\tDBL_DIG %d\n",DBL_DIG);
printf("\tDBL_EPSILON %e\n",DBL_EPSILON);
printf("\tDBL_MANT_DIG %d\n",DBL_MANT_DIG);
printf("\tDBL_MAX %e\n",DBL_MAX);
printf("\tDBL_MIN %e\n",DBL_MIN);
printf("\tDBL_MIN_EXP %d\n",DBL_MIN_EXP);

return 0;
}
