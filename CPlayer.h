#pragma once
#include <string>

class CPlayer
{
private:
	int score = 0;
	std::string name;

public:
	CPlayer(int startingScore, std::string playerName)
	{
		score = startingScore;
		name = playerName;
	}
	int GetScore();
	int IncreaseScore(int);
	std::string GetName();
	void setName(std::string);
	void resetScore();
};

