#include <stdio.h>
#include <stdlib.c>
int main(void)
{
    char wantEatStr[11] = "";
    int menuNum = 0;
    char* menuList = "";

    scanf("%s", wantEatStr);
    scanf("%d", menuNum);

    menuList = (char*)malloc(sizeof(char) * 10 * menuNum);
    free(menuList);
    return 0;
}