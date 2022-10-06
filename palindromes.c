#include<stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            sum += (i*100 + j*10 + i);
        }
    }
    printf("%d", sum);
}