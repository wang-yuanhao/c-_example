//helloworld.cpp
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
typedef union  
{  
    float fdata;  
    unsigned long ldata;  
}FloatLongType;  

    std::string g_string = "just test";
    std::string g_string2 = "just test";
    std::mutex mutex_value;   //互斥量

    void ThreadFunction1()
    {
        mutex_value.lock();
        std::cout << g_string << std::endl;
        g_string = "test again";
        mutex_value.unlock();
    }

    void ThreadFunction2()
    {
        std::lock_guard<std::mutex> lock(mutex_value);
        std::cout << g_string2 << std::endl;
        g_string2 = "test again";
    }

int main()
{
    /*******1、输出***********/
	std::cout<<"hello world"<<std::endl;
    /*******2、vector***********/
    std::vector<int16_t> test_vector;
    test_vector.reserve(4);
    test_vector.emplace_back(1);
    test_vector.emplace_back(2);
    test_vector.push_back(3);
    test_vector.push_back(4);
    std::cout<<test_vector[0]<<std::endl;//cout向外部输出a
    /*******3、哈系表***********/
    std::unordered_map<int16_t, double> test_map;
    test_map.insert(std::make_pair(1,10.0));
    test_map.insert(std::make_pair(2,20.0));
    test_map.insert(std::make_pair(3,30.0));
    test_map.insert(std::make_pair(4,40.0));
    test_map.insert(std::make_pair(5,50.0));

    if(!test_map.empty()){
        if(test_map.count(1)==1){
            std::cout<<"test_map:"<<  test_map[1] <<std::endl;
        }
    }
    /*******4、usleep***********/
    usleep(1000000);
    /*******5、copy***********/
    std::vector<int16_t>  dest;
    std::copy(test_vector.begin(), test_vector.end(), std::back_inserter(dest));
    std::cout << dest[0] <<std::endl;

    //  std::copy(angles.begin(), angles.begin() + 12, std::back_inserter(hip_and_ankle_angles.data));
    // std::stringstream ss;
    std::cout<<"over" <<std::endl;

    /*******6、for break***********/
    for(int i=0;i<10;i++){
        std::cout<<"id:"<<  i <<std::endl;
        if(i>5){
           break;
        }
    }
    /*******7、lock***********/
    std::thread th1(ThreadFunction1);
    std::thread th2(ThreadFunction1);

    th1.join();
    th2.join();
    
    std::thread th3(ThreadFunction1);
    std::thread th4(ThreadFunction1);

    th3.join();
    th4.join();

    /*******8、transform***********/
std::cout << "start transform" << std::endl;
    double number = 3.14;

    FloatLongType fl;  
    fl.fdata=float(number);  

    float test = float(number);
    unsigned char buff[sizeof(float)];
    memcpy(buff,&test,sizeof(float));

    std::vector<unsigned char> data(8,0);
    data[0] = (unsigned char)(fl.ldata>> 24);
    data[1] = (unsigned char)(fl.ldata>> 16);
    data[2] = (unsigned char)(fl.ldata>> 8);
    data[3] = (unsigned char)(fl.ldata>> 0);



for(int i=0;i<8;i++){
std::cout << std::hex << int(data[i]) << std::endl;
}

std::cout << "1111111111111111" << std::endl;


for(int i=0;i<4;i++){
std::cout << std::hex << int(buff[i]) << std::endl;
}

    /*******9、fan transform***********/
std::cout << "start transform" << std::endl;
    float test2 = 0;

    unsigned char buff2[sizeof(float)];
    buff2[0] = 0x46;
    buff2[1] = 0xe6;
    buff2[2] = 0x84;
    buff2[3] = 0x40;

    memcpy(&test2,buff2,sizeof(float));



std::cout << "1111111111111111" << std::endl;


std::cout << test2 << std::endl;



	return EXIT_SUCCESS;
}
