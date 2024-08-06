#include <stdio.h>

int main(void){
    int N;
    long long zeros=0;

    scanf("%d", &N);

    for (int i = 5; N / i >= 1; i *= 5) {
        zeros += N / i;
    }
    
    printf("%lld\n", zeros);

    return 0;
}
