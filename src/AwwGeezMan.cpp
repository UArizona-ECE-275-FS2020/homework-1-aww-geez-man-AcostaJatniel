/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"


int main(int ac, char** av) {
	
	int start;
	int stop;
	int step;
	std::string dimension;
	
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}
	switch (ac)
	{
	case 4:
		start = atoi(av[1]);
		stop = atoi(av[2]);
		step = 1;
		dimension = atoi(av[3]);

	case 5:
		start = atoi(av[1]);
		stop = atoi(av[2]);
		step = atoi(av[3]);
		dimension = atoi(av[4]);

	}

		if(dimension == "C137")
		{
			C137::Morty(start, stop, step);
			std::cout << "Morty C137 says:" << std::endl;
		}

		else if (dimension == "Z286") {
			Z286::Morty(start, stop, step);
			std::cout << "Morty Z286 says:" << std::endl;
		}
		else
		{
			std::cout << "ERROR: Unkwown Dimension!!" << std::endl;

			return -1;
		}


	return 0;
}
