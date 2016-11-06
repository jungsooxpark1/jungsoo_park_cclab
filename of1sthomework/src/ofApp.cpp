#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    counter = 0;
    ofSetCircleResolution(50);
    ofBackground(255,255,255);
    bSmooth = false;
//    ofSetWindowTitle("WHERE ARE YOU???");
    
    ofSetFrameRate(20); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.

    
}

//--------------------------------------------------------------
void ofApp::update(){

    counter = counter + 0.033f;
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetHexColor(0x000000);
    for (int i = 0; i < 9; i++){
        ofDrawRectangle(50, 50 + (i*70), 630, 3*(ofGetMouseY()/30));
    }
    
    ofSetHexColor(0xFFFFFF);
    for (int i = 0; i < 10; i++){
        ofDrawRectangle(50 + (i*70), 50, 3*(ofGetMouseX()/30), 700);
    }
    
    
    float randomColor = ofRandom(0, 255);
    ofSetColor(ofRandom( 0, 255 ), ofRandom( 0, 255 ), ofRandom( 0, 255 ));
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 10);

    
    ofSetLineWidth(10.0);  // Line widths apply to polylines
    ofSetColor(255,0,0);
    
    if(nPts >1) {
        for(int i =0; i < nPts -1; i++) {
            ofDrawLine(pts[i].x, pts[i].y, pts[i+1].x, pts[i+1].y);
        }
    }
    
//    for (int i = 0; i < ofGetScreenWidth(); i++){
//        ofDrawCircle(i + ofGetScreenWidth()+1, i+ ofGetScreenHeight(), 80);
//        ofSetColor(200,0,120);
//        
//    }
    
    
//    ofDrawBitmapString("hello! I'm", 340,200);
    ofDrawBitmapString("hello! I'm", 320, 200);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'a'){
        ofDrawBitmapString("FUTURE WINDOW", 110, 110);
    } else if (key == ' '){
        ; // do something else
    }
    
    }
//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
 
    

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    if(nPts < MAX_PTS) {
        pts[nPts].x = x;
        pts[nPts].y = y;
        nPts++;
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

//    nPts = 0;
    

    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

 
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

    ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 50, 50);
    ofSetColor(ofRandom( 0, 255 ), ofRandom( 0, 255 ), ofRandom( 0, 255 ));
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
