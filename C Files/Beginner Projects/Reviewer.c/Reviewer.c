#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    char question[][300] = {
        "The first calculating tool in 2400 BC",
        "Also called arithmetic and pascal's calculator",
        "A french mathematician and christian philosopher",
        "Also named Stepped Reckoner made in 17th Century",
        "German polymath and one of the most important logician, mathematician and philosipher of the Enlightenment",
        "Contains similarities to mordern digital computers, made in 18th Century",
        "The father of computer and an English mathematician",
        "English mathematician and the first computer programmer",
        "Used in the 1890 US Census",
        "American businessman, inventory, and statistician who developed an electromechanical tabulating machine",
        "The Father of Computer Science and Artificial Intelligence",
        "English mathematician, computer scientist, cryptanalyst that cracked the enigma code",
        "Abstract computing machine that encaptulates the fundamental principles of a digital computer",
        "In 2016, the government unveiled a law that posthumously pardoned thousands of gay and bisexual men, what is that law",
        "Made because of the difficulty in studying the construction of buildings and roads",
        "German civil engineer, inventor, and computer pionee; created the Z1 - Z4",
        "Room-sized and relay-based calculator used to produce mathematical tables but was soon superseded by stored program computers",
        "Which harvard professor conceived the Harvard Mark 1",
        "Packard and Hewlett's first product that became a popular piece for engineers",
        "In what movie was the HP 200A Oscillator used for sound effects",
        "The first electronic digital computer",
        "Designed to break the complex Lorenz ciphers used by the nazi",
        "Commission for WWII but only completed one year later after the war",
        "Heralded as the \"Giant Brain\", with a speed of one thousand times that of electro-mechanical machines",
        "Successor of ENIAC",
        "First stored program digital computer, also a prototype for the Ferranti Mark 1",
        "Creators of Hewlett=Packard which was founded in Palo Alto",
        "Creators of ABC",
        "Creator of the Colossus",
        "Creators of the ENIAC and EDVAC",
        "Hugarian born American mathematician credited for defining program computer architecture of Manchester Mark 1",
        "Second usefully operational electronic digital stored-program computer",
        "Creator of EDSAC",
        "First general purpose computer for commercial use",
        "Gigantic computerized air defense system, which helps the Air Force",
        "Drum-based machine; one of the earliest transistorized japanese computers",
        "Was once called the fastest machine in the world back in 1964",
        "A family of six mutually compatible computers and 40 peripherals that works together",
        "First successful commercial minicomputer",
        "Made its debut by orbiting the earth on Apollo 7",
        "Computer architect that created CDC 6600",
        "Computer architect who devoted his life to the creation of so called supercomputers",
        "Conceived at the height of the Cold War, when the US Government sought a way to keep its network of computers alive incase of an attack",
        "Featured the first generation of gateways, which are known today as routers",
        "The IMP was performed helped in the development of the world's first operational packet switching network. What was developed?",
        "Often considered the world's first \"personal computer\", was touted as easy to use but failed to sell",
        "Within weeks of the computer's debut, customers inundated the manufacturing company, MITS, with orders",
        "What is the software language for the Altair",
        "Who made the Altair 8800",
        "Conceived as a build-it-yourself kit computer, though sold poorly but paved a way for its predecessors",
        "Creator of Apple 1",
        "This became an instant success when it was released. It has printed circuit motherboard, switching power supply, keyboard, etc.",
        "What was the computer game in the cassette tape in the Apple II",
        "One of the machines designed by Seymour Cray, ad also called the fastest computing machine back in 1976",
        "Features the ability to address up to 4.3 gigabytes of virtual memory, providing hundreds of times the capacity of most minicomputers",
        "A minicomputer that primarily serves as a game console",
        "A minicomputer with game capabilities but is more of a home computer",
        "A personal computer that ignited the fast growth of the personal computer market made by IBM",
        "Raw facts including texts, numbers, images, and sounds",
        "Processed data which is more meaningful to the user",
        "Physical components of the computer system",
        "Instructions that run the computer system",
        "The people involved in the in the information in the information technology system whether as user or developer",
        "This type of computer is used mostly for intensive computations. For example, Weather forecasting, Climate research, Cryptanalysis. etc",
        "They are used for performing complex math calculations, mostly used by scientists, have huge memories and tremendous processing speed",
        "Usually used for bulk processing, like census data processing, transaction processing. These are sensitive to temperature, and not user friendly",
        "Also called a microcomputer, they are cheap and user friendly, and can use a wide range of software",
        "This type of computer have less memory and storage capacity than mainframe computers, End users can directly operate it, and they are not sensitive to external environment",
        "True or false, Are minicomputers larger than microcomputers",
        "Computer devices in which continuously variable physical quantities such as electrical potential, fluid pressure, etc. in which they are similar in representation to quantities of the problems",
        "Computer device that performs calculations and logical operations with quantities represented as digits, usually in the binary number system of \"0\" and \"1\"",
        "This computer device displays data in continuous form, like speedometer, oscilloscope",
        "This computer device transforms all data into binary form and then proceeds to execution",
        "This computer device is a digital computer that accepts analog signals, converts them to digital and processes them",
        "Computers that is dedicated to a specific task, and may be more efficient",
        "Computers that handles a variety of tasks, and tend to be versatile",
        "Supercomputer that is said to be super fast that it takes one second to compute a calculation that would take the whole population 4 years"};
    char answers[][50] = {
        "ABACUS",
        "PASCALINE",
        "BLAISE_PASCAL",
        "LEIBNIZ_CALCULATOR",
        "GOTTFRIED_WILHELM_LEIBNIZ",
        "ANALYTICAL_ENGINE",
        "CHARLES_BABBAGE",
        "LADY_ADA_LOVELACE",
        "TABULATING_MACHINE",
        "HERMAN_HOLLERITH",
        "ALAN_TURING",
        "ALAN_TURING",
        "TURING_MACHINE",
        "ALAN_TURING_LAW",
        "Z1-Z4",
        "KONRAD_ZUSE",
        "HARVARD_MARK_1",
        "HOWARD_AIKEN",
        "HP_200A_AUDIO_OSCILLATOR",
        "FANTASIA",
        "ABC",
        "COLOSSUS",
        "ENIAC",
        "ENIAC",
        "EDVAC",
        "MANCHESTER_MARK_1",
        "BILL_HEWLETT_AND_DAVID_PACKARD",
        "JOHN_VINCENT_ATANASOFF_AND_CLIFF_BERRY",
        "TOMMY_FLOWERS",
        "JOHN_MAUCHLY_AND_J_PRESPER_ECKERT",
        "JOHN_VON_NEWMAN",
        "EDSAC",
        "MAURICE_WILKES",
        "UNIVAC",
        "SAGE",
        "NEAC_2203",
        "CDC_6600",
        "IBM_SYSTEM_360",
        "DEC_PDP",
        "APOLLO_GUIDANCE_COMPUTER",
        "SEYMOUR_CRAY",
        "SEYMOUR_CRAY",
        "INTERFACE_MESSAGE_PROCESSOR",
        "INTERFACE_MESSAGE_PROCESSOR",
        "ARPANET",
        "KENBAK-1",
        "ALTAIR_8800",
        "BASIC",
        "ED_ROBERTS",
        "APPLE_1",
        "STEVE_WOZNIAK",
        "APPLE_2",
        "BREAKOUT",
        "CRAY",
        "VAX_780",
        "ATARI_400",
        "ATARI_800",
        "IBM_PC",
        "INPUT",
        "OUTPUT",
        "HARDWARE",
        "SOFTWARE",
        "PEOPLEWARE",
        "SUPERCOMPUTER",
        "SUPERCOMPUTER",
        "MAINFRAME",
        "PERSONAL_COMPUTER",
        "MINICOMPUTER",
        "FALSE",
        "ANALOG",
        "DIGITAL",
        "ANALOG",
        "DIGITAL",
        "HYBRID",
        "SPECIAL_PURPOSE_COMPUTER",
        "GENERAL_PURPOSE_COMPUTER",
        "FRONTIER"};

    int numberofquestions = sizeof(question) / sizeof(question[0]);
    char shuffleconfirm;

    printf("Would you like to shuffle the questions? (y/n)\n>");
    scanf("%c", &shuffleconfirm);
    shuffleconfirm = toupper(shuffleconfirm);
    srand(time(0));

    if (shuffleconfirm == 'Y')
    {
        for (int i = 1; i < numberofquestions; i++)
        {
            char t[100];
            int j = rand() % (i + 1);
            strcpy(t, question[j]);
            strcpy(question[j], question[i]);
            strcpy(question[i], t);
            strcpy(t, answers[j]);
            strcpy(answers[j], answers[i]);
            strcpy(answers[i], t);
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

    system("cls");
    printf("Welcome to the First Reviewer for ITC. Identificiation.\nCapital Letter only and replace spaces to \"_\"\n");

    char choice[50];
    int score = 0;
    int questionnum = 1;

    for (int i = 0; i < numberofquestions; i++)
    {
        printf("\n%d. %s?\n", questionnum, question[i]);
        printf(">");
        scanf("%s", &choice);

        if (strcmp(choice, answers[i]) == 0)
        {
            printf("Correct!\n");
            ++score;
        }
        else
        {
            printf("Wrong!\n");
            printf("Correct Answer: %s\n", answers[i]);
        };
        ++questionnum;
    };

    printf("\n****************************\n");
    printf("Your Score\n");
    printf("%d/%d\n", score, numberofquestions);
    printf(":)!");
    printf("\n****************************\n");
    getch();

    return 0;
};
