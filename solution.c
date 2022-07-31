#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int len = 0;
    long long temp = n;
    while(temp!=0) {
        temp/=10;
        len++;
    }
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*len);
    temp =n;
    
    for(int i = 0; i<len; i++) {
        answer[i] = temp%10;
        temp /= 10;
    }
    
    return answer;
}