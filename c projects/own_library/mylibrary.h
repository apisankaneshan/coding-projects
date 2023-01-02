double
sumdiag(double array[10][10])
{
    int i, j;
    double sumd;
    sumd = 0;
    for(i=0;i<10;++i)
    {
        j=i;
        sumd = sumd + array[i][j];
    }
    return(sumd);
}

double
sumall(double array[10][10])
{
    int i, j;
    double suma;
    suma=0;
    for(i=0;i<10;++i)
    {
        for(j=0;j<10;++j)
        {
            suma = suma + array[i][j];
        }
    }
    return(suma);
}

double
avright(double array[10][10])
{
    int i, j;
    double avgr, sumr;
    avgr = 0;
    sumr = 0;
    for(i=0;i<10;++i)
    {
        sumr = sumr + array[i][9];
    }
    avgr = sumr/10;
    return(avgr);
}

double
corners(double array[10][10])
{
    double sumc;
    sumc=0;
    sumc=array[0][0]+array[0][9]+array[9][0]+array[9][9];
    return(sumc);
}

double
largeanti(double array[10][10])
{
    int i, j, k;
    double high;
    high = 0;
    i = 0;
    j = 9;
    
    for(k=0; k<11; ++k)
    {
        if(array[i][j]>high)
        {
            high = array[i][j];
        }
        ++i;
        --j;
    }
    return(high);
}
