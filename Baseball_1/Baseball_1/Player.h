#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	int _OutTotal = 0;
	int _WalkTotal = 0;
	int _HitTotal = 0;
	float _BattingAvg = 0.0;
	string _Name;

public:
	Player() {};

	float calcAvg(int, int);
	void printPlayer();

	void setAtBatTotal(int);
	void setHitTotal(int);
	void setBattingAvg(float);
	void setName(string);
	void setWalkTotal(int);
};

