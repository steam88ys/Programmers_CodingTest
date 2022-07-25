#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    long num2 = (long)num;
    int answer = 0;
    while(num2!=1) {
        num2 = num2%2==0 ? num2/2 : (num2*3)+1;
        ++answer;
        if(answer>=500) return -1;
    }
    return answer;
}