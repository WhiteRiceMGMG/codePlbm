#include <stdio.h>
int main(void)
{
    int n = 0;
    int i = 0;
    int j = 0;
    int min = 0;0
    int max = 0;
    int tmp = 0;
    int array[100][3] = {0};
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &array[i][j]);   // 2次元配列に読み込み
        }
    }
    for(i = 0; i < n; i++)
    {
        tmp = array[i][0] 
        + array[i][1] 
        + (24-array[i][2]); 

        //+ ((array[i][2] - (array[i][0] + array[i][1]) + 24) % 24);

        if(i == 0)
        {
            max = tmp;
            min = tmp;
        }

        if(max < tmp)
        {
            max = tmp;
        }

        if(min > tmp)
        {
            min = tmp;
        }

    }

    printf("%d\n", min);
    printf("%d", max);


} 