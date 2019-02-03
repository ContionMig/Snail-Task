#include <cstdio>
#include <algorithm>
#include <assert.h>
#include <vector>
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

long long int HeightWell = 0;
long long int Pharses = 0;
vector<long long int>PharseAction;
string PharseString;

vector<string> split(const string& str, const string& delim)
{
	vector<string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == string::npos) pos = str.length();
		string token = str.substr(prev, pos - prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());
	return tokens;
}

bool Answer = false;

int main(void)
{

	scanf("%lld %lld", &HeightWell, &Pharses);
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, PharseString);

	clock_t begin = clock();

	if (Pharses > 1)
	{
		vector<string> Temp = split(PharseString, " ");
		for (long long int i = 0; i < Pharses; i++)
		{
			PharseAction.push_back(stoll(Temp[i]));
		}
	}
	else
	{
		PharseAction.push_back(stoll(PharseString));
	}

	long long int NetGain = 0;
	long long int DaysTaken = 0;

	long double TempVar;

	while (!Answer)
	{
		for (long long int i = 0; i < Pharses; i++)
		{
			NetGain = NetGain + PharseAction[i];
		}

		printf("\nNetGain: %lld\n", NetGain);
		if (NetGain > 0)
		{
			long long int IntChecker = 0;
			TempVar = (long double)HeightWell / (long double)NetGain;
			IntChecker = TempVar;

			printf("HeightWell / NetGain: %.5f\n", TempVar);

			if (TempVar != floor(TempVar))
			{
				printf("TempVar is a Decimal\n", NetGain);
				DaysTaken = floor(TempVar);
			}
			else
			{
				printf("TempVar is Not A Decimal\n", NetGain);
				DaysTaken = floor(TempVar) - 1;
			}

			printf("Days Taken: %lld\n", DaysTaken);

			long long int TempVar = 0;

			TempVar = NetGain * (DaysTaken);

			printf("TempVar: %lld\n", TempVar);
			for (long long int i = 0; i < Pharses; i++)
			{
				TempVar = TempVar + PharseAction[i];
				printf("TempVar: %lld\n", TempVar);

				if (TempVar >= (HeightWell - 1))
				{
					printf("\nAnswer: %lld %lld\n", DaysTaken, i);
					Answer = true;
					break;
				}
			}
			if (!Answer)
			{
				Answer = true;
				printf("-1 -1");
			}
			break;
		}
		else
		{
			Answer = true;
			printf("-1 -1");
		}
	}

	clock_t end = clock();
	printf("\nTime Taken: %.50f\n\n", (long double)(end - begin) / CLOCKS_PER_SEC);
	return 0;
}
