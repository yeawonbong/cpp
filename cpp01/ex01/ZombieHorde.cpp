#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zArr = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		zArr[i].setName(name + std::to_string(i + 1));
	}
	return	zArr;
}
