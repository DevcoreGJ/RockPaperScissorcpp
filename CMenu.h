#pragma once

enum class menuOptions { start, options, exit };

class CMenu
{
private:
	menuOptions menuChoice;

public:
	void SetMenuChoice(menuOptions);
	void RunChoices(menuOptions);
	void RunStart();
	void RunOptions();

};