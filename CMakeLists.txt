cmake_minimum_required(VERSION 3.22)
project(Mini_Waslny)

set(CMAKE_CXX_STANDARD 14)

include_directories("Mini Waslny")

add_executable(Mini_Waslny
        "Mini Waslny/Dijkstra.cpp"
        "Mini Waslny/Dijkstra.h"
        "Mini Waslny/Graph.cpp"
        "Mini Waslny/Graph.h"
        "Mini Waslny/Source.cpp"
        "Mini Waslny/Vertex.cpp"
        "Mini Waslny/Vertex.h")
