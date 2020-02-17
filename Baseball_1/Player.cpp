#include <iostream>
#include "Player.h"
#include <iomanip>

using namespace std;


float Player::calcAvg(int hits, int atBats) {

	return (float)hits / (float)atBats;

}

void Player::printPlayer() {

	cout << left << setw(10) << _Name << setw(2) << _HitTotal << setw(2) << _WalkTotal << setw(2) << _OutTotal << setw(5) << setprecision(2) << _BattingAvg << std::endl;

}



void Player::setAtBatTotal(int x) {

	_OutTotal = x;

}

void Player::setHitTotal(int x) {

	_HitTotal = x;

}

void Player::setBattingAvg(float x) {

	_BattingAvg = x;

}

void Player::setWalkTotal(int x) {

	_WalkTotal = x;

}

void Player::setName(string name) {
	_Name = name;
}
