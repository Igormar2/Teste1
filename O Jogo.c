
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define Pedra 1
#define Papel 2
#define Tesoura 3
#define Spoke 4
#define Largato 5


 


int main(){
  int J1 = 0;
  int M1 = 0;
  char dnv;
  int Vencer [2][6] = { {0, Tesoura, Pedra, Papel, Tesoura, Papel} , {0, Largato, Spoke, Largato, Pedra, Spoke}};
  int pontuação [6][6] = {0,0,0,0,0,0} , {0,0,-3,1,4,2} , {0,3,0,- {0 {0
  
  
  do{
  for(int i = 0; i <= 2; i++){
  printf("escolha:\n");
  printf("Pedra, Papel, Tesoura, Spoke, Largato\n");
  scanf("%d",&J1);
  
  srand(time(NULL));
  M1 = rand() % 5 + 1;


  if(J1 == M1){
      printf("Jogador = %d\n", J1);
      printf("Maquina = %d\n", M1);
      printf("ixi, deu velha!");
  } else if (Vencer[0][J1] == M1 || Vencer[1][J1] == M1 ){
      printf("você venceu!\n");
      printf("Jogador = %d\n", J1);
      printf("Maquina = %d\n", M1);
  }else{
      printf("Jogador = %d\n", J1);
      printf("Maquina = %d\n", M1);
      printf("você perdeu!\n");
  }

}
  printf("quer jogar novamente? (s/n):");
  scanf(" %c",&dnv);
  } while(dnv == 's' || dnv == 'S');
}

