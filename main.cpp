#include <iostream>
#include <thread>
#include "Decoder/Decoder.h"
#include <cstdint>

#define RESOLUTION_WIDTH 	640
#define RESOLUTION_HIGH 	480
#define DATA_BUFFER_SIZE	(RESOLUTION_WIDTH*RESOLUTION_HIGH*2)

void runDecoder() { 
    Decoder s_decoder;
    s_decoder.init();
    s_decoder.loop();
}


int main()
{
	std::thread decoderThread(runDecoder);
	decoderThread.join();

	while(1);
    return 0;
}