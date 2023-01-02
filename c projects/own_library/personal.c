#include <stdio.h>
#include "mylibrary.h"

int main(void)
{
    int i, j;
    double array[10][10];
    double sumdi, sumal, avgright, sumcor, antidi;
    
    FILE *in  = fopen("L8_real.txt", "r");
         
    if (in == NULL)
    {  
        printf("error\n");
    }
    
    for(i=0;i<10;++i)
    {
        for(j=0;j<10;++j)
        {
            fscanf (in, "%lf", &array[i][j]);
        }
    }
    
    sumdi = sumdiag(array);
    
    sumal = sumall(array);

    avgright = avright(array);
    
    sumcor = corners(array);
    
    antidi = largeanti(array);
    
    FILE *bi_in = fopen("results.bin", "wb");
    FILE *bi_out = fopen("results.bin", "rb");
    
    if (bi_out == NULL || bi_in == NULL )
    {  
        printf("error\n");
    }
    
    fwrite (&sumdi, sizeof(sumdi), 1, bi_in);
    fwrite (&sumal, sizeof(sumal), 1, bi_in);
    fwrite (&avgright, sizeof(avgright), 1, bi_in);
    fwrite (&sumcor, sizeof(sumcor), 1, bi_in);
    fwrite (&antidi, sizeof(antidi), 1, bi_in);
    
    fread (&sumdi, sizeof(sumdi), 1, bi_out);
    printf("The sum of the diagonal is: %.1lf\n", sumdi);
    
    fread (&sumal, sizeof(sumal), 1, bi_out);
    printf("The sum of all the numbers is: %.1lf\n", sumal);
    
    fread (&avgright, sizeof(avgright), 1, bi_out);
    printf("The average of the numbers in the rightmost column is: %.1lf\n", avgright);
    
    fread (&sumcor, sizeof(sumcor), 1, bi_out);
    printf("The sum of the numbers in the corners is: %.1lf\n", sumcor);
    
    fread (&antidi, sizeof(antidi), 1, bi_out);
    printf("The sum of the antidiagonal is: %.1lf\n", antidi);
    
    fclose(in);
    fclose(bi_in);
    fclose(bi_out);

    return (0);
}
