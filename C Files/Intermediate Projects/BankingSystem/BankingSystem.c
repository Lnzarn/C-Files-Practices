#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int loginscreen();
void makeaccount();
int loginaccount();
int checkpassword();
void checkbalance();
void withdraw();
void deposit();

struct Baccount
{
    char first_name[20];
    char last_name[20];
    float balance;
    char bank_brand[50];
    int bank_No;
    char password[20];
};

int main()
{
    char startChoice;

    do
    {
        system("cls");
        printf("\tHello, User! Would you like to open a Bank account? (y/n)\n");
        printf("\t>");
        scanf("%c", &startChoice);
        startChoice = toupper(startChoice);
    } while (startChoice != 'Y');

    loginscreen();

    return 0;
}

int loginscreen()
{
    int choice;
    int loggedin = 0;

    do
    {
        printf("\t*******Bank of the Enrique*******\n");
        printf("\tWhat would you like to do?\n");
        printf("\n\t1. Login an Existing Account\n");
        printf("\n\t2. Make a new Account\n");
        printf("\n\t3. Exit\n");
        printf("\n\t*********************************\n");
        printf(">");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            loginaccount();
            getch();
            system("cls");
            break;

        case 2:
            system("cls");
            makeaccount();
            getch();
            system("cls");
            break;

        default:
            break;
        }
    } while (choice != 3);
}
void makeaccount()
{
    FILE *Bfile = fopen("BankAccounts", "a");
    struct Baccount info;
    int choice;

    printf("\t*******Bank of the Enrique*******\n");
    printf("\tYou are now currently making a new account.\n");
    printf("\n\tEnter First Name:");
    scanf("%s", &info.first_name);
    printf("\n\tEnter Last Name:");
    scanf("%s", &info.last_name);
    printf("\n\tEnter Password:");
    scanf("%s", &info.password);
    printf("\n\tEnter Bank_No.:");
    scanf("%d", &info.bank_No);
    printf("\n\t********************************\n");

    system("cls");
    printf("\t*******Bank of the Enrique*******\n");
    printf("\tWhich Bank would you like to subscribe to?\n\n");
    printf("\t1. Bank of the Enrique\n");
    printf("\t2. Metrobank\n");
    printf("\t3. Philippine National Bank\n");
    printf("\t4. BDO\n");
    printf("\t5. United Enrique Bank\n");
    printf("\t6. Golden Bank\n");
    printf("\n\t********************************\n");
    printf("\t>");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\tYou have chosen the Bank of the Enrique.\n");
        strncpy(info.bank_brand, "Bank of the Enrique", 50);
        break;

    case 2:
        printf("\tYou have chosen the Metrobank.\n");
        strncpy(info.bank_brand, "Metrobank", 50);
        break;

    case 3:
        printf("\tYou have chosen the Philippine National Bank.\n");
        strncpy(info.bank_brand, "Philippine National Bank", 50);
        break;

    case 4:
        printf("\tYou have chosen the BDO.\n");
        strncpy(info.bank_brand, "BDO", 50);
        break;

    case 5:
        printf("\tYou have chosen the United Enrique Bank.\n");
        strncpy(info.bank_brand, "United Enrique Bank", 50);
        break;

    case 6:
        printf("\tYou have chosen the Golden Bank.\n");
        strncpy(info.bank_brand, "Golden Bank", 50);
        break;
    default:
        printf("\tNot a supported bank, now assigning the standard bank.\n");
        strncpy(info.bank_brand, "Bank of the Enrique", 50);
        break;
    }

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\tCan't open file");
    }
    else
    {
        printf("\tAccount made succesfully.\n");
    };

    fwrite(&info, sizeof(struct Baccount), 1, Bfile);
    fclose(Bfile);

    printf("\tYou have now made a new bank account!\n");
};

int loginaccount()
{
    FILE *Bfile = fopen("BankAccounts", "r");
    struct Baccount info;
    int accountNo = 1;
    int choice;

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\tCan't open file");
        }
    else
    {
        printf("\t*******Bank of the Enrique*******\n");
    };

    while (fread(&info, sizeof(struct Baccount), 1, Bfile))
    {
        printf("\n\tAccount No. %d\n", accountNo);
        printf("\tName:     %s %s\n", info.first_name, info.last_name);
        printf("\tBalance:  PHP %.2f\n", info.balance);
        printf("\tBank:     %s\n", info.bank_brand);
        printf("\tBank No.: %d\n", info.bank_No);
        printf("\n\t______________________\n");
        accountNo += 1;
    }

    printf("Press Any Key.\n");
    getch();
    system("cls");
    fclose(Bfile);
    checkpassword();

    /*int number;
    char word[50];
    char words[50];

    if (fscanf(bank, "%d %49s", &number, word) == 2)
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
    }*/
};

int checkpassword()
{
    FILE *Bfile = fopen("BankAccounts", "r");
    struct Baccount info;
    char accountSearch[50];
    int found = 0;
    char passwordcheck[20];
    int check = 0;

    do
    {
        printf("\tWhich account would you like to login? Please enter the First Name.\n");
        printf(">");
        scanf("%s", accountSearch);
        system("cls");
        while (fread(&info, sizeof(struct Baccount), 1, Bfile))
        {
            if (strcmp(accountSearch, info.first_name) == 0)
            {
                do
                {
                    found = 1;
                    printf("\tName:     %s %s\n", info.first_name, info.last_name);
                    printf("Password:   ");
                    scanf("%s", passwordcheck);
                    if (strcmp(passwordcheck, info.password) == 0)
                    {
                        check = 1;
                        printf("Now entering!");
                        getch();
                        system("cls");
                    }
                    else
                    {
                        printf("That was the wrong password!");
                        getch();
                        system("cls");
                    };

                } while (check == 0);
            }

            if (!found)
            {
                printf("No Account.");
            }
        };
    } while (found == 0);

    fclose(Bfile);
};