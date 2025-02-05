#include <stdio.h>
#include <ctype.h>

int main() {
    char grade;
    scanf("%c", &grade);
    grade = toupper(grade);  // Convert lowercase to uppercase

    switch (grade){
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Below Average"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid Grade");
    }

    return 0;
}
