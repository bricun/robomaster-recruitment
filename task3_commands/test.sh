#!/bin/bash
echo "=== Testing Command Analyzer ==="

if [ ! -f "command_analyzer" ]; then
    echo "Program not compiled. Building..."
    bash build.sh
fi

if [ -f "commands.log" ]; then
    ./command_analyzer commands.log
else
    echo "Error: commands.log not found!"
    exit 1
fi

echo "=== Test Completed ==="
