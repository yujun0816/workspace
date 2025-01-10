#include <stdio.h>
/**
 * 별찍기
 * 
 */
int main(){

    for(int i=4; i>=0; i--){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    
}