#include<iostream>

using namespace std;

int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[], char playerMark);
void displayBoard(char board[][11]);
void displayGameStats(int ties, int player1Score, int player2Score);

char theBoard[5][11] = { {' ', '7', ' ', '|', ' ', '8', ' ', '|' , ' ', '9', ' '},
						 {'-', '-', '-', '+', '-', '-', '-', '+' , '-', '-', '-'},
						 {' ', '4', ' ', '|', ' ', '5', ' ', '|' , ' ', '6', ' '},
						 {'-', '-', '-', '+', '-', '-', '-', '+' , '-', '-', '-'},
						 {' ', '1', ' ', '|', ' ', '2', ' ', '|' , ' ', '3', ' '} };


int main() {
	displayBoard(theBoard);
	return 0;
}

int getPlayerInput(string playerName) {

	return 0;
}
bool isLegalMove(char board[], int location) {

	return true;
}
void placeMarkOnBoard(char board[], char playerMark, int location) {


}
void clearBoard(char board[]) {


}
bool hasThreeInRow(char board[], char playerMark) {

	return true;
}
void displayBoard(char board[][11]) {
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 11; i++) {
			cout << board[j][i];
		}
		cout << endl;
	}
}
void displayGameStats(int ties, int player1Score, int player2Score) {

}