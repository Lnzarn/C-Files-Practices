/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *filename = "example1.txt";
    FILE *file = fopen(filename, "r");

    // If the file does not exist, create and write initial data to it
    if (file == NULL)
    {
        file = fopen(filename, "w");
        if (file == NULL)
        {
            perror("Error creating file");
            return 1;
        }
        fprintf(file, "123 HelloWorld\n");
        fclose(file);
        file = fopen(filename, "r");
        if (file == NULL)
        {
            perror("Error opening file");
            return 1;
        }
    }

    int number;
    char word[50];
    char words[50];

    if (fscanf(file, "%d %49s", &number, word) == 2)
    {
        printf("Number: %d, Word: %s\n", number, word);
    }
    else
    {
        printf("Failed to read data from file.\n");
    }

    printf("what was the word?");
    scanf("%s", &words);
    if (strcmp(word, words) == 0)
    {
        printf("You got it correctly");
    }
    else
    {
        printf("wrong.");
    }

    fclose(file);
    return 0;
}*/

////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A utility function to swap to integers
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A utility function to print an array
void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// A function to generate a random permutation of arr[]
void randomize ( int arr[], int n )
{
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand ( time(NULL) );

    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0
    for (int i = n-1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i+1);

        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}

// Driver program to test above function.
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/ sizeof(arr[0]);
    randomize (arr, n);
    printArray(arr, n);

    return 0;
}*/
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <conio.h>

int main()
{
    int ch;

    while ((ch = _getch()) != 27)  27 = Esc key
    {
        printf("%d", ch);
        if (ch == 0 || ch == 224)
            printf(", %d", _getch());
        printf("\n");
    }

    printf("ESC %d\n", ch);

    return (0);
}; */
/*
#include <stdio.h>

int main()
{
    char name[80];
    scanf("%s", name);

    printf("\n\nI love you, %s!\n\n\n", name);

    return 0;
}; */
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////

#include <stdio.h>
/* print Fahrenheit-Celsius table */
/*
int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
};*/
int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
};