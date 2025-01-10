#include <stdio.h>
//정수값 입력받기 ex)412
//2
//3. 출력 4+1+2=7
int main(){
    int num,a,sum=0;
    printf("정수값:");
    scanf("%d",&num);

    while (num > 0) {
        a = num % 10; 
        sum += a;     
        num /= 10;
        if(num>=1) 
            printf("%d + ",a);
        else
            printf("%d = %d",a,sum);

    }

}