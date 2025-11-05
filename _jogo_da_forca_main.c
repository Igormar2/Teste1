#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void inicializar_aleatoriedade() { 
srand(time(NULL));

}

int main(){
    inicializar_aleatoriedade();
    int erros = 0;
    int max_tentativas = 6;
    int acertou = 0; 
    int enforcou = 0; 
    FILE* f = fopen("Palavras.txt", "r");

    if (f == NULL) {
    printf("Erro: Banco de palavras nao encontrado.\n");
    exit(1); 

    }


    int total_palavras = 0;
    fscanf(f, "%d", &total_palavras);

    int indice_sorteado = rand() % total_palavras; 
    char palavra_secreta[50];
   

    for (int i = 0; i <= indice_sorteado; i++) {
    fscanf(f, "%s", palavra_secreta);
    }

    int tamanho = strlen(palavra_secreta);
    
    char display[50];
    for (int i = 0; i < tamanho; i++){
        display[i] = '_';
    }
    display[tamanho] = '\0';
    char tentativa; 
    char cpdisplay[50];
    

    
    
    while (!acertou &&!enforcou)
    {
    strcpy(cpdisplay, display);
    
    printf("...\n");
    scanf(" %c", &tentativa);
    tentativa = toupper(tentativa); 
    for(int i = 0; i<tamanho ; i++)
    {
        if(tentativa == palavra_secreta[i])
        {
            display[i] = tentativa;
        }
    }
    
    if(strcmp(cpdisplay, display) == 0)
    {
        erros++;
    }
    
     if(strcmp(palavra_secreta, display) == 0)
    {
        acertou++;
    }
    printf("%s\n",display);
    printf(" Erros :%d\n",erros);
   
    if (erros == max_tentativas)
    {
       enforcou++;
    }

    }
    if(enforcou == 1)
    {
        printf("Gameover!"); 
    }else 
    {
        printf("Ganhou!");
    }
    return 0;
}
