#pragma once

#include "ofMain.h"

class NumberGenerator : public ofThread {
public:

	void threadedFunction() {
		while (isThreadRunning()) {
			lock();
			numbers.push_back(ofRandom(0, 1000));
			unlock();
			ofSleepMillis(1000);
		}
	}

	vector<int> numbers;
};
