#include <stdio.h>

void Fibonacci(unsigned long long int *arr, unsigned long int n);

// Driver code
int main()
{
    long int n = 0;
    int ret;

    while(1)
    {
        printf("Enter the value of \"n\" upto to which you want the Fibonacci series to be generated\n");
        printf("n : ");
        ret = scanf("%ld",&n);
        if( ret != 1 ) // Checks if the input was an integer
            {
                printf("\nOnly natural numbers are allowed !!\n\n");
                getchar(); // Get the floating input
            }
        else if( n <= 0 ) // Checks if the num is greater than 0
            printf("\nOnly values of n>0 will be accepted\n\n",n);
        else
            break;
    }   
    
    unsigned long long int arr[n];

    // This is the main function
    Fibonacci(arr, n);

    //print the sequence to verify
    printf("*************************\
            \nThe Fibonacci series is\
            \n*************************\n");
    for( int i = 0; i<n; i++)
    {
        printf("%llu \n",arr[i]);
    }

    return 0;
}

// v.2
// The function accepts an array 
// to fill the series
void Fibonacci(unsigned long long int *arr, unsigned long int n)
{
    unsigned long long int a = 0, b = 1;
    unsigned long int j = 2;
    // T(n) = T(n-1) + T(n-2)
    arr[0] = 0;
    arr[1] = 1;

    while(j<n)
    {
        arr[j] = a + b;

        a = b;
        b = arr[j];
        j = j + 1;
    }
    return;
}

/*
// v.1
// The function accepts an array 
// to fill the series
void Fibonacci(unsigned long long int *arr, unsigned long int n)
{
    // T(n) = T(n-1) + T(n-2)
    arr[0] = 0;
    arr[1] = 1;
	unsigned long int j = 2;
  
    while(j<n)
    {
        arr[j] = arr[j-1] + arr[j-2];
      	j = j + 1;
    }
    return;
}
*/