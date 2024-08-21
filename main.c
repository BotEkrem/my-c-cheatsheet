#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    // Defining variables

    int sample_int = 123;
    char sample_char = 'z';
    float sample_float = 3.14159;
    double sample_double = 3.141592653589793;
    char sample_string[] = "sample";

    /*
        printing:
            \n for line break
            %d / %i for int
            %c for char
            %f / %F for float
            %lf for double
            %s for string
            %lu for long unsigned int (@TODO add documentation about Signed and Unsigned values)
    */

    // Formatting -- Decimal Precision

    printf("Init Values: %d, %c, %f, %.10lf, %s\n", sample_int, sample_char, sample_float, sample_double,
           sample_string);

    // Changing variables

    sample_int = 123123;
    sample_char = 'e';
    sample_float = 4.14159;
    sample_double = 4.141592653589793;
    sample_string[0] = 'b';

    // Formatting -- Decimal Precision

    printf("Changing Values: %d, %c, %f, %.10lf, %s\n", sample_int, sample_char, sample_float, sample_double,
           sample_string);

    // Multiple Definition - Constant for Immutability

    const int x = 0, y = 0, z = 0;
    printf("Multiple Definition: %d, %d, %d\n", x, y, z);

    // Memory Sizes -- sizeof()

    printf("Memory Sizes (by byte): %llu, %llu, %llu, %llu, %llu\n", sizeof(sample_int), sizeof(sample_char),
           sizeof(sample_float),
           sizeof(sample_double), sizeof(sample_string));

    // Type Conversion

    const float sum = 5 / 2;
    const float sum2 = (float) 5 / 2;

    printf("Type Conversion - Before: %f\n", sum);
    printf("Type Conversion - After: %f\n", sum2);

    /* Arithmetic Operators

    Operator	Name	          Description                                 Example
    +	        Addition	      Adds together two values	                  x + y
    -	        Subtraction	    Subtracts one value from another	          x - y
    *	        Multiplication  Multiplies two values	                      x * y
    /	        Division	      Divides one value by another	              x / y
    %	        Modulus	        Returns the division remainder	            x % y
    ++	      Increment	      Increases the value of a variable by 1      ++x
    --	      Decrement	      Decreases the value of a variable by 1      --x

    */

    printf("Arithmetic Operators:\n"
           "+: %d\n"
           "-: %d\n"
           "*: %d\n"
           "/: %f\n"
           "%%: %d\n"
           "++: %d\n"
           "--: %d\n"
           ,
           5 + 2,
           5 - 2,
           5 * 2,
           (float) 5 / 2,
           5 % 2,
           ++sample_int,
           --sample_int
    );

    /* Assignment Operators

    Operator	  Example	        Same As
    =  	        x = 5	          x = 5
    += 	        x += 3	        x = x + 3
    -= 	        x -= 3	        x = x - 3
    *= 	        x *= 3	        x = x * 3
    /= 	        x /= 3	        x = x / 3
    %= 	        x %= 3	        x = x % 3
    &= 	        x &= 3	        x = x & 3
    |= 	        x |= 3	        x = x | 3
    ^= 	        x ^= 3	        x = x ^ 3
    >>=       	x >>= 3	        x = x >> 3
    <<=       	x <<= 3	        x = x << 3

    */

    const int sample = 10;

    printf("Assignment Operators:\n"
           "+=: %d\n"
           "-=: %d\n"
           "*=: %d\n"
           "/=: %f\n"
           "%%=: %d\n"
           "&=: %d\n"
           "|=: %d\n"
           "^=: %d\n"
           ">>=: %d\n"
           "<<=: %d\n",
           sample + 3,
           sample - 3,
           sample * 3,
           (float) sample / 3,
           sample % 3,
           sample & 3,
           sample | 3,
           sample ^ 3,
           sample >> 3,
           sample << 3
    );

    /* Comparison Operators

    Operator	  Name	                    Example	        Description
    ==	        Equal to	                x == y	        Returns 1 if the values are equal
    !=	        Not equal	                x != y	        Returns 1 if the values are not equal
    >	          Greater than	            x > y	          Returns 1 if the first value is greater than the second value
    <	          Less than	                x < y	          Returns 1 if the first value is less than the second value
    >=	        Greater than or equal to	x >= y	        Returns 1 if the first value is greater than, or equal to, the second value
    <=	        Less than or equal to	    x <= y	        Returns 1 if the first value is less than, or equal to, the second value

    */

    printf("Comparison Operators:\n"
           "==: %d\n"
           "!=: %d\n"
           ">: %d\n"
           "<: %d\n"
           ">=: %d\n"
           "<=: %d\n",
           1 == 1,
           1 != 1,
           1 > 1,
           1 < 1,
           1 >= 1,
           1 <= 1
    );

    /* Logical Operators

    Operator	Name	  Example	            Description
    && 	      AND	    x < 5 &&  x < 10	  Returns 1 if both statements are true
    || 	      OR	    x < 5 || x < 4	    Returns 1 if one of the statements is true
    !	        NOT	    !(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1

    */

    printf("Comparison Operators:\n"
           "&&: %d\n"
           "||: %d\n"
           "!: %d\n",
           2 == 2 && 1 == 1,
           1 || 0,
           !1
    );

    // Boolean type and Shorthand If

    const bool isDocumented = false;
    const bool isNotDocumented = !isDocumented;

    printf("Boolean Type:\n");
    printf(isDocumented && isNotDocumented ? "true\n" : "false\n");
    printf(isDocumented || isNotDocumented ? "true\n" : "false\n");

    // User Input

    char input[100];

    printf("Type a number: \n");
    scanf("%s", &input);

    // If ... Else Statements

    if (strlen(input) > 1) { // Length check
        printf("Taken number is too long, please enter one digit positive number.\n");
    } else if (!isdigit(input[0])) { // Numeric check
        printf("Taken input is not a number, please enter one digit positive number.\n");
    } else {
        printf("Taken number: %c\n", input[0]);
    }

    // Switch Statement

    switch (input[0] - '0') /* char to int */ {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
        break;
        case 2:
            printf("Two\n");
        break;
        case 3:
            printf("Three\n");
        break;
        case 4:
            printf("Four\n");
        break;
        case 5:
            printf("Five\n");
        break;
        case 6:
            printf("Six\n");
        break;
        case 7:
            printf("Seven\n");
        break;
        case 8:
            printf("Eight\n");
        break;
        case 9:
            printf("Nine\n");
        break;
        default:
            printf("No case triggered.\n");
    }

    // To be continued...

    return 0;
}
