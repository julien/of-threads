#pragma once

#include "ofMain.h"
#include <string>

class ImageLoader: public ofThread {
public:
	ofPixels image;
	bool loaded;
	bool loading;
	std::string path;

	ImageLoader() {
		loading = false;
		loaded = false;
	}

	void load(std::string imagePath) {
		this->path = imagePath;
		loading = true;
		startThread();
	}

	void threadedFunction() {
		ofLoadImage(image, path);
		loaded = true;
	}
};
