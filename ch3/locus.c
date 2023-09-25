#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10

char itoc(int num){
    if(num > 9 || num < 0) return 0;
    return num + 48;
}

int main(){
    char order_s[LENGTH + 1];
    char locus_s[LENGTH + 1];
    int order[LENGTH + 1];
    int locus[LENGTH + 1];

    printf("Order-based: ");
    scanf_s("%s", order_s, sizeof(order_s));
    getchar();

    for (int i = 0; i < LENGTH; i++){
        order[i] = order_s[i] - '0';
    }
    order[LENGTH] = order[0];

    for (int j = 0; j < LENGTH; j++){
        locus[order[j]] = order[j + 1];
    }
    locus[LENGTH] = -1;

    for (int k = 0; k < (sizeof (locus) / sizeof (char)); k++){
        locus_s[k] = itoc(locus[k]);
    }

    printf("Locus-based: %s\n", locus_s);

    return 0;
}