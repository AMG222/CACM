#include <stdio.h>

#define N 1000000

int memorization[N+1];

int compute_cycle_length( int n ){
    int l = 1;
    while(n != 1) {
        if(n <= N && memorization[n] != 0) {
            return memorization[n] + l;
        }

        if( n % 2 == 0 ){
            n /= 2;
        }else {
            n = 3 * n + 1;
        }
        ++l;
    }
    return l;
}

int max_cycle_length( int i, int j) {
    if(i > j)  return max_cycle_length(j, i);

    int max_l = 0, n;
    for(n=i; n <= j; n++) {
        int l = compute_cycle_length(n);
        if(n <= N) 
            memorization[n] = l - 1;
        if(l > max_l) {
            max_l = l;
        }
    }
    return max_l;
 }

 int main( int argx, char *argv[]) {
     int i, j;
     while( scanf("%d%d", &i, &j) == 2)  {
         printf("%d %d %d\n", i, j, max_cycle_length(i, j));
     }
     return 0;
 }