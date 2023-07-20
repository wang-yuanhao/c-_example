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
#include <unistd.h>
#include <cstdio>
#include <cstring>

    std::string g_string = "just test1";
    std::string g_string2 = "just test2";
    std::mutex mutex_value1;   //互斥量，线程锁，让不同线程调用统一变量时，只有一个线程使用该变量（其他线程等待）
    std::mutex mutex_value2;   //互斥量
std::thread* th2;
    void ThreadFunction1()
    {
        mutex_value1.lock();
        std::cout << g_string << std::endl;
        g_string = "thread1";
        mutex_value1.unlock();
    }
int sign = 0;
    void ThreadFunction2()
    {
        std::lock_guard<std::mutex> lock(mutex_value2);
        std::cout << g_string2 << std::endl;
        g_string2 = "thread2";
    }

        void ThreadFunction3(int a)
    {
        std::cout << "输出：" << a <<  std::endl;
    }

           void ThreadFunction4(int a)
    {
        mutex_value1.lock();
        for(int i=0;i<10;i++){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "输出ppp：" << a <<i<<  std::endl;
        }
        mutex_value1.unlock();
        sign = 1;
        std::cout << "线程运行完成" << std::endl;
    }

               void ThreadFunction5()
    {
        std::cout << "线程运行开始" << std::endl;
    }
// std::thread th2;

    void CreatThread(int c)
    {
        std::cout << "创建线程" << std::endl;
        //  new std::thread(ThreadFunction4,c);
        th2 =   new std::thread(ThreadFunction4,c);
        th2->join();
        std::cout << typeid(*th2).name() << std::endl;
        delete th2;
        std::cout << typeid(*th2).name() << std::endl;
        // std::cout << th2->get_id() << std::endl;
    }

int main()
{
    // /*******7、lock***********/
    // // std::thread th3 =   std::thread(ThreadFunction4,4);
    // // unsleep(4000000);
    // int b = 1;
    // CreatThread(b);
    // usleep(4000000);
    
    // CreatThread(3);
    // // std::thread * th1; 
    // // std::thread th1 =   std::thread(ThreadFunction3,b);
    // while(1){
    //     std::this_thread::sleep_for(std::chrono::seconds(1));
    //     std::cout << "当前线程：" <<th2 << std::endl;
    // }

// CreatThread(3);
// std::thread*th3 =   new std::thread(ThreadFunction5);
// int number =0;
// while(1){
//     // if(sign==1){
//     //         std::cout << th2->get_id() << std::endl;
//     //     delete th2;
//     // std::cout << "删除线程"<< std::endl;    
//     // }
//     // std::this_thread::sleep_for(std::chrono::seconds(1));
//     th2 =   new std::thread(ThreadFunction5);
//     std::cout << th2->get_id() << std::endl;
//     std::cout << th3->get_id() << std::endl;
//     number++;
//     std::cout << "线程数量：" <<  number << std::endl;
// }
// th2 =   new std::thread(ThreadFunction5);

// std::this_thread::sleep_for(std::chrono::seconds(1));
// std::cout << th2->get_id() << std::endl;
// th2->join();
// std::cout << th2->get_id() << std::endl;
// delete th2;
// std::cout << th2->get_id() << std::endl;
// delete th2;
// while(1){
// std::cout << "---------------------------------------" << std::endl;
// // std::this_thread::sleep_for(std::chrono::seconds(1));

//     th2 =   new std::thread(ThreadFunction5);

// std::cout << th2->get_id() << std::endl;
// std::cout << th2 << std::endl;
// th2->join();
// delete th2;
// std::cout << th2->get_id() << std::endl;
// std::cout << th2 << std::endl;
// }

// while(1){
//     std::cout<<th2->get_id()<<std::endl;
// }

    // int b = 3;
    // int* a = new int ;
    // *a = 10;
    // // a = &b;
    // std::cout << *a << std::endl;
    // std::cout << a << std::endl;
    // int* a1 = new int ;
    // int* a2 = new int ;
    // // a1 = &b;
    // // a2 = &b;
    // std::cout << a1 << std::endl;
    // std::cout << a2 << std::endl;
    // // delete a;
    // int* c = a;
    // std::cout << c << std::endl;
    // std::cout << *c << std::endl;
    // // delete a;
    // a = new int ;
    // std::cout << *a << std::endl;
    // std::cout << a << std::endl;
    
    // std::cout << c << std::endl;
    //     std::cout << *c << std::endl;
    // std::cout << a1 << std::endl;
    // std::cout << a2 << std::endl;
    // delete a1;
    // delete a2;

    // int* a3 = new int ;
    // int* a4 = new int ;
    // a3 = &b;
    // a4 = &b;
    // std::cout << a3 << std::endl;
    // std::cout << a4 << std::endl;

    unsigned char p_buff[sizeof(float)];
    float pi =3.14;
    memcpy(&p_buff,&pi,sizeof(float));

    std::cout << std::hex << int(p_buff[0])<< std::endl;
        std::cout << std::hex << int(p_buff[1])<< std::endl;
            std::cout << std::hex << int(p_buff[2])<< std::endl;
                std::cout << std::hex << int(p_buff[3])<< std::endl;

	return 0;
}
