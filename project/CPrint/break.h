#pragma once
#include <conio.h>

// �жϼ������� �Ƿ���Esc
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

