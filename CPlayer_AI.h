#pragma once
#include "CPlayer.h"

enum class choice { rock, paper, scissors };

class CPlayer_AI : public CPlayer
{
private:
	choice randChoice = choice::rock;
public:
	CPlayer_AI(int _startingScore, std::string _playerName) : CPlayer(_startingScore, _playerName) {}
	choice GetChoice();
	void SetChoice();

};