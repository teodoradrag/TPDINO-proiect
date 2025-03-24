#include <ncurses.h>

int main() {
    initscr();            // Pornește ncurses
    printw("Salut din ncurses! Apasa orice tasta...");
    refresh();            // Afișează textul pe ecran
    getch();              // Așteaptă o tastă
    endwin();             // Oprește ncurses
    return 0;
}
