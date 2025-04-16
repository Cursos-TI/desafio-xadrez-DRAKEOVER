#include <stdio.h>
int main(){
  //declaracao das variaveis
  int escolha=0,movimento,peca,jogo;
  //esquema para a repeticao do jogo dentro de dowhile
do{
  //coletando valor da variavel peca, oq vai indicar qual peça foi escolhida
 printf("XADREZ\n\n  escolha uma peça:\n 1. RAINHA\n 2. TORRE\n 3. BISPO\n");
 scanf("%d",&peca);
 switch(peca){
  //case da RAINHA
  case 1:
  //coleta os dado do movimento que sera realizada pela peça
  printf("Você escolheu RAINHA, agora escolha o movimento\n");
  printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n 5. cima direita\n 6. cima esquerda\n 7. baixo direita\n 8. baixo esquerda\n");
    scanf("%d",&movimento);
  //estrutura de repetição que realiza a quantidade de movimentos necessarios
  for(escolha;escolha<1;escolha){
      if(movimento==1){
          escolha++;
          printf("move-se para cima\n");
      }else if(movimento==2){
          escolha++;
          printf("move-se para baixo\n");
          escolha++;
      }else if(movimento==3){
          escolha++;
          printf("move-se para direita\n");
      }else if(movimento==4){
          escolha++;
          printf("move-se para esquerda\n");
      }else if(movimento==5){
          escolha++;
          printf("move-se para cima e direita\n");
      }else if(movimento==6){
          escolha++;
          printf("move-se para cima e esquerda\n");
      }else if(movimento==7){
          escolha++;
          printf("move-se para baixo e direita\n");
      }else if(movimento==8){
          escolha++;
          printf("move-se para baixo e esquerda\n");
      }
  }//estrutura 'for' desnecessaria usei só para completar o desafio
  break;
  //case TORRE
  case 2:
  //coleta os dado do movimento da peça
  printf("Você escolheu TORRE, agora escolha o movimento\n");
  printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n");
    scanf("%d",&movimento);
  //estrutura de repetição que imprimirá os movimentos feitos
  while(escolha<8){
      if(movimento==1){
          escolha++;
          printf("move-se para cima\n");
      }else if(movimento==2){
          escolha++;
          printf("move-se para baixo\n");
      }else if(movimento==3){
          escolha++;
          printf("move-se para direita\n");
      }else if(movimento==4){
          escolha++;
          printf("move-se para esquerda\n");
      }}
  break;
  //case BISPO
  case 3:
  //coleta de dado do movimento da peça
  printf("Você escolheu BISPO, agora escolha o movimento\n");
  printf("1. cima e direita\n 2. cima e esquerda\n 3. baixo e direita\n 4. baixo e esquerda\n");
    scanf("%d",&movimento);
  //estrutura dowhile de repetição para o imprimir o movimento que sera feito pela peça 
  do{
     if(movimento==1){
      escolha++;
      printf("move-se para cima e direita\n");
  }else if(movimento==2){
      escolha++;
      printf("move-se para cima e esquerda\n");
  }else if(movimento==3){
      escolha++;
      printf("move-se para baixo e direita\n");
  }else if(movimento==4){
      escolha++;
      printf("move-se para baixo e esquerda\n");
  }} while(escolha<5);
  break;
 }
 jogo++;//atribui o valor a variavel 'jogo' que está contida no primeiro dowhile evitando loop infinito 
}while(jogo<10);//do while que contém grande parte do código fonte
return 0;
}//fim do jogo
