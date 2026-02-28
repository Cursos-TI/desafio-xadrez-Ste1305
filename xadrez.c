#include <stdio.h>

int main(){

    //declaração variaveis
    char peça, voltarJogo; //variaveis para a escolha da peça a ser movimentada e para voltar ao Jogo
    int escolhaMenu, i = 1, j = 1, k; //variaveis para a escolha do menu e dos 3 loops

    //introdução
    printf("\t*** JOGO DO XADREZ ***\n");
    //menu principal com switch e do_while para voltar
    do{
        printf("Bem-vindo ao Jogo do Xadrez.\nMenu principal: \n1 - Regras\n2 - Jogar\n3 - Sair\n"); scanf("%d", &escolhaMenu);
    
        switch(escolhaMenu){
        case 1: printf("\tREGRAS ***\n"); //regras do jogo
                printf("Torre move em linea reta, horizontal e vertical\n");
                printf("Bispo move em diagonal\n");
                printf("Rainha move em todas as direções\n\n"); 
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
        case 2: printf("Escolha a peça que quer utilizar: \nT - Torre\nB - Bispo\nR - Rainha\n"); scanf(" %c", &peça); //peça para movimentar
                switch(peça){
                    //Torre
                    case 't':
                    case 'T': printf("Você escolheu: Torre\n\n"); printf("\t****Movimentos da Torre:\n"); 
                    //estrutura do while para a Torre
                    do{ 
                        printf("1 casa para direita\n");
                        i++;
                    } while(i <= 5); printf("Total: %d casas\n\n", i - 1);
                    break;
                    //Bispo
                    case 'b':
                    case 'B': printf("Você escolheu: Bispo\n\n"); printf("\t****Movimentos do Bispo:\n");
                    //estrutura while para o Bispo
                    while(j <= 5){ 
                        printf("1 casa para cima e á direita\n"); j++;
                    } printf("Total: %d casas\n\n", j - 1); 
                    break;
                    //Rainha
                    case 'r':
                    case 'R': printf("Você escolheu: Rainha\n\n"); printf("\t****Movimentos da Rainha:\n");
                    //estrutura for para a Rainha
                    for(k = 0; k <= 8; k++){
                        printf("1 casa para esquerda\n");
                    } printf("Total: %d casas\n\n", k--);
                    break;
                    default: printf("Escolha invalida\n");

                } break;
        case 3: printf("Obrigado por ter jogado!\nAté á proxima!\nSaindo...\n"); break;
        default: printf("Por favor escolha um valor entre 1 e 3\n");
        } 
    } while(escolhaMenu != 3);
    



    return 0;
}
