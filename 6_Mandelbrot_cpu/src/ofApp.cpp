#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofVec2f org;
	org.set(0,0);
	Mandelbrot.setMode(OF_PRIMITIVE_POINTS);
    
	float w = ofGetWidth();
	float h = ofGetHeight();
	//max irataion
    int tMax = 50;
    //sampling gap
	float screenDiv = 0.01;
	regX = 5.5;
	regY = 5.5;
	scaleX = w / regX;
	scaleY = h / regY;
	for (float x = -1*regX; x <= regX; x += screenDiv) {
		for(float y = -1 * regY; y <= regY; y += screenDiv) {
			msetC.set(x, y);
			cZ = msetC;
			for (int t = 1; t <= tMax; ++t) {
				cZ = ComplexMul(cZ,cZ) + msetC;
			}
			if (cZ.length() < 1.9) {
				cZ *= scaleX;
				cZ *= 1.5;
				cZ.x += w/2;
				cZ.y += h/2;
				msetC *= scaleX;
				msetC *= 1.5;
				msetC.x += w / 2;
				msetC.y += h / 2;
                //comment and uncomment to play with
                //actually cZ is the point which msetC will converge to
				Mandelbrot.addVertex(cZ);
                //comment and uncomment to play with
				Mandelbrot.addVertex(msetC);
			}
		}
	}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
	Mandelbrot.draw();
}

//--------------------------------------------------------------
ofVec2f ofApp::ComplexAdd(ofVec2f cPlx1, ofVec2f cPlx2) {
	ofVec2f add;
	add = cPlx1 + cPlx2;
	return add;
}

//--------------------------------------------------------------
ofVec2f ofApp::ComplexMul(ofVec2f cPlx1, ofVec2f cPlx2) {
	ofVec2f mul;
	float real;
	float img;
	float a = cPlx1.x;
	float b = cPlx1.y;
	float c = cPlx2.x;
	float d = cPlx2.y;
	real = a*c - b*d;
	img = b*c + a*d;
	mul.set(real,img);
	return mul;
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
