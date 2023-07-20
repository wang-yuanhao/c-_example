#########################1、基础设置#####################################33
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(vector_project)

#########################3、包括头文件#####################################33
# target_include_directories(vector_test PUBLIC ./include/)
target_include_directories(utils PRIVATE ./include/)
target_include_directories(vector_test PRIVATE ./include/)

# include_directories(vector_test PUBLIC ./include/)

#########################2、生成执行文件和库#####################################33

add_executable(vector_test ./src/vector_test.cpp)   #生成执行文件。当前路径就在cmakelist在的地址

add_library(utils
/home/wangyuanhao/core_repository/c-_example/cmake_test/src/utils_test.cpp
)   #生成库


#########################4、把库链接到执行文件#####################################33
target_link_libraries(vector_test utils)   #库链接到执行文件
