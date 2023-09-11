#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10 

int main(){
    char parent1[LENGTH + 1];
    char parent2[LENGTH + 1];
    char child1[LENGTH + 1];
    char child2[LENGTH + 1];
    int point = 0;

    printf("Parent1: ");
    scanf_s("%s", parent1, sizeof(parent1));
    getchar();

    printf("Parent2: ");
    scanf_s("%s", parent2, sizeof(parent2));
    getchar();

    printf("Cut point: before index ");
    scanf_s("%d", &point);
    getchar();

    for(int i = 0; i < (sizeof(parent1) / sizeof(char)); i++){
        if(i < point){
            child1[i] = parent1[i];
            child2[i] = parent2[i];
        } else{
            child1[i] = parent2[i];
            child2[i] = parent1[i];
        }
    }

    printf("Offspring1: %s\n", child1);
    printf("Offspring2: %s\n", child2);

    return 0;
}