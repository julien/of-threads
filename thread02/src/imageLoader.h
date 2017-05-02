#pragma once

#include "ofMain.h"
#include <string>

class ImageLoader: public ofThread {
public:
	ofImage image;
	bool loaded;
	std::string path;

	ImageLoader() {
		loaded = false;
	}

	void setup(std::string imagePath) {
		image.setUseTexture(false);
		this->path = imagePath;
	}

	void threadedFunction() {
		image.load(path);
		loaded = true;
	}
};
