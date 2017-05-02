#include "ofApp.h"

void ofApp::setup(){
	numberGenerator.startThread();
}

void ofApp::update(){
	numberGenerator.lock();
	while (!numberGenerator.numbers.empty()) {
		std::cout << numberGenerator.numbers.front() << std::endl;
		// numberGenerator.numbers.pop_front();
		numberGenerator.numbers.erase(numberGenerator.numbers.begin());
	}
	numberGenerator.unlock();
}

