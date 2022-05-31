#include<stdio.h>
#include<stdlib.h>

int main(void){

    // Declaring Variables
    int lines = 0;
    char *column, *inverted;

    // Get Number of Lines
    // treat entry
    while(lines <= 0 || lines > 8 ){
        printf("Digite a Altura: ");
        scanf("%d", &lines);
    }


    // Dynamic Variable
    column = (char*) malloc (( lines + 1 ) * sizeof(char));
    inverted = (char*) malloc (( lines + 1 ) * sizeof(char));


    // Defining Default Values
    for (int i = 0; i < lines; i++) {
        column[i] = ' ';
        inverted[i] = ' ';
    }

    column[lines] = '\0';
    inverted[lines] = '\0';

    for(int v = lines ; v > 0 ; v--){
        column[v-1] = '#';
        inverted[(lines)-v] = '#';
        inverted[((lines)-v)+1] = '\0';
        printf("%s  %s\n" ,column,inverted);
    }

    free(column);
    free(inverted);
}