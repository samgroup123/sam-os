#include <stdio.h>

int main() {
    // switch is alternative to using many if-else statements//

    char dayOfWeek = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek){
        case 'M':
            printf("It is Monday");
            break;                    // braek in every statement because it will skip and the print the rest of the code
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;
        default:
            printf("Please enter a day of the week (M, T, W, R, F, S, U)");
    }

}