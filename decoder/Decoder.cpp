#include "Decoder.h"
#include <iostream>
using namespace std;


Decoder::Decoder() { 
	//memset(m_localDataBuffer, 0, DATA_BUFFER_SIZE);
}

void Decoder::init() {
	cout << "init Decoder\n";
}

void Decoder::loop() {
	
	uint8_t * fake;
	cout << "image1"<<endl;
	dataToImage(false, fake);
}


void Decoder::copyLocalBuffer(uint64_t *buffer, uint32_t len) {
	//Should LOCK 
	//memcpy(m_localDataBuffer, buffer, len);
	//Should UNLOCK
}

void Decoder::dataToImage(bool sensorID, uint8_t * image) {

	uint8_t sizeH = 480;
	uint8_t sizeW = 640;
	uint8_t pixelIndex = 0;

	uint8_t ImageSensor0[sizeH][sizeW];
	uint8_t ImageSensor1[sizeH][sizeW];

	for (uint8_t i=0; i<sizeH*sizeW*2; i++) {
		uint16_t pixelHeight = pixelIndex%sizeH; 
		uint16_t pixelWidth = pixelIndex/sizeH;


		// Sort pixel from Camera0 or Camera1
		if (i%2) {
			ImageSensor1[pixelHeight][pixelWidth] = pixelIndex;
		}
		else {
			ImageSensor0[pixelHeight][pixelWidth] = pixelIndex;
		}

		// Increase the pixel index when both image sensor pixel are updated. 
		if (i%2){
			pixelIndex++;
		}
	}
}