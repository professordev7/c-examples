/* Author: Salar Farahmand */
#include <stdio.h>
#include <string.h>


struct Book
{
    /* data */
    // char name[1][101]; // xx not effiecient
    char name[101]; 
    int pages;
    char genre[51];
};

int makeItThreeDigits(int number) {
    // e.g 1001 => 100
    int new_number = number;
    while (new_number > 999)
    {
        /* code */
        new_number = number / 10;
    }        

    return new_number;

}

int main (void) {
    int n, i;

    // STEP-1 Get the number of books:
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book sbook[n];

    // STEP-2 Get the info of books:
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%[^,]", &sbook[i].name); 
        scanf(",%d[^,]", &sbook[i].pages);
        scanf(",%s", &sbook[i].genre);     

        sbook[i].pages = makeItThreeDigits(sbook[i].pages);
    }
    

    // STEP-3 Get the required genre:
    char req_genre[51];
    printf("\nEnter the required genre: ");
    scanf("%s", &req_genre);

    // STEP-4 Get the period of pages:
    int min_page, max_page;
    printf("Enter the periods: ");
    scanf("%d %d", &min_page, &max_page );

    // STEP-5 display book(s) with required genre and period of pages:
    char selected_books[n][101];
    int selected_books_count = 0; // NOTE: Auxiliary variable to avoid empty values in the final array. e.g. ['book1', '', 'book3', ...]

    for (i = 0; i < n; i++)
    {
        if (strcmp(sbook[i].genre, req_genre) == 0 && sbook[i].pages >= min_page && sbook[i].pages <= max_page) 
        {
            /* code */
            strncpy(selected_books[selected_books_count], sbook[i].name, sizeof(selected_books));
            selected_books_count++;
        }
        // optional
        else 
        {
        //     memset(selected_books, 0, n); // clear the array
            strncpy(selected_books[i], "", sizeof(selected_books));
        }
    }

    printf("Selected book(s) are:");
    for (i = 0; i < sizeof(selected_books)/sizeof(selected_books[0]); i++)
    {
        /* code */
        // if (strlen(selected_books[i]) != '\0') // in case used optional way.
        printf("%s", selected_books[i]);
    }
    printf("\n");
    

    return 0;
}