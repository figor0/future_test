cmake_minimum_required(VERSION 3.5)

project(future_test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)
find_package(Protobuf REQUIRED)

set(HEADERS
)
set(SOURCES
)

add_executable(${PROJECT_NAME}
  main.cpp ${SOURCES} ${HEADERS}
)

target_link_libraries(${PROJECT_NAME} pthread)
