#pragma once
//��Ϸ����
struct GameWindow
{
	int x;
	int y;
};

//С������
struct Ball
{
	int x;
	int y;
	char body;
	void (*xAction)(void *);
	void (*yAction)(void *);
};

//С����
void BallXRight(struct Ball  ball)
{
	ball.x++;
}
void BallXLeft(struct Ball  ball)
{
	ball.x--;
}
void BallYUp(struct Ball  ball)
{
	ball.y++;
}
void BallYDown(struct Ball  ball)
{
	ball.y--;
}
