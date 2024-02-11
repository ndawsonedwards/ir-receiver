#!/bin/bash

# build.sh: QoL script to passthrough arguments to desired makefile 

MAKEFILE_PATH="./STM32Make.make"

# Check if the correct number of arguments is provided
if [ $# -gt 1 ]; then
    echo "Error: Too many arguments."
    echo "Usage: $0 [command]"
    exit 1
fi

args=""

for arg in "$@"; do
    args="${args} ${arg}"
done

make ${args} -f $MAKEFILE_PATH