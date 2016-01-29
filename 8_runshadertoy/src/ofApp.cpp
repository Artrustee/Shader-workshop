//https://www.shadertoy.com/view/XsXXDn
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    shadertoy.load("silexars");
}

//--------------------------------------------------------------
void ofApp::update(){
    shadertoy.load("silexars");
}

//--------------------------------------------------------------
void ofApp::draw(){
    shadertoy.begin();
    shadertoy.setUniform2f("Resolution", ofGetWidth(), ofGetHeight());
    shadertoy.setUniform1f("time", ofGetElapsedTimef());
    ofDrawRectangle(0 ,0 , ofGetWidth(), ofGetHeight());
    shadertoy.end();
    
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
