#pragma once
//游戏窗口
struct GameWindow
{
	int x;
	int y;
};

//小球属性
struct Ball
{
	int x;
	int y;
	char body;
	void (*xAction)(void *);
	void (*yAction)(void *);
};

//小球动作
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
