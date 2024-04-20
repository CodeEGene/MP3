#include<iostream>

using namespace std;

int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[], char playerMark);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);
string getPlayersName();

bool firstPlayersTurn = true;
bool gameNotOver = true;
string firstPlayer;
string secondPlayer;
string currentPlayer;
char currentMark = 'O';

char board[55] = { ' ', '7',' ', '|', ' ', '8', ' ', '|', ' ', '9', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '4',' ', '|', ' ', '5', ' ', '|', ' ', '6', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '1',' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ' };



int main() {
	cout << "What is player 1's name: ";
	firstPlayer = getPlayersName();

	cout << "What is player 2's name: ";
	secondPlayer = getPlayersName();
	
	currentPlayer = firstPlayer;

	displayBoard(board);

	while (gameNotOver) {

		while (true) {
			try {
				placeMarkOnBoard(board, currentMark, getPlayerInput(currentPlayer));
			}
			catch (...) {
				continue;
			}
			break;
		}
		if (currentPlayer == secondPlayer) {
			currentPlayer = firstPlayer;
			currentMark = 'O';
		}
		else {
			currentPlayer = secondPlayer;
			currentMark = 'X';
		}

		displayBoard(board);
	}

	return 0;
}



int getPlayerInput(string playerName) {

	int number = 0;
	cout << "What square would you like to place your mark " << playerName << ": ";

	while (true) {
		cin >> number;
		if (number > 9) {
			cout << "Pick a number 1 - 9 for the quivalent square: " << endl;
		}
		else if (number < 0) {
			cout << "Pick a number 1 - 9 for the quivalent square: " << endl;
		}
		else {
			break;
		}
	}

	return number;
}

string getPlayersName() {

	string playersName;
	char answer;

	while (true) {
		cin >> playersName;
		cout << "Your name is " << playersName << "? Would you like to re-enter your name? (y/n): " << endl;
		cin >> answer;
		if (answer == 'n') {
			break;
		}
		cout << "What's your name then? ";
	}

	return playersName;
}

bool isLegalMove(char board[], int location) {

	return true;
}
void placeMarkOnBoard(char board[], char playerMark, int location) {

	int location1 = 45;
	int location2 = 49;
	int location3 = 53;
	int location4 = 23;
	int location5 = 27;
	int location6 = 31;
	int location7 = 1;
	int location8 = 5;
	int location9 = 9;

	while (true) {
		switch (location) {
		case 1:
			if (board[location1] != 'O' && board[location1] != 'X') {
				board[location1] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 2:
			if (board[location2] != 'O' && board[location2] != 'X') {
				board[location2] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 3:
			if (board[location3] != 'O' && board[location3] != 'X') {
				board[location3] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 4:
			if (board[location4] != 'O' && board[location4] != 'X') {
				board[location4] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 5:
			if (board[location5] != 'O' && board[location5] != 'X') {
				board[location5] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 6:
			if (board[location6] != 'O' && board[location6] != 'X') {
				board[location6] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 7:
			if (board[location7] != 'O' && board[location7] != 'X') {
				board[location7] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 8:
			if (board[location8] != 'O' && board[location8] != 'X') {
				board[location8] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 9:
			if (board[location9] != 'O' && board[location9] != 'X') {
				board[location9] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}
		}
	}
}
void clearBoard(char board[]) {


}
bool hasThreeInRow(char board[], char playerMark) {

	return true;
}
void displayBoard(char board[]) {
	for (int i = 0; i < 55; i++) {
		if (i % 11 == 0) {
			cout << endl;
		}
		cout << board[i];
	}
	cout<<endl;
}
void displayGameStats(int ties, int player1Score, int player2Score) {

}