// Function: check_empty
// Checks if 'ch' is an empty string.
// Returns 1 if 'ch' is empty, otherwise returns 0.
int check_empty(const char* ch) {
    int strlength = strlen(ch);

    if (strlength == 0) {
        return 1;  // Empty string
    }
    return 0;  // Not empty
}
// Function: add_arr
// Adds up integers in the array 'arr' with 'cnt' elements, ignoring values >= 1000.
// Returns the sum of valid integers.
int add_arr(int *arr,int cnt)
{
    int i = 0;
    int total = 0;
    while(i < cnt)
    {
        if(arr[i] < 1000)
        {
          total += arr[i];
        }
        i++;
    }

    return total;
}

