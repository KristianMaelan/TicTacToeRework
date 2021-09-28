//libraries used
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

//Function declarations
void playerBoardPrint();	//Only used for printing gameboard.
bool winConfirm();			//Checks if there is a game win.
void input(int);		//Takes input from player1.
void clearcin();			//For clearing input buffer.
void gameFunction();	//Function where the actual game is run.
void gameBoardReset();	//Function to reset the gameboard after each game played.

//declaring player inputs
char player1 = 'X';					//Player 1 game piece
char player2 = 'O';					//Player 2 game piece
char replaygame = 'y';				//For looping the game
char playerinput{};					//Player input collection

//playerboard setup, using 2d array for easier looping and no need to minimize memory use.
char playerboard[3][3] = {
	{'1', '2', '3'},
	{'4', '5', '6'},
	{'7', '8', '9'} };

//main function
int main() {
	gameBoardReset(); //Calls board reset function.
	//Declared globally to set gameboard and here to reset after a round.

	system("cls");		//For clearing the board before restarting
	std::cout << "\t\t\t----\t Welcome to Tic Tac Toe \t----" << std::endl; //Welcome message
	std::cout << "\n\n\t This is the game board, press the corresponding number to place your input!\n\t" << std::endl; //Instructions message
	playerBoardPrint(); //prints the standard gameboard to show what to press
	std::cout << std::endl;
	system("pause"); //waits for user to be rady before starting the game
	system("cls");

	gameFunction(); //Runs the code for the actual game
	return 0;
}

void playerBoardPrint() {
	for (int i = 0; i < 3; i++){
		std::cout << std::endl;
		std::cout << "\t\t\t\t  -----------------------";
		std::cout << std::endl;
		std::cout << "\t\t\t\t   ";
		for (int j = 0; j < 3; j++) {
			std::cout << " | ";
			std::cout << playerboard[i][j];
			std::cout << " | ";
		}
	}
	std::cout << "\n\t\t\t\t  -----------------------";
}

void gameFunction() {
	for (int rounds = 0; rounds < 10;) {
		system("cls");			//Player 1 turn. First clears screen, prints current board. Then takes the input
		system("Color a");
		playerBoardPrint();
		input(1);

		if (winConfirm()) {		//Runs the win checker and returns the program to main, resetting everything and making it able to run multiple times without closing the application.
			system("cls");
			playerBoardPrint();
			std::cout << "\n\t\t\tPlayer 2 has lost the game!\n\t\t\t Restarting game in 10 seconds...";
			Sleep(10000);
			main();
		}
		rounds++;

		if (rounds >= 9) {											//If the game ends in a draw, this gets executed and the program restart
			system("cls");
			playerBoardPrint();
			std::cout << "\n\t\t\t Its a draw! None of you won!\n\t\t\t Restarting game in 10 seconds...";
			Sleep(10000);
			gameBoardReset();
			main();
		}

		system("cls");
		system("Color b");
		playerBoardPrint();
		input(2);
		if (winConfirm()) {
			std::cout << "\n\t\t\tPlayer 1 has lost the game!\n\t\t\t Restarting game in 10 seconds...";
			Sleep(10000);
			gameBoardReset();
			main();
		}
		rounds++;
	}
}

