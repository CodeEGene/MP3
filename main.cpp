#include<iostream>

using namespace std;

bool isLegalMove(char board[], int location);
int getPlayerInput(string playerName);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[]);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);
string getPlayersName();

const int BOARD_SIZE = 55;
const int LOCATION_1 = 45;
const int LOCATION_2 = 49;
const int LOCATION_3 = 53;
const int LOCATION_4 = 23;
const int LOCATION_5 = 27;
const int LOCATION_6 = 31;
const int LOCATION_7 = 1;
const int LOCATION_8 = 5;
const int LOCATION_9 = 9;


int main() {

	char board[BOARD_SIZE] = { ' ', '7',' ', '|', ' ', '8', ' ', '|', ' ', '9', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '4',' ', '|', ' ', '5', ' ', '|', ' ', '6', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '1',' ', '|', ' ', '2', ' ', '|', ' ', '3', ' ' };
	bool firstPlayersTurn = true;
	bool gameNotOver = true;
	string firstPlayer;
	string secondPlayer;
	string currentPlayer;
	char currentMark = 'X';



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

		if (hasThreeInRow(board)) {
			break;
		}

		if (currentPlayer == secondPlayer) {
			currentPlayer = firstPlayer;
			currentMark = 'X';
		}
		else {
			currentPlayer = secondPlayer;
			currentMark = 'O';
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
	if (board[location] != 'O' && board[location] != 'X') {
		return true;
	}
	return false;
}

void placeMarkOnBoard(char board[], char playerMark, int location) {

	while (true) {
		switch (location) {
		case 1:
			if (isLegalMove(board, location)) {
				board[LOCATION_1] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 2:
			if (isLegalMove(board, location)) {
				board[LOCATION_2] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 3:
			if (isLegalMove(board, location)) {
				board[LOCATION_3] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 4:
			if (isLegalMove(board, location)) {
				board[LOCATION_4] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 5:
			if (isLegalMove(board, location)) {
				board[LOCATION_5] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 6:
			if (isLegalMove(board, location)) {
				board[LOCATION_6] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 7:
			if (isLegalMove(board, location)) {
				board[LOCATION_7] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 8:
			if (isLegalMove(board, location)) {
				board[LOCATION_8] = playerMark;
				return;
			}
			else {
				cout << "Nice try, that square is already taken. Please choose a different square. " << endl;
				throw invalid_argument("");
			}

		case 9:
			if (isLegalMove(board, location)) {
				board[LOCATION_9] = playerMark;
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
	char clearedBoard[BOARD_SIZE] = {' ', '7',' ', '|', ' ', '8', ' ', '|', ' ', '9', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '4',' ', '|', ' ', '5', ' ', '|', ' ', '6', ' ', '-', '-','-', '+', '-', '-', '-', '+', '-', '-', '-' ,  ' ', '1',' ', '|', ' ', '2', ' ', '|', ' ', '3', ' '};
	for (int i = 0; i < BOARD_SIZE; i++) {
		board[i] = clearedBoard[i];
	}
}
bool hasThreeInRow(char board[]) {

	if (LOCATION_1 == LOCATION_2 && LOCATION_2 == LOCATION_3) {
		return true;
	}
	else if (LOCATION_4 == LOCATION_5 && LOCATION_5 == LOCATION_6) {
		return true;
	}
	else if (LOCATION_7 == LOCATION_8 && LOCATION_8 == LOCATION_9) {
		return true;
	}
	else if (LOCATION_1 == LOCATION_4 && LOCATION_4 == LOCATION_7) {
		return true;
	}
	else if (LOCATION_2 == LOCATION_5 && LOCATION_5 == LOCATION_8) {
		return true;
	}
	else if (LOCATION_3 == LOCATION_6 && LOCATION_6 == LOCATION_9) {
		return true;
	}
	else if (LOCATION_1 == LOCATION_5 && LOCATION_5 == LOCATION_9) {
		return true;
	}
	else if (LOCATION_7 == LOCATION_5 && LOCATION_5 == LOCATION_3) {
		return true;
	}
	return false;
}
void displayBoard(char board[]) {
	for (int i = 0; i < BOARD_SIZE; i++) {
		if (i % 11 == 0) {
			cout << endl;
		}
		cout << board[i];
	}
	cout<<endl;
}
void displayGameStats(int ties, int player1Score, int player2Score) {

}