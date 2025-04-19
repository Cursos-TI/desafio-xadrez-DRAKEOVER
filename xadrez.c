#include <stdio.h>
  int main(){
    int escolha,movimento,peca,jogo;//declaracao de variaveis para o codigo todo 
 do{//estrutura de repeticao principal
   printf("XADREZ\n\n  escolha uma peça:\n 1. RAINHA\n 2. TORRE\n 3. BISPO\n 4. CAVALO\n");//menu inicial
   scanf("%d",&peca);//escolha de peca do jogador
   switch(peca){//menus de escolha de movimento para as pecas
    case 1:
    printf("Você escolheu RAINHA, agora escolha o movimento\n");
    printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n 5. cima direita\n 6. cima esquerda\n 7. baixo direita\n 8. baixo esquerda\n");// menu RAINHA
      scanf("%d",&movimento);//coleta escolha de movimento para RAINHA

    for(escolha = 1;escolha<2;escolha++){
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
        }//repetiacao de movimento para peca RAINHA
    }
    break;
    case 2:
    printf("Você escolheu TORRE, agora escolha o movimento\n");
    printf("1. cima\n 2. baixo\n 3. direita\n 4. esquerda\n");//menus de escolha de movimentos para TORRE
      scanf("%d",&movimento);//movimento escolhido pelo jogador para TORRE

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
    break;//repeticao do movimento da peca TORRE
    case 3:
    printf("Você escolheu BISPO, agora escolha o movimento\n");
    printf("1. cima e direita\n 2. cima e esquerda\n 3. baixo e direita\n 4. baixo e esquerda\n");//menu de escolha de movimento para o BISPO
      scanf("%d",&movimento);//movimento escolhido pelo jogador para TORRE

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
    break;//repeticao do movimento da TORRE
    case 4:
    printf("você escolheu CAVALO, agora escolha os movimentos\n");
    printf("1. cima cima direita \n2. cima cima esquerda \n3. direita direita cima \n4. direita direita baixo \n5 . esquerda esquerda cima \n6. esquerda esquerda baixo \n7. baixo baixo direita \n8. baixo baixo esquerda\n");//menu de escolha de movimento da peca CAVALO
    scanf("%d",&movimento);//movimento escolhido pelo jogador para CAVALO
    int j = 1;//variavel usada na repeticao
 while( j < 2){
    int k = 1;//variavel usada na repeticao
    while( k < 3 ){
    if(movimento==1||movimento==2){
       printf("cima ");
    }else if(movimento==3||movimento==4){
       printf("direita ");
    }else if(movimento==5||movimento==6){
       printf("esquerda ");
    }else if(movimento==7||movimento==8){
       printf("baixo ");
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
    break;

   }
   
   jogo++;//incrementa a variavel "jogo" 
 }while(jogo<10);//dowhile responsavel por executar codigo principal, e repetilo
}