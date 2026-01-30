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
    int A;
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
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|São 7h da manhã e você está deitado no sofá. |  CENÁRIO 1 - Casa de %s\n", nome);
        printf("|---------------------------------------------| ______________________________________________________________________ \n");
        printf("|       SEU DESPERTADOR TOCA MUITO ALTO!      ||: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :\n");
        printf("|        E VOCÊ TEM QUE ESCOLHER ENTRE:       ||__________ : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : \n");
        printf("|                                             ||__]       | : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :\n");
        printf("|                                             ||___]      |: :______ : : : : : : : : : : : : : : : : : : : : :___: : : \n");
        printf("|          [1]                  [2]           ||____]     | :|======| :_: : : : : : . : : : : : :_: : : : : (     ): : \n");
        printf("|    ACORDAR NA HORA     DESLIGAR O ALARME    ||_____]    |: ||  ||||:(_) :,: : :.'o'.: : :,: : |_|: : : : :|     |: : \n");
        printf("|  CERTA E TER UM DIA   E PROLONGAR O SEU     ||______]   | :|======| =|= __#_____|___|_____#__ =|= : : : : | ,*, | : :\n");
        printf("|  MUITO PRODUTIVO E    BELO SONO             ||_______]  |: |______|: ^ :[___]           [___]: ^ : : : : :( *;* ) : :\n");
        printf("|  GLORIOSO                                   ||________] | :|__  __| : : [_|_] o  `(,  o [_|_] : : : : :_____(_)_____:\n");
        printf("|                                             ||_________]|: | .||. |: : :[___] |  ( )  | [___]: : :_!_: ||   .|.   || \n");
        printf("|                                             ||__________]==|__||__|====_[_|_]|!|_@@@_|!|[_|_]_===|___|=||____|____||=\n");
        printf("|                                             |     _                    '====================='     | _               \n");
        printf("|                                             |    |_)        _________     _______________          |( |              \n");
        printf("|                                             |    |_|_      ( (07:00) )   (               )         |_)|              \n");
        printf("| [DIGITE 1 OU 2 DEPENDENDO DA SUA ESCOLHA]   |  ~=|_|_)=====(_________)==(|_______________|)=======(___|=========~    \n");
        printf("|---------------------------------------------| ~= |___|LL===|=========|===|               |========LLLLL==========~   \n");
        printf("                                               ~===========================|_______________|========================~  \n");
        printf("                                               ============================LLLLLLLLLLLLLLLLL=========================~ \n");
        scanf("%d", &escolha1);
        if(escolha1!=1&&escolha1!=2){
            while(escolha1!=1&&escolha1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha1);
                
            }
        }
        if(escolha1 == 1 || escolha1 == 2){
            if(escolha1 == 1){printf("- Você acorda na hora certa -\n"); azar = azar - 5;}
            if(escolha1 == 2){printf("- Você escolheu dormir mais -\n"); azar = azar + 5;}
                printf("----------------------------------------\n");
                printf("| DECISÃO — COMO COMEÇAR O DIA         |\n");
                printf("----------------------------------------\n");
                printf("| Está chegando a hora de ir trabalhar |\n");
                printf("|                                      |\n");
                printf("| O que voce faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Sair apressado para trabalhar    |\n");
                printf("| mais                                 |\n");
                printf("| [2] Tomar seu café tranquilmente     |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                
                int escolha2;
                scanf("%d", &escolha2);
                if(escolha2!=1&&escolha2!=2){ 
                    while(escolha2!=1&&escolha2!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha2);}
                
            }
            if(escolha2 == 1 || escolha2 == 2){
            if(escolha2 == 1){printf("- Você se apressa e vai ao trabalho -\n"); azar = azar + 4;}
            if(escolha2 == 2){printf("- Após seu café, você vai ir trabalhar -\n"); azar = azar - 4;}
                printf("----------------------------------------\n");
                printf("| DECISÃO — SAIR COM A MOTO            |\n");
                printf("----------------------------------------\n");
                printf("| Você quer ir trabalhar mas sua moto  |\n");
                printf("| não liga                             |\n");
                printf("|                                      |\n");
                printf("| O que voce faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Espera um pouco, e tenta de novo |\n");
                printf("| [2] Tenta liga-la insistentemente    |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha3;
                scanf("%d", &escolha3);
                if(escolha3!=1&&escolha3!=2){ 
                    while(escolha3!=1&&escolha3!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha3);}
                
            }
            if(escolha3 == 1 || escolha3 == 2){
            if(escolha3 == 1){printf("- Você espera um tempinho, mas cosegue ligar a moto -\n"); azar = azar - 3;}
            if(escolha3 == 2){printf("- Você tenta bastante e força tanto que a moto liga -\n"); azar = azar + 3;}
                printf("----------------------------------------\n");
                printf("| DECISÃO — INDO AO TRABALHO           |\n");
                printf("----------------------------------------\n");
                printf("| Você encontra um ex-colega de turma  |\n");
                printf("| na rua                               |\n");
                printf("|                                      |\n");
                printf("| O que voce faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Você para pra falar com ele mas  |\n");
                printf("| se atrasa um pouco pro trabalho      |\n");
                printf("| [2] Você é grosso gratuitamente e    |\n");
                printf("| vai ao trabalho                      |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha4;
                scanf("%d", &escolha4);
                if(escolha4!=1&&escolha4!=2){ 
                    while(escolha4!=1&&escolha4!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha4);}
                
            }    
                
                
            }    
          }
        }
        
        
        printf("azar: %d", azar);
        
        scanf("%d", &A);
        
    }
    
    
    setlocale(LC_ALL, "Portuguese"); // Permite Usar acentuação entre outros no printf

    // quando perder
    gameOver();
    getchar(); // é um scanf para letras no noso caso para o ENTER
    
    }

    return 0;
}
