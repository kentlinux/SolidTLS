#!/bin/sh

cmake -E remove_directory cmake-build
cmake -E make_directory cmake-build
cmake -E chdir cmake-build cmake ..
