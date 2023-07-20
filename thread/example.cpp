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

    std::string g_string = "just test1";
    std::string g_string2 = "just test2";
    std::mutex mutex_value1;   //互斥量，线程锁，让不同线程调用统一变量时，只有一个线程使用该变量（其他线程等待）
    std::mutex mutex_value2;   //互斥量

    void ThreadFunction1()
    {
        mutex_value1.lock();
        std::cout << g_string << std::endl;
        g_string = "thread1";
        mutex_value1.unlock();
    }

    void ThreadFunction2()
    {
        std::lock_guard<std::mutex> lock(mutex_value2);
        std::cout << g_string2 << std::endl;
        g_string2 = "thread2";
    }

int main()
{
    /*******7、lock***********/
    std::thread th1(ThreadFunction1);
    std::thread th2(ThreadFunction2);

    th1.join();
    th2.join();
    
    std::thread th3(ThreadFunction1);
    std::thread th4(ThreadFunction2);

    th3.join();
    th4.join();

    
	return 0;
}
