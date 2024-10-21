#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int loginscreen(bool);
void makeaccount();
bool loginaccount();
char *checkpassword();
int mainscreen(char *);
void checkbalance(char *);
void withdraw(char *);
void deposit(char *);
void showrules();

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
    bool loggedin = false;
    do
    {
        // system("cls");
        printf("\t\t\t***___________________________________________________***\n");
        printf("\t\t\tHello, User! Would you like to open a Bank account? (y/n)\n");
        printf("\t\t\t>");
        scanf("%c", &startChoice);

        startChoice = toupper(startChoice);
    } while (startChoice != 'Y');

    int checkloggedin = loginscreen(loggedin);

    if (checkloggedin == 3)
    {
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
        printf("\t\t\t You have chosen to Exit the program...\n");
        printf("\t\t\t Closing the program. :)");
        getch();
        exit(0);
    }

    char Baccount_Loggedin[20];
    strcpy(Baccount_Loggedin, checkpassword());

    int mainchoice;
    char exitconfirm;
    do
    {
        mainchoice = mainscreen(Baccount_Loggedin);
        if (mainchoice == 5)
        {
            printf("\t\t\tAre you sure you would like to exit?\n\t\t\t (Y/N)\n");
            printf("\t\t\t>");
            scanf("%s", &exitconfirm);
            exitconfirm = toupper(exitconfirm);

            if (exitconfirm == 'N')
            {
                mainchoice = 6;
                system("cls");
            }
            else if (exitconfirm == 'Y')
            {
                system("cls");
                printf("\t\t\t***__________Bank of the Enrique_________***\n");
                printf("\t\t\t You have chosen to Exit the program...\n");
                printf("\t\t\t Closing the program. :)");
                getch();
                exit(0);
            }
            else
            {
                system("cls");
                printf("\t\t\tNot a valid answer.");
                getch();
                system("cls");
                mainchoice = 6;
            };
        }
        switch (mainchoice)
        {
        case 1:
            system("cls");
            checkbalance(Baccount_Loggedin);
            getch();
            system("cls");
            break;

        case 2:
            system("cls");
            withdraw(Baccount_Loggedin);
            getch();
            system("cls");
            break;

        case 3:
            system("cls");
            deposit(Baccount_Loggedin);
            system("cls");
            break;

        case 4:
            system("cls");
            showrules();
            getch();
            system("cls");
        default:
            break;
        }
    } while (mainchoice != 5);

    return 0;
}

int loginscreen(bool loggedin)
{
    int choice;
    bool checkloggedin = false;

    while (loggedin == false && checkloggedin == false && choice != 3)
    {
        while (checkloggedin == false && choice != 3)
        {
            system("cls");
            printf("\t\t\t***__________Bank of the Enrique_________***\n");
            printf("\t\t\t\tWhat would you like to do?\n");
            printf("\n\t\t\t\t1. Login an Existing Account\n");
            printf("\n\t\t\t\t2. Make a new Account\n");
            printf("\n\t\t\t\t3. Exit\n");
            printf("\t\t\t***_______________________________________***\n");
            printf("\t\t\t\t>");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                system("cls");
                checkloggedin = loginaccount();
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
                system("cls");
                break;
            }
        };
    };

    return choice;
};

bool loginaccount()
{
    FILE *Bfile = fopen("Trial", "r");
    struct Baccount info;
    int accountNo = 1;
    int choice;

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\t\tThere is no accounts.");
        getch();
        exit(0);
    }
    else
    {
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
    };

    printf("\t\t\tExisting Bank Accounts:\n");

    while (fread(&info, sizeof(struct Baccount), 1, Bfile))
    {
        printf("\n\t\t\tAccount No. %d\n", accountNo);
        printf("\t\t\tName:     %s %s\n", info.first_name, info.last_name);
        printf("\t\t\tBalance:  PHP %.2f\n", info.balance);
        printf("\t\t\tBank:     %s\n", info.bank_brand);
        printf("\t\t\tBank No.: %d\n", info.bank_No);
        printf("\t\t\t***_______________________________________***\n");
        accountNo += 1;
    }

    printf("\n\t\t\tPress Any Key to continue.\n\t\t\t");
    fclose(Bfile);
    return true;
};

