#include <stdio.h>
/**
 * 즉시 반복문을 빠져가세요 break
 * 즉시 다음 반복으로 넘어가세요 continue
 */
int main(){
    for(int i=1; i<=10; i++){
        if(i%2==0)
            continue;
        if(i==5)
            break;
        printf("%d",i);
    }
}