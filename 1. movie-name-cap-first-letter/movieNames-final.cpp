// Author: © Salar Farahmand
#include <stdio.h>

   
int main() {
    int i, j, n;

    printf("Enter number of movies:");
    scanf("%d", &n);

    char string[n][1000];

    if (n < 1 || n > 10 )
    {
        printf("Invalid number! Please enter number betweeen 1 and 10. \n");
        
        return 0;
    }
    else 
    {
        printf("Enter movies names: \n");
        for (i = 0; i <= n; ++i)
        {
            fgets(string[i], sizeof(string), stdin);
        }
        

        for (i = 0; i <= n; ++i)
        {
            for (j = 0; string[i][j] != '\0'; j++)
            {
                if (j == 0)
                {
                    if ((string[i][j] >= 'a' && string[i][j] <= 'z')) string[i][j] -= 32; 
                    continue;
                }
                
                if (string[i][j] == ' ')
                {
                    ++j; 

                    if (string[i][j] >= 'a' && string[i][j] <= 'z')
                    {
                        string[i][j] -= 32;
                        continue;
                    }
                } 
                else 
                {
                    if (string[i][j] >= 'A' && string[i][j] <= 'Z') string[i][j] += 32;
                }

            }

        }

        printf("\nCapitalized movie names are:");
        for (i = 0; i <= n; ++i)
        {
            printf(" %s ", string[i]);
            // puts(string[i]);
        }


        return 0;    

    }
    
}