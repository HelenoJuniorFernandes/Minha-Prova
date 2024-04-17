#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int portaPremiada, portaVazia, portaEscolhida, novaPorta;
   char opcaoEscolhida;
  
printf("Bem vindo ao jogo Monty Hall, o jogo consiste em escolher a porta premiada\n\n");
printf("Escolha uma porta entre 1 e 3\n");

  scanf("%d", &portaEscolhida);
  
  srand(time(NULL));
  portaPremiada = rand() % 3 + 1;
  
  do{
    portaVazia = rand() % 3 + 1;
  
  } while (portaVazia == portaPremiada || portaVazia == portaEscolhida);  
  printf("A porta %d esta vazia\n", portaVazia);
  printf("Deseja trocar de porta? s/n\n");
  
  scanf(" %c", &opcaoEscolhida);
  
  if(opcaoEscolhida == 's') 
    do{
      novaPorta = rand() % 3 + 1;
  } while (novaPorta == portaEscolhida || novaPorta == portaVazia);
  
  portaEscolhida = novaPorta;


if(portaEscolhida == portaPremiada) {

  printf("Parabens vc acertou a porta premiada");
  
}else{

  printf("Infelizmente vc errou a porta premiada");
}

}
