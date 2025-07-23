#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void exitGame();
void checkForQuit();
void hideCursor();
void printMenu();

void checkForQuit(){
	if (_kbhit()) //khbit checks has a key been pressed its a non blocking check, the program can continue with this in the background
	{   
		char key = _getch();
		
		if (key == 'p' || key == 'P'){
			exitGame();
			}
	}
}

void exitGame(){
	Sleep(500);
	system("cls");
	printf("You Pressed (DOWN ARROW)! Thanks for playing! See you soon:)");
	Sleep(1000);
	exit(0);
}
// I FOUND THIS HIDE CURSOR CODE ONLINE TO REMOVE THE CURSOR AS IT'S REALLY ANNOYING
void hideCursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;  // hide cursor
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void printMenu(int selection) {
	double highscore;
	highscore = 1.00;
 //   system("cls");
 //   printf("------Trillionaire------\n\n");
    if (selection == 0) {
		checkForQuit();
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
printf(" HIGH SCORE: €%.2f\n", highscore);
    printf("\033[0m");
printf("\n");
printf("\n");
printf("");
printf("> Play game\n");
printf("  Instructions\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("Press (DOWN ARROW) to quit the game");
printf("\n");
printf("\n");
printf("Press (W, A, S, D) to navigate the menu and character");
    } else {
		checkForQuit();
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
printf(" HIGH SCORE: €%.2f\n", highscore);
    printf("\033[0m");
printf("\n");
printf("\n");
printf("");
printf("  Play game\n");
printf("> Instructions\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("Press (DOWN ARROW) to quit the game");
printf("\n");
printf("\n");
printf("Press (W, A, S, D) to navigate the menu and character");
    }
}


int main(void){
    hideCursor();
	checkForQuit();
	
	
char enter[100];
char input;
int selection = 0;  // 0 is >play game

printMenu(selection);

while(1){
	checkForQuit();
input = _getch();

if(input == 'w' || input == 'W'){
	checkForQuit();
selection = 0;
} else if (input == 's' || input == 'S') {
	checkForQuit();
selection = 1;
} else if (input == '\r') {
	checkForQuit();
break; 
}
printMenu(selection);
}


if (selection == 0){
	checkForQuit();

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

if (x == 0) {
checkForQuit();
	printf("RICH!\n");}
else{
	checkForQuit();
	printf("POOR!\n");}
//}
Sleep(3000);
system("cls");
}

else {
	checkForQuit();
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