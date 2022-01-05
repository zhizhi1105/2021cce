#include <stdio.h>
int a[2] [3]={

    {10,20,30},///¥ª¤â¦¨¥k¤â
    {40,50,60}
};
int main()
{

    for(int i=0;i<2;i++){///¥ª
        for(int j=0;j<3;j++){///¥k
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
    }
        printf("\n");
    }

}

