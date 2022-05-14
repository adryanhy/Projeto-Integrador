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
float maior_tempo[5]; float media[5]; float total[5], classtempo[5];
int class_equipe[5];
int main()
{
    system("mode con:cols=100 lines=30");   //fun��o para configurar o prompt
    setlocale(LC_ALL, "Portuguese");

int equipes[10];    //iniciando matriz para armazenar o valores das equipes
int m;
int seg;
int mseg, i,j, temp;
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
            printf("%f", bat2[i]);
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
            printf("%f", bat3[i]);
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
            /*Logica para comparar os valores*/
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
            media[i] = total[i] / 2;}

            /*LOGICA PARA ORDENAR AS EQUIPES*/
            for (i=0;i<5;i++){
                printf ("\n Equipe %d tempo final = %f", i+1, media[i]);
                classtempo[i]= media[i];
                class_equipe[i]=i+1;
                }
                printf ("\n\n");

                for (i=0;i<5;i++){
                printf("%f\n", classtempo[i]);
                }
                printf ("\n\n");
                for (i=0;i<5;i++)
                {
                for (j=i+1;j<5;j++)
                {
                if (classtempo[i] > classtempo[j])
                {
                    temp = classtempo[i];
                    classtempo[i] = classtempo[j];
                    classtempo[j] = temp;
                    temp = class_equipe[i];
                    class_equipe[i] = class_equipe[j];
                    class_equipe[j] = temp;}
                }
                }
            for (i=0;i<5;i++)
            {
            printf("\n %d° LUGAR ||| Equipe: %d ||| Tempo: %d",i+1,class_equipe[i],classtempo[i]);
            }
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
