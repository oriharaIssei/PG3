#include <cstdio>
#include <algorithm>

#include <stdint.h>

template <typename T>
T Min(T a,T b){
	return (std::min)(a,b);
}

int main(){
	int32_t intA = 1;
	int32_t intB = 56;

	float fA = 0.1212f;
	float fB = -124.0f;

	double dA = 0.221;
	double dB = 1241211.0;

	printf("int\n  A = %d, B = %d, Min = %d\n",
		   intA,intB,Min(intA,intB));

	printf("float\n  A = %f, B = %f, Min = %f\n",
		   fA,fB,Min(fA,fB));

	printf("double\n  A = %lf, B = %lf, Min = %lf\n",
		   dA,dB,Min(dA,dB));
}