#pragma once
class Enemy
{
public:

	static int IsAlive;

public:

	Enemy() { IsAlive++; }
	~Enemy() { IsAlive--; }

	void StaDeath();

private:

};
