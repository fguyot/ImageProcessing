#ifndef DECODER_H
#define DECODER_H

#include <cstdint>


#define RESOLUTION_WIDTH 	640
#define RESOLUTION_HIGH 	480
#define DATA_BUFFER_SIZE	(RESOLUTION_WIDTH*RESOLUTION_HIGH*2)

class Decoder 
{
public : 

	Decoder();
	void init();
	void loop();

	/** Create a local copy of the data to process. 
	 * It will free the ressource and give it back for data acquisistion
	 * @arg buffer : data buffer that point to the ring buffer data
	 * @arg len : length of the buffer
	 */
	void copyLocalBuffer(uint64_t *buffer, uint32_t len);

private:
	/** Convert m_localDataBuffer into Image
	 * @arg sensorID :  choose the image. false for Sensor0, true for Sensor1
	 * @arg image : returned value of the image. Should be an array[width][high]
	 */
	void dataToImage(bool sensorID, uint8_t * image);


	//uint8_t m_localDataBuffer[DATA_BUFFER_SIZE];
};

#endif //DECODER_H
