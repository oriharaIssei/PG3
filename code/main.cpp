#include <cstdio>

#include <algorithm>

template <typename T>
T Min(T a,T b)
{
	return std::min(a,b);
};
template <>
char Min(char a,char b)
{
	printf_s("Not of Number.\n");
	return 'n';
}

int main()
{
	printf_s("Min<int> (36,48) = %d\n",Min<int>(36,48));

	printf_s("Min<float> (0.1f,12.0f) = %f\n",Min<float>(0.1f,12.0f));

	printf_s("Min<double> (0.34,3.14) = %f\n",Min<double>(34,3.14));

	printf_s("Min<char> (x,y) = %c\n",Min<char>('x','y'));

	return 0;
}