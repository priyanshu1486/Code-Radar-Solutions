#include <stdio.h>

int main() {
    int n,day;
    scanf("%d", &n);
    switch (n) 
    {
        case 1:
            day=31;
            printf("%d", day);
            break;
        case 2:
            day=28;
            printf("%d", day);
            break;
        case 3:
            day=31;
            printf("%d", day);
            break;
        case 4:
            day=30;
            printf("%d", day);
            break;
        case 5:
            day=31;
            printf("%d", day);
            break;
        case 6:
            day=30;
            printf("%d", day);
            break;
        case 7:
            day=31;
            printf("%d", day);
            break;
        case 8:
            day=31;
            printf("%d", day);
            break;
        case 9:
            day=30;
            printf("%d", day);
            break;
        case 10:
            day=31;
            printf("%d", day);
            break;
        case 11:
            day=30;
            printf("%d", day);
            break;
        case 12:
            day=31;
            printf("%d", day);
            break;
        default:
            printf("Invalid Month");
            


    }
    
    return 0;
}