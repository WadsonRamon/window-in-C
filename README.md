🪟 Simple X11 Window in C

Um projeto simples em C que cria uma janela gráfica no Linux utilizando a biblioteca X11 (Xlib).

A ideia aqui não é fazer algo complexo, mas sim entender como o sistema gráfico funciona por baixo dos panos, sem frameworks — direto na raiz.

📚 Sobre o projeto

Esse programa:

Conecta ao servidor gráfico do Linux (X Server)
Cria uma janela na tela
Define título e aparência básica
Mantém a janela aberta em loop

É um primeiro passo para quem quer sair do terminal e começar a mexer com interfaces gráficas no nível mais baixo possível.

⚙️ Tecnologias utilizadas
Linguagem: C
Sistema gráfico: X11 (Xlib)
Ambiente: Linux

📦 Bibliotecas usadas
#include <X11/Xlib.h>   // interface gráfica (janela)
#include <stdio.h>      // entrada/saída
#include <stdlib.h>     // funções utilitárias
#include <unistd.h>     // controle de tempo (sleep)

Explicando rápido (bem direto mesmo):

Xlib → cria janela
stdio → print no terminal
stdlib → funções básicas
unistd → pausa execução

🚀 Como compilar e executar

Se você quiser entender de verdade, tenta primeiro sozinho 😉
mas o caminho é esse:

gcc main.c -o janela -lX11
./janela

Se der erro, provavelmente falta a lib do X11:

sudo pacman -S libx11

 🧠 O que você aprende aqui

Esse projeto parece simples, mas ensina coisas importantes:

Como programas gráficos funcionam no Linux
Como se conectar ao servidor X
Estrutura básica de aplicações gráficas
Controle manual de loop (sem frameworks)
⚠️ Observação

A janela não tem botão de fechar.
Para sair, use:

Ctrl + C

Isso é proposital — a ideia aqui é entender o funcionamento básico antes de evoluir.

🔥 Próximos passos (se quiser evoluir)
Capturar eventos do teclado/mouse
Desenhar formas na tela
Criar botões simples
Migrar depois para SDL ou OpenGL
💡 Motivação

Projeto feito como prática de baixo nível em C no Linux, fugindo de abstrações e tentando entender como tudo funciona "de verdade".
