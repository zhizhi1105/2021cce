#include <stdio.h>

void printStar( int n )
{///不送出來,  送出1個整數


    for(int i=0;i<n;i++)printf("*");

}///因為void不送出, 所以不用return 0

int main()
{
    printStar(7);///在呼叫call之前, 要先定義好
}
