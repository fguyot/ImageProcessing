#include <iostream>
#include <thread>
#include "Decoder/Decoder.h"


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