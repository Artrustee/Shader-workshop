#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    helloShader.load("shader");
}

//--------------------------------------------------------------
void ofApp::update(){
//    helloShader.load("shader");
    ofSetWindowTitle(ofToString(ofGetFrameRate()) + " fps");
}

//--------------------------------------------------------------
void ofApp::draw(){
    helloShader.begin();
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    helloShader.end();
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
