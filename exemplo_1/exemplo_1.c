#include <stdio.h>

int main() {
#ifdef _WIN32
    printf("SISTEMA PREFERIDO DO ZÉ\n");

#elif __linux__
    printf("pq meu bluetooth não funciona?\n");

#elif __APPLE__
    printf("sou hipócrita por esporte\n");

#else
    printf("fiquei sem ideia\n");

#endif
    return 0;
}