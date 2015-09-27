#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,rank_n,store,encounter;

    printf("Entrer une valeur de depart :");
    scanf("%d",&a);
    printf("Entrer une valeur d'evolution :");
    scanf("%d",&b);
    printf("n = ? :");
    scanf("%d",&rank_n);


    for (encounter = 0;rank_n>encounter;encounter++) {
        printf("%d\n",a);
        store 	= a+b;
        a 		= b;
        b		= store;
    }
    return 0;
}
