#include <cstdio>
#include <algorithm>

#include <stdint.h>

template <typename Return,typename aT,typename bT>
Return Min(aT a,bT b){
	return static_cast<Return>(std::min(static_cast<Return>(a),static_cast<Return>(b)));
}

int main(){
	int32_t intA = 1;
	int32_t intB = 56;

	float fA = 0.1212f;
	float fB = -124.0f;

	double dA = 0.221;
	double dB = 1241211.0;

	printf("int\n  A = %d, B = %d, Min = %d\n",
		   intA,intB,Min<int32_t>(intA,intB));

	printf("float\n  A = %f, B = %f, Min = %f\n",
		   fA,fB,Min<float>(fA,fB));

	printf("double\n  A = %lf, B = %lf, Min = %lf\n",
		   dA,dB,Min<double>(dA,dB));

	printf("int : float\n  int = %d, float = %f, Min = %f\n",
		   intA,fB,Min<float>(intA,fB));

	printf("float : double\n  float = %f, double = %lf, Min = %lf\n",
		   fA,dB,Min<double>(fA,dB));

	printf("int : double\n  A = %d, B = %lf, Min = %lf\n",
		   intA,dB,Min<double>(intA,dB));
}
