#include <stdio.h>

void main(){
    char food[5];
    printf("[scanf \%s]Enter favorite food:");
    scanf("%s", food);
    printf("[scanf \%4s]Enter favorite food:");
    scanf("%4s", food);
}
