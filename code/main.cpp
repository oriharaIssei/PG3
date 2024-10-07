#include <cstdio>
#include <random>

#include <ctime>
#include <functional>
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <string>

// 乱数生成器を初期化
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> randDice(1,6);



int32_t DiceRoll()
{
	return randDice(gen);
}

void TimedCall(std::function<void()> func,int32_t sec)
{
	time_t current = time(nullptr);
	time_t end = current + sec;

	while(current <= end)
	{
		current = time(nullptr);
	}

	func();
}

void Answer(int32_t input,int32_t randNum)
{
	if(randNum == input)
	{
		std::cout << "正解 !!!" << std::endl;
		return;
	}
	std::cout << "不正解" << std::endl;
};

void MainLoop()
{
	int32_t input,randNum;
	std::cout << "奇数か偶数か． 奇数だと思うならなら 0 ,偶数だと思うなら 1 を入力してください\n" << std::endl;
	std::cin >> input;
	if(input != 0 && input != 1)
	{
		std::cout << " その回答は 存在しません " << std::endl;
		return;
	}

	std::cout << " 正解は ...  \n";
	randNum = DiceRoll() % 2;
	TimedCall([input,randNum]() { Answer(input,randNum); },3);
}

int main()
{
	while(true)
	{
		MainLoop();
	}
	return 0;
}