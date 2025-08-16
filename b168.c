#include <stdio.h>

int tenPower(int a);
int checkCalcResult(int i, int* array);

int main(void)
{
    int aNum         = 0;
    int aNumList[4]  = {0};
    int aRsltList[8] = {0};
    int bNum         = 0;
    int bNumList[4]  = {0};
    int bRsltList[8] = {0};
    int cNum         = 0;
    int cNumList[4]  = {0};
    int cRsltList[8] = {0};
    int i            = 0;
    int j            = 0;
    int k            = 0;
    int aTemp        = 0;
    int bTemp        = 0;
    int cTemp        = 0;
    int sumList[8]   = {0};
    int sumNum       = 0;
 
    scanf ("%d %d %d", &aNum, &bNum, &cNum);
    
    for(i = 3; i >= 0; i--)
    {
        aNumList[i] = aNum / tenPower(i);
        aNum        = aNum % tenPower(i);
        //printf("%d\n", aNumList[i]);
    }

    for(i = 3; i >= 0; i--)
    {
        bNumList[i] = bNum / tenPower(i);
        bNum        = bNum % tenPower(i);
        //printf("%d\n", aNumList[i]);
    }

    for(i = 3; i >= 0; i--)
    {
        cNumList[i] = cNum / tenPower(i);
        cNum        = cNum % tenPower(i);
        //printf("%d\n", aNumList[i]);
    }

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            for(k = 0; k < 8; k++)
            {
                aTemp = checkCalcResult(i, aNumList);
                bTemp = checkCalcResult(j, bNumList);
                cTemp = checkCalcResult(k, cNumList);
                printf("%d %d %d", aTemp, bTemp, cTemp);
                if((aTemp == bTemp) && (bTemp == cTemp))
                {
                    sumList[sumNum] = aTemp;
                    sumNum++;
                }
                aTemp = 0;
                bTemp = 0;
                cTemp = 0;
            }
        }
    }
    if(sumNum == 0)
    {
        printf("NO\n");
    } 
    else 
    {
        printf("YES\n");
        for(i = 0; i < sumNum; i++)
        {
            printf("%d\n", sumList[i]);
        }
    }

    
    return 0;

}

int tenPower(int a)
{
    int i = 0;
    int temp = 1;
    for(i = 1; i <= a; i++)
    {
        temp *= 10;
    }
    return temp;
}

int checkCalcResult(int i, int* array)
{
    int ans;
        if(i == 0)
        {
            ans =   array[0] + array[1] + array[2] + array[3]; 
        }
        if(i == 1)
        {
            ans =   array[0] - array[1] + array[2] + array[3]; 
        }
        if(i == 2)
        {
            ans =   array[0] + array[1] - array[2] + array[3]; 
        }
        if(i == 3)
        {
            ans =   array[0] + array[1] + array[2] - array[3]; 
        }
        if(i == 4)
        {
            ans =   array[0] - array[1] - array[2] + array[3]; 
        }
        if(i == 5)
        {
            ans =   array[0] - array[1] + array[2] - array[3]; 
        }
        if(i == 6)
        {
            ans =   array[0] + array[1] - array[2] - array[3]; 
        }
        if(i == 7)
        {
            ans =   array[0] - array[1] - array[2] - array[3]; 
        }
    return ans;
}