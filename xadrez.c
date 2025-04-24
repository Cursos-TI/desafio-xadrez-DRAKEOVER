#include <stdio.h>
/*** PEÇA RAINHA função recursiva ***

//estrutura responsavel por receber o valor do movimento para a peça RAINHA, e impressão das direcões no terminal que fica contida em "RAINHA" de tipo inteiro*/
void RAINHA(int movimento){ 
  
    int escolha = 0 ;
      printf("Você escolheu RAINHA, agora escolha o movimento\n");
        printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n 5. cima direita\n 6. cima esquerda\n 7. baixo direita\n 8. baixo esquerda\n");// menu RAINHA
          scanf("%d",&movimento);//coleta escolha de movimento para RAINHA
    for(escolha = 1;escolha<2;escolha++){
        if(movimento==1){
            printf("move-se para cima\n");
        }else if(movimento==2){
            printf("move-se para baixo\n");
        }else if(movimento==3){
            printf("move-se para direita\n");
        }else if(movimento==4){
            printf("move-se para esquerda\n");
        }else if(movimento==5){
            printf("move-se para cima e direita\n");
        }else if(movimento==6){
            printf("move-se para cima e esquerda\n");
        }else if(movimento==7){
            printf("move-se para baixo e direita\n");
        }else if(movimento==8){
            printf("move-se para baixo e esquerda\n");
        }//repetiacao de movimento para peca RAINHA
        RAINHA(escolha+1);
}
}
/*** PEÇA TORRE função recursiva ***

//estrutura responsavel por receber o valor do movimento para a peça TORRE, e impressão das direcões no terminal que fica contida em "TORRE" de tipo inteiro*/
void TORRE(int movimento){
    int escolha;
    printf("Você escolheu TORRE, agora escolha o movimento\n");
        printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n");//menus de escolha de movimentos para TORRE
          scanf("%d",&movimento);//movimento escolhido pelo jogador para TORRE
       for(escolha = 0; escolha < 8; escolha ++){
          if(movimento==1){
            printf("move-se para cima\n"); 
        }else if(movimento==2){
            printf("move-se para baixo\n"); 
        }else if(movimento==3){
            printf("move-se para direita\n");
        }else if(movimento==4){
            printf("move-se para esquerda\n"); 
        }
       }
}
/*** PEÇA BISPO função recursiva ***

//estrutura responsavel por receber o valor do movimento para a peça BISPO, e impressão das direcões no terminal que fica contida em "BISPO" de tipo inteiro*/

void BISPO(int movimento){
    int x = 0, y = 0 ;
    printf("Você escolheu BISPO, agora escolha o movimento\n");
        printf("1. cima e direita\n 2. cima e esquerda\n 3. baixo e direita\n 4. baixo e esquerda\n");//menu de escolha de movimento para o BISPO
          scanf("%d",&movimento);//movimento escolhido pelo jogador para TORRE
          do{
              if (movimento == 1 || movimento == 2){
              printf("cima ");
            }else{
              printf("baixo ");
            }
            y++;  


            do{
              if(movimento == 1 || movimento == 3){
                printf("direita ");
              }else{
                printf("esquerda ");
              }
              x++;
            }while(x < 1);
 
         } while(y < 5);
}

//*** PEÇA CAVALO função recursiva ***

//estrutura responsavel por receber o valor do movimento para a peça CAVALO, e impressão das direcões no terminal que fica contida em "CAVALO" de tipo inteiro
void CAVALO(int movimento){
   printf("você escolheu CAVALO, agora escolha os movimentos\n");
        printf("1. cima cima direita \n2. cima cima esquerda \n3. direita direita cima \n4. direita direita baixo \n5 . esquerda esquerda cima \n6. esquerda esquerda baixo \n7. baixo baixo direita \n8. baixo baixo esquerda\n");//menu de escolha de movimento da peca CAVALO
          scanf("%d",&movimento);//movimento escolhido pelo jogador para CAVALO
    int j = 1;//variavel usada na repeticao
    while( j < 2){
       int k = 1;//variavel usada na repeticao
         while( k < 3 ){
           if(movimento==1||movimento==2){
             printf("cima \n");
       }else if(movimento==3||movimento==4){
             printf("direita \n");
       }else if(movimento==5||movimento==6){
             printf("esquerda \n");
       }else if(movimento==7||movimento==8){
             printf("baixo \n");
       }
            k++;
        }//estrutura de repeticao direcao CAVALO
        if(movimento==1||movimento==7){
           printf("direita\n");
        }else if(movimento==2||movimento==8){
           printf("esquerda\n");
        }else if(movimento==3||movimento==5){
           printf("cima\n");
        }else if(movimento==4||movimento==6){
           printf("baixo\n");
        }else{
           printf("numero errado, invalido\n");
        }
        j++;
       }//estrutura de repeticao direcao CAVALO
}

  int main(){
    int num = 0, peca;//declaracao de variaveis para o codigo todo 
   
   printf("XADREZ\n\n  escolha uma peça:\n 1. RAINHA\n 2. TORRE\n 3. BISPO\n 4. CAVALO\n");//menu inicial
     scanf("%d",&peca);//escolha de peca do jogador
       
       switch(peca){//menus de escolha de movimento para as pecas

    case 1:
     RAINHA(num);//chama a função recursiva RAINHA
     num++;
            break;//repeticao do movimento da peca RAINHA
    case 2:
     TORRE(num);//chama a função recursiva TORRE
     num++;
            break;//repeticao do movimento da peca TORRE
    case 3:
     BISPO(num);//chama a função recursiva BISPO
     num++;
            break;//repeticao do movimento da peca BISPO
    case 4:
     CAVALO(num);//chama a função recursiva CAVALO
     num++;
            break;//repeticao do movimento da peca CAVALO

   }
 return 0; //RETORNA 0
}
