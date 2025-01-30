#include <stdio.h>
int main() {
    int dayNumber;
    printf("Enter a number(1-7): ");
    scanf("%d",&dayNumber);
    switch(dayNumber){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
    }
}