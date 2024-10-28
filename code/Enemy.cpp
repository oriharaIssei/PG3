#include "Enemy.h"

#include <cstdio>

std::string(Enemy::*Enemy::sFuncTable_[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Escape
};

void Enemy::Update(){
	for(size_t i = 0; i < static_cast<size_t>(EnemyUpdates::Count); i++){
		printf("%s",(this->*sFuncTable_[i])().c_str());
	}
}