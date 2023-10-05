#pragma once
#include "CPlayer.h"

enum class choice { rock, paper, scissors };

class CPlayer_User : public CPlayer
{
public:
	choice GetChoice();
	void SetChoice(choice);
private:
	choice userChoice;
};