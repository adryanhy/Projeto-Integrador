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

float car_1, car_2, car_3, car_4, car_5;

eqp_1 = 1;
eqp_2 = 2;
eqp_3 = 3;
eqp_4 = 4;
eqp_5 = 5;

int main()

{
system("mode con:cols=100 lines=30");   //função para configurar a tela do prompt
setlocale(LC_ALL, "Portuguese");
int equipes[10];    //iniciando matriz para armazenar o valores das equipes
int tempo[60];     //matriz para armazenar os tempos em min, seg, mseg
int m;
int seg;
int mseg;
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
            printf("1. Tempo em minutos da equipe 1 na bateria 1: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 1 na bateira 1: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 1 na bateria 1: ");
            scanf("%d", &mseg);
            tempo[0] = m;
            tempo[1] = seg;
            tempo[2] = mseg;


            printf("\n2. Tempo em minutos da equipe 2 na bateria 1: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 2 na bateria 1: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 2 na bateria 1: ");
            scanf("%d", &mseg);
            tempo[3] = m;
            tempo[4] = seg;
            tempo[5] = mseg;

            printf("\n3. Tempo em minutos da equipe 3 na bateria 1: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 3 na bateria 1: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 3 na bateria 1: ");
            scanf("%d", &mseg);
            tempo[6] = m;
            tempo[7] = seg;
            tempo[8] = mseg;

            printf("\n4. Tempo em minutos da equipe 4 na bateria 1: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 4 na bateria 1: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 4 na bateria 1: ");
            scanf("%d", &mseg);
            tempo[9] = m;
            tempo[10] = seg;
            tempo[11] = mseg;

            printf("\n5. Tempo em minutos da equipe 5 na bateria 1: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 5 na bateria 1: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 5 na bateria 1: ");
            scanf("%d", &mseg);
            tempo[12] = m;
            tempo[13] = seg;
            tempo[14] = mseg;

            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6)
            {
                system("cls");
                return main();
                break;
                }



            system("cls");
            //int num ;
            printf("DIGITE O TEMPO DA BATERIA 2 DE CADA UMA DAS ESQUIPES:\n\n");
            printf("1. Tempo em minutos da equipe 1 na bateria 2: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 1 na bateira 2: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 1 na bateria 2: ");
            scanf("%d", &mseg);
            tempo[15] = m;
            tempo[16] = seg;
            tempo[17] = mseg;

            printf("\n2. Tempo em minutos da equipe 2 na bateria 2: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 2 na bateria 2: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 2 na bateria 2: ");
            scanf("%d", &mseg);
            tempo[18] = m;
            tempo[19] = seg;
            tempo[20] = mseg;

            printf("\n3. Tempo em minutos da equipe 3 na bateria 2: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 3 na bateria 2: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 3 na bateria 2: ");
            scanf("%d", &mseg);
            tempo[21] = m;
            tempo[22] = seg;
            tempo[23] = mseg;

            printf("\n4. Tempo em minutos da equipe 4 na bateria 2: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 4 na bateria 2: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 4 na bateria 2: ");
            scanf("%d", &mseg);
            tempo[24] = m;
            tempo[25] = seg;
            tempo[26] = mseg;

            printf("\n5. Tempo em minutos da equipe 5 na bateria 2: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 5 na bateria 2: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 5 na bateria 2: ");
            scanf("%d", &mseg);
            tempo[27] = m;
            tempo[28] = seg;
            tempo[29] = mseg;

            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6)
            {
                system("cls");
                return main();
                break;
                }

            case 3:
            system("cls");
            //int num;
            system("cls");
            //int num ;
            printf("DIGITE O TEMPO DA BATERIA 3 DE CADA UMA DAS ESQUIPES:\n\n");
            printf("1. Tempo em minutos da equipe 1 na bateria 3: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 1 na bateria 3: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 1 na bateria 3: ");
            scanf("%d", &mseg);
            tempo[30] = m;
            tempo[31] = seg;
            tempo[32] = mseg;

            printf("\n2. Tempo em minutos da equipe 2 na bateria 3: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 2 na bateria 3: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 2 na bateria 3: ");
            scanf("%d", &mseg);
            tempo[33] = m;
            tempo[34] = seg;
            tempo[35] = mseg;

            printf("\n3. Tempo em minutos da equipe 3 na bateria 3: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 3 na bateria 3: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 3 na bateria 3: ");
            scanf("%d", &mseg);
            tempo[36] = m;
            tempo[37] = seg;
            tempo[38] = mseg;

            printf("\n4. Tempo em minutos da equipe 4 na bateria 3: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 4 na bateria 3: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 4 na bateria 3: ");
            scanf("%d", &mseg);
            tempo[39] = m;
            tempo[40] = seg;
            tempo[41] = mseg;

            printf("\n5. Tempo em minutos da equipe 5 na bateria 3: ");
            scanf("%d", &m);
            printf("Tempo em segundos da equipe 5 na bateria 3: ");
            scanf("%d", &seg);
            printf("Tempo em milisegundos da equipe 5 na bateria 3: ");
            scanf("%d", &mseg);
            tempo[42] = m;
            tempo[43] = seg;
            tempo[44] = mseg;

            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&num);
            if(6)
            {
                system("cls");
                return main();
                break;
                }

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
                printf("Opção inválida, por favor escolha uma das opcoes acima!!\n");
                //system("cls");


    }

    }

