#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int numero;
int eqp_1;
int eqp_2;
int eqp_3;
int eqp_4;
int eqp_5;
int num;

float calculo;

eqp_1 = 1;
eqp_2 = 2;
eqp_3 = 3;
eqp_4 = 4;
eqp_5 = 5;

int main()
{
    system("mode con:cols=100 lines=30");   //fun��o para configurar a tela do prompt
    setlocale(LC_ALL, "Portuguese");
int equipes[10];    //iniciando matriz para armazenar o valores das equipes
int tempo[60];     //matriz para armazenar os tempos em min, seg, mseg
int m;
int seg;
int mseg, i;
    printf("                        ****************************************\n");
    printf("                        **************JHALB COMPANY*************\n");
    printf("                        ****************************************");
    sleep(3);
    system("cls");

    printf("MENU PRINCIPAL - DIGITE A OPÇÃO DESEJADA\n\n");
    printf("1. Bateria 1\n");
    printf("2. Bateria 2\n");
    printf("3. Bateria 3\n");
    printf("4. Obter classificação na tela\n");
    printf("5. Exportar classificação geral\n");
    printf("6. Sair do sistema\n\n");
    scanf("%d",&numero);
    switch(numero)
    {
        case 1:
            system("cls");
            printf("DIGITE O TEMPO DA BATERIA 1 DE CADA UMA DAS ESQUIPES:\n\n");
          for(i=0; i<5; i++){
            printf("\nDigite o tempo em minutos da equipe(%d): " ,i+1);
            scanf("%d", &m);
            printf("Digite o tempo em segundos da equipe(%d): " ,i+1);
            scanf("%d", &seg);
            printf("Digite o tempo em milisegundos da equipe(%d): ",i+1);
            scanf("%d", &mseg  );
            calculo = (m*60)+seg+(mseg/100);
          }

            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6)
                {
                system("cls");
                return main();
                }
            break;

            system("cls");
         case 2:
            system("cls");
            printf("DIGITE O TEMPO DA BATERIA 2 DE CADA UMA DAS ESQUIPES:\n\n");
          for(i=0; i<5; i++){
            printf("\nDigite o tempo em minutos da equipe(%d): " ,i+1);
            scanf("%d", &m);
            printf("Digite o tempo em segundos da equipe(%d): " ,i+1);
            scanf("%d", &seg);
            printf("Digite o tempo em milisegundos da equipe(%d): ",i+1);
            scanf("%d", &mseg  );
            calculo = (m*60)+seg+(mseg/100);
          }
            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6){
                system("cls");
                return main();
            }
            break;

          case 3:
            system("cls");
            printf("DIGITE O TEMPO DA BATERIA 3 DE CADA UMA DAS ESQUIPES:\n\n");
          for(i=0; i<5; i++){
            printf("\nDigite o tempo em minutos da equipe(%d): " ,i+1);
            scanf("%d", &m);
            printf("Digite o tempo em segundos da equipe(%d): " ,i+1);
            scanf("%d", &seg);
            printf("Digite o tempo em milisegundos da equipe(%d): ",i+1);
            scanf("%d", &mseg  );
            calculo = (m*60)+seg+(mseg/100);
          }

            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6)
            {
                system("cls");
                return main();
                }
            break;

            case 4:
            system("cls");
            printf("Obter classificação na tela\n\n");
            printf("1 lugar: EQUIPE %d  \tTempo (%d:%d:%d)\n", num,tempo[0],tempo[1],tempo[2]);
            printf("2 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n", eqp_2);
            printf("3 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n", eqp_3);
            printf("4 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n", eqp_4);
            printf("5 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n", eqp_5);
            break;

            case 5:
            system("cls");
            printf("Exportar classificação geral\n");
            break;

            case 6:
            system("cls");
            printf("Sair do sistema? Pressione a tecla 6 novamente para confirmar\n");

            exit (6);
            break;

            default:
                printf("Op��o inv�lida, por favor escolha uma das opcoes acima!!\n");
                system("cls");}

}
