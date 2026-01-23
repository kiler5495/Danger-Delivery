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
    setlocale(LC_ALL, "Portuguese"); // Permite Usar acentuação entre outros no printf

    // quando perder
    gameOver();
    getchar(); // é um scanf para letras no noso caso para o ENTER

    return 0;
}
