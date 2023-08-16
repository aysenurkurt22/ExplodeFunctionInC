#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *explode(char *delim, char *str, char **desired) {
    char *copy = strdup(str);
    char *token = strtok(copy, delim);
    
    int i = 0;
    while (token != NULL) {
        desired[i++] = strdup(token);
        token = strtok(NULL, " ");
    }

    free(copy);
}

int main() {
   
    char *text = "Fluffernutter trilobite wobbleflop ziggurat quibblesnack splendiferous";
    char *delim = " ";
    char **array; 
    
    explode(delim, text, array);
    printf("%s\n", array[2]);
    printf("%s\n", array[5]);

    return 0;
}

