#include <iostream>
#include <cmath>
#include <ctime>
#include "Header.h"

Game::Game()
{
	radius = 0;
	x = 0;
	y = 0;

}

void Game::throwDiscs()
{
	x = rand() % 100+1;
	y = rand() % 100+1;
	

}
void Game::calculate(Game a) 
{
	p = sqrt(pow(a.x - x, 2) + pow(a.y - y, 2));
	q = radius + a.radius;
}

void Game::inputData()
{
	Game disc1;
	Game disc2;
	cout << "Please Enter The Radius Of Disc 1:" << endl;
	cin >> disc1.radius;
	cout << "Please Enter The Radius Of Disc 2 " << endl;
	cin >> disc2.radius;
	cout << "Disk 1 is being thrown" << endl;
	disc1.throwDiscs();
	cout << "Disk 2 is Being thrown" << endl;
	disc2.throwDiscs();
	cout << "Calculating ......!!! " << endl;
	disc1.calculate(disc2);
	if (disc1.p > disc1.q)
	{
		cout << "Congrats You Have Won The Match" << endl;

	}
	else if (disc1.p == disc1.q)
	{
		cout << "Two Discs are Touching Each Other" << endl;

	}
	else if (disc1.p < disc1.q)
	{
		cout << "Sorryyy !!! You have lost the Game" << endl;

	}

}
Game::~Game()
{
	//cout << "destructor Have Been Called " << endl;

}
