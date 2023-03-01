#include "bits/stdc++.h"
#include <vector>
int main()
{
	std::vector<std::vector<int>> maths = {
		{
			4,4,2,5,3,
			1,3,2,2,1,
			1,5,2,3,4,
			4,2,5,1,5,
			3,7,18,14,6,
			358,25,13,11,4,
		},
		{
			2,2,2,3,3,
			3,3,3,3,3,
			3,3,3,4,4,
			4,4,4,4,4,
			4,3,3,3,3,
			4,4,4,4,4,
		},
		{
			4,4,2,5,3,
			1,3,2,2,1,
			1,5,2,3,4,
			2,2,5,1,2,
			2,7,18,14,6,
			750,25,13,2,-1,
		},
	};

	std::vector<std::vector<int>> kor = {
		{
			1,5,4,3,2,
			3,3,1,5,2,
			2,4,5,3,5,
			3,5,4,4,5,
			1,4,4,5,3,
			3,5,1,3,5,
			5,2,1,2,3,
			3,4,4,4,4,
			5,3,2,2,4,
		},
		{
			2,2,2,2,2,
			3,2,2,3,2,
			2,3,2,2,2,
			2,2,2,3,2,
			2,2,2,3,2,
			2,2,2,3,2,
			2,3,2,2,2,
			2,2,3,2,2,
			3,2,2,2,3,
		},
		{
			1,4,4,3,2,
			3,3,1,3,2,
			1,1,1,1,1,
			3,5,4,5,5,
			1,4,4,5,3,
			3,5,2,3,1,
			1,1,1,1,3,
			3,3,4,4,4,
			1,1,1,1,1
		}
	};

	std::vector<std::vector<int>> eng = {
		{
			4,3,5,4,5,
			3,5,3,4,2,
			2,1,5,3,3,
			4,4,3,1,4,
			3,4,2,2,3,
			5,4,5,4,5,
			2,1,1,2,4,
			2,3,5,3,1,
			3,2,5,5,4,
		},
		{
			2,2,2,2,2,
			3,2,2,2,2,
			2,2,3,2,3,
			2,2,2,2,2,
			2,2,2,2,2,
			2,2,2,3,3,
			2,2,2,3,2,
			2,2,3,3,3,
			3,2,2,2,2,
		},
		{
			4,3,5,4,5,
			3,5,3,4,2,
			2,1,5,3,3,
			4,4,3,1,4,
			3,4,2,2,3,
			5,4,5,4,5,
			2,1,1,2,4,
			2,1,5,3,1,
			3,2,5,5,4,
		}
	};

	auto target = maths;
	
	int score = 0;
	int max_score = 0;
	std::vector<int> wrong;
	#define checks 1
	#if checks == 1
		std::cout << "sizes: ";
		for(int i = 0; i < target.size(); ++i)
			std::cout << target[i].size() << " ";
		std::cout << "\n";
	#endif

	for(int i = 0; i < target[0].size(); ++i)
	{
		if(target[0][i] == target[2][i])
			score += target[1][i];
		else 
		{
			wrong.push_back(i);
		}
		max_score += target[1][i];
	}
	std::cout << score << "/" << max_score << "\n";
	
	std::cout << "NUMBER\tVALUE\tANSWER\tATTEMPT\n";

	for(int i = 0; i < wrong.size(); ++i)
	{
		auto num = wrong[i];
		std::cout << num+1 << "\t" << target[1][num] << "\t" << target[0][num]<< "\t" << target[2][num] << "\n";
	}
}