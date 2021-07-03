#include <iostream>
#include "scoped_timer.h"
#include "linear_search.cpp"
#include "allocation_tracker.h"

auto linear_search(const std::vector<int>& a, int key);

int main()
{
	auto a = std::vector<int>{ 1, 2, 3, 4, 5, 6, 7, 8 };
	printMemoryUsage();
	auto found = linear_search(a, 10);
	printMemoryUsage();
	std::cout << found;
}