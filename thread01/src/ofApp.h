#pragma once

#include "ofMain.h"
#include "imageLoader.h"
#include <vector>

class ofApp : public ofBaseApp {

public:

    bool loading;

	// Better
    // std::vector<std::unique_ptr<ImageLoader>> imgLoaders;
    std::vector<ImageLoader*> imgLoaders;

    std::vector<ofImage> imgs;

    void setup();
    void update();
    void draw();
    void keyPressed(int key);

};
