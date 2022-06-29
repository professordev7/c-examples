// Author: Salar Farahmand
// Way#1
#include <stdio.h>
#include <string.h>


void rotate_right_shift(char *string, int _shiftCount) 
{
    char temp;    
    int len = strlen(string);

    for (int i = 0; i < _shiftCount; i++)
    {
        /* code */
        temp = string[len-1]; 
        for (int j = len - 1; j > 0; j--) 
        {
            /* code */
            string[j] = string[j-1]; 
        }        

        string[0] = temp; 
    }    
}

void rotate_left_shift(char *string, int _shiftCount)
{
    char temp;    
    int len = strlen(string);

    for (int i = 0; i < _shiftCount; i++)
    {
        /* code */
        temp = string[0];

        for (int j = 1; j < len; j++)
        {
            /* code */
            string[j-1] = string[j];
        }        

        string[len-1] = temp;
    }        
}

void extend(char *string, int _extendedLength)
{
    const char ch[1] = {'*'};   

    for (int i = 0; i < _extendedLength; i++)
    {
        /* code */
        strncat(string, ch, 1); 
    }
    
}

void shrink(char *string, int _shrunkLength)
{
    int len = strlen(string);
    const char ch[1] = {'\0'};   

    if (_shrunkLength > len) 
    {
        /* code */
        strncpy(string, ch, sizeof(string));
    }
    else 
    {
        string[ len - _shrunkLength ] = '\0';                
    }
    
}

void reverse(char *string)
{
    int len = strlen(string);  
    char ch;  

    for (int i = 0; i < len/2; i++)
    {
        /* code */
        ch = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = ch;
    }
}

void put(char *string, int i, char c)
{
    int len = strlen(string);

    if (i <= len)
    {
        /* code */
        string[i-1] = c;
    }
    else {
        printf("i is invalid! Try again.");
    }    
}

int main () 
{
    // STEP-0 Start
    int op = 0;
    int n, len;
    char str[1000];

    // STEP-1 Get the initial string
    printf("Please enter the string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    str[len-1] = '\0';

    while (op > -1)
    {
        /* code */
        // STEP-2 Get the operation input from the user
        printf("Select the operation number from the list: \n");
        printf("1. SHIFT-R N\n");
        printf("2. SHIFT-L N\n");
        printf("3. EXTEND N\n");
        printf("4. SHRINK N\n");
        printf("5. REVERSE\n");
        printf("6. PUT I C\n");
        printf("7. PRINT\n");
        printf("8. EXIT\n");

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            /* code */
            printf("SHIFT-R ");
            scanf("%d", &n);

            rotate_right_shift(str, n);
            break;
        case 2:
            /* code */
            printf("SHIFT-L ");
            scanf("%d", &n);

            rotate_left_shift(str, n);            
            break;
        case 3:
            /* code */
            printf("EXTEND ");
            scanf("%d", &n);

            extend(str, n);
            break;
        case 4:
            /* code */
            printf("SHRINK ");
            scanf("%d", &n);

            shrink(str, n);
            break;
        case 5:
            /* code */
            printf("REVERSE \n");

            reverse(str);
            break;            
        case 6:
            /* code */
            int i;
            char c;
            printf("PUT ");
            scanf("%d %c", &i, &c);

            put(str, i, c);
            break;
        case 7:
            /* code */
            printf("PRINT\n");
            printf("%s\n", str);
            break;
        case 8:
            /* code */
            printf("EXIT \n");
            op = -1;
            break;        
        default:
            op = -1;
            break;
        }

        // STEP-3 Repeat STEP-2 until get the 'EXIT' operation
    }

    // STEP-4 Finish
    return 0;
}