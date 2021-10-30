#include <iostream>

void Print(int count, char ch)
{
	for(int i =0; i<=count ; ++i)
	{
		std::cout << ch;
	}
	std::cout << std::endl;
}
void EndMessage()
{
	std::cout << "End of message" << std::endl;
}
int main() {
	atexit(EndMessage);
	Print(5, '#');
	void(*pfn)(int, char) = Print;
	(*pfn)(8, '@');
	pfn(5, '+');
	std::cout<< "end of main" << std::endl;
	return 0;
}
