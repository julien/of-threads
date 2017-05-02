#pragma once

#include "ofMain.h"
#include "imageLoader.h"
#include <vector>

class ofApp : public ofBaseApp {

public:
	bool loading;
	ImageLoader imgLoader;

    void setup();
    void update();
    void draw();
    void keyPressed(int key);

};
