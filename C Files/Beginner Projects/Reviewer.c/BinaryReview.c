#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
void individualquiz();
void indivshufflequiz();
int score = 0;
char indivquestion[][80] = {
    "Binary-Hexa: 0000",
    "Binary-Hexa: 0001",
    "Binary-Hexa: 0010",
    "Binary-Hexa: 0011",
    "Binary-Hexa: 0100",
    "Binary-Hexa: 0101",
    "Binary-Hexa: 1000",
    "Binary-Hexa: 1001",
    "Binary-Hexa: 1010",
    "Binary-Hexa: 1011",
    "Binary-Hexa: 1100",
    "Binary-Hexa: 1101",
    "Binary-Hexa: 1110",
    "Binary-Hexa: 1111",
    "Binary-Hexa: 0111",
    "Binary-Hexa: 0110",
    "Binary-Octal: 000",
    "Binary-Octal: 001",
    "Binary-Octal: 010",
    "Binary-Octal: 011",
    "Binary-Octal: 100",
    "Binary-Octal: 101",
    "Binary-Octal: 110",
    "Binary-Octal: 111",
    "Hexa-Binary: 0",
    "Hexa-Binary: 1",
    "Hexa-Binary: 2",
    "Hexa-Binary: 3",
    "Hexa-Binary: 4",
    "Hexa-Binary: 5",
    "Hexa-Binary: 6",
    "Hexa-Binary: 7",
    "Hexa-Binary: 8",
    "Hexa-Binary: 9",
    "Hexa-Binary: A",
    "Hexa-Binary: B",
    "Hexa-Binary: C",
    "Hexa-Binary: D",
    "Hexa-Binary: E",
    "Hexa-Binary: F",
    "Octal-Binary: 0",
    "Octal-Binary: 1",
    "Octal-Binary: 2",
    "Octal-Binary: 3",
    "Octal-Binary: 4",
    "Octal-Binary: 5",
    "Octal-Binary: 6",
    "Octal-Binary: 7"};
char indivanswers[][50] = {
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "8",
    "9",
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "7",
    "6",
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111", "000", "001", "010", "011", "100", "101", "110", "111"};

int indivnumberofquestions = sizeof(indivquestion) / sizeof(indivquestion[0]);

int main()
{

    indivshufflequiz();
    system("cls");
    individualquiz();

    printf("\n****************************\n");
    printf("Your Score\n");
    printf("%d/%d\n", score, indivnumberofquestions);
    printf(":)!");
    printf("\n****************************\n");
    getch();

    return 0;
};

void individualquiz()
{
    printf("Welcome to the Second Reviewer for ITC. Identificiation.\nCapital Letter only");

    char choice[50];
    int questionnum = 1;

    for (int i = 0; i < indivnumberofquestions; i++)
    {
        printf("\n%d. %s?\n", questionnum, indivquestion[i]);
        printf(">");
        scanf("%s", &choice);

        if (strcmp(choice, indivanswers[i]) == 0)
        {
            printf("Correct!\n");
            ++score;
        }
        else
        {
            printf("Wrong!\n");
            printf("Correct Answer: %s\n", indivanswers[i]);
        };
        ++questionnum;
    };
};

void indivshufflequiz()
{
    char shuffleconfirm;
    getchar();
    printf("Would you like to shuffle the questions? (y/n)\n>");
    scanf("%c", &shuffleconfirm);
    shuffleconfirm = toupper(shuffleconfirm);
    srand(time(0));

    if (shuffleconfirm == 'Y')
    {
        for (int i = 1; i < indivnumberofquestions; i++)
        {
            char t[80];
            int j = rand() % (i + 1);
            strcpy(t, indivquestion[j]);
            strcpy(indivquestion[j], indivquestion[i]);
            strcpy(indivquestion[i], t);
            strcpy(t, indivanswers[j]);
            strcpy(indivanswers[j], indivanswers[i]);
            strcpy(indivanswers[i], t);
        }
        printf("Shuffled.");
        getch();
    }
    else if (shuffleconfirm == 'N')
    {
        printf("Remaining to Original Order.");
        getch();
    }
    else
    {
        printf("Not a valid answer. Remaining to Original Order.");
        getch();
    };
};