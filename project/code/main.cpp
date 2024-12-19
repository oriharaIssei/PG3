#include <cstdio>
#include <stdio.h>
#include <thread>

int main(){
	std::thread thread1([](){printf("Thread 1\n");});
	thread1.join();

	std::thread thread2([](){printf("Thread 2\n"); });
	thread2.join();

	std::thread thread3([](){printf("Thread 3\n"); });
	thread3.join();

	return 0;
}