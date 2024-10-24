cmake_minimum_required(VERSION 3.10)
project(crow_example)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify Boost components and version
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.65.0 COMPONENTS system REQUIRED)

# Find other required packages
find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

# Add executable
add_executable(crow_example main.cpp)

# Include directories
target_include_directories(crow_example PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${Boost_INCLUDE_DIRS}
    /usr/include  # Add this line for ASIO headers
)

# Add definition for standalone ASIO
add_definitions(-DASIO_STANDALONE)

# Link libraries
target_link_libraries(crow_example
    PRIVATE
    ${Boost_LIBRARIES}
    OpenSSL::SSL
    OpenSSL::Crypto
    ZLIB::ZLIB
    pthread
)