#include <stdio.h>

int main(void)
{
    int n = 0;
    int l = 0;
    int array[110] = {0};
    int i = 0;
    int max = 0;
    int sum = 0;
    
    scanf("%d %d", &n, &l);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        if(array[i] >= max)
        {
           max = array[i];
        }   
    }
    
    for(i = 0; i < n; i++)
    {
        sum += array[i];
    }

    sum -= max;

    if((max / 2) < l)
    {
        max = max / 2;
    }else
    if((max / 2) >= l)
    {
        max = l;
    }

    sum = sum + max;
    printf("%d", max);
    return 0;


 
}