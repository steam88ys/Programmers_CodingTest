#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = (n-1);
    int answer = i;
    while(i>0) {
        if(n%i==1) answer = i;
        --i;
    }
    return answer;
}