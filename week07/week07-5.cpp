///week07 step03-1
///了解 for(迴圈)

#include <stdio.h>
int main()
{
    int i;///1937年的c發明者的寫法,1989年ANSI C規範
    for(i=0;i<=3;i++)
    {printf("有幾次呢?\n");}
///課本的寫法不好!!

///1998/1999 新版的C++/C寫法
    for(int i=0; i<3; i++)
    {
        printf("老師推薦的寫,有幾次?\n");
    }///會跑3次
}
