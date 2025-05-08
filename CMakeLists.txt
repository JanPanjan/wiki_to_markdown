# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(wiki_to_markdown)

set(CMAKE_C_STANDARD 11)

# Source files
set(SOURCE_FILES
    src/main.c
    src/reader.c
    src/parser.c
    src/result.c
)

# Add executable
add_executable(wtm ${SOURCE_FILES})

# Add include directories
target_include_directories(wtm PRIVATE include)
