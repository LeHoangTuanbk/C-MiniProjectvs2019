#include "GameProgram.h"

void GameProgram::printMenu()
{
	string name;
	cout << "---------------------------------------------------" << endl;
	cout << "*******************BATTLESHIP GAME*****************" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << "1. Start the game" << endl;
	cout << "2. See high score" << endl;
	cout << "3. Rules of game" << endl;

}

void GameProgram::doTask(const int& choice)
{
	switch (choice)
	{
		case 1: startGame(); break;
		case 2: seeHighScore(); break;
		case 3: rulesOfGame(); break;
		default:
			break;
	}

}

void GameProgram::startGame()
{
	cout << "Not implement yet";
}

void GameProgram::seeHighScore()
{
	cout << "Not implement yet";
}

void GameProgram::rulesOfGame()
{
	cout << "Not implement yet";
}

GameProgram::~GameProgram()
{
	//delete object
}

