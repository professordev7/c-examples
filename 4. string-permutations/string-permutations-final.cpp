// Author: Salar Farahmand
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void permute(char *str, int s, int e) 
{
    if (s == e)
    {
        printf("%s\n", str); 
    }
    else
    {
        for (int i = s; i <= e; i++)
        {
            swap((str+s), (str+i));
            permute(str, s+1, e); 
            swap((str+s), (str+i));
        }
    }
}

int main() 
{
    printf("Enter one string: \n");

    char str[10];
    scanf("%s", str);

    int n = strlen(str);

    printf("Results: \n");
    permute(str, 0, n-1);

    return 0;
}