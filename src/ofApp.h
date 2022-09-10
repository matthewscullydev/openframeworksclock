#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		float x = circleRad * cos(rad);
		float y = circleRad * sin(rad);
		float seccounter = 0;

		float circleRad = 360;
	
		float rad = ofDegToRad(270 - 6);
		float counter;
		glm::vec3 origPoint = glm::vec3(1024/2, 768/2, 0);
	
		
};
