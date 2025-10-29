#include <stdio.h>
#include <string.h>

int main()
{
    int erros = 0;
    int max_tentativas = 6;
    int acertou = 0; // Flag booleana (0 ou 1)
    int enforcou = 0; // Flag booleana (0 ou 1)
    char palavra_secreta[] = "LOGICA";
    char display[] = "______";
    int tamanho = strlen(palavra_secreta);
    char tentativa; 
    char cpdisplay[50];
    
    while (!acertou &&!enforcou)
    {
    strcpy(cpdisplay, display);
    
    printf("...\n");
    scanf(" %c", &tentativa);
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
