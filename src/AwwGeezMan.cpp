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
#include "iostream"
#include "Morty.hpp"
using namespace std;
using namespace interdimensional;


int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	string dimension;
	int start = atoi(av[1]);
	int stop = atoi(av[2]);
	int step = 1;
	if (ac == 4) {
		dimension = av[3];
	}
	else if (ac == 5) {
		step = atoi(av[3]);
		dimension = av[4];
	}
	

	if (dimension == "C137") {
		if (ac == 4) {
			C137::Morty(start, stop);
		}
		else if (ac == 5) {
			C137::Morty(start, stop, step);
		}
	}
	else if (dimension == "Z286") {
		if (ac == 4) {
			Z286::Morty(start, stop);
		}
		else if (ac == 5) {
			Z286::Morty(start, stop, step);
		}
	}
	else {
		cout << "ERROR: Unknown dimension!!" << endl;
	}


	return 0;
}