void makeaccount()
{
    FILE *Bfile = fopen("Trial", "a");
    struct Baccount info;
    int choice;

    printf("\t\t\t***__________Bank of the Enrique_________***\n");
    printf("\t\t\tYou are now currently making a new account.\n");
    printf("\n\t\t\tEnter First Name:");
    scanf("%s", &info.first_name);
    printf("\n\t\t\tEnter Last Name:");
    scanf("%s", &info.last_name);
    printf("\n\t\t\tEnter Password:");
    scanf("%s", &info.password);
    printf("\n\t\t\tEnter Bank_No.:");
    scanf("%d", &info.bank_No);
    printf("\t\t\t***_______________________________________***\n");

    system("cls");
    printf("\t\t\t***____________Available Banks____________***\n");
    printf("\t\t\tWhich Bank would you like to subscribe to?\n\n");
    printf("\t\t\t\t1. Bank of the Enrique\n");
    printf("\t\t\t\t2. Metrobank\n");
    printf("\t\t\t\t3. Philippine National Bank\n");
    printf("\t\t\t\t4. BDO\n");
    printf("\t\t\t\t5. United Enrique Bank\n");
    printf("\t\t\t\t6. Golden Bank\n");
    printf("\n\t\t\t***_______________________________________***\n");
    printf("\t\t\t\t>");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\t\t\tYou have chosen the Bank of the Enrique.\n");
        strncpy(info.bank_brand, "Bank of the Enrique", 50);
        break;

    case 2:
        printf("\t\t\tYou have chosen the Metrobank.\n");
        strncpy(info.bank_brand, "Metrobank", 50);
        break;

    case 3:
        printf("\t\t\tYou have chosen the Philippine National Bank.\n");
        strncpy(info.bank_brand, "Philippine National Bank", 50);
        break;

    case 4:
        printf("\t\t\tYou have chosen the BDO.\n");
        strncpy(info.bank_brand, "BDO", 50);
        break;

    case 5:
        printf("\t\t\tYou have chosen the United Enrique Bank.\n");
        strncpy(info.bank_brand, "United Enrique Bank", 50);
        break;

    case 6:
        printf("\t\t\tYou have chosen the Golden Bank.\n");
        strncpy(info.bank_brand, "Golden Bank", 50);
        break;
    default:
        printf("\t\t\tNot a supported bank, now assigning the standard bank.\n");
        strncpy(info.bank_brand, "Bank of the Enrique", 50);
        break;
    };

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\t\tCan't open file");
    }
    else
    {
        printf("\t\t\tAccount made succesfully.\n");
    };

    fwrite(&info, sizeof(struct Baccount), 1, Bfile);
    fclose(Bfile);

    printf("\t\t\tYou have now made a new bank account!\n\t\t\t");
};

char *checkpassword()
{
    FILE *Bfile = fopen("Trial", "r");
    struct Baccount info;
    char accountSearch[50];
    int found = 0;
    char passwordcheck[20];
    int check = 0;
    char *firstname_buffer;
    firstname_buffer = (char *)malloc(20 * sizeof(char));

    while (found != 1)
    {
        rewind(Bfile);
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
        printf("\t\t\tWhich account would you like to login?\n\t\t\t (Please enter the First Name.)\n");
        printf("\t\t\t>");
        scanf("%s", accountSearch);
        system("cls");
        while (fread(&info, sizeof(struct Baccount), 1, Bfile))
        {
            if (strcmp(accountSearch, info.first_name) == 0)
            {
                do
                {
                    found = 1;
                    printf("\t\t\t***__________Bank of the Enrique_________***\n");
                    printf("\t\t\tName:       %s %s\n", info.first_name, info.last_name);
                    printf("\t\t\tPassword:   ");
                    scanf("%s", passwordcheck);
                    if (strcmp(passwordcheck, info.password) == 0)
                    {
                        check = 1;
                        system("cls");
                        printf("\t\t\t***__________Bank of the Enrique_________***\n");
                        printf("\n\t\t\tNow entering! Hello %s!\n", info.first_name);
                        printf("\n\t\t\t***_______________________________________***\n");
                        strcpy(firstname_buffer, info.first_name);
                        getch();
                        system("cls");
                    }
                    else
                    {
                        system("cls");
                        printf("\t\t\tThat was the wrong password! Please try again.");
                        getch();
                        system("cls");
                    };

                } while (check == 0);
            };

            if (!found)
            {
                printf("\t\t\tNow Loading...");
                system("cls");
            };
        };
    };
    fclose(Bfile);

    return firstname_buffer;
};

int mainscreen(char *user)
{
    int choice;
    printf("\t\t\t***____________Bank of the Enrique___________***\n");
    printf("\n\t\t\tWelcome, %s! What would you like to do?\n", user);
    printf("\n\t\t\t1. Check Balance.\n");
    printf("\n\t\t\t2. Withdraw.\n");
    printf("\n\t\t\t3. Deposit.\n");
    printf("\n\t\t\t4. Rules & Regulations.\n");
    printf("\n\t\t\t5. Exit.\n");
    printf("\n\t\t\t***___________________________________________***\n");
    printf("\t\t\t\t>");
    scanf("%d", &choice);

    return choice;
};

