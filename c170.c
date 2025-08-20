#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int array[101];
    int i = 0;
    int sum = 0;
    int point = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < n; i++)
    {
        point = array[i] / 100;
        sum += point;
    }
     if (sum >= m) {
        printf("0\n");
    } else {
        printf("%d\n", (m - sum) * 100);
    }
    return 0;
}