#include <stdio.h>

int main(){
    while(1){
        char name[20];
        printf("Enter your name:");
        scanf("%19s", name);
        printf("Hello, %s\n", name);
        printf("%lu\n", sizeof(name));
    }
    return 0;
}
