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
    printf("[|-----------------------------------------------------------------¬                                                  |\n");
    printf("[|                                                                 |                                                  |\n");
    printf("[|  START GAME(PRESS 1)   CREATORS(PRESS 2)   QUIT GAME(PRESS 3)   |                                                  |\n");                                                             
    printf("[|                                                                 |                                                  |\n");                                                             
    printf("[|_________________________________________________________________|__________________________________________________]\n");


    
    setlocale(LC_ALL, "Portuguese"); // Permite Usar acentuação entre outros no printf

    // quando perder
    gameOver();
    getchar(); // é um scanf para letras no noso caso para o ENTER

    return 0;
}
