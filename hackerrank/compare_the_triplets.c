int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    if(a_count==0&&b_count==0)
    {
        return NULL;
    }

    int *arr=(int*)malloc(2*sizeof(int));

    int count1=0;
    int count2=0;

    *result_count=2;
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            count1++;
        }

        else if(b[i]>a[i])
        {
            count2++;
        }
    }

    arr[0]=count1;
    arr[1]=count2;

    return arr;
}