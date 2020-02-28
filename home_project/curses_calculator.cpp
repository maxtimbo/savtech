#include <string.h>
#include <iostream>
#include <curses.h>
using namespace std;

int addition(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int subtraction(int num1, int num2) {
    int difference = num1 - num2;
    return difference;
}

int multiplication(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

int drawBox() {
    system("clear");
    cout<<" ┏━━━━━━━━━━━━━━━━━━━━┓ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┃                    ┃ "<<endl
        <<" ┗━━━━━━━━━━━━━━━━━━━━┛ "<<endl;
    return 0;
}

int main(void) {
    int ch;
    int row, col;
    char mesg[] = "Type a charachet\n";
    /* initialize curses */

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col-strlen(mesg))/2, "%s", mesg);
    mvprintw(row-2, 0, "This screen has %d rows and %d columns\n", row, col);
    ch = getch();
    if (ch == KEY_F(1)) {
        printw("F1 Key Pressed");
    } else {
        mvprintw(row/2+1, col/2, "The key pressed is ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    refresh();
    getch();
    endwin();
}
