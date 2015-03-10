#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv){
    char line[1024];

    FILE* in;
    if (argc != 7){
        printf("6 arguments needed.\n");
        return 1;
    } else if (!(in = fopen(argv[1]))){
        fprintf(stderr, "Can't open %s\n", argv[1]);
    }
    in = fopen(argv[1], "r")
    FILE* file1 = fopen(argv[3], "w");
    FILE* file2 = fopen(argv[5], "w");
    FILE* file3 = fopen(argv[6], "w");

    while(fscanf(in, "%1023[^\n]\n", line) == 1){
        if (strstr(line, argv[2]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[4]))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }
    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}
