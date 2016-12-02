//Author: Marcelo Linck
//https://www.hackerrank.com/challenges/filling-jars

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long int n, m, a, b, k;
    scanf("%ld %ld", &n, &m);
    unsigned long int i, j;
    unsigned long int candies;
    long double avg;
    candies=0;
    for(i=1;i<=m;i++){
        scanf("%ld %ld %ld", &a, &b, &k);
        candies+=k*(b-a+1);
    }
    avg = candies/n;
    printf("%ld", (unsigned long int) floor(avg));
    
    return 0;
}
