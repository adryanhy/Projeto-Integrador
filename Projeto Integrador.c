#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int numero;
int num;
float bat1[5];
float bat2[5];
float bat3[5];
float calculo;
float maior_tempo[5]; float media[5]; float total[5];

int main()
{
    system("mode con:cols=100 lines=30");   //fun��o para configurar o prompt
    setlocale(LC_ALL, "Portuguese");

int equipes[10];    //iniciando matriz para armazenar o valores das equipes
int m;
int seg;
int mseg, i;
    /*printf("                        ****************************************\n");
    printf("                        **************JHALB COMPANY*************\n");
    printf("                        ****************************************");
    sleep(3);
    system("cls");*/

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
            bat1[i] = calculo;
            printf("%f", bat1[i]);
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
            bat2[i] = calculo;
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
            bat3[i] = calculo;
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
            for (i = 0; i < 5; i ++){
            if(bat1[i] > bat2[i]){           //se bat1 na posição [i] for maior que bat2 na posição [i]
                if(bat1[i] > bat3[i])       //se bat1 na posição [i] for maior que bat3 na posição [i]
                maior_tempo[i] = bat1[i];  //entao maior_tempo recebe bat1[i]
            else
                maior_tempo[i] = bat3[i]; //senao maior_tempo recebe bat3[i]
            }
            else if (bat2[i] > bat3[i]){

            maior_tempo[i]= bat2[i];
            }
            else {
            maior_tempo[i] = bat3[i];
            }
            total[i] = (bat1[i] + bat2[i] + bat3[i]) - maior_tempo[i];
            media[i] = total[i] / 2;
            }
            printf("Obter classificação na tela\n\n");
            printf("1 lugar: EQUIPE %f  \tTempo (%f:%d:%d)\n", bat1[i]);
            printf("2 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n" );
            printf("3 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n" );
            printf("4 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n" );
            printf("5 lugar: EQUIPE %d  \tTempo (minutos:segundos:mili-segundos):  xx:xx:xx \n" );
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
                printf("Opção invalida, por favor escolha uma das opcoes acima!!\n");
                system("cls");}

}
