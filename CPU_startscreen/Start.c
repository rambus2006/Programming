#include<stdio.h>
#include <windows.h>

//Ű���尪
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

//�Լ� ���� 
void gotoxy(int, int);  //Ŀ�� ��ġ
void TitleDraw();   //���� ���
void init();        //�ܼ�â ũ���Լ� 
int menuDraw();     //�޴� ���&���� �Լ� 
int keyControl();   //ȭ��ǥ �����ϴ� ��
void infoDraw();    //��������ȭ�� �����ϱ� 

//main�Լ� 
int main()
{
    init();
    TitleDraw(); //ȭ�� ���
    

    int keyCode = keyControl();
  
    while (1) {
        titleDraw();
        int menuCode = menuDraw();
        if (menuCode == 0) {
            //���� �������� �̵�
        }
        else if (menuCode == 1) {
            //���� ������ �̵�
        }
        else if (menuCode == 2) {
            return 0; //����
        }
        system("cls");  //ȭ�� ��� �����
    }
    return 0; //����
    
}

//���� ��� �Լ� 
void TitleDraw()
{
   int x = 17, y = 3;

    gotoxy(x, y++);
    printf("      /$$$$$$   /$$$$$$   /$$    /$$ /$$$$$$$$                                     \n");
    gotoxy(x, y++);
    printf("     /$$__  $$ /$$__  $$  | $$   | $$| $$_____/                                     \n");
    gotoxy(x, y++);
    printf("    | $$  \__/| $$      $$  |$$    | $$| $$                                           \n");
    gotoxy(x, y++);
    printf("    |  $$$$$$ | $$$$$$$$  |  $$ / $$/| $$$$$                                        \n");
    gotoxy(x, y++);
    printf("     \____  $$| $$__  $$  \  $$ $$/ | $$__/                                        \n");
    gotoxy(x, y++);
    printf("     /$$  \ $$| $$  | $$   \  $$$/  | $$                                           \n");
    gotoxy(x, y++);
    printf("    |$$$$$$/| $$  |    $$    \  $/   | $$$$$$$$                                     \n");
    gotoxy(x, y++);
    printf("     \______/ |__/  |__/     \_/    |________/                                     \n");
    gotoxy(x, y++);
    printf(" /$$$$$$$$ /$$   /$$ /$$$$$$$$                                                \n");
    gotoxy(x, y++);
    printf("|__  $$__/| $$  | $$| $$_____/                                                \n");
    gotoxy(x, y++);
    printf("   | $$   | $$  | $$| $$                                                      \n");
    gotoxy(x, y++);
    printf("   | $$   | $$$$$$$$| $$$$$                                                   \n");
    gotoxy(x, y++);
    printf("   | $$   | $$__  $$| $$__/                                                   \n");
    gotoxy(x, y++);
    printf("  | $$   | $$  | $$| $$                                                      \n");
    gotoxy(x, y++);
    printf("   | $$   | $$  | $$| $$$$$$$$                                                \n");
    gotoxy(x, y++);
    printf("   |__/   |__/  |__/|________/                                                \n");
    gotoxy(x, y++);
    printf(" /$$$$$$$  /$$$$$$$  /$$$$$$ /$$   /$$  /$$$$$$  /$$$$$$$$  /$$$$$$   /$$$$$$ \n");
    gotoxy(x, y++);
    printf("| $$__  $$| $$__  $$|_  $$_/| $$$ | $$ /$$__  $$| $$_____/ /$$__  $$ /$$__  $$\n");
    gotoxy(x, y++);
    printf("| $$  \ $$| $$  \ $$  | $$  | $$$$| $$| $$  \__/| $$      | $$  \__/| $$  \__/\n");
    gotoxy(x, y++);
    printf("| $$$$$$$/| $$$$$$$/  | $$  | $$ $$ $$| $$      | $$$$$   |  $$$$$$ |  $$$$$$ \n");
    gotoxy(x, y++);
    printf("| $$____/ | $$__  $$  | $$  | $$  $$$$| $$      | $$__/    \____  $$ \____  $$\n");
    gotoxy(x, y++);
    printf("| $$      | $$  \ $$  | $$  | $$\  $$$| $$    $$| $$       /$$  \ $$ /$$  \ $$\n");
    gotoxy(x, y++);
    printf("| $$      | $$  | $$ /$$$$$$| $$ \  $$|  $$$$$$/| $$$$$$$$|  $$$$$$/|  $$$$$$/\n");
    gotoxy(x, y++);
    printf("|__/      |__/  |__/|______/|__/  \__/ \______/ |________/ \______/  \______/ \n");
    gotoxy(x, y++);

}
//��������ȭ�� �����ϴ� �Լ�
void infoDraw() {
    system("cls");  //ȭ�� ��� �����
    printf("\n\n");
    printf("\t[ �� �� �� �� ]\t\n");
}

//�ܼ� ȭ�� ���� �Լ� 
void init() {
    system("mode con:cols=120 lines=30 | title Save the Princess");
}

//gotoxy �Լ� (���콺 �� ��ġ �����Լ�)
void gotoxy(int x, int y) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� �������� 
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);
}

//�޴� ��� �Լ� & �޴� ���ñ�� �Լ�
int menuDraw() {   
    int x = 19;
    int y = 30;
    gotoxy(x - 2, y);
    printf("> �� �� �� ��");
    gotoxy(x, y+2);
    printf("�� �� �� ��");
    gotoxy(x, y+4);
    printf("    �� ��    ");

    while (1) { //���� �ݺ�
        int n = keyControl();
        switch (n) {
            case UP: {
                if (y > 30) {
                    gotoxy(x - 2, y);
                    printf(" "); //���� ��ġ �����
                    gotoxy(x - 2, --y);
                    printf(">");//�ٽñ׸���

                }
                break;
            }
            case DOWN: {    //�Էµ� Ű�� ���� DOWN�� ���
                if (y < 35) {
                    gotoxy(x - 2, y);
                    printf(" "); //���� ��ġ �����
                    gotoxy(x - 2, ++y);
                    printf(">");//�ٽñ׸���
                }
                break;
            }
            case SUBMIT: {
                return y - 30;
            }
        }
    }
}

//��,�Ʒ� ,��,�� Ű�� ���� �Լ� 
int keyControl() {
    char temp = getch();

    if (temp == 'w' || temp == 'W') {
        return UP;
    }
    else if (temp == 'a' || temp == 'A') {
        return LEFT;
    }
    else if (temp == 's' || temp == 'S') {
        return DOWN;
    }
    else if (temp == 'd' || temp == 'D') {
        return RIGHT;
    }
    else if (temp == ' ') {
        return SUBMIT;
    }
}


