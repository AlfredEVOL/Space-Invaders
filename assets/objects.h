
class ObjectGraphics
{

    char height, width;
    char objectCharacters[5][5];
    char objectColors[5][5];

public:
    ObjectGraphics(int type)
    {
        switch (type)
        {

            //basic ship
        case 0:
            const int rows = 3, cols = 5;
            height = rows, width = cols;
            char chrs[rows][cols] = {
                ' ', ' ', 'x', ' ', ' ',
                ' ', 'l', 'x', 'k', ' ',
                'a', 'u', 'a', 't', 'a'};
            char clr[rows][cols] = {
                0,
                0,
                1,
                0,
                0,
                0,
                3,
                1,
                3,
                0,
                2,
                5,
                6,
                5,
                2,
            };
            for (int i = 0; i < height; i++)
                for (int j = 0; j < width; j++)
                {
                    objectCharacters[i][j] = chrs[i][j];
                    objectColors[i][j] = clr[i][j];
                }
            break;
        }
    }

    void getDimensions(char &h, char &w)
    {
        h = height;
        w = width;
    }

    void drawObject(int y, int x, WINDOW *win = stdscr)
    {
        for (int i = 0; i < height; i++)
            for (int j = 0; j < width; j++)
            {
                wmove(win, y + i, x + j);
                attron(COLOR_PAIR(objectColors[i][j]));
                waddch(win, NCURSES_ACS(objectCharacters[i][j]));
                attroff(COLOR_PAIR(objectColors[i][j]));
            }
    }
    void eraseObject(int y, int x, WINDOW *win = stdscr)
    {
        attron(COLOR_PAIR(0));
        for (int i = 0; i < height; i++)
            mvwhline(win, y + i, x, ' ', width);
        attroff(COLOR_PAIR(0));
    }
};
