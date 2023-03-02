#include<stdio.h>
#include <windows.h>

//키보드값
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

//함수 정의 
void gotoxy(int, int);  //커서 위치
void TitleDraw();   //제목 출력
void init();        //콘솔창 크기함수 
int menuDraw();     //메뉴 출력&선택 함수 
int keyControl();   //화살표 선택하는 거
void infoDraw();    //게임정보화면 구현하기 

//main함수 
int main()
{
    init();
    TitleDraw(); //화면 출력
    

    int keyCode = keyControl();
  
    while (1) {
        titleDraw();
        int menuCode = menuDraw();
        if (menuCode == 0) {
            //게임 시작으로 이동
        }
        else if (menuCode == 1) {
            //게임 정보로 이동
        }
        else if (menuCode == 2) {
            return 0; //종료
        }
        system("cls");  //화면 모두 지우기
    }
    return 0; //종료
    
}

//제목 출력 함수 
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
//게임정보화면 구현하는 함수
void infoDraw() {
    system("cls");  //화면 모두 지우기
    printf("\n\n");
    printf("\t[ 게 임 방 법 ]\t\n");
}

//콘솔 화면 지정 함수 
void init() {
    system("mode con:cols=120 lines=30 | title Save the Princess");
}

//gotoxy 함수 (마우스 끝 위치 지정함수)
void gotoxy(int x, int y) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들 가져오기 
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);
}

//메뉴 출력 함수 & 메뉴 선택기능 함수
int menuDraw() {   
    int x = 19;
    int y = 30;
    gotoxy(x - 2, y);
    printf("> 게 임 시 작");
    gotoxy(x, y+2);
    printf("게 임 정 보");
    gotoxy(x, y+4);
    printf("    종 료    ");

    while (1) { //무한 반복
        int n = keyControl();
        switch (n) {
            case UP: {
                if (y > 30) {
                    gotoxy(x - 2, y);
                    printf(" "); //원래 위치 지우기
                    gotoxy(x - 2, --y);
                    printf(">");//다시그리기

                }
                break;
            }
            case DOWN: {    //입력된 키의 값이 DOWN인 경우
                if (y < 35) {
                    gotoxy(x - 2, y);
                    printf(" "); //원래 위치 지우기
                    gotoxy(x - 2, ++y);
                    printf(">");//다시그리기
                }
                break;
            }
            case SUBMIT: {
                return y - 30;
            }
        }
    }
}

//위,아래 ,왼,우 키값 지정 함수 
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


