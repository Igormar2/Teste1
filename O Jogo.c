/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    
    printf("%s, \n vamos começar o jogo, faca sua escolha rapido!!", n1);
    
    printf("\n opcões: 1 = Pedra, 2 = Papel 3 = Tesoura ");
    scanf("%d", &J1);
    
    M1 = rand() % 3 + 1;
    
    
    
    if (J1 == 1){
        if (M1 == 2){
            printf(" %s :Pedra", n1);
            printf(" M1 :papel...");
            printf("embrulhado");
        }
        if (M1 == 3){
            printf(" %s :Pedra", n1);
            printf(" M1 :Tesoura...");
             printf("Amassou");
        }
        if (M1 == 1){
           printf(" %s :Pedra", n1);
           printf(" M1 :Pedra...");
           printf("Empate técnico");
    }
    }
    
      if (J1 == 2){
        if (M1 == 3 ){
           printf(" %s :Papel", n1);
           printf(" M1 :Tesoura...");
           printf("PATO");
        }
        if (M1 == 1){
             printf(" %s :Papel", n1);
             printf(" M1 :Pedra...");
             printf("Amassou");
        }
        if (M1 == 2){
               printf(" %s :Papel", n1);
               printf(" M1 :Papel...");
               printf("vish.. deu velha");
    
        }
    }
    
      if (J1 == 3){
        if (M1 == 1 ){
            printf(" %s :Tesoura", n1);
            printf(" M1 :Pedra...");
            printf("Volta pra adedanha");
        }
        if (M1 == 2 ){
             printf(" %s :Tesoura", n1);
             printf(" M1 :Papel...");
             printf("Amassou");
        }
         if (M1 == 3){
               printf(" %s :Tesoura", n1);
               printf(" M1 :Tesoura...");
               printf("vish.. deu velha !?");
    
        }
    }
    
    
}

   
