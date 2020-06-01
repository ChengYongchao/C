#pragma once
#include <conio.h>

// ≈–∂œº¸≈Ã ‰»Î  «∑Ò «Esc
int breakFromChoose()
{
	char ch;
	if (_kbhit())
	{
		ch = _getch();
		if (ch == 27)
		{
			1;
		}
	}
	return 0;
}

