#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    double num = sqrt(n);
    if(num == (int)num) {
        return pow((num+1), 2);
    }
    else return -1;
}