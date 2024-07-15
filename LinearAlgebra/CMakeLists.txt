# 添加头文件搜索目录
# CMake 中的一个命令，用于指定编译器在搜索头文件时的附加目录。它告诉编译器在编译源文件时，在哪些目录中查找头文件。
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# 安装库文件到libs目录下
set(installl_libs LinearAlgebra)
install(TARGETS ${installl_libs} DESTINATION libs)

# 把库文件对应的头文件安装到include文件下
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h" DESTINATION include)