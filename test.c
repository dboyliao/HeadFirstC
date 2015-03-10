#include <stdio.h>

void play(char* msg){
    
    while (*msg){
        printf("%s\n", msg);
        msg++;
    }
}

int main(){
    
    char msg[]="12345";
    play(msg);

    return 0;
}

