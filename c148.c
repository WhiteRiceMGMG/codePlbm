#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int initLv = 0;
    int crtLv  = 0;
    int btlNum = 0;
    int* enmArray;
    int i      = 0;
    scanf("%d %d",&btlNum, &initLv);
    enmArray = (int*)malloc(sizeof(int) * btlNum);
    
    for(i = 0; i < btlNum; i++)
    {
        scanf("%d", &enmArray[i]);
    }
    
    crtLv = initLv;
    for(i = 0; i < btlNum; i++)
    {
        if(crtLv > enmArray[i])
        {
            crtLv += enmArray[i] / 2;
        } else
        if(crtLv < enmArray[i])
        {
            crtLv = crtLv / 2;
        } else
        if(crtLv == enmArray[i])
        {
            ;
        }
    }
    printf("%d", crtLv);
    free(enmArray);
    return 0;
}