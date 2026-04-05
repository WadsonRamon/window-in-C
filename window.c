#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // para usleep()


int main() {
    Display *display;
    Window window;
    int screen;

    // 1. Conecta ao servidor X ( o sistema grafico do Linux)
    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Erro: Não foi possível abrir o display (servidor X).\n");
        return 1;
    }

    screen = DefaultScreen(display);

    // 2. Cria uma janela simples
    window = XCreateSimpleWindow(
        display,                            // conexão com o x
        RootWindow(display, screen),        // janela pai (área da tela)    
        00, 100,                            // posição x, y na tela
        800, 600,                           // largura e altura
        1,                                  // largura da borda
        BlackPixel(display, screen),        // cor da borda 
        WhitePixel(display, screen)         // cor do fundo
    );

    // Define o título da janela
    XStoreName(display, window, "Minha Janela Simples em C - Linux");

    // Mostra a janela na tela
    XMapWindow(display, window);

    // Garante que as mudanças sejam enviadas para o servidor x
    XFlush(display);

    printf("Janela criada! Pressione Ctrl+C no terminal para fechar.\n");

    // Loop simples para manter a janela aberta 
    while (1) {
        usleep(100000); // dorme 100ms para não consumir 100% da CPU
    }

    // Nunca chega aqui (fechado com Ctrl+C)
    XCloseDisplay(display);
    return 0;
}