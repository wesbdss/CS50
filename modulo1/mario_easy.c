#include<stdio.h>
#include<stdlib.h>

int main(void){

    // Declaring Variables
    int lines = 0;
    char* column;
    char* column;

    // Get Number of Lines
    printf("Digite a Altura: ");
    scanf("%i",&lines);

    // Dynamic Variable
    column = (char*) malloc((lines+1)*sizeof(char));

    // Defining Default Values
    for (int i = 0; i < lines; i++) column[i] = ' ';

    column[lines] = '\0';

    for(int v = lines;v>0;v--){
        column[v-1] = '#';
        printf("%s\n",column);
    }

    free(column);
}