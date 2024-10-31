int simpleArraySum(int ar_count, int* ar)
{
    if(ar_count==0)
    {
        return 0;
    }

    int sum=0;

    for(int i=0;i<ar_count;i++)
    {
        sum+=ar[i];
    }

    return sum;
}

