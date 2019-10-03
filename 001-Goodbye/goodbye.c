#include <ncurses.h>

int main(void) {
    initscr();
    addstr("Goodbye C Programming!");
    refresh();
    getch();

    endwin();
    return 0;
}

