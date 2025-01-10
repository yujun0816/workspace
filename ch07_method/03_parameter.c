#include <stdio.h>
/**
 * parameter(매개변수)
 * 함수의 입력값
 * 여러개 사용가능(,구분)
 * 똑같은 이름의 매개변수는 사용불가
 * 매개변수를 사용하지 않을때는 void사용
 */

int get_num(){
    return 5;
}
int main(){
    printf("%d",get_num());
}