// Author: © Salar Farahmand
#include <stdio.h>

/*
    * Conclusion (done):
        - works for all positive numbers
        - works for all negative numbers
        - works for negative/positive combines        
*/


int main(void) {

    int n, i;
    int sum, max_sum = 0;

    printf("Enter number of days:");
    scanf("%d", &n);
    int values[n];

    if (n < 1 || n > 100)
    {
        /* code */
        printf("number of days is invalid!\n");

        return 0;
    }


    // STEP-1 Get the values:

    printf("\nEnter values of days:\n");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &values[i]);

    }

    // STEP-2 Find the largest sum of sequenced (*important) sub-arrays:

    for (i = 0; i < n; i++)
    {
        /* code */

        // Set greater value as maximum sum (optional):
        if (values[i] > max_sum)
        {
            /* code */
            max_sum = values[i];
        }
        
        sum = values[i] + sum;
        if (sum > max_sum)
        {
            /* code */
            max_sum = sum;
        } 

        if (sum < 0)
        {
            /* code */
            sum = 0;
        }
        
    }
    

    printf("Maximum benefit is: %d\n", max_sum);
    
    
    return 0;

}