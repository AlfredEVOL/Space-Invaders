#include <ncurses.h>
int main(void)
{
    initscr();
    attron(A_UNDERLINE);
    mvprintw(0, 7, "NCURSES EXTENDED CHARACTERS\n\n");
    attroff(A_UNDERLINE);
    addch(ACS_ULCORNER);
    printw("  ACS_ULCORNER  l\n");
    addch(ACS_LLCORNER);
    printw("  ACS_LLCORNER  m\n");
    addch(ACS_URCORNER);
    printw("  ACS_URCORNER  k\n");
    addch(ACS_LRCORNER);
    printw("  ACS_LRCORNER  j\n");
    addch(ACS_LTEE);
    printw("  ACS_LTEE      t\n");
    addch(ACS_RTEE);
    printw("  ACS_RTEE      u\n");
    addch(ACS_BTEE);
    printw("  ACS_BTEE      v\n");
    addch(ACS_TTEE);
    printw("  ACS_TTEE      w\n");
    addch(ACS_HLINE);
    printw("  ACS_HLINE     q\n");
    addch(ACS_VLINE);
    printw("  ACS_VLINE     x\n");
    addch(ACS_PLUS);
    printw("  ACS_PLUS      n\n");
    addch(ACS_S1);
    printw("  ACS_S1        o\n");
    addch(ACS_S3);
    printw("  ACS_S3        p\n");
    addch(ACS_S7);
    printw("  ACS_S7        r\n");
    addch(ACS_S9);
    printw("  ACS_S9        s\n");
    addch(ACS_DIAMOND);
    printw("  ACS_DIAMOND   `\n");
    addch(ACS_CKBOARD);
    printw("  ACS_CKBOARD   a\n");
    addch(ACS_DEGREE);
    printw("  ACS_DEGREE    f\n");
    addch(ACS_PLMINUS);
    printw("  ACS_PLMINUS   g\n");
    addch(ACS_BULLET);
    printw("  ACS_BULLET    ~\n");
    addch(ACS_LARROW);
    printw("  ACS_LARROW    ,\n");
    addch(ACS_RARROW);
    printw("  ACS_RARROW    +\n");
    addch(ACS_DARROW);
    printw("  ACS_DARROW    .\n");
    addch(ACS_UARROW);
    printw("  ACS_UARROW    -\n");
    addch(ACS_BOARD);
    printw("  ACS_BOARD     h\n");
    addch(ACS_LANTERN);
    printw("  ACS_LANTERN   i\n");
    addch(ACS_BLOCK);
    printw("  ACS_BLOCK     0\n");
    addch(ACS_LEQUAL);
    printw("  ACS_LEQUAL    y\n");
    addch(ACS_GEQUAL);
    printw("  ACS_GEQUAL    z\n");
    addch(ACS_PI);
    printw("  ACS_PI        {\n");
    addch(ACS_NEQUAL);
    printw("  ACS_NEQUAL    |\n");
    addch(ACS_STERLING);
    printw("  ACS_STERLING  }\n");
    refresh();
    getch();
    endwin();
    return 0;
}