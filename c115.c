#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n   = 0;
    int m   = 0;
    int i   = 0;
    int sum = 0;
    int* betweenCar;

    scanf("%d %d", &n, &m);
    
    betweenCar = (int*)malloc(sizeof(int) * (n-1));
    
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &betweenCar[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        if(betweenCar[i] < m)
        {
            sum += betweenCar[i];
        }
    }
    printf("%d", sum);
    
    return 0;
}