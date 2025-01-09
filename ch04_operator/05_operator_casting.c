#include<stdio.h>
/**
 * 형 변환(Casting)
 * 1.프로모션(small type -> big type)
 * 2.캐스팅(bit type -> small type)
 *  값의 손실이 생김(직접 코드 작성)
 * ex) 3.14->int(3)
 */
int main(){
    double res;
    res *5;
    printf("%.lf",res);

    //2.캐스팅
    double pi=3.14;
    int a;
    a=(int)pi;
    printf("%d",a);

}