/**
1. Write a C program to display the message: Hello World!.
2. Write a C program to display your full name, student ID, and university name, each on a new line.
3. Write a C program to display your full name, ID and university name in three lines using a printf
function.
4. Create a C program that will display the following lines, ensuring that the formatting and line
breaks are exactly as shown:
“Life is a dream, realize it.
Life is a challenge, meet it.
Life is beauty, admire it.”
5. Write a C program that takes an integer input from the user and displays it.
6. Write a C program that takes a float input from the user and displays it.
7. Write a C program that takes a single character input from the user and displays it.
8. Write a C program that takes two integer inputs using the scanf function and calculates their sum.
9. Write a C program that takes two floating-point numbers as inputs using the scanf function and
calculates their product.
10. Design a C program that takes an input temperature in Celsius using the scanf function and converts
it to Fahrenheit. Use the formula:
Fahrenheit = (Celsius × 9/5) + 32
11. Develop a C program that takes two characters as input from the user and displays both characters
along with their respective ASCII values. Use escape sequences to format the output.
Example Output:
If the user enters the characters A and B, the output will be:
You entered the characters: 'A' and 'B'
The ASCII value of 'A' is: 65
The ASCII value of 'B' is: 66
12. Write a C program that demonstrates the use of single-line (//) and multi-line (/* *./) comments.
**/

#include <stdio.h>
void menu();
void problem_1();
void problem_2();
void problem_3();
void problem_4();
void problem_5();
void problem_6();
void problem_7();
void problem_8();
void problem_9();
void problem_10();
void problem_11();
void problem_12();

int main()
{
    int n;
    menu();
    while (1)
    {
        printf("\nEnter your choice:");
        scanf("%d", &n);
        printf("\n");

        switch (n)
        {
        case 1:
            problem_1();
            break;
        case 2:
            problem_2();
            break;
        case 3:
            problem_3();
            break;
        case 4:
            problem_4();
            break;
        case 5:
            problem_5();
            break;
        case 6:
            problem_6();
            break;
        case 7:
            problem_7();
            break;
        case 8:
            problem_8();
            break;
        case 9:
            problem_9();
            break;
        case 10:
            problem_10();
            break;
        case 11:
            problem_11();
            break;
        case 12:
            problem_12();
            break;

        default:
            printf("Wrong input. Please try again.\n");
        }
    }

    return 0;
}

void menu()
{
    printf("1. Write a C program to display the message: Hello World!.\n");
    printf("2. Write a C program to display your full name, student ID, and university name, each on a new line.\n");
    printf("3. Write a C program to display your full name, ID and university name in three lines using a printf function.\n");
    printf("4. Create a C program that will display the following lines, ensuring that the formatting and linebreaks are exactly as shown:\n\"Life is a dream, realize it.\nLife is a challenge, meet it.\nLife is beauty, admire it.\"\n");
    printf("5. Write a C program that takes an integer input from the user and displays it.\n");
    printf("6. Write a C program that takes a float input from the user and displays it.\n");
    printf("7. Write a C program that takes a single character input from the user and displays it.\n");
    printf("8. Write a C program that takes two integer inputs using the scanf function and calculates their sum.\n");
    printf("9. Write a C program that takes two floating-point numbers as inputs using the scanf function and calculates their product.\n");
    printf("10. Design a C program that takes an input temperature in Celsius using the scanf function and convertsit to Fahrenheit. Use the formula:Fahrenheit = (Celsius × 9/5) + 32\n");
    printf("11. Develop a C program that takes two characters as input from the user and displays both charactersalong with their respective ASCII values. Use escape sequences to format the output.\nExample Output:\nIf the user enters the characters A and B, the output will be:\nYou entered the characters: 'A' and 'B'\nThe ASCII value of 'A' is: 65\nThe ASCII value of 'B' is: 66\n");
    printf("12. Write a C program that demonstrates the use of single-line (/./) and multi-line (/.* *./) comments.\n");
    printf("=======================================================================================================\n");
}

void problem_1()
{
    printf("Hello World.\n");
}
void problem_2()
{
    printf("Full Name: Abdullah Bin Badsha\nStudent ID: CSE2402032025\nUniversity Name: Sonargaon University\n");
}
void problem_3()
{
    printf("Full Name: Abdullah Bin Badsha\n");
    printf("Student ID: CSE2402032025\n");
    printf("University Name: Sonargaon University\n");
}
void problem_4()
{
    printf("\"Life is a dream, realize it.\nLife is a challenge, meet it.\nLife is beauty, admire it.\"\n");
}
void problem_5()
{
    int n;
    printf("Enter a integer number:");
    scanf("%d", &n);
    printf("Your input integer number is %d\n", n);
}
void problem_6()
{
    float x;
    printf("Enter a float number:");
    scanf("%f", &x);
    printf("Your input float number is %f\n", x);
}
void problem_7()
{
    char x;
    printf("Enter a single character:");
    scanf("\n%c", &x);
    printf("Your input charcter is : '%c'\n", x);
}
void problem_8()
{
    int x, y;
    printf("Enter your two integer number: ");
    scanf("%d%d", &x, &y);
    int sum = x + y;
    printf("The summation of %d and %d is %d\n", x, y, sum);
}
void problem_9()
{
    float x, y;
    printf("Enter your two floating-point number: ");
    scanf("%f%f", &x, &y);
    float sum = x + y;
    printf("The summation of %f and %f is %f\n", x, y, sum);
}
void problem_10()
{
    float Fahrenheit, Celsius;
    printf("Enter Celsius scale temperature:");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("%.2f Celsius to Fahrenheit is %.2f.\n", Celsius, Fahrenheit);
}
void problem_11()
{
    char x, y;
    printf("Enter two character:");
    scanf("\n%c %c", &x, &y);
    printf("The ASCII value of '%c' is: %d\n", x, (int)x);
    printf("The ASCII value of '%c' is: %d\n", y, (int)y);
}
void problem_12()
{
    int a = 5, b = 7; // here a and b Initializing variable (this is single line comments)");
    printf("a = %d\nb = %d\n", a, b);

    int sum = a + b;
    /* here sum is a variable wher stored a and b value
                       and sumation this . this is integer type data(this is multi line comments) */

    printf("sum is %d", sum); // this is output or display (this is single line comments)
    printf("To see the comments please check the code.");
}
