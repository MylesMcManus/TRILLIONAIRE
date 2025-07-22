#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// I FOUND THIS HIDE CURSOR CODE ONLINE TO REMOVE THE CURSOR AS IT'S REALLY ANNOYING
void hideCursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;  // hide cursor
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void printMenu(int selection) {
 //   system("cls");
 //   printf("------Trillionaire------\n\n");
    if (selection == 0) {
system("cls");
printf("████████╗██████╗ ██╗██╗     ██╗     ██╗ ██████╗ ███╗   ██╗ █████╗ ██╗██████╗ ███████╗\n");
printf("╚══██╔══╝██╔══██╗██║██║     ██║     ██║██╔═══██╗████╗  ██║██╔══██╗██║██╔══██╗██╔════╝\n");
printf("   ██║   ██████╔╝██║██║     ██║     ██║██║   ██║██╔██╗ ██║███████║██║██████╔╝█████╗  \n");
printf("   ██║   ██╔══██╗██║██║     ██║     ██║██║   ██║██║╚██╗██║██╔══██║██║██╔══██╗██╔══╝  \n");
printf("   ██║   ██║  ██║██║███████╗███████╗██║╚██████╔╝██║ ╚████║██║  ██║██║██║  ██║███████╗\n");
printf("   ╚═╝   ╚═╝  ╚═╝╚═╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝\n");
printf("\n");
printf("\n");
    printf("\033[0;32m");
printf(" HIGH SCORE: €0.00\n");
    printf("\033[0m");
printf("\n");
printf("\n");
printf("");
printf("> Play game\n");
printf("  Instructions\n");
printf("\n");
printf("\n");
printf("\n");
    } else {
system("cls");
printf("████████╗██████╗ ██╗██╗     ██╗     ██╗ ██████╗ ███╗   ██╗ █████╗ ██╗██████╗ ███████╗\n");
printf("╚══██╔══╝██╔══██╗██║██║     ██║     ██║██╔═══██╗████╗  ██║██╔══██╗██║██╔══██╗██╔════╝\n");
printf("   ██║   ██████╔╝██║██║     ██║     ██║██║   ██║██╔██╗ ██║███████║██║██████╔╝█████╗  \n");
printf("   ██║   ██╔══██╗██║██║     ██║     ██║██║   ██║██║╚██╗██║██╔══██║██║██╔══██╗██╔══╝  \n");
printf("   ██║   ██║  ██║██║███████╗███████╗██║╚██████╔╝██║ ╚████║██║  ██║██║██║  ██║███████╗\n");
printf("   ╚═╝   ╚═╝  ╚═╝╚═╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝\n");
printf("\n");
printf("\n");
printf("\033[0;32m");
printf(" HIGH SCORE: €0.00\n");
    printf("\033[0m");
printf("\n");
printf("\n");
printf("");
printf("  Play game\n");
printf("> Instructions\n");
printf("\n");
printf("\n");
printf("\n");
    }
}


int main(void){
    hideCursor();
char enter[100];
char input;
int selection = 0;  // 0 is >play game

printMenu(selection);

while(1){
input = _getch();

if(input == 'w' || input == 72){
selection = 0;
} else if (input == 's' || input == 80) {
selection = 1;
} else if (input == '\r') {
break; 
}
printMenu(selection);
}


if (selection == 0){

srand(time(NULL)); // this seeds the random number generator
int x = rand() % 2;  // apparently this makes the number 0 or 1


//fgets(enter, sizeof(enter), stdin);
//enter[strcspn(enter, "\n")] = 0;  //remove the newline

//if(strlen(enter) == 0) {

	 

system("cls");
Sleep(2000);
printf("You have been born!\n");
Sleep(2000);
printf("You have been born.... \n");
Sleep(2000);

if (x == 0) { printf("RICH!\n");}
else{printf("POOR!\n");}
//}
Sleep(3000);
system("cls");
}

else {
system("cls");
printf("Instructions: \n");
printf("\n");
printf("\n");


printf("The aim of this game is to get rich:D\n");
Sleep(2000);
printf("You must obtain a humble 1 Trillion euro to win the game!\n");
Sleep(2000);
printf("If your balance reaches 0 you will die on the streets\n");
Sleep(2000);
printf("\n");
printf("\n");
printf("\n");
printf("Press enter to go back to the main menu...");
 while (_getch() != '\r');
main();

}
return 0;
}