#include "ofApp.h"

void ofApp::setup(){
    ofSetBackgroundColor(ofColor::black);
    loading = false;
}

void ofApp::update(){
    for (unsigned int i = 0; i < imgLoaders.size(); i++) {

        if (imgLoaders[i]->loaded) {

            if (imgs.size() <= i) {
            	imgs.resize(i + 1);
            }

            imgs[i].getPixels() = imgLoaders[i]->image;
            imgs[i].update();

        	imgLoaders[i]->loaded = false;
        }
    }
}

void ofApp::draw(){

    for (unsigned int i = 0; i < imgs.size(); i++) {
		imgs[i].draw(0, 0);
    }

    ofDrawBitmapString("Press any key to load an image", 5, 10);

}

void ofApp::keyPressed(int key){
    // imgLoaders.push_back(std::move(std::unique_ptr<ImageLoader>(new ImageLoader)));
    // imgLoaders.back().load("mini.jpg");

    imgLoaders.push_back(new ImageLoader());
    imgLoaders.back()->load("mini.jpg");
}
