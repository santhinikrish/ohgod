void *manchester(int *arr, int len)
{
    int *res = (int *)malloc(sizeof(int)*len);
    for(int index = 0; index < len; index++)
    {
        res[index] = (arr[index] != arr[index-1]);
    }
    return res;
}
