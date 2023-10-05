#include "CPlayer.h"

int CPlayer::GetScore()
{
	return score;
}

int CPlayer::IncreaseScore(int increaseAmount)
{
	score = score + increaseAmount;
	return score;
}

std::string CPlayer::GetName()
{
	return name;
}

void CPlayer::setName(std::string newName)
{
	name = newName;
}

void CPlayer::resetScore()
{
	score = 0;
}
