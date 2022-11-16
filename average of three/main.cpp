#include <stdio.h> 
#include <inttypes.h>
#include "main.h"
int main()
{
    int64_t a64, b64, c64;
    printf("Enter the first number:\n");
    scanf("%" SCNd64, &a64);
    printf("Enter the second number:\n");
    scanf("%" SCNd64, &b64);
    printf("Enter the third number:\n");
    scanf("%" SCNd64, &c64);
    SearchAverage(a64, b64, c64);
    return 0;
}