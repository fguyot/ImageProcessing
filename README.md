#ImageProcessing

This repository contain an exercise about processing image and ring buffer. 

##Exercice statement : 

On an Ultrascale 4CG from xilinx (two threads version), we acquire the data from the FPGA for two cameras into a rolling buffer with four slots.

- For a matter of efficiency, the data feeds from the sensors are stored in an interleaved manner into each rolling buffer slot (`pixel_1_camera_1`, `pixel_1_camera_2`, `pixel_2_camera_1`, `pixel_2_camera_2`, ..., `pixel_n_camera_1`, `pixel_n_camera_2`).
- Each sensor captures a 640*480 pixels coded on 8 bits
- You have a counter telling you which buffer was filled
- You need to save the data onto the hard drive without slowing down the capture process
- You need to separate the two images (`pixel_1_camera_1`, `pixel_2_camera_1`, ...., `pixel_n_camera_2`, `pixel_1_camera_2`, `pixel_2_camera_2`, ...., `pixel_n_camera_2`)

