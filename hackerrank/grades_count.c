int* gradingStudents(int grades_count, int* grades, int* result_count)
{
    if(grades_count==0)
    {
        return NULL;
    }

    *result_count=grades_count;

    int *arr=(int*)malloc(grades_count*sizeof(int));

    for(int i=0;i<grades_count;i++)
    {
        if(grades[i]<38||(grades[i]%5)<3)
        {
            arr[i]=grades[i];
        }

        else if(grades[i]%5>=3)
        {
            int remai_der=5-grades[i]%5;

            arr[i]=grades[i]+remai_der;
        }
    }

    return arr;

}