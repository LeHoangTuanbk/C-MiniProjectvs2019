#include "MenuProgram.h"

class GameProgram : public MenuProgram
{
private:
	void startGame();
	void seeHighScore();
	void rulesOfGame();
protected:
	void printMenu();
	void doTask(const int& choice);
public:
	~GameProgram();

};
