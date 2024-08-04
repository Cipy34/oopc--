cmake_minimum_required(VERSION 3.24)
project(Drumuri)

set(CMAKE_CXX_STANDARD 17)

add_executable(Drumuri main.cpp Drum.h DrumNational.h DrumNational.cpp DrumEuropean.h DrumEuropean.cpp Autostrada.cpp Autostrada.h Contract.h Contract.cpp Menu.cpp)
