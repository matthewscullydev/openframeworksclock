#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// initialization
	//
	ofSetBackgroundColor(ofColor::black);
	
}

//--------------------------------------------------------------
void ofApp::update() {
	
		
		if (counter >= 1000)
		{	
			
			rad += ofDegToRad(360/60);

			x = circleRad * cos(rad);
			y = circleRad * sin(rad);
			
			seccounter++;
			
			ofResetElapsedTimeCounter();
		}


}

//--------------------------------------------------------------
void ofApp::draw(){
	//  r(t) = o + d*t

	counter = ofGetElapsedTimeMillis();
	glm::vec3 o = origPoint;

	ofSetColor(ofColor::purple);
	ofNoFill();
	ofDrawCircle(1024/2,768/2,circleRad);
	
	ofSetColor(ofColor::lightBlue);
	ofDrawBitmapString("millisecs passed: " + ofToString(counter), 10, 10);
	ofDrawBitmapString("Seconds passed: " + ofToString(seccounter-1), 10, 20);
	ofDrawBitmapString("X:" + ofToString(x), 10, 30);
	ofDrawBitmapString("Y:" + ofToString(y), 10, 40);
	ofDrawBitmapString("rad" + ofToString(rad), 10, 50);
	glm::vec3 z = glm::vec3(x, y, 0);

	ofDrawLine(o, o + z );
	






}


void ofApp::keyPressed(int key) {
	switch (key) {
	case 'C':
	case 'c':
		break;
	case 'F':
	case 'f':
		ofToggleFullscreen();
		break;
	case 'H':
	case 'h':
		break;
	case 'r':
		break;
	case 's':
		break;
	case 'u':
		break;
	case ' ':
		
		break;
	case OF_KEY_ALT:
		break;
	case OF_KEY_CONTROL:
		break;
	case OF_KEY_SHIFT:
		break;
	case OF_KEY_DEL:
		break;
	}
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	switch (key) {
	case OF_KEY_LEFT:
	case OF_KEY_RIGHT:
	case OF_KEY_UP:
	case OF_KEY_DOWN:
		break;
	case OF_KEY_ALT:
		break;
	case OF_KEY_CONTROL:
		break;
	case OF_KEY_SHIFT:
		break;
	}
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	glm::vec3 v = glm::vec3(x, y, 1);
	//printf("x: %d  y: %d\n", x, y);

	cout << v << endl;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	glm::vec3 v = glm::vec3(x, y, 1);
	//printf("x: %d  y: %d\n", x, y);

	cout << v << endl;
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
