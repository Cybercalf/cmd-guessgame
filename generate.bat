cd ./build
cmake -G "MinGW Makefiles" ..
make
cd ../bin
chcp 65001
main.exe
