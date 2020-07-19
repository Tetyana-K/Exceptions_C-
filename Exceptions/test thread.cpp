

// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
using namespace std;
void foo()
{
	cout << "foo\n";
}

void bar(int x)
{
	for (int i = 0; i < x; ++i)
		cout << i << " ";
	cout << endl;
}

int main()
{
	std::thread first(foo);     // spawn new thread that calls foo()
	std::thread second(bar, 4);  // spawn new thread that calls bar(0)

	std::cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "foo and bar completed.\n";

	return 0;
}