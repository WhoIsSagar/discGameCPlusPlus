#ifndef GAME_H_
#define GAME_H_
#include <string>
using namespace std;
class Game
{
public:
	void inputData();
	void throwDiscs();
	void calculate(Game);
	Game();
	~Game();
private :
	int radius, x, y;
	double p, q;
};
#endif 