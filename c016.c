#include <stdio.h>
int main(void)
{
    int i = 0;
    int j = 0;
    char str[100] = "";
    scanf("%s", str);
    char conpile[7][3] = 
    {
        {"A", "4"},{"E", "3"},{"G", "6"},{"I", "1"},
        {"O", "0"}, {"S", "5"}, {"Z", "2"}
    };
    while(c == "\0")
    {
        c = str[j];
        for(i=0; i<7; i++)
        {
            if(c == conpile[i][0])
            {
                str[i] = conpile[i][0];
            }
        }
        j++;
    }
    printf("%s", str);
    return 0;
}