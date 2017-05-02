#include "ofMain.h"
#include "ofApp.h"

int main() {
    ofGLFWWindowSettings settings;
    settings.width = 512;
    settings.height = 512;
    settings.title = " ";
    ofCreateWindow(settings);

    ofRunApp(new ofApp());

}