void input(int g) {							//Player input with checking for if space is used with if statements. int g is what gamefunctions send and decides which players turn it is.
	int inputconfirmed = 1;
	while (inputconfirmed == 1) {						//Loops until player has succesfully entered a correct input
		if (g == 1) {
			std::cout << "\n\t\t\tPlayer 1, your turn: " << std::endl;
		}
		else {
			std::cout << "\n\t\t\tPlayer 2, your turn: " << std::endl;
		}
		std::cin >> playerinput;
		switch (playerinput) {
		case  '1':
			if (playerboard[0][0] == '1') {
				if (g == 1)
				{
					playerboard[0][0] = player1;
					inputconfirmed = 0;
				}
				else
				{
					playerboard[0][0] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '2':
			if (playerboard[0][1] == '2') {
				if (g == 1)
				{
					playerboard[0][1] = player1;
					inputconfirmed = 0;
				}
				else
				{
					playerboard[0][1] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '3':
			if (playerboard[0][2] == '3') {
				if (g == 1)
				{
					playerboard[0][2] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[0][2] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '4':
			if (playerboard[1][0] == '4') {
				if (g == 1) {
					playerboard[1][0] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[1][0] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '5':
			if (playerboard[1][1] == '5') {
				if (g == 1) {
					playerboard[1][1] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[1][1] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '6':
			if (playerboard[1][2] == '6') {
				if (g == 1) {
					playerboard[1][2] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[1][2] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '7':
			if (playerboard[2][0] == '7') {
				if (g == 1) {
					playerboard[2][0] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[2][0] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '8':
			if (playerboard[2][1] == '8') {
				if (g == 1) {
					playerboard[2][1] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[2][1] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		case '9':
			if (playerboard[2][2] == '9') {
				if (g == 1) {
					playerboard[2][2] = player1;
					inputconfirmed = 0;
				}
				else {
					playerboard[2][2] = player2;
					inputconfirmed = 0;
				}

			}
			else {
				std::cout << "That input has already been used, please try again. ";
			}
			break;
		default:
			break;
		}
		clearcin();
	}
}

bool winConfirm() {					//checks if game is won. One if statement per win condition,makes it easy to adjust win conditions and make custom rules/win conditions.
	if ((playerboard[0][0] == 'X' && playerboard[0][1] == 'X' && playerboard[0][2] == 'X') || (playerboard[0][0] == 'O' && playerboard[0][1] == 'O' && playerboard[0][2] == 'O'))			//Row 1
	{
		return true;
	}
	else if ((playerboard[1][0] == 'X' && playerboard[1][1] == 'X' && playerboard[1][2] == 'X') || (playerboard[1][0] == 'O' && playerboard[1][1] == 'O' && playerboard[1][2] == 'O'))		//Row 2
	{
		return true;
	}
	else if ((playerboard[2][0] == 'X' && playerboard[2][1] == 'X' && playerboard[2][2] == 'X') || (playerboard[2][0] == 'O' && playerboard[2][1] == 'O' && playerboard[2][2] == 'O'))		//Row 3
	{
		return true;
	}
	else if ((playerboard[0][0] == 'X' && playerboard[1][0] == 'X' && playerboard[2][0] == 'X') || (playerboard[0][0] == 'O' && playerboard[1][0] == 'O' && playerboard[2][0] == 'O'))		//Column 1
	{
		return true;
	}
	else if ((playerboard[0][1] == 'X' && playerboard[1][1] == 'X' && playerboard[2][1] == 'X') || (playerboard[0][1] == 'O' && playerboard[1][1] == 'O' && playerboard[2][1] == 'O'))		//Column 2	
	{
		return true;
	}
	else if ((playerboard[0][2] == 'X' && playerboard[1][2] == 'X' && playerboard[2][2] == 'X') || (playerboard[0][2] == 'O' && playerboard[1][2] == 'O' && playerboard[2][2] == 'O'))		//Column 3
	{
		return true;
	}
	else if ((playerboard[0][0] == 'X' && playerboard[1][1] == 'X' && playerboard[2][2] == 'X') || (playerboard[0][0] == 'O' && playerboard[1][1] == 'O' && playerboard[2][2] == 'O'))		//Diagonal from 1
	{
		return true;
	}
	else if ((playerboard[2][0] == 'X' && playerboard[1][1] == 'X' && playerboard[0][2] == 'X') || (playerboard[2][0] == 'O' && playerboard[1][1] == 'O' && playerboard[0][2] == 'O'))		//Diagonal from 7
	{
		return true;
	}
	else {
		return false;
	}
}

void clearcin() {							//Function used to flush cin buffer. 
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}

void gameBoardReset() {						//Sets the game board back to its original state.
	playerboard[0][0] = '1';
	playerboard[0][1] = '2';
	playerboard[0][2] = '3';
	playerboard[1][0] = '4';
	playerboard[1][1] = '5';
	playerboard[1][2] = '6';
	playerboard[2][0] = '7';
	playerboard[2][1] = '8';
	playerboard[2][2] = '9';
}