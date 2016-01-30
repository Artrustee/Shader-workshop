#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mandelbrot.load("mandelbrot");
    irrMax = 30;
}

//--------------------------------------------------------------
void ofApp::update(){
    mandelbrot.load("mandelbrot");
    
    irr += 0.025;
    if (irr > irrMax) {
        irr = irrMax;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetWindowTitle(ofToString(ofGetFrameRate()) + "fps");
    mandelbrot.begin();

    mandelbrot.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    mandelbrot.setUniform1i("irr", int(irr));
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    mandelbrot.end();

    cout << "irr" << irr << endl;
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
