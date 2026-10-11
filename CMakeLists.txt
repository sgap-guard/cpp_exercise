cmake_minimum_required(VERSION 3.26)
project(Practice)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 强制 CMake 使用 UTF-8 处理源码
add_compile_options("$<$<C_COMPILER_ID:GNU>:-finput-charset=UTF-8>")
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")

# 自动收集所有 cpp 文件
file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS "*.cpp")

foreach (file ${CPP_FILES})
    # 1. 获取相对于项目根目录的路径
    file(RELATIVE_PATH rel ${CMAKE_CURRENT_SOURCE_DIR} ${file})
    string(REGEX REPLACE "\\.cpp$" "" name ${rel})
    string(REPLACE "/" "_" name ${name})
    string(REPLACE "\\" "_" name ${name})

    # 2. 【核心修复】把中文、括号等非法字符替换为哈希值（确保不会重名）
    if (NOT "${name}" MATCHES "^[A-Za-z_][A-Za-z0-9_]*$")
        # 提取文件的扩展名之前的纯文件名
        string(REGEX MATCH "/?([^/_]+)$" match_name ${rel})
        set(raw_name ${CMAKE_MATCH_1})
        # 用文件的 MD5 哈希值作为前缀，彻底解决同名冲突和中文问题
        string(MD5 hash_name "${file}")
        set(name "${hash_name}_${raw_name}")
    endif()

    # 3. 二次清洗：只保留英文、数字、下划线
    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" name ${name})

    # 4. 防止目标名以数字开头
    if (name MATCHES "^[0-9]")
        set(name "t_${name}")
    endif()

    add_executable(${name} ${file}
            "计蒜客/T/T10/T100/T1002 输出马里奥.cpp"
            "计蒜客/T/T10/T100/T1006 对齐输出.cpp"
            "计蒜客/T/T10/T100/T1007 整型与布尔型的转换.cpp"
            "计蒜客/T/T10/T100/T1008 打印字符.cpp"
            "计蒜客/T/T10/T100/T1009 等差数列末项计算.cpp"
            "计蒜客/T/T10/T101/T1010 计算线段长度.cpp"
            "计蒜客/T/T10/T101/T1011 反向输出一个三位数.cpp"
            "计蒜客/T/T10/T101/T1012 AxB问题.cpp"
            "C++程序设计教程（第二版）/第一章/C.cpp"
            "计蒜客/T/T10/T101/T1013 输出第二个整数.cpp"
            "计蒜客/T/T10/T101/T1014 输出保留3位小数的浮点数.cpp"
            "计蒜客/T/T10/T101/T1015 输出保留12位小数的浮点数.cpp"
            "计蒜客/T/T10/T101/T1016 打印ASCII码.cpp"
            "计蒜客/T/T10/T101/T1017 计算(a+b)xc的值.cpp"
            "计蒜客/T/T10/T101/T1018 计算(a+b)div c的值.cpp"
            "计蒜客/T/T10/T101/T1019 带余除法.cpp"
            "计蒜客/T/T10/T102/T1020 计算分数的浮点数值.cpp"
            "计蒜客/T/T10/T102/T1021 甲流疫情死亡率.cpp"
            "计蒜客/T/T10/T102/T1022 计算多项式的值.cpp"
            "计蒜客/T/T10/T102/T1023 温度表达转化.cpp"
            "计蒜客/T/T10/T102/T1024 与圆有关的相关计算.cpp"
            "计蒜客/T/T10/T102/T1025 计算浮点数相处的余数.cpp"
            "计蒜客/T/T10/T102/T1026 计算球的体积.cpp"
            "计蒜客/T/T10/T102/T1027 大象喝水.cpp"
            "计蒜客/T/T10/T102/T1028 苹果与虫子.cpp"
            "计蒜客/T/T10/T102/T1029 计算2的幂.cpp")
endforeach()