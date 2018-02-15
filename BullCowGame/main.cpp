#include <iostream>
#include <string>

using namespace std;

int main() {
	constexpr int WORD_LENGTH = 9;

	//introduce game
	cout << "Welcom to bull and cow game!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letters isogram I am thinking of?\n";

	//get guess from player
	cout << "what is your guess: ";
	string guess = "";
	cin >> guess;

	//repeat the guess back to them
	cout << "Your guess is: ";
	cout << guess << "\n";
	return 0;
}