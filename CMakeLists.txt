cmake_minimum_required(VERSION 3.29)
project(Literature)

set(CMAKE_CXX_STANDARD 20)

add_executable(Literature main.cpp
        book.h
        graphicNovel.h
        novel.h
        book.cpp
        novel.cpp
        comic.h
        comic.cpp
        graphicNovel.cpp)
