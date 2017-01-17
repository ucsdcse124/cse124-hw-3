#include <iostream>
#include <unistd.h>
#include "NoisySleeper.h"

using namespace std;

unsigned int NoisySleeper::totalSleepTime = 0;

NoisySleeper::NoisySleeper(string _name, unsigned int _sleepTimeInSeconds)
	: name(_name), sleepTimeInSeconds(_sleepTimeInSeconds) { }

NoisySleeper::~NoisySleeper() { }

void NoisySleeper::bedTime() const
{
	cout << name << ": Yawn... time for bed!" << endl;
	cout << name << ": ZZzzzzzZzZzZZzZzzzz..." << endl;

	unsigned int sleepRemaining = sleepTimeInSeconds; 
	while (sleepRemaining > 0) {
		sleepRemaining = sleep(sleepRemaining);
	}

	cout << name << ": <wakes up>" << endl;
	totalSleepTime += sleepTimeInSeconds;
}
