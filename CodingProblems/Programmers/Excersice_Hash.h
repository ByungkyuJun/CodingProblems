#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

int Problem_Poketmon(std::vector<int> nums)
{
	std::unordered_set<int> checkingSet;

	for (const int& num : nums)
	{
		if (checkingSet.find(num) != checkingSet.end())
			continue;

		checkingSet.emplace(num);
	}

	return std::min(nums.size() / 2, checkingSet.size());
}

void Execute_Programmers_Hash()
{
	std::vector<int> nums{ 3, 1, 2, 3 };

	std::cout << Problem_Poketmon(nums) << std::endl;
}