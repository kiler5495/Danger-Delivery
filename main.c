#include <stdio.h>
#include <locale.h>

void gameOver() {
    printf("----------------------------------------\n");
    printf("|                                      |\n");
    printf("|          G A M E   O V E R           |\n");
    printf("|                                      |\n");
    printf("|      Sua jornada termina aqui.       |\n");
    printf("|                                      |\n");
    printf("|        Pressione ENTER               |\n");
    printf("|                                      |\n");
    printf("----------------------------------------\n");
    
    // Função gameOver toda vez que quiser fazer o gameOver aparecer é so chamar a função
    
}

int main() {

    int iniciar = 0;
    
    while(1){
    printf(" _____________________________________________________________________________________________________________________\n");
    printf("/|                                                                                                                    |\n");
    printf("[|  @@@@    @@@   @@  @  @@@@@  @@@@@  @@@@   @@@@@  @   @   @@@@                                    ,-~ |            |\n");
    printf("[|  @   @  @   @  @@  @  @      @      @   @  @   @  @   @  @           ________________          o==]___|            |\n");
    printf("[|  @   @  @@@@@  @ @ @  @  @@  @@@@   @@@@   @   @  @   @   @@@       |                |            | (              |\n");
    printf("[|  @   @  @   @  @ @ @  @   @  @      @  @   @   @  @   @      @      |________________|            /( (             |\n");
    printf("[|  @@@@   @   @  @  @@  @@@@@  @@@@@  @   @  @@@@@  @@@@@  @@@@      /  _,-----._      )           |  ( (.           |\n");
    printf("[|                                                               |_||/_-~         `.   /()          |  /|]_|_____     |\n");
    printf("[|                                                                 |//              ( |              (/ /_-~     ~-_  |\n");
    printf("[|                                                                 //________________||              / //___________| |\n");
    printf("[|  @@@@   @@@@@  @      @  @   @  @@@@@  @@@@   @   @            //__|______________| (____________/ //___/-| |~-_   |\n");
    printf("[|  @   @  @      @      @  @   @  @      @   @   @ @            ((_________________/_-o___________/_//___/  /(,(  )  |\n");
    printf("[|  @   @  @@@@   @      @  @   @  @@@@   @@@@     @              |__/(  ((====)o===--~~                 (  ( (o/)  ) |\n");
    printf("[|  @   @  @      @      @   @ @   @      @  @    @                    (  ``==' /                         (  `--'  /  |\n");
    printf("[|  @@@@   @@@@@  @@@@@  @    @    @@@@@  @   @  @                      `-.__,-'                           `-.__,-'   |\n");
    printf("[|                                                                                                                    |\n");                                                             
    printf("[|----------------------------------------------------------------------------¬                                       |\n");
    printf("[|                                                                            |                                       |\n");
    printf("[|  COMEÇAR O JOGO[DIGITE 1]   CRIADORES[DIGITE 2]   SAIR DO JOGO[DIGITE 3]   |                                       |\n");                                                             
    printf("[|                                                                            |                                       |\n");                                                             
    printf("[|____________________________________________________________________________|_______________________________________]\n\n\n\n\n\n\n");
    

    while (1) {
    printf("Escolha: ");

    if (scanf("%d", &iniciar) != 1) {
        printf("Entrada inválida! Digite apenas números.\n");
        while (getchar() != '\n');
        continue;
    }

    if (iniciar < 1 || iniciar > 3) {
        printf("Valor inválido! Tente novamente.\n");
        continue;
    }

    break;
    }


    if(iniciar != 1 && iniciar != 2 && iniciar != 3){
        while(iniciar != 1 && iniciar != 2 && iniciar != 3){
            printf("Valor inválido! tente novamente\n\n");
            scanf("%d", &iniciar);
        }
    }
    if(iniciar == 2){
        int voltar;
        printf("\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|CRIADORES:   - ANA ALLYCE      |\n");
        printf("|    _        - EDUARDA ARAUJO  |\n");
        printf("|  D/_        - JOAQUIM BATISTA |\n");
        printf("|  /(_`._,-.  - LUCAS GABRIEL   |\n");
        printf("| (o) `--'(o) - MIGUEL GUSTAVO  |\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("[DIGITE QUALQUER NÚMERO PARA VOLTAR]\n\n");
        scanf("%d", &voltar);
    }
    if(iniciar == 3){
        int sair;
        printf("\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|      DESEJA SAIR DO JOGO?     |\n");
        printf("|                               |\n");
        printf("|     SIM[1]          NÃO[2]    |\n");
        printf("|                               |\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        scanf("%d", &sair);
        if(sair==1){
        printf("\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|                               |\n");
        printf("|        VOLTE SEMPRE!(:        |\n");
        printf("|                               |\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
            return 0;
        }
        if(sair==2){
            int voltar = 2;
        }
        if(sair!=1&&sair!=2){
            while(sair!=1&&sair!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &sair);
                
            }
        }
        
    }
    if(iniciar == 1){
        char nome[60];
        int A;
        int escolha1;
        int azar = 50;
        printf("\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|DIGITE O NOME DO SEU PERSONAGEM: ");
        scanf("%s", &nome);
        printf("\n\n\n@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("Essa é a história de %s...\n", nome);
        printf("Você é um motoboy em uma grande cidade.\n");
        printf("Todos os dias você enfrenta trânsito, pressão e decisões rápidas...\n");
        printf("Hoje, uma entrega diferente aparece no sistema: pagamento alto, poucas informações e urgência total.\n");
        printf("O que parecia só mais uma corrida pode mudar o seu dia, ou sua vida...\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@");
        printf("|São 7h da manhã e você está deitado no sofá. |  CENÁRIO 1 - Casa de %s\n", nome);
        printf("|---------------------------------------------|\n");
        printf("|       SEU DISPERTADOR TOCA MUITO ALTO!      |\n");
        printf("|        E VOCÊ TEM QUE ESCOLHER ENTRE:       |\n");
        printf("|                                             |\n");
        printf("|                                             |\n");
        printf("|          [1]                  [2]           |\n");
        printf("|    ACORDAR NA HORA     DESLIGAR O ALARME    |\n");
        printf("|  CERTA E TER UM DIA   E PROLONGAR O SEU     |\n");
        printf("|  MUITO PRODUTIVO E    BELO SONO             |\n");
        printf("|  GLORIOSO                                   |\n");
        printf("|                                             |\n");
        printf("|                                             |\n");
        printf("|                                             |\n");
        printf("|                                             |\n");
        printf("|                                             |\n");
        printf("| [DIGITE 1 OU 2 DEPENDENDO DA SUA ESCOLHA]   |\n");
        printf("|---------------------------------------------|\n\n");
        scanf("%d", &escolha1);
        
        if(escolha1==1){
            azar = azar - 5;
            printf("[APERTE 0 PARA AVANÇAR]");

        }
        if(escolha1==2){
            azar = azar + 5;
            printf("[APERTE 0 PARA AVANÇAR]");
            
        }
        
        if(escolha1!=1&&escolha1!=2){
            while(escolha1!=1&&escolha1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha1);
                
            }
        }


        scanf("%d", &A);
        
    }
    }                                                            
    
    setlocale(LC_ALL, "Portuguese"); // Permite Usar acentuação entre outros no printf

    // quando perder
    gameOver();
    getchar(); // é um scanf para letras no noso caso para o ENTER

    return 0;
}
