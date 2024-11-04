int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    if(arr_rows==0&&arr_rows==0)
    {
        return 0;
    }

    int diag1=0;
    int diag2=0;
    int count=arr_columns-1;

    for(int i=0;i<arr_rows;i++)
    {
        for(int j=0;j<arr_columns;j++)
        {
            if(i==j)
            {
                diag1+=arr[i][j];
            }

            if(j==count&&count>=0)
            {
               diag2+=arr[i][j];
               count--;
            }
        }
    }

    int returns=diag1-diag2;

    if(returns<0)
    {
        returns = -returns;
    }

    return returns;
}
