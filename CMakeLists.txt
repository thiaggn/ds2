cmake_minimum_required(VERSION 3.28)
project(ds2 C)

set(CMAKE_C_STANDARD 11)


add_executable(ds2 main.c
		utils/utils.h
		utils/utils.c
		sorting/insertion.c
		sorting/sorting.h
		sorting/selection.c
		sorting/bubble.c
		sorting/merge.c)