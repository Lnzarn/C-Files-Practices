#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    char question[][300] = {
        "It is an electronic device that accpets data from the user, processses it, produces results, displays the mto the user, and stores the result for future usage", 
        "This refers to mechanical device that makes up computer", 
        "This is a collection of several components working together. some parts are essential and others are added advantage. It is made up of CPU and peripherals", 
        "This is as set of instructions that drives computers to do stipulated tasks", 
        "This is programmed in a computer language, translated into machine language, and executed by computer", 
        "The Two types of software", 
        "This is a set of programs to control and manage the operations of a computer hardware, required to run the hardware parts of the computers, controls allocation and usage, and is general-purpose which is essential for a computer to work", 
        "Three types of System software", 
        "This is used to perform various applications on the computer, used acoording to needs, and performs specific tasks when required", 
        "It is a tool used for processing data into information", 
        "The list of instructions that the computer must follow to be able to process data into information", 
        "The whole program life cycle", 
        "What does IPO mean", 
        "This means detecting, locating, and removing errors in the computer program", 
        "These can be typographical error or incorrect format of the statement used", 
        "This is caused by incorrect use of control structures", 
        "These are a predefined error codes and error messaged that software programmers can use with their software to tell the software users that the program is experiencing a particular problem", 
        "This is the manual that is prepared to help the user use the programs", 
        "This manual gives the computer operator information on what to do when the program flasehs an error message", 
        "This consists of the testing of the whole programs. This documentation helps train the new programmers to maintain existing system", 
        "This provides education and support to end users, correct any unanticipated errors that emerge, and identify user-requested modificaitons, once errors or enhancements are identified, the program development life cycle begins again at step 1", 
        "The primary and secondary storage",
        "This sends information to computers on a network",
        "The types of programming language",
        "This is a step by step procedure to solve a given problem, is it aprecise, systematic method for producing a specified result, a set of steps used to complete a specific task", 
        "The properties of an algorithm",
        "Types of algorithm",
        "This is a visual representation of the sequence of the steps and decisions needed to perform a process", 
        "This a type of diagram that represents an algorithm or process, is used to descrive processing procedures based on detailed analysis", 
        "Types of flowcharts",
        "Indicated a flowchart for a targeted system as a whole",
        "This is used to describe processing procedures based on detailed analysis", 
        "The steps are performed in a strictly sequential manner, each step being executed exactly once. This is the simplest method of control. It is easy to develop and understand",
        "One of the several alternative actions is selected and executed. It involved the use of decision based on the given condition. It use decision block or the diamong-shaped block",
        "This have one or more steps that are performed repeatedly",
        "This is a mixture of language and symbols, terms, and other feature commonly used one or more high-level languages. High-level languages are programs used by the computer",
        "This is a simpler version of programming code in plain English before it is implemented in a specific programming language. It is comapct and informal high-level description of a program", 
        "The whole program elements",
        "These are identifiers which can be assigned a value within a program, it is nothing but a name given to a storage area that our program can manipulate",
        "These refers to fixed values that may not altered by the program, and it cannot by altered during its execution",
        "These are names that are used to reference variables, functions, labels, and various other user-defined objects, this can be a sequence of letters, digits and the special character -, which is called an underscore",
        "These are symbols that tells the compiler to perform specific mathematical, relational, or logical manipulations", 
        "The types of Operators",
        "This asks for the input to be transformed during the computation to produce the output, the date needed to bein with, and input precision",
        "This asked for the data resulting form the computation, and output precision", 
        "This requres that you know what kind of data, how much, and what form the data should be",
        "This requires that you know what kind of data, how much and what form the output should be( or even if there will be any output at all)",
        "This asks for specifying the sequence of operations for turning input into output",
        "This asks for the algorithm to be doable",
        "This asks for the algorithm to be stopped, eventually", 
        "This is a general purpose language which is very closely associated with UNIX for which it was developed in Bell Laboratiories",
        "Who made many of the important ideas of \'c\'",
        "Who wrote the C language which caused a revolution in computing world",
        "What are the previous versions of \'B\' language",
        "This has structured and disciplined approach to program design", 
        "These are words that have special meaning to the C compiler, their meaning cannot be changed, serves as a basic building block, and are written in lowercase",
        "These are the files that specified in the include section, these are precompiled files that has some functions defined in them",
        "This is the \"Entry Point\" of a program, when a file is executed, the start point is the main function, and this is compulsory for any C program",
        "These are the smallest individual units in a C program, and is  source-program text that the compiler does not break down into component elements",
        "The 6 different types of tokens viz",
        "These refer to sequence of digits such as decimal integer, octal integer, and hexadecimal integer",
        "The floating points constants such as 0.0083, -0.78, etc",
        "These contains a single character constants enclosed within pair of single quotes",
        "These are sequence of characters enclosed in double quotes", 
        "The three classes of data types",
        "These are some non-printing characters and some other characters such as double quote, single quote, question mark, and backslash", 
        "Decisions are based on boolean expressisons (or conditions) that evaluate to true or false",
        "These lets us choose which statements will be executed next",
        "These are sometimes called selection statements",
        "What are the order of statement execution called",
        "This expression is a logical statement that is either TRUE or FALSE",
        "This operator uses question marks and colon",
        "This refers to the relationship values can have with with one another. It is used to determine the relationship of one quantity to another",
        "This refers to the ways the relationship can be connected together using the rules of formal logic",
        "This means one IF function inside of another, allows you to test multiple criteria and increases the number of possible outcomes",
        "This may be any expression which evaluates to an int, conditional, char",
        "Variables that are initialized only at the start of the program, and are set to zero if not specified",
        "Variables that are initiliazed each time the function in which they are declared is entered",
        "This operator uses to string together several expressions",
        "This operator works on the individual bits of data",
        "This operator assigns a new value to a variable",
        "These data type consists of whole number consisting of an optional signs followed by a sequence of digits, it cannot contain commas, used for controlling loops and conditional statements",
        "This data type is followed by one or more digits, a decimal point or one or more futher digits, and it occupies 4 bytes, from 3.4 E to -38 and +38",
        "This data type is a special float which can store more significant digits and have longer exponent, it occupies 8 bytes, from 1.7 E to -308 and +308",
        "This reads the source code of your program one line at a time and performs the specific instructions contained in that line",
        "This reads the entire program and converts it into object code (the form that can be directly executed by the computer)",
        "This is the event that occurs during the compilation process",
        "A transition of the program source code in a form that can be directly executed by the computer",
        "This is the logic of the program, and can be applied to all programming language",
        "This is the rules that define the structure of a language, and are specific to a certain programming language",
        "This is the text of a program that a user can read (commonly thought of as a program)",
        "This refers to the events that occur while the program is executing",
        "This is a collection of pre-written functions",
        "These are errors detected during the compiling process",
        "This is time errors that are detected during execution time",
        "This includes a complete environment in which to create, test, and run programs",
        "The components of Turbo C",
        "This is used to create the program source code",
        "This is extended from the \"base bone\" language of Ritchie\'s specifications, this includes enhancements whuch make the turbo C compatible with the new proposed and ANSI standard",
        "This is used to convert source code into machine code or binary code",
        "This is used to test the program and locate programming errors",
        "This a time environment that is capable of running programs within the turbo C system",
        "This is the various features of turbo C are integrated into a single program which allows to smoothly proceed from source code to entry compilation to debugging to running without leaving the turbo C environments",
        "Type out IDE",
        "Type out ASCII",
        "Type out KISS",
        "Type out API",
        "Used to alter the meaning of the base type to more precisely fit the needs of various situation",
        "This makes the program easier to understand, but does not make any difference to the compiler",
        "This is an Int with a byte size of 2 from -32768 to +32767",
        "This is an Int with a byte size of 4 from -2147483648 to +2147483647",
        "This is an Int with a byte size of 16 from 0 to 65536",
        "This is a data type that has a single letter, punction mark, or control symbols encloed within a single quotation mark, integer value of -128 to +127",
        "This is a data type that can be assigned with an integer value from 0 to 255",
        "This data type that is used to declare a function that has no returning value",
        "This is when we create variables, giving them symbolic names, and the definition reserves memory for them",
        "This is the process of assigning values to variables",
        "These makes it more readable, and easier to change later if necessary",
        "This is introduced by ANSI C, and are available in the standard header files",
        "This is a string and may contain conversion specifications or formats",
        "This is how the arguements are printed",
        "This is where the argument is printed",
        "This is the number of characters in its field, and it can be specified in a format as integer occuring between the percent charater and the conversion character",
        "This operator is read as \"the address of x\"",
        "This is when the keyboard is used to input values into a program, a sequence of characters is typed, and it is this sequence of characters",
        "This is a relational, logical, equality expression of an expression from any domain is premissible", 
        "This is a multiway conditional statement generalizing the if-else statement",
        "These are a combination of values, variables, operators, and function calls that, when evaluated, results in a single value. Expressions can represent computation, comparisons, or assignments. Building blocks of complex statements",
        "This guides the flow of programs, enhacing clarity and understanding"
        };
    char answers[][100] = {
        "COMPUTER", "HARDWARE", "HARDWARE", "PROGRAM", "SOFTWARE", "SYSTEM_SOFTWARE_APPLICATION_SOFTWARE", "SYSTEM_SOFTWARE", "OPERATING_SYSTEM_UTILITY_PROGRAMS_DEVICE_DRIVERS", 
        "APPLICATION_SOFTWARE", "COMPUTER", "PROGRAM", "PROBLEM_DEFINITION_DESIGN_CODING_TESTING_DOCUMENTATION_MAINTENANCE", "INPUT_PROCESS_OUTPUT", "DEBUGGING", "SYNTAX_ERRORS",
        "LOGIC_ERRORS", "SYSTEM_ERRORS", "USER_DOCUMENTATION", "OPERATOR_DOCUMENTATION", "PROGRAM_DOCUMENTATION", "PROGRAM_MAINTENANCE", "COMPUTER", "SERVER", "MACHINE_ASSEMBLY_HIGHER_MIDDLE", 
        "ALGORITHM", "INPUT_OUTPUT_DEFINITENESS_EFFECTIVENESS_FINITENESS", "FLOWCHART_PSEUDOCODE", "FLOWCHART", "FLOWCHART", "SYSTEM_PROGRAM", "SYSTEM_FLOWCHART", "FLOWCHART",
        "SEQUENTIAL_STRUCTURE", "SELECTION_STRUCTURE", "REPETITION_STRUCTURE", "PSEUDOCODE", "PSEUDOCODE", "VARIABLES_CONSTANTS_IDENTIFIERS_OPERATORS_CONTROL_STRUCTURES_KEYWORDS_DATA_TYPES",
        "VARIABLES", "CONSTANTS", "IDENTIFIERS", "OPERATORS", "ARITHMETIC_RELATIONAL_LOGICAL_ASSIGNMENT", "INPUT_SPECIFIED", "OUTPUT_SPECIFIED", "INPUT_PRECISION", "OUTPUT_PRECISION", "DEFINITENESS", "EFFECTIVENESS",
        "FINITENESS", "C", "MARTIN_RICHARDS", "DENNIES_RITCHIE", "BCPL_CPL", "C", "KEYWORDS", "HEADER_FILES", "MAIN_FUNCTION", "TOKENS", "KEYWORDS_IDENTIFIERS_CONSTANTS_STRINGS_SPECIAL_SYMBOLS_OPERATORS",
        "INTEGER_CONSTANTS", "REAL_CONSTANTS", "SINGLE_CHARACTER_CONSTANTS", "STRING_CONSTANTS", "PRIMITIVE_AGGREGATE_OR_DERIVED_USER_DEFINED", "ESCAPE_SEQUENCE", "SELECTION", "CONDITIONAL_STATEMENTS", "CONDITIONAL_STATEMENTS",
        "FLOW_OF_CONTROL", "BOOLEAN_EXPRESSION", "TERNARY_OPERATOR", "RELATIONAL_EXPRESSION", "LOGICAL_EXPRESSION", "NESTED_IF", "SWITCH_EXPRESSION", "GLOBAL_VARIABLES", "LOCAL_VARIABLES", "COMMA_OPERATOR", "BITWISE_OPERATOR",
        "ASSIGNMENT_OPERATOR", "INT_VARIABLES", "FLOAT", "DOUBLE", "INTERPRETER", "COMPILER", "COMPILE_TIME", "OBJECT_CODE", "SEMANTICS", "SYNTAX", "SOURCE_CODE", "RUN_TIME", "LIBRARY", "SYNTAX_ERRORS", "SEMANTIC_OR_RUN_ERROR", "TURBO_C",
        "EDITOR_EXTENDED_C_LANGUAGE_COMPILER_DEBUGGER_RUN_USER_INTERFACE", "EDITOR", "EXTENDED_C_LANGUAGE", "COMPILER", "DEBUGGER", "RUN_TIME_ENVIRONMENT", "USER_INTERFACE", "INTEGRATED_DEVELOPMENT_ENVIRONMENT", 
        "AMERICAN_STANDARD_CODE_FOR_INFORMATION_INTERCHANGE", "KEEP_IT_SHORT_AND_SIMPLE", "APPLICATION_PROGRAMMING_INTERFACE", "TYPE_MODIFIERS", "INDENTATION", "SHORT_INT", "LONG_INT", "UNSIGNED_INT", "CHAR", "UNSIGNED_CHAR", "VOID", "VARIABLE_DECLARATION",
        "VARIABLE_INITIALIZATION", "SYMBOLIC_CONSTANTS", "FUNCTION_PROTOTYPE", "CONTROL_STRING", "CONVERSION_CHARACTER", "FIELD", "FIELD_WIDTH", "ADDRESS_OPERATOR", "INPUT_STREAM", "IF_STATEMENT", "SWITCH_STATEMENTS", "EXPRESSIONS", "CONTROL_STRUCTURE"
        };

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
            char t[300];
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
