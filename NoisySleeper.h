#ifndef NOISYSLEEPER_H
#define NOISYSLEEPER_H

#include <stdint.h>

using namespace std;

class NoisySleeper {
public:
	NoisySleeper(string name, unsigned int sleepTimeInSeconds);
	~NoisySleeper();

	void bedTime() const;

	static unsigned int totalSleepTime;

private:
	const string name;
	unsigned int sleepTimeInSeconds;
};

#endif // NOISYSLEEPER_H
