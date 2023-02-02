#pragma once
class Enemy
{
public:

	static int enemyCount;

public:

	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }

	void StaDeath();

private:

};
