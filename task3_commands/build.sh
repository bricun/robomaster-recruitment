#!/bin/bash
echo "Building Command Analyzer..."
cd src
g++ -o ../command_analyzer command_analyzer.cpp
echo "Build completed!"
