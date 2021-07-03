#pragma once
#include <memory>
#include <vector>
#include <iostream>


inline static size_t s_totalAllocation;
void* operator new(size_t size)
{
	s_totalAllocation += size;
	return malloc(size);
}

void operator delete(void* memory, size_t size)
{
	s_totalAllocation -= size;

	free(memory);
}

inline static void printMemoryUsage()
{
	std::cout << "Memory: " << s_totalAllocation << " bytes\n";
}
