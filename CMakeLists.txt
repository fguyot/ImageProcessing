cmake_minimum_required(VERSION 3.1)

project(ImageProcessing)

add_subdirectory(decoder)
	
add_executable(main main.cpp)

target_link_libraries(	main 
						decode)
