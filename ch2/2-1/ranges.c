#include <stdio.h>
#include <limits.h>
#include <float.h>

// char, short, int and long
// signed and unsigned

int main() {
  // This works because the minimum value of a signed type is always 
  // one less than the negation of the maximum value of the corresponding unsigned type 
  printf("Minimum signed char val: %d\n", -(int)((unsigned char)~0 >> 1) - 1);
  printf("Minimum signed short val: %d\n", -(int)(unsigned short)~0 >> 1) - 1);
  printf("Minimum signed int val: %d\n", -(int)(unsigned int)~0 >> 1) - 1);
  printf("Minimum signed long val: %ld\n", -(long)(unsigned long)~0 >> 1) - 1);

  // For maximums, just dont negate the maximum value, which means
  // also no need to subtract 1 since we already have the maximum
  printf("The maximum signed char val: %d\n", (int)((unsigned char)~0 >> 1));
  printf("The maximum signed short val: %d\n", (int)((unsigned short)~0 >> 1));
  printf("The maximum signed int val: %d\n", (int)((unsigned int)~0 >> 1));
  printf("The maximum signed long val: %ld\n", (long)((unsigned long)~0 >> 1));

  // Max unsigned vals
  printf("Maximum Unsigned Char %d\n", (unsigned char)~0);
  printf("Maximum Unsigned Short %d\n", (unsigned short)~0);
  printf("Maximum Unsigned Int %u\n", (unsigned int)~0);
  printf("Maximum Unsigned Long %lu\n\n", (unsigned long)~0UL);
 

  // Through standard headers
  printf("The minimum signed char val: %d\n", SCHAR_MIN);
  printf("The minimum signed short val: %d\n", SHRT_MIN);
  printf("The minimum signed int val: %d\n", INT_MIN);
  printf("The minimum signed long val: %ld\n", LONG_MIN);
  printf("The minimum signed float val: %E\n", FLT_MIN);

  printf("The maximum signed char val: %d\n", SCHAR_MAX);
  printf("The maximum signed short val: %d\n", SHRT_MAX);
  printf("The maximum signed int val: %d\n", INT_MAX);
  printf("The maximum signed long val: %ld\n", LONG_MAX);
  printf("The maximum signed float val: %E\n", FLT_MAX);

  printf("Maximum Unsigned Char %d\n", UCHAR_MAX);
  printf("Maximum Unsigned Short %d\n", USHRT_MAX);
  printf("Maximum Unsigned Int %u\n", UINT_MAX);
  printf("Maximum Unsigned Long %lu\n", ULONG_MAX);
  printf("Maximum Unsigned Long Long %llu\n", ULLONG_MAX);

  return 0;
}
