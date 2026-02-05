#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


void gameOver(){
    printf("-----------------------------------------------------------------\n");
    printf("|                                                               |\n");
    printf("|                       G A M E   O V E R                       |\n");
    printf("|                                                               |\n");
    printf("| ''Hoje não foi seu dia, com base nas suas escolhas seu azar   |\n");
    printf("|  foi tão grande que você acabou morrendo de ATAQUE CARDÍACO'' |\n");                                               
    printf("|                                                               |\n");
    printf("|                                                               |\n");
    printf("-----------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
int mudarAzar(int *azar, int valor){
    *azar += valor;
    if(*azar>=75){
        gameOver();
        return 0;
    }
    return 1;

}

int main() {

    setlocale(LC_ALL, "Portuguese");
    int azar = 50;
    int iniciar = 0;
    int A;
    int jogando = 1;
    while(jogando){
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

    if (iniciar < 1 || iniciar > 67) {
        printf("Valor inválido! Tente novamente.\n");
        continue;
    }

    break;
    }


    if(iniciar != 1 && iniciar != 2 && iniciar != 3 && iniciar != 67){
        while(iniciar != 1 && iniciar != 2 && iniciar != 3){
            printf("Valor inválido! tente novamente\n\n");
            scanf("%d", &iniciar);
        }
    }

    if(iniciar == 67){
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            printf("67 ");
        }
        printf("\n");
    }
    printf("\nVocê encontrou o easter egg 67.\n");
    printf("*      ____    ___     *\n");
    printf("*    //      //   / / *\n");
    printf("*   //__         / / *\n");
    printf("*  //   ) )     / / *\n");
    printf("* ((___/ /     / / *\n\n\n\n\n\n\n\n\n\n\n\n");
    }

    if(iniciar == 2){
        int voltar;
        printf("\n");
        printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
        printf("|CRIADORES:   - ANA ALLYCE      |\n");
        printf("|    _        - JOAQUIM BATISTA |\n");
        printf("|  D/_        - LUCAS GABRIEL   |\n");
        printf("|  /(_`._,-.  - MARIA EDUARDA   |\n");
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
            if(escolha1 == 1){printf("- Você acorda na hora certa -\n"); if(!mudarAzar(&azar, -5)){
    jogando = 0;
    break;
}
}
            if(escolha1 == 2){printf("- Você escolheu dormir mais -\n"); if(!mudarAzar(&azar, +5)){
    jogando = 0;
    break;
}
}
                printf("----------------------------------------\n");
                printf("| DECISÃO — COMO COMEÇAR O DIA         |\n");
                printf("----------------------------------------\n");
                printf("| Está chegando a hora de ir trabalhar |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
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
            if(escolha2 == 1){printf("- Você se apressa e vai ao trabalho -\n"); if(!mudarAzar(&azar, +6)){
    jogando = 0;
    break;
}
}
            if(escolha2 == 2){printf("- Após seu café, você vai ir trabalhar -\n"); if(!mudarAzar(&azar, -6)){
    jogando = 0;
    break;
}
}
                printf("----------------------------------------\n");
                printf("| DECISÃO — SAIR COM A MOTO            |\n");
                printf("----------------------------------------\n");
                printf("| Você quer ir trabalhar mas sua moto  |\n");
                printf("| não liga                             |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
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
            if(escolha3 == 1){printf("- Você espera um tempinho, mas cosegue ligar a moto -\n"); if(!mudarAzar(&azar, -5)){
    jogando = 0;
    break;
}
}
            if(escolha3 == 2){printf("- Você tenta bastante e força tanto que a moto liga -\n"); if(!mudarAzar(&azar, +5)){
    jogando = 0;
    break;
}
}
                printf("----------------------------------------\n");
                printf("| DECISÃO — INDO AO TRABALHO           |\n");
                printf("----------------------------------------\n");
                printf("| Você encontra um ex-colega de turma  |\n");
                printf("| na rua                               |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Você para pra falar com ele mas  |\n");
                printf("| se atrasa um pouco pro trabalho      |\n");
                printf("| [2] Você é grosso gratuitamente e    |\n");
                printf("| vai ao trabalho                      |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha4;
                scanf("%d", &escolha4);
                if(escolha4!=1&&escolha4!=2){ 
                    while(escolha4!=1&&escolha4!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha4);}
                
            }    
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("| Ruas da cidade \n");                                                                                                     
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n");
            printf("                                                    ..======..                                                         \n");
            printf("                                                     |::::::|                                                          \n");
            printf("     .====.                                   :====: | : : :|   ..===.           .====.                                \n");
            printf("     |.::'||      .=====.,     .=======.~,    |//|:: |::::::|   ||:::|=====|     |.::'||      .=====.,     .=======.~, \n");
            printf("  ___| :::|!__.,  |:::::|!_,   |: :: ::|//| | |//|:: |:;;:::|___!| ::|: : :|  ___| :::|!__.,  |:::::|!_,   |: :: ::|//|\n");
            printf(" |: :|::: |:: |!__|; :: |: |===::: :: :|//| | |//|:: |: :: :|: : |:: |:::::| |: :|::: |:: |!__|; :: |: |===::: :: :|//|\n");
            printf(" |:::| _::|: :|:::|:===:|::|:::|:===F=:|//| | |//|::F|:====:|::_:|: :|::__:| |:::| _::|: :|:::|:===:|::|:::|:===F=:|//|\n");
            printf(" !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//| | |//|::[]I![_][_]!_[_]![]_!_[__]!_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//|\n");
            printf(" ---------------------------------------''''```-------------------------------------------------------------------''''`\n");
            printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  |= _ _:_\n");
            printf("                                     |=    :    =|                                                             |=    : \n");
            printf("_____________________________________L___________J_____________________________________________________________L_______\n");
            printf("-----------------------------------------------------------------------------------------------------------------------\n");
            printf("[DIGITE 1 PARA AVANÇAR]\n");
            int prox;
            scanf("%d", &prox);
            if(prox!=1){ 
                    while(prox != 1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &prox);}
            }
            if(prox==1){
            
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("| CENTRAL DE ENTREGAS\n");
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("                    ___                                                                                \n");
            printf("                   |_ _| _____         _                                                               \n");
            printf("                    | | (  _` |  ___   | |                                                             \n");
            printf("                    | | | |_| | ( _ )  | |                                     @~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("                    | | (___, |( (_) ) | |                                     | Você pilota sua moto |\n");
            printf("                   |___| ___| | (___)  |_|                                     | pelas avenidas da    |\n");
            printf("                    ||  |____/         (_)                                     | cidade, e finalmente |\n");
            printf("   _________________||____________  ||___________________________              | chega ao trabalho.   |\n");
            printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_||             @~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("  |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|||/|                                    \n");
            printf("  |_|_|_|_|_|_|_|_|_|     _      _     ||_|_|_|_|_|_|_|_|__|_|_|/||                                    \n");
            printf("  |_|               |    (_)    (_)    |         __          |_|/||                                    \n");
            printf("  |_|. Cartas       |__________________|        | _]         |_||/|                                    \n");
            printf("  |_|*`.  Pacotes   |_|      ||      |_|     .--||-----.     |_|/||                                    \n");
            printf("  |_| F `.          |_|      ||      |_|     |  ||     |     |_||/|                                    \n");
            printf("  |_|`. A `.        |_|      ||      |_|   __|__||_____|     |_|/||                                    \n");
            printf("  |_|  `. S `.      |_|     [||]     |_|          ||         |_||/|                                    \n");
            printf("  |_|    `. T `.    |_|      ||      |_|          ||         |_|/||                                    \n");
            printf("  |_|______`__*_`___|_|      ||      |_|__________||_________|_||/|                                    \n");
            printf("  |_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_|/||                                        \n");
            printf("__|_|_|_|_|_|_|_|_|_|_|______||______|_|_|_|_|_|_|_|_|_|_|_||/________                                 \n");
            printf(" /     /     /     /     /     /     /     /     /     /     /     /                                   \n");
            printf("/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/                                    \n");
            printf("[DIGITE 1 PARA AVANÇAR]\n");
            int prox2;
            scanf("%d", &prox2);
            if(prox2!=1){ 
                    while(prox2 != 1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &prox2);}
            }
            if(prox2 == 1){
            
            if(escolha4 == 1 || escolha4 == 2){
            if(escolha4 == 1){printf("- Você chega meio atrasado no trabalho -\n"); if(!mudarAzar(&azar, -10)){
    jogando = 0;
    break;
}
}
            if(escolha4 == 2){printf("- Você chegou na hora exata -\n"); if(!mudarAzar(&azar, +10)){
    jogando = 0;
    break;
}
}
                printf("----------------------------------------\n");
                printf("| DECISÃO — ENTREGA                    |\n");
                printf("----------------------------------------\n");
                printf("| Seu app de entregas toca. O valor    |\n");
                printf("| dessa entrega está alto $            |\n");
                printf("|                                      |\n");
                printf("| (Não é dito o que é)                 |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Aceitar entrega                  |\n");
                printf("| [2] Recusar entrega                  |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n");
                
                int escolha5;
                scanf("%d", &escolha5);
                if(escolha5!=1&&escolha5!=2){ 
                    while(escolha5!=1&&escolha5!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha5);}
            }
            if(escolha5 == 2){
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|  ''Você escolhe a segurança. Zero risco, zero dinheiro e zero história pra contar.  |\n");
              printf("|                       Pelo menos você chegou inteiro em casa.''                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;} 
            }
            if(escolha5 == 1){
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("| Você pega sua moto e segue para essa misteriosa entrega... \n");                                                                                                     
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n");
            printf("                                                    ..======..                                                         \n");
            printf("                                                     |::::::|                                                          \n");
            printf("     .====.                                   :====: | : : :|   ..===.           .====.                                \n");
            printf("     |.::'||      .=====.,     .=======.~,    |//|:: |::::::|   ||:::|=====|     |.::'||      .=====.,     .=======.~, \n");
            printf("  ___| :::|!__.,  |:::::|!_,   |: :: ::|//| | |//|:: |:;;:::|___!| ::|: : :|  ___| :::|!__.,  |:::::|!_,   |: :: ::|//|\n");
            printf(" |: :|::: |:: |!__|; :: |: |===::: :: :|//| | |//|:: |: :: :|: : |:: |:::::| |: :|::: |:: |!__|; :: |: |===::: :: :|//|\n");
            printf(" |:::| _::|: :|:::|:===:|::|:::|:===F=:|//| | |//|::F|:====:|::_:|: :|::__:| |:::| _::|: :|:::|:===:|::|:::|:===F=:|//|\n");
            printf(" !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//| | |//|::[]I![_][_]!_[_]![]_!_[__]!_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//|\n");
            printf(" ---------------------------------------''''```-------------------------------------------------------------------''''`\n");
            printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  |= _ _:_\n");
            printf("                                     |=    :    =|                                                             |=    : \n");
            printf("_____________________________________L___________J_____________________________________________________________L_______\n");
            printf("-----------------------------------------------------------------------------------------------------------------------\n");
            printf("[DIGITE 1 PARA AVANÇAR]\n");
            int proximo;
            scanf("%d", &proximo);
            if(proximo!=1){ 
                    while(proximo != 1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &proximo);}}
                
                if(proximo == 1){
                printf("- Você está a caminho do endereço de entrega -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ESCOLHER CAMINHO           |\n");
                printf("----------------------------------------\n");
                printf("| Você está a caminho mas se lembra    |\n");
                printf("| que conhece um atalho para esse      |\n");
                printf("| endereço                             |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Caminho seguro (mais longo)      |\n");
                printf("| [2] Atalho (mais rápido)             |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n");
                
                int escolha6;
                scanf("%d", &escolha6);
                if(escolha6!=1&&escolha6!=2){ 
                    while(escolha6!=1&&escolha6!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha6);}}
                
                if(escolha6 == 1 || escolha6 == 2){
            if(escolha6 == 1){printf("- Você prefere ir no caminho mais conhecido -\n"); if(!mudarAzar(&azar, +7)){
    jogando = 0;
    break;
}
}
            if(escolha6 == 2){printf("- Tentou ser espertinho e pegar o atalho, mas o sinal fechou na sua cara -\n"); if(!mudarAzar(&azar, -7)){
    jogando = 0;
    break;
}
}
                printf("----------------------------------------\n");
                printf("| DECISÃO — SINAL VERMELHO             |\n");
                printf("----------------------------------------\n");
                printf("| Você ta no caminho em alta velocidade|\n");
                printf("| mas vê o sinal ficando vermelho      |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Furar o sinal                    |\n");
                printf("| [2] Parar no sinal                   |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha7;
                scanf("%d", &escolha7);
                if(escolha7!=1&&escolha7!=2){ 
                    while(escolha7!=1&&escolha7!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha7);}}
                
                
                if(escolha7 == 2){
                
                printf("- Demorou um pouco mas você seguiu em frente -\n\n");
                printf("~ Você entra numa rua vazia demais pra ser normal. Do nada, surgem duas figuras encapuzadas.\n");
                printf("~ A frase clássica ecoa: “Perdeu, perdeu.” Seu coração dispara. Hora de decidir rápido.\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ASSALTO!                   |\n");
                printf("----------------------------------------\n");
                printf("| Você ta sendo abordado por bandidos, |\n");
                printf("| tem que pensar rápido!               |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Fugir                            |\n");
                printf("| [2] Entregar a moto                  |\n");
                printf("| [3] Reagir                           |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1, 2 OU 3                     |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n");
                int escolha8;
                scanf("%d", &escolha8);
                if(escolha8!=1&&escolha8!=2&&escolha8!=3){ 
                    while(escolha8!=1&&escolha8!=2&&escolha8!=3){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha8);}}
                
                if (escolha8 == 3) {
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|          ''Você decide reagir. Claramente inspirado por filmes que mentem muito.    |\n");
              printf("|                  A situação sai do controle e o jogo termina aqui''                 |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
    int gameover1;
    scanf("%d", &gameover1);

    if (gameover1 == 2) {
        return 0;
    } 
    else if (gameover1 == 1) {
        continue;
    }
}
                if (escolha8 == 2) {
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|          ''Você decide reagir. Claramente inspirado por filmes que mentem muito.    |\n");
              printf("|                  A situação sai do controle e o jogo termina aqui''                 |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
    int gameover1;
    scanf("%d", &gameover1);

    if (gameover1 == 2) {
        return 0;
    } 
    else if (gameover1 == 1) {
        continue;
    }
}
                if(escolha8 == 1){
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("| Você foge e chega no destino final... \n");                                                                                                     
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("                      ________\n");
            printf("                    (__________)                                            \n");
            printf("                     | .----. |                                             \n");
            printf("                     | |    | |        ____                                 \n");
            printf("                     | |    | |_______|.--.|___                             \n");
            printf("                     | |    | |^ ^ ^ ^||  ||^ ^))                           \n");
            printf("        |    ||/   (__________) ^-^-^-||__||-^-^-^))                      \n");
            printf("  _     |    ||   (____________)___________________|                       \n");
            printf("   ||   |    ||  ((_----------_))/-/-/-/-/-/-/-/-/-|                        \n");
            printf("__  |___|_   ||   (____________) ------------------|                        \n");
            printf("  ||/.----.||  //  | ________ |--- _____---_____ --|                     \n");
            printf("  //      ||||||   ||  |  |  ||   |o___o| |o___o|  |                       \n");
            printf("           ||||    ||__|__|__||---|o___o|-|     |--|                      \n");
            printf("     _      ||     ||  |  |  ||   |0___0| |_____|  |                   \n");
            printf("         ||||//    ||__|__|__||---|_____|-|o__o_|-//                  \n");
            printf("  ___     //     ()__-__-__-__-__-__-__-__-__-__-__()                  \n");
            printf(" `--_____/ |    ()__|__|__|__|__-__-__-__-__-__-__-_()       \n");
            printf("     `---| |      || | __ | ||    ______   _____   |                   \n");
            printf("         | |      || ||__|| ||   |//////| |_| |_|  |                        \n");
            printf("          | |     || |   o| ||---|//////|-|_| |_|--|                        \n");
            printf("            | |   |__|____|__|---|//////|-|_|_|_|--|                    \n");
            printf("            | |   |__________|                    _//                       \n");
            printf("            | | ||____________||------------------//                        \n");
            printf("--------------------------------------------------------------------------@\n");
            printf("[DIGITE 1 PARA AVANÇAR]\n");
            int proximo;
            scanf("%d", &proximo);
            if(proximo!=1){ 
                    while(proximo != 1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &proximo);}}
                }
                if(proximo == 1){
                printf("- Você foge e nessa fuga o pacote é danificado -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — PACOTE DANIFICADO          |\n");
                printf("----------------------------------------\n");
                printf("| O pacote se rasga um pouco ao fugir  |\n");
                printf("| algo misterioso está dentro          |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Ignorar e seguir                 |\n");
                printf("| [2] Abrir o pacote                   |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha9;
                scanf("%d", &escolha9);
                if(escolha9!=1&&escolha9!=2){ 
                    while(escolha9!=1&&escolha9!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha9);}}
                if(escolha9 == 2){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| Você abriu mas viu o que não queria ver....                              |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    int ver3;
                scanf("%d", &ver3);
                if(ver3!=1){ 
                    while(ver3!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver3);}}
                if(ver3 == 1){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| Dentro da caixa tinha uns 20 Iphones 18.                                 |\n");
                    printf("| Pelo visto a pirataria venceu                                            |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    int ver4;
                scanf("%d", &ver4);
                if(ver4!=1){ 
                    while(ver4!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver4);}}
                
                if(ver4 == 1){
                printf("- Você chegou ao destino final -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ENTREGA                    |\n");
                printf("----------------------------------------\n");
                printf("| Depois de saber o conteúdo do pacote |\n");
                printf("| pense bem no que vai fazer...        |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Continuar a entrega              |\n");
                printf("| [2] Jogar o pacote fora              |\n");
                printf("| [3] Denunciar a pirataria            |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1, 2 OU 3                     |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha10;
                scanf("%d", &escolha10);
                if(escolha10!=1&&escolha10!=2&&escolha10!=3){ 
                    while(escolha10!=1&&escolha10!=2&&escolha10!=3){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha10);}}
                
                if(escolha10 == 2){
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|     ''A empresa descobre tudo. Você é demitido antes mesmo de explicar.             |\n");
              printf("|                         Desespero nunca foi estratégia''                            |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 3){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|               ''Olha só, caráter! A polícia resolve o caso.                   |\n");
              printf("|               Parabéns, %s,você venceu e ainda dorme em paz.''                |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 1){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|           ''Você recebe o dinheiro, mas carrega o peso da escolha.            |\n");
              printf("|              Parabéns, %s, você venceu!''                                     |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                }
                
                
                }
                
            
                
                }
                if(escolha9 == 1){
                printf("- Você chega ao destino e encontra uma pessoa suspeita -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ENTREGA                    |\n");
                printf("----------------------------------------\n");
                printf("| Depois de tudo chegou a hora         |\n");
                printf("| pense bem no que vai fazer...        |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Entregar normalmente             |\n");
                printf("| [2] Questionar o conteúdo            |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha10;
                scanf("%d", &escolha10);
                if(escolha10!=1&&escolha10!=2){ 
                    while(escolha10!=1&&escolha10!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha10);}}
                if(escolha10 == 1){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|                ''A entrega é concluída e você recebe o pagamento.             |\n");
              printf("|                   Parabéns, %s, você venceu!''                                |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 2){
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                    ''Perguntar de mais nunca ajudou ninguém.                        |\n");
              printf("|                   você é ameacado e decide fugir antes que piore''                  |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                
                }
                }
                
                }
                
               /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
                
                
                
                if(escolha7 == 1){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| .... Acho que essa não foi a melhor decisão....                          |\n");
                    printf("| Uns policiais estavam escondidos fiscalizando...                         |\n");
                    printf("|                                                                          |\n");
                    printf("|   Dependendo das suas atitudes no dia de hoje você pode se safar         |\n");
                    printf("|   mas isso depende da sua sorte, ou azar...                              |\n");
                    printf("|                                   _______________________________________|\n");
                    printf("| [DIGITE 1 PARA VER O RESULTADO]  |\n");
                    printf("|----------------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int ver;
                scanf("%d", &ver);
                if(ver!=1){ 
                    while(ver!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver);}}
                
                if(ver==1){
                    int sorteio;
                    srand(time(NULL));  
                    sorteio = (rand() % 100) + 1;
                    if(azar>=sorteio){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| É.... hoje não é seu dia mesmo.                                          |\n");
                    printf("| A polícia viu bem na hora, parece que você                               |\n");
                    printf("| está beeeeem azarado                                                     |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    
                    int ver2;
                scanf("%d", &ver2);
                if(ver2!=1){ 
                    while(ver2!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver2);}}
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|             ''Parabéns, você foi visto. Multa, atraso e entrega cancelada.          |\n");
              printf("|                             Você falhou miseravelmente''                            |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                
                if(azar<sorteio){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| Caramba.... agora você deu sorte                                         |\n");
                    printf("| o policial tava no TikTok bem na hora, hoje você                         |\n");
                    printf("| está com muuuuita sorte                                                  |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    
                    int ver3;
                scanf("%d", &ver3);
                if(ver3!=1){ 
                    while(ver3!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver3);}}
                
                printf("- Hoje a sorte resolveu te proteger. Não se acostuma -\n\n");
                printf("~ Você entra numa rua vazia demais pra ser normal. Do nada, surgem duas figuras encapuzadas.\n");
                printf("~ A frase clássica ecoa: “Perdeu, perdeu.” Seu coração dispara. Hora de decidir rápido.\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ASSALTO!                   |\n");
                printf("----------------------------------------\n");
                printf("| Você ta sendo abordado por bandidos, |\n");
                printf("| tem que pensar rápido!               |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Fugir                            |\n");
                printf("| [2] Entregar a moto                  |\n");
                printf("| [3] Reagir                           |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1, 2 OU 3                     |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n");
                int escolha8;
                scanf("%d", &escolha8);
                if(escolha8!=1&&escolha8!=2&&escolha8!=3){ 
                    while(escolha8!=1&&escolha8!=2&&escolha8!=3){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha8);}}
                
                if (escolha8 == 3) {
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|          ''Você decide reagir. Claramente inspirado por filmes que mentem muito.    |\n");
              printf("|                  A situação sai do controle e o jogo termina aqui''                 |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
    int gameover1;
    scanf("%d", &gameover1);

    if (gameover1 == 2) {
        return 0;
    } 
    else if (gameover1 == 1) {
        continue;
    }
}
                if (escolha8 == 2) {
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|          ''Você decide reagir. Claramente inspirado por filmes que mentem muito.    |\n");
              printf("|                  A situação sai do controle e o jogo termina aqui''                 |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
    int gameover1;
    scanf("%d", &gameover1);

    if (gameover1 == 2) {
        return 0;
    } 
    else if (gameover1 == 1) {
        continue;
    }
}
                if(escolha8 == 1){
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("| Você foge e chega no destino final... \n");                                                                                                     
            printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
            printf("                      ________\n");
            printf("                    (__________)                                            \n");
            printf("                     | .----. |                                             \n");
            printf("                     | |    | |        ____                                 \n");
            printf("                     | |    | |_______|.--.|___                             \n");
            printf("                     | |    | |^ ^ ^ ^||  ||^ ^))                           \n");
            printf("        |    ||/   (__________) ^-^-^-||__||-^-^-^))                      \n");
            printf("  _     |    ||   (____________)___________________|                       \n");
            printf("   ||   |    ||  ((_----------_))/-/-/-/-/-/-/-/-/-|                        \n");
            printf("__  |___|_   ||   (____________) ------------------|                        \n");
            printf("  ||/.----.||  //  | ________ |--- _____---_____ --|                     \n");
            printf("  //      ||||||   ||  |  |  ||   |o___o| |o___o|  |                       \n");
            printf("           ||||    ||__|__|__||---|o___o|-|     |--|                      \n");
            printf("     _      ||     ||  |  |  ||   |0___0| |_____|  |                   \n");
            printf("         ||||//    ||__|__|__||---|_____|-|o__o_|-//                  \n");
            printf("  ___     //     ()__-__-__-__-__-__-__-__-__-__-__()                  \n");
            printf(" `--_____/ |    ()__|__|__|__|__-__-__-__-__-__-__-_()       \n");
            printf("     `---| |      || | __ | ||    ______   _____   |                   \n");
            printf("         | |      || ||__|| ||   |//////| |_| |_|  |                        \n");
            printf("          | |     || |   o| ||---|//////|-|_| |_|--|                        \n");
            printf("            | |   |__|____|__|---|//////|-|_|_|_|--|                    \n");
            printf("            | |   |__________|                    _//                       \n");
            printf("            | | ||____________||------------------//                        \n");
            printf("--------------------------------------------------------------------------@\n");
            printf("[DIGITE 1 PARA AVANÇAR]\n");
            int proximo;
            scanf("%d", &proximo);
            if(proximo!=1){ 
                    while(proximo != 1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &proximo);}}
                }
                if(proximo == 1){
                printf("- Você foge e nessa fuga o pacote é danificado -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — PACOTE DANIFICADO          |\n");
                printf("----------------------------------------\n");
                printf("| O pacote se rasga um pouco ao fugir  |\n");
                printf("| algo misterioso está dentro          |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Ignorar e seguir                 |\n");
                printf("| [2] Abrir o pacote                   |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha9;
                scanf("%d", &escolha9);
                if(escolha9!=1&&escolha9!=2){ 
                    while(escolha9!=1&&escolha9!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha9);}}
                if(escolha9 == 2){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| Você abriu mas viu o que não queria ver....                              |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    int ver3;
                scanf("%d", &ver3);
                if(ver3!=1){ 
                    while(ver3!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver3);}}
                if(ver3 == 1){
                    printf("|--------------------------------------------------------------------------|\n");
                    printf("| Dentro da caixa tinha uns 20 Iphones 18.                                 |\n");
                    printf("| Pelo visto a pirataria venceu                                            |\n");
                    printf("|                           _______________________________________________|\n");
                    printf("| [DIGITE 1 PARA AVANÇAR]  |\n");
                    printf("|--------------------------|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                    int ver4;
                scanf("%d", &ver4);
                if(ver4!=1){ 
                    while(ver4!=1){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &ver4);}}
                
                if(ver4 == 1){
                printf("- Você chegou ao destino final -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ENTREGA                    |\n");
                printf("----------------------------------------\n");
                printf("| Depois de saber o conteúdo do pacote |\n");
                printf("| pense bem no que vai fazer...        |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Continuar a entrega              |\n");
                printf("| [2] Jogar o pacote fora              |\n");
                printf("| [3] Denunciar a pirataria            |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1, 2 OU 3                     |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha10;
                scanf("%d", &escolha10);
                if(escolha10!=1&&escolha10!=2&&escolha10!=3){ 
                    while(escolha10!=1&&escolha10!=2&&escolha10!=3){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha10);}}
                
                if(escolha10 == 2){
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|     ''A empresa descobre tudo. Você é demitido antes mesmo de explicar.             |\n");
              printf("|                         Desespero nunca foi estratégia''                            |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 3){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|               ''Olha só, caráter! A polícia resolve o caso.                   |\n");
              printf("|               Parabéns, %s,você venceu e ainda dorme em paz.''                |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 1){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|           ''Você recebe o dinheiro, mas carrega o peso da escolha.            |\n");
              printf("|              Parabéns, %s, você venceu!''                                     |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                }
                
                
                }
                
            
                
                }
                if(escolha9 == 1){
                printf("- Você chega ao destino e encontra uma pessoa suspeita -\n");
                printf("----------------------------------------\n");
                printf("| DECISÃO — ENTREGA                    |\n");
                printf("----------------------------------------\n");
                printf("| Depois de tudo chegou a hora         |\n");
                printf("| pense bem no que vai fazer...        |\n");
                printf("|                                      |\n");
                printf("| O que você faz?                      |\n");
                printf("|                                      |\n");
                printf("| [1] Entregar normalmente             |\n");
                printf("| [2] Questionar o conteúdo            |\n");
                printf("----------------------------------------\n");
                printf("| DIGITE 1 OU 2                        |\n");
                printf("----------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                int escolha10;
                scanf("%d", &escolha10);
                if(escolha10!=1&&escolha10!=2){ 
                    while(escolha10!=1&&escolha10!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &escolha10);}}
                if(escolha10 == 1){
              printf("---------------------------------------------------------------------------------\n");
              printf("|                                                                _              |\n");
              printf("|              ____   ____.__  __               .__             | |             |\n");
              printf("|              (   ( /   /|__|/  |_  ___________|__|____        | |             |\n");
              printf("|               (   Y   / |  (   __(/  _ (_  __ (  (__  (       |_|             |\n");
              printf("|                (     /  |  ||  | (  <_> )  | (/  |/ __ (_      _              |\n");
              printf("|                 (___/   |__||__|  (____/|__|  |__(____  /     |_|             |\n");
              printf("|                                                       (/                      |\n");
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|                ''A entrega é concluída e você recebe o pagamento.             |\n");
              printf("|                   Parabéns, %s, você venceu!''                                |\n", nome);
              printf("|                                                                               |\n");
              printf("|                                                                               |\n");
              printf("|        [1] Voltar pro início                      [2] Sair do jogo            |\n");
              printf("|                                                                               |\n");
              printf("---------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                if(escolha10 == 2){
              printf("---------------------------------------------------------------------------------------\n");
              printf("|                                                                     #    #          |\n");
              printf("|      ____    _    __  __ _____    _____     _______ ____            | # # # ####    |\n");
              printf("|     / ___|  / (  |  (/  | ____|  / _ ( (   / / ____|  _ (           |  ###_## #     |\n");
              printf("|    | |  _  / _ ( | |(/| |  _|   | | | ( ( / /|  _| | |_) |          | D/_  #        |\n");
              printf("|    | |_| |/ ___ (| |  | | |___  | |_| |( V / | |___|  _ <           |/(_`.#,-.      |\n");
              printf("|     (____/_/   (_(_|  |_|_____|  (___/  (_/  |_____|_| (_(     _____|o) `--'(o)_____|\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|                    ''Perguntar de mais nunca ajudou ninguém.                        |\n");
              printf("|                   você é ameacado e decide fugir antes que piore''                  |\n");
              printf("|                                                                                     |\n");
              printf("|                                                                                     |\n");
              printf("|        [1] Voltar pro início       [2] Sair do jogo                                 |\n");
              printf("|                                                                                     |\n");
              printf("---------------------------------------------------------------------------------------\n\n\n\n\n\n\n\n\n\n");
              printf("[DIGITE 1 OU 2] \n");
              int gameover1;
              scanf("%d", &gameover1);
                if(gameover1!=1&&gameover1!=2){ 
                    while(gameover1!=1&&gameover1!=2){
                printf("Valor inválido! tente novamente\n\n");
                scanf("%d", &gameover1);}}
                if(gameover1 == 2){
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n");
                   printf("|                               |\n");
                   printf("|        VOLTE SEMPRE!(:        |\n");
                   printf("|                               |\n");
                   printf("@~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~@\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
                     return 0;}
                }
                
                }
                
                
                }
                }
                }
                
                
                
                
                
                
               }
              }
             }
            }
            
            
            }
            }
            }
            }    
          }
        }
        
        

        
    }
    }
    

    return 0;
}
