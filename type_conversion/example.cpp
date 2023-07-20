//helloworld.cpp123
#include <cstdlib>
#include <iostream>
#include <string>
 #include <unordered_map>
#include <vector>
#include <fstream>
#include "unistd.h"
#include <mutex>
#include <string>
#include <thread>

#include <cstdio>
#include <cstring>

int main()
{
    /*******1、float->byte***********/
    std::cout << "__________float->byte__________" << std::endl;
    float test = 3.14;
    unsigned char buff[sizeof(float)];
    memcpy(buff,&test,sizeof(float));

for(int i=0;i<4;i++){
std::cout << std::hex << int(buff[i]) << std::endl;
}

    /*******2、byte->float***********/
    std::cout << "__________byte->float__________" << std::endl;
    float test2;
    std::cout << &test2 << std::endl;
    unsigned char buff2[sizeof(float)];
    buff2[0] = 0x46;
    buff2[1] = 0xe6;
    buff2[2] = 0x84;
    buff2[3] = 0x40;

    memcpy(&test2,buff2,sizeof(float));
    
    std::cout << test2 << std::endl;
    /*******3、float->int***********/
    std::cout << "__________float->int__________" << std::endl;
    float test3 = 1.1;
    int buff3 = int(test3);   //这种转换是类型的转换，和字节无关
    std::cout << buff3 << std::endl;

	return 0;
}
