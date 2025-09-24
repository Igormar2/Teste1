
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int J1 = 0;
    int M1 = 0;
    char n1 [10];
    
    printf("Bem vindo ao PPT 2000!!!");
    printf("\n Aqui você tera a melhor experiencia de PPT (Pedra, papel, tesoura) de todos os tempos...");
    printf("\n Primeiramente, qual é o nome de vossa senhoria?");
    printf(".");
    printf(".");
    printf(".\n");
    
    scanf("%s", n1);
    
    printf("%s, \n vamos começar o jogo, faca sua escolha rapido!!\n", n1);
    
    printf("opcões: 1 = Pedra, 2 = Papel 3 = Tesoura\n ");
    scanf("%d", &J1);
    srand(time(NULL));
    M1 = rand() % 3 + 1;
    
    
    
    if (J1 == 1){
        if (M1 == 2){
            printf("%s: Pedra\n", n1);
            printf("M1: papel...\n");
            printf("embrulhado");
        }
        if (M1 == 3){
            printf("%s: Pedra\n", n1);
            printf("M1: Tesoura...\n");
             printf("Amassou");
        }
        if (M1 == 1){
           printf("%s: Pedra\n ", n1);
           printf("M1: Pedra... \n");
           printf("Empate técnico");
    }
    }
    
      if (J1 == 2){
        if (M1 == 3 ){
           printf("%s: Papel\n", n1);
           printf("M1: Tesoura...\n");
           printf("PATO");
        }
        if (M1 == 1){
             printf("%s: Papel\n", n1);
             printf("M1: Pedra...\n");
             printf("Amassou");
        }
        if (M1 == 2){
               printf("%s: Papel\n", n1);
               printf("M1: Papel...\n");
               printf("vish.. deu velha");
    
        }
    }
    
      if (J1 == 3){
        if (M1 == 1 ){
            printf("%s: Tesoura\n", n1);
            printf("M1: Pedra...\n");
            printf("Volta pra adedanha");
        }
        if (M1 == 2 ){
             printf("%s: Tesoura\n", n1);
             printf("M1: Papel...\n");
             printf("Amassou");
        }
         if (M1 == 3){
               printf("%s: Tesoura\n", n1);
               printf("M1: Tesoura...\n");
               printf("vish.. deu velha !?");
    
        }
    }
    
    
}

   
