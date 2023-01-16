#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer;
    int leftCnt = 0;
    int rightCnt = 0;
    int len = strlen(s);


    if (s[0] == '(') {
        for (int i = 0; i < len; i++) {
            if (s[i] == '(') {
                leftCnt += 1;
            }
            else if (s[i] == ')')  {
                if (leftCnt <= rightCnt){
                    return false;
                }
                
                rightCnt += 1;
            }
        }
        if (leftCnt == rightCnt) {
            answer = true;
        }
        else {
            answer = false;
        }
    }
    else {
        return false;
    }
    if (s[len - 1] != ')') {
        return false;
    }
    return answer;
}