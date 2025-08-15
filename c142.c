#include <stdio.h>
#include <string.h>

int main(void) {
    char wantEatStr[11];
    int menuNum;
    char menuList[5][11]; // 最大5単語、1単語最大10文字+終端
    int i;

    scanf("%s", wantEatStr);
    scanf("%d", &menuNum);

    for (i = 0; i < menuNum; i++) {
        scanf("%s", menuList[i]);
    }

    for (i = 0; i < menuNum; i++) {
        if (strcmp(wantEatStr, menuList[i]) == 0) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
