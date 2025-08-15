#include <stdio.h>
int main(void)
{
    int n = 0;
    int m = 0;
    int i = 0;
    int* betweenCar;
    scanf("%d &d", &n, &m);
    betweenCar = (int*)malloc(sizeof(int) * (n-1));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &betweenCar[i]);
    }
    

}