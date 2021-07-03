#include <vector>
#include "scoped_timer.h"

inline auto linear_search(const std::vector<int>& a, int key)
{
	MEASURE_FUNCTION();
	for (const auto& value : a) {
		if (value == key) {
			return true;
		}
	}
	return false;
}