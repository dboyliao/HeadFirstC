#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char line[100];
    char con;
    while(1){
        FILE *in_file = fopen("spooky.csv", "r");
        fscanf(in_file, "%s\n", line);
        printf("%s\n", line);
        printf("Enter c to continue.\n");
        scanf("%c", &con);
    }
    return 0;
}
        
