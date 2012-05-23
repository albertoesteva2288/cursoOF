#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){ 
    width = 320;
    height = 240;
    
    cam.initGrabber(width, height);
    img.allocate(width, height, OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void testApp::update(){
    cam.update();
    
    unsigned char *pixelsIn = cam.getPixels();
    unsigned char *pixelsOut = img.getPixels();
    
    for(int i = 0; i < width*height*3 ; i++){
        pixelsOut[i] = pixelsIn[i];
    }
    
    img.setFromPixels(pixelsOut, width, height, OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void testApp::draw(){

    cam.draw(0, 0);
    img.draw(width, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}