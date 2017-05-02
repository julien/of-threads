#pragma once

#include "ofMain.h"
#include "numberGenerator.h"

class ofApp : public ofBaseApp {

public:

	NumberGenerator numberGenerator;

    void setup();
    void update();

};
