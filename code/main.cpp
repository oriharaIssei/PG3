#include <cstdio>

#include <algorithm>

const float firstRecursiveSalary = 100.0f;
const float salary = 1072.0f;

float RecursiveSalary(int workHours,float salary){
	workHours -= 1;
	if(workHours <= 0){
		return 0;
	}
	return salary + (salary + RecursiveSalary(workHours,(salary * 2.0f) - 50.0f));
}
float NormalSalary(int workHours,float salary){
	return salary * static_cast<float>(workHours);
}

int main(){
	int workTime = 1;
	float recursiveSalary = RecursiveSalary(workTime,firstRecursiveSalary);
	float normalSalary = NormalSalary(workTime,salary);

	while(recursiveSalary < normalSalary){
		++workTime;
		recursiveSalary = RecursiveSalary(workTime,firstRecursiveSalary);
		normalSalary = NormalSalary(workTime,salary);
		printf("%d Hours \n",workTime);
		printf("normalSalary = %f\n",normalSalary);
		printf("recursiveSalary = %f\n",recursiveSalary);
		printf("--------------------------------------------------\n");
	}

	printf("%d Hours, %f Salary",workTime,recursiveSalary);
	return 0;
}