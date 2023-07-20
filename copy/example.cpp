//helloworld.cpp123
#include <iostream>
#include <vector>

int main()
{
    std::cout <<"_______________copy___________________"<<std::endl;
    std::vector<int16_t>  data3;
    std::vector<int16_t>  data4 = {11,12,13,14,15,16}; 
    data3.reserve(4);
    std::copy(&data4[0], &data4[3], &data3[0]);   //copy的三个参数都是地址
    std::cout << data3[0] <<std::endl;
////////////////////////////////////////////////////////////////////////////////////
    std::cout <<"_______________back_inserter___________________"<<std::endl;
    std::vector<int16_t>  data1;
    std::vector<int16_t>  data2 = {1,2,3,4,5,6};
    std::copy(data2.begin(), data2.end(), std::back_inserter(data1));  //back_inserter是迭代器，给vector创建更长的vector
    std::cout << data1[0] <<std::endl;


    return 0;
}
