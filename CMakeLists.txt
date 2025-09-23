cmake_minimum_required(VERSION 4.0)
project(C_work C)

# 按照书本要求设定C语言版本
set(CMAKE_C_STANDARD 99)

# 设定构建输出路径，避免污染根目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/archive)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/library)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/runtime)

# 遍历项目根目录下所有的 .c 和 .cpp 文件，自动添加
file(GLOB_RECURSE sources
        CONFIGURE_DEPENDS
        *.c
        *.cpp
)

foreach(source ${sources})
    # 获取不带路径和扩展名的文件名作为可执行文件名
    get_filename_component(exe ${source} NAME_WE)

    # 添加可执行文件
    add_executable(${exe} ${source})

    # 输出信息
    message(STATUS "Compiling ${source} to runtime/${exe}")
endforeach()
