#include <inttypes.h>
#include <stdio.h> 
void SearchAverage(const int64_t& a64, const int64_t& b64, const int64_t& c64)
{
    if ((a64 > b64) && (a64 < c64))
        printf("The average number is: %" PRId64 "\n", a64);
    if ((a64 > c64) && (a64 < b64))
        printf("The average number is: %" PRId64 "\n", a64);
    if ((b64 > a64) && (b64 < c64))
        printf("The average number is: %" PRId64 "\n", b64);
    if ((b64 > c64) && (b64 < a64))
        printf("The average number is: %" PRId64 "\n", b64);
    if ((c64 > b64) && (c64 < a64))
        printf("The average number is: %" PRId64 "\n", c64);
    if ((c64 > a64) && (c64 < b64))
        printf("The average number is: %" PRId64 "\n", c64);
}