void checkbalance(char *user)
{
    FILE *Bfile = fopen("Trial", "r");
    struct Baccount info;
    int choice;
    int found = 0;

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\t\tCan't open file");
    }
    else
    {
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
    };

    while (fread(&info, sizeof(struct Baccount), 1, Bfile))
    {
        if (strcmp(user, info.first_name) == 0)
        {
            found = 1;
            printf("\n\t\t\tName        : %s %s\n", info.first_name, info.last_name);
            printf("\n\t\t\tBank        : %s\n", info.bank_brand);
            printf("\n\t\t\tBank No.    : %d\n", info.bank_No);
            printf("\n\t\t\tYour Balance: PHP %.2f\n", info.balance);
            printf("\n\t\t\t***___________________________________________***\n");
        };

        if (!found)
        {
            printf("\t\t\tNow Loading...");
            system("cls");
        };
    };
    fclose(Bfile);
};

void withdraw(char *user)
{
    FILE *Bfile, *Bfile1;
    Bfile = fopen("Trial", "r");
    Bfile1 = fopen("Temp", "w");
    struct Baccount info;
    int choice;
    int found = 0;
    bool balancecheck = false;
    float balancebuff;
    float withdrawal;
    float result;
    int finder;
    char cancel;

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\t\tCan't open file");
    }
    else
    {
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
    };

    while (fread(&info, sizeof(struct Baccount), 1, Bfile))
    {
        if (strcmp(user, info.first_name) == 0)
        {
            while (balancecheck == false)
            {
                found = 1;
                printf("Please Input Amount of money to be withdrawn:");
                scanf("%f", &withdrawal);
                if (withdrawal <= 0)
                {
                    system("cls");
                    printf("Withdrawal Failed.\n");
                    printf("Would you like to cancel withdrawal? (y/n)");
                    scanf("%s", &cancel);
                    cancel = toupper(cancel);
                    if (cancel == 'Y')
                    {
                        balancecheck = true;
                    }
                    else
                    {
                        balancecheck == false;
                    }
                }
                else
                {
                    balancebuff = info.balance;
                    result = balancebuff - withdrawal;

                    if (result < 0)
                    {
                        system("cls");
                        printf("You have insufficient balance to proceed with the withdrawal.");
                        printf("Would you like to cancel withdrawal? (y/n)");
                        scanf("%s", &cancel);
                        cancel = toupper(cancel);
                        if (cancel == 'Y')
                        {
                            balancecheck = true;
                        }
                        else
                        {
                            balancecheck == false;
                        }
                    }
                    else
                    {
                        balancecheck = true;
                        info.balance = result;
                        printf("Withdrawing.");
                        getch();
                    };
                };
            };
        };

        if (!found)
        {
            printf("\t\t\tNow Loading...");
            system("cls");
        };

        fwrite(&info, sizeof(struct Baccount), 1, Bfile1);
    };
    fclose(Bfile);
    fclose(Bfile1);

    if (found)
    {
        Bfile1 = fopen("Temp", "r");
        Bfile = fopen("Trial", "w");

        while (fread(&info, sizeof(struct Baccount), 1, Bfile1))
        {
            fwrite(&info, sizeof(struct Baccount), 1, Bfile);
        }
        fclose(Bfile);
        fclose(Bfile1);
    };
};

void deposit(char *user)
{
    FILE *Bfile, *Bfile1;
    Bfile = fopen("Trial", "r");
    Bfile1 = fopen("Temp", "w");
    struct Baccount info;
    int choice;
    int found = 0;
    bool balancecheck = false;
    float balancebuff;
    float deposit;
    float result;
    int finder;

    if (Bfile == NULL)
    {
        fprintf(stderr, "\t\t\tCan't open file");
    }
    else
    {
        printf("\t\t\t***__________Bank of the Enrique_________***\n");
    };

    while (fread(&info, sizeof(struct Baccount), 1, Bfile))
    {
        if (strcmp(user, info.first_name) == 0)
        {
            while (balancecheck == false)
            {
                found = 1;
                printf("Please Input Amount of money to be deposited:");
                scanf("%f", &deposit);
                if (deposit <= 0)
                {
                    printf("Deposit Failed.");
                }
                else
                {
                    balancebuff = info.balance;
                    result = balancebuff + deposit;

                    if (result < 0)
                    {
                        printf("You have insufficient balance to proceed with the withdrawal.");
                    }
                    else
                    {
                        balancecheck = true;
                        info.balance = result;
                        printf("Depositing.");
                        getch();
                    };
                };
            };
        };

        if (!found)
        {
            printf("\t\t\tNow Loading...");
            system("cls");
        };

        fwrite(&info, sizeof(struct Baccount), 1, Bfile1);
    };
    fclose(Bfile);
    fclose(Bfile1);

    if (found)
    {
        Bfile1 = fopen("Temp", "r");
        Bfile = fopen("Trial", "w");

        while (fread(&info, sizeof(struct Baccount), 1, Bfile1))
        {
            fwrite(&info, sizeof(struct Baccount), 1, Bfile);
        }
        fclose(Bfile);
        fclose(Bfile1);
    };
};

void showrules()
{
    printf("\t\t\t***_____________Rules & Regulation____________***\n");
    printf("\n\t\t\t1. Brud no stealing moneh.\n");
    printf("\n\t\t\t***___________________________________________***\n");
};