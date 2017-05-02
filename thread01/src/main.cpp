#include "ofMain.h"
#include "ofApp.h"

int main() {
    ofGLFWWindowSettings settings;
    settings.width = 600;
    settings.height = 340;
    settings.title = " ";
    ofCreateWindow(settings);

    ofRunApp(new ofApp());

}
