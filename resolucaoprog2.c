#include <stdio.h> <stdlib.h> <string.h>

void funcao();

int main()
    {
        char primeira[50], segunda[50];

    printf("Digite a primeira frase: ");
    gets(primeira);
    printf("Digite a segunda frase: ");
    gets(segunda);

    funcao(&primeira,&segunda);

    return 0;
}

void funcao(char *n1, char *n2){

    int tam1,tam2;

    tam1=strlen(n1);
    tam2=strlen(n2);

    if (tam1>tam2)
    {
        printf("a primeira frase eh maior");

    }
    else{
        printf("a segunda frase eh maior");
    }
    printf("\n a primeira frase tem %d e a segunda frase tem %d", tam1,tam2);


}
