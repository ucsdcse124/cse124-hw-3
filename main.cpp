#include <iostream>
#include "NoisySleeper.h"

using namespace std;

int
main(int argc, char * argv[])
{
	NoisySleeper s0("Sarah", 6);
	NoisySleeper s1("Ahmed", 2);
	NoisySleeper s2("Fatima", 4);

	s0.bedTime();
	s1.bedTime();
	s2.bedTime();

	cout << "The total sleep time was " <<
	        NoisySleeper::totalSleepTime << "." << endl;

	return 0;
}
