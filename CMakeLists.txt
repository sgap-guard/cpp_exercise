cmake_minimum_required(VERSION 3.26)
project(Practice LANGUAGES CXX)

# ---------- 语言标准：gnu++26 ----------
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# ---------- UTF-8 源码支持 ----------
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

# ---------- 输出目录 ----------
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# ---------- 收集所有 cpp ----------
file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach(file ${CPP_FILES})
    # 相对路径
    file(RELATIVE_PATH rel "${CMAKE_CURRENT_SOURCE_DIR}" "${file}")

    # 文件名（不含后缀）
    get_filename_component(name_only "${file}" NAME_WE)

    # 所在目录的最后一级
    get_filename_component(parent_dir "${file}" DIRECTORY)
    get_filename_component(last_dir "${parent_dir}" NAME)

    # 拼接：最后一级目录__文件名
    set(name "${last_dir}__${name_only}")

    # 统一替换非法字符为下划线
    string(REGEX REPLACE "[^A-Za-z0-9_]" "_" name "${name}")

    # 连续下划线压缩为单个
    string(REGEX REPLACE "_+" "_" name "${name}")

    # 去掉首尾下划线
    string(STRIP "${name}" name)
    string(REGEX REPLACE "^_+" "" name "${name}")
    string(REGEX REPLACE "_+$" "" name "${name}")

    # 防止以数字开头
    if(name MATCHES "^[0-9]")
        set(name "t_${name}")
    endif()

    # 空名字兜底
    if(name STREQUAL "")
        set(name "t_${name_only}")
    endif()

    # 重名兜底
    if(TARGET ${name})
        string(MD5 hash "${file}")
        string(SUBSTRING "${hash}" 0 6 hash6)
        set(name "${name}_${hash6}")
    endif()

    add_executable(${name} "${file}"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC52 判断整数奇偶性.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC53 判断是元音还是辅音.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC54 牛牛的判断题.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC55 判断闰年.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC56 判断字母.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC57 四季.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC58 健康评估.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/BC59 小乐乐找最大数.cpp"
            "Nowcoder/Official Question Sheet/Grammar Section/Beginner's Programming Training/2 Branch Control/判断是不是字母.cpp")

    set_target_properties(${name} PROPERTIES
            FOLDER "practice"
            # 缩短 obj 输出子目录名（减少路径长度）
            OBJECT_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/obj/${name}"
    )
endforeach()