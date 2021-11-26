#!/usr/bin/env bash

while sleep 5
do
    cmake --build . --target dojotest && cmake --build . && ctest
done
