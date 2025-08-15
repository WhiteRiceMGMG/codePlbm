#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char wantEatStr[11] = "";
    int menuNum = 0;
    char* menuList = "";
    int i = 0;

    scanf("%s", wantEatStr);
    scanf("%d", &menuNum);

    menuList = (char*)malloc(sizeof(char) * 11 * menuNum);
    
    for(i = 0; i < menuNum; i++)
    {
        scanf("%s", &menuList[i]);
    }

    for(i = 0; i < menuNum; i++)
    {
        if("wantEatList" == "menuList[i]"){}
    }
    free(menuList);
    return 0;
}