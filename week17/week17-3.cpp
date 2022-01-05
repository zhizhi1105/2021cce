#include <stdio.h>
int main()
{
    int N=20030101;

    int sum=0;
    while( N>0 ){
    ///printf("%d => %d %d\n" ,N, N/10, N%10);
    sum += N%10;
    N= N/10;

    }
    printf("%d\n", sum);









}


