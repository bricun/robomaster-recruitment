#!/bin/bash
echo "=== Testing RoboMaster Hello World Program ==="

# 检查是否已编译，如果没有则编译
if [ ! -f "task2_tools/hello_robomaster" ]; then
    echo "Program not compiled. Building..."
    bash build.sh
fi

# 运行程序
echo "Running program..."
./task2_tools/hello_robomaster

echo "=== Test Completed ==="
