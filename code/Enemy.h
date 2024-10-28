#pragma once

#include <string>

enum class EnemyUpdates{
	Approach,
	Shot,
	Escape,
	Count // 使用禁止
};
class Enemy{
public:
	static std::string(Enemy::*sFuncTable_[])();

	void Update();
private:
	std::string Approach(){
		return "Enemy Approach\n";
	}
	std::string Shot(){
		return "Enemy Shot\n";
	}
	std::string Escape(){
		return "Enemy Escape\n";
	}
};