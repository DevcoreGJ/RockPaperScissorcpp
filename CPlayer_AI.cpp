#include "CPlayer_AI.h"

choice CPlayer_AI::GetChoice()
{
	return randChoice;
}

void CPlayer_AI::SetChoice()
{
	randChoice = choice(rand() % 3);
}
