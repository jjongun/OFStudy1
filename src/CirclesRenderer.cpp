/*
 * CirclesRenderer.cpp
 *
 *  Created on: 11/07/2012
 *      Author: arturo
 */

#include "CirclesRenderer.h"

CirclesRenderer::CirclesRenderer() {
	// TODO Auto-generated constructor stub

}


void CirclesRenderer::setup(string name) {
	parameters.setName(name);
	parameters.add(size.set("size", 10, 10, 10)); //사이즈는 x10, y10 으로 맥시멈 사이즈 10으로 
	parameters.add(number.set("numberX", 1, 1, 10)); // 맨 처음 생성할 갯수 1개 1개 맥시멈 10개
	parameters.add(number2.set("numberY", 1, 1, 10));
	parameters.add(position.set("position", glm::vec2(ofGetWidth() * .02, ofGetHeight()* .02), glm::vec2(0, 0), glm::vec2(ofGetWidth(), ofGetHeight())));


	//color.set("color", ofColor(30, 0, 0));
	color.set(127); //컬러 지정하기

	parameters.add(color);
	parameters.add(frameNum.set("frameNum", 0));
}

void CirclesRenderer::draw() {
	// this will work only inside CirclesRenderer class
	// since it's a readonly property
	frameNum++;
	ofSetColor(color);
	/*for (int i = 0; i < number; i++) {

		for (int j = 0; j < number; j++)
			//ofDrawCircle(position.get().x-size* ((number-1) *0.5-i) , position.get().y, size);
		{
			//ofDrawCircle(position.get().x - size * ((number - 1) * -2 - i) * 2, position.get().y, size);

			//ofDrawCircle(position.get().x, position.get().y - size * ((number - 1)* -2 - j) * 2, size);
		}
		//ofDrawCircle(position.get().x - size * ((number - 1) * -2 - i) * 2, position.get().y, size);

	}*/

	int space = 2;

	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number2; j++)
		{


			//ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y, size); // x점, y점, 크기
			//ofDrawCircle(position.get().x, position.get().y - size * ((number) * -i), size);

			ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y - size * (number2 * - j), size);
			//ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y + 30, size );


		}
		//ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y - size * ((number) * -i), size);
	}

}

void CirclesRenderer::draw2() {
	// this will work only inside CirclesRenderer class
	// since it's a readonly property
	frameNum2++;
	ofSetColor(color);
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) 
		{
			
			
				//ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y, size);
				//ofDrawCircle(position.get().x, position.get().y - size * ((number) * -i), size);


		}
	//	ofDrawCircle(position.get().x - size * ((number) * -i), position.get().y - size * ((number) * -i), size);
	}
}