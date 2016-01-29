#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    shaderUniform.load("uniform");
    
//    Radius = 20;
}

//--------------------------------------------------------------
void ofApp::update(){
    shaderUniform.load("uniform");
    ofPoint mouse;
    mouse.set(mouseX, mouseY);
    ofPoint cen;
    cen.set(ofGetWidth()/2,ofGetHeight()/2);
    Radius = mouse.distance(cen);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    shaderUniform.begin();
//    autoShader.setUniform1f("time", ofGetElapsedTimef());
    shaderUniform.setUniform2f("mousePos", mouseX, mouseY);
    ofDrawCircle(ofGetWidth()/2 , ofGetHeight()/2, Radius);
    
    shaderUniform.end();
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
