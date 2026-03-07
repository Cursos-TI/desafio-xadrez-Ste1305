#include <stdio.h>

// prototipo da função para os movimentos da Torre 
void torre(int n);

//prototipo da função para os movimentos da Rainha 
void rainha(int n);

//prototipo da função para os movimentos do Cavalo
void cavalo();

//prototipo da função para os movimentos do Bispo 
void bispo(int n);

int main(){

    //declaração variaveis
    char peça, voltarJogo; //variaveis para a escolha da peça a ser movimentada e para voltar ao Jogo
    int escolhaMenu; //variaveis para a escolha do menu e dos loops das peças

    //introdução
    printf("\t*** JOGO DO XADREZ ***\n");
    //menu principal com switch e do_while para voltar
    do{
        printf("Bem-vindo ao Jogo do Xadrez.\nMenu principal: \n1 - Regras\n2 - Jogar\n3 - Sair\n"); scanf("%d", &escolhaMenu);
    
        switch(escolhaMenu){
        case 1: printf("\tREGRAS ***\n"); //regras do jogo
                printf("Torre move em linea reta, horizontal e vertical\n");
                printf("Bispo move em diagonal\n");
                printf("Rainha move em todas as direções\n");
                printf("Cavalo move em L: duas casas en linea reta e uma casa perpendicular\n\n"); 
                //possibilidade de jogar de novo ou de sair
                printf("Quer jogar de novo?: S/N\n"); scanf(" %c", &voltarJogo);
                if(voltarJogo == 'n' || voltarJogo == 'N'){
                    escolhaMenu = 3; printf("Obrigado por ter jogado!\nAté á proxima!\nSaindo...\n");
                } else if(voltarJogo == 's' || voltarJogo == 'S'){
                    escolhaMenu = 2;
                }else{
                    printf("Escolha invalida\n");
                }
                break;
        case 2: printf("Escolha a peça que quer utilizar: \nT - Torre\nB - Bispo\nR - Rainha\nC - Cavalo\n"); scanf(" %c", &peça); printf("\n");//peça para movimentar
                switch(peça){
                    //Torre
                    case 't':
                    case 'T': printf("Você escolheu: Torre\n\n"); printf("\t****Movimentos da Torre:\n"); 
                    //função da Torre
                    torre(5);
                    break;
                    //Bispo
                    case 'b':
                    case 'B': printf("Você escolheu: Bispo\n\n"); printf("\t****Movimentos do Bispo:\n");
                    //função para o Bispo
                    bispo(5);
                    break;
                    //Rainha
                    case 'r':
                    case 'R': printf("Você escolheu: Rainha\n\n"); printf("\t****Movimentos da Rainha:\n");
                    //função para a Rainha
                    rainha(8);
                    break;
                    //Cavalo
                    case 'c':
                    case 'C': printf("Você escolheu: Cavalo\n\n"); printf("\t****Movimentos do Cavalo:\n");
                    //função para o Cavalo
                    cavalo();
                    break;
                    default: printf("Escolha invalida\n");
                } break;
        case 3: printf("Obrigado por ter jogado!\nAté á proxima!\nSaindo...\n"); break;
        default: printf("Por favor escolha um valor entre 1 e 3\n");
        } 
    } while(escolhaMenu != 3);
    
    return 0;
}

//função para os movimentos da Torre com recursividade
void torre(int n){
    if(n <= 0) return; //base case da recursividade
    for(int i = 1; i < 2; i++){
        printf("Direita\n");
    } torre(n -1); //recursividade
}

//função para os movimentos da Rainha com recursividade
void rainha(int n){
    if(n <= 0) return;
    for(int i = 1; i < 2; i++){
        printf("Esquerda\n");
    } rainha(n - 1); //recursividade
}

//função para os movimentos do Cavalo com loop complexo de duas variaveis e continue
void cavalo(){
    int i, j;
    for(i = 1, j = 0; j < 2; i++, j++){
        printf("Acima\n"); if(j == 0) continue; printf("Direita\n");
    }
}

//função para os movimentos do Bispo com recursividade e loops aninhados
void bispo(int n){
    if(n <= 0) return; { 
        for(int i = 1; i < 2; i++){ //loop externo para cima
            for(int j = 1; j == i; j++){ //loop interno para esquerda
                printf("Direita\n");
            } printf("Acima\n");
        }
    } bispo(n - 1);// recursividade
} 
