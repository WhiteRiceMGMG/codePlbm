#include <stdio.h>
int main(void)
{
    int h = 0;
    int w = 0;
    int r = 0;
    int c = 0;
    int t = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    char status[26][26];
    scanf("%d %d %d %d %d", &h, &w, &r, &c, &t);
    
    for(i = 0; i < h; i++)
    {
        for(j = 0; j < w; j++)
        {
            scanf("%c", &status[i][j]);
        }
    }
    status[r][c] = 'B';
    for(i = 1; i <= t; i++)
    {
        for(j = 0; j < h; j++)
        {
            for(k = 0; k < w; k++)
            {
                if(status[j][k] == 'B')
                {
                    status[j][k] = 'A';
                    if((j == 0) && (k == 0) && (status[j][k+1] == '#'))
                    {
                        status[j][k+1] = 'B';
                    } else 
                    if((j == 0) && (k == 0) && (status[j+1][k] == '#'))
                    {
                        status[j+1][k] = 'B';
                    } else
                    if((j == 0) && (k == w) && (status[j][k-1] == '#'))
                    {
                        status[j][k-1] = 'B';
                    } else
                    if((j == 0) && (k == w) && (status[j+1][k] == '#'))
                    {
                        status[j+1][k] = 'B';
                    } else
                    if((j == h) && (k == 0) && (status[j-1][k] == '#'))
                    {
                        status[j-1][k] = 'B';
                    } else
                    if((j == h) && (k == 0) && (status[j][k+1] == '#'))
                    {
                        status[j][k+1] = 'B';
                    } else
                    if((j == h) && (k == w) && (status[j-1][k] == '#'))
                    {
                        
                        status[j-1][k] = 'B';
                    } else
                    if((j == h) && (k == w) && (status[j][k-1] == '#'))
                    {
                        
                        status[j][k-1] = 'B';
                    } else
                    if((j == 0) && (k != 0) && (k != w) && (status[j][k-1] == '#'))
                    {
                        
                        status[j][k-1] = 'B';
                    } else
                    if((j == 0) && (k != 0) && (k != w) && (status[j][k+1] == '#'))
                    {
                        
                        status[j][k+1] = 'B';
                    } else
                    if((j == 0) && (k != 0) && (k != w) && (status[j+1][k] == '#'))
                    {
                        
                        status[j+1][k] = 'B';
                    } else
                    if((j == h) && (k != 0) && (k != w) && (status[j][k-1] == '#'))
                    {
                        
                        status[j][k-1] = 'B';
                    } else
                    if((j == h) && (k != 0) && (k != w) && (status[j][k+1] == '#'))
                    {
                        
                        status[j][k+1] = 'B';
                    } else
                    if((j == h) && (k != 0) && (k != w) && (status[j-1][k] == '#'))
                    {
                        
                        status[j-1][k] = 'B';
                    } else

                    if((j != 0) && (j != h) && (k == 0) && (status[j-1][k] == '#'))
                    {
                        
                        status[j-1][k] = 'B';
                    } else
                    if((j != 0) && (j != h) && (k == 0) && (status[j+1][k] == '#'))
                    {
                        
                        status[j+1][k] = 'B';
                    } else
                    if((j != 0) && (j != h) && (k == 0) && (status[j][k+1] == '#'))
                    {
                        
                        status[j][k+1] = 'B';
                    } else

                    if((j != 0) && (j != h) && (k == w) && (status[j-1][k] == '#'))
                    {
                        
                        status[j-1][k] = 'B';
                    } else
                    if((j != 0) && (j != h) && (k == w) && (status[j+1][k] == '#'))
                    {
                        
                        status[j+1][k] = 'B';
                    } else
                    if((j != 0) && (j != h) && (k == w) && (status[j][k-1] == '#'))
                    {
                        
                        status[j][k-1] = 'B';
                    } else

                    if(status[j][k+1] == '#'))
                    {
                        
                        status[j][k+1] = 'B';
                    } else
                    if(status[j][k-1] == '#'))
                    {
                        
                        status[j][k-1] = 'B';
                    } else
                    if(status[j-1][k] == '#'))
                    {
                        
                        status[j-1][k] = 'B';
                    } else
                    if(status[j+1][k] == '#'))
                    {
                        
                        status[j+1][k] = 'B';
                    } else




                    
                }

                 
            }
        }
    }
}