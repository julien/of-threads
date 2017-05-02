#include "ofApp.h"

void ofApp::setup(){
    ofSetBackgroundColor(ofColor::black);
    loading = false;
}

void ofApp::update(){
    if (imgLoader.loaded) {
        std::cout << "Image loaded" << std::endl;
        imgLoader.image.setUseTexture(true);
        imgLoader.image.update();
        imgLoader.loaded = false;
    }
}

void ofApp::draw(){
    if (imgLoader.image.isAllocated()) {
        imgLoader.image.draw(0, 0);
    } else {
        ofDrawBitmapString("Press any key to load an image", 5, 10);
    }
}

void ofApp::keyPressed(int key){
    if (!loading) {
        imgLoader.setup("mini.jpg");
        imgLoader.startThread();
    }
}
