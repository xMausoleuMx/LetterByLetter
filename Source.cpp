#include <iostream>
#include <string>

using namespace std;

void morph(string first, string second)
{
	int y = (first.size() < second.size()) ? second.size() : first.size();
	for (int i = 0; i < y; i++)
	{
		if (i == first.size())
		{
			first += second[i];
			std::cout << first << endl;
		}
		else if (i >= second.size())
		{
			first.pop_back();
			std::cout << first << endl;
		}
		else if (!(first[i] == second[i]))
		{
			first[i] = second[i];
			std::cout << first << endl;
		}
	}

}

int main()
{
	string initialPhrase, finalPhrase;
	std::cout << "Enter in a two phrases, and watch the computer morph one into the other!\n";
	while (1)
	{
		std::cout << "Enter in the first phrase:\n";
		std::getline(std::cin, initialPhrase);
		if (!initialPhrase.compare("exit"))
			break;
		std::cout << "Enter in the phrase you wish to morph into\n";
		std::getline(std::cin, finalPhrase);
		morph(initialPhrase, finalPhrase);
	}

}