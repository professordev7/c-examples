// Author: Salar Farahmand
// Way#2
#include <stdio.h>
#include <string.h>

void right_shift(char *string, int _shiftCount)
{
    char temp;    
    int len = strlen(string);

    for (int i = 0; i < _shiftCount; i++)
    {
        temp = string[len-1];
        for (int j = len - 1; j > 0; j--)
        {
            string[j] = string[j-1];
        }        

        string[0] = temp;
    }    
}

void left_shift(char *string, int _shiftCount) 
{
    char temp;    
    int len = strlen(string);

    for (int i = 0; i < _shiftCount; i++)
    {
        temp = string[0]; 
        for (int j = 1; j < len; j++) 
        {
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
        strncat(string, ch, 1);
    }
    
}

void shrink(char *string, int _shrunkLength)
{
    int len = strlen(string);
    const char ch[1] = {'\0'};   

    if (_shrunkLength > len) 
    {
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
        ch = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = ch;
    }
}

void put(char *string, int i, char c)
{
    int len = strlen(string);

    string[i-1] = c;
}

void print(char *string)
{
    printf("%s\n", string);
}

int main () 
{
    char input[20];
    int a; // first arg
    char b; // second arg
    char str[1000];
    char op[10];
    int n, len;
    int i;
    char c;
    int res;

    printf("Please enter the string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    str[len-1] = '\0';

    while (strcmp(op, "EXIT") != 0)
    {
        fgets(input, sizeof(input), stdin);    
        res = sscanf(input, "%s %d %c", &op, &a, &b);

        if (res == 2 && strcmp(op, "SHIFT-R") == 0)
        {
            /* code */
            n = a;
            right_shift(str, n);
        }
        else if (res == 2 && strcmp(op, "SHIFT-L") == 0)
        {
            /* code */
            n = a;            
            left_shift(str, n);  
        }
        else if (res == 2 && strcmp(op, "EXTEND") == 0)
        {
            /* code */
            n = a;            
            extend(str, n);
        }
        else if (res == 2 && strcmp(op, "SHRINK") == 0)
        {
            /* code */
            n = a;
            shrink(str, n);
        }
        else if (res == 1 && strcmp(op, "REVERSE") == 0)
        {
            /* code */
            reverse(str);
        }
        else if (res == 3 && strcmp(op, "PUT") == 0)
        {
            /* code */
            i = a;
            c = b;
            put(str, i, c);
        }
        else if (res == 1 && strcmp(op, "PRINT") == 0)
        {
            /* code */
            print(str);
        }
        else if (res == 1 && strcmp(op, "EXIT") == 0)
        {
            /* code */
            break;
        }        
    } 

    return 0;
}