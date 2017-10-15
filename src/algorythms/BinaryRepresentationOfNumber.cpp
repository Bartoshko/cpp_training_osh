// calculate binnary gap of given number
#include <iostream>

int solution(int N);

int main()
{
	int num1;
	int solved;
	std::cout << "set the value to be checked" << std::endl;
	std::cin >> num1;
	solved = solution(num1);
	std::cout << solved << std::endl;
}

int solution(int N)
{
	for (int i = (sizeof(N) * 8); i >= 0; i--)
	{
  	if(N >> i & 1)
  	{
  		std::cout << 1;
  	}
  	else
  	{
  		std::cout << 0;
  	}
	}
	return 0; 
}