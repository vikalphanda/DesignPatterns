cmake_minimum_required(VERSION 3.0.0)

set(VISITOR_PROJECT_NAME
    "visitor"
    )

set(VISITOR_LIBRARY_NAME
    visitor
    )

set(VISITOR_HEADERS_DIR
    include/${VISITOR_PROJECT_NAME}
    )

set(VISITOR_HEADERS
    ${VISITOR_HEADERS_DIR}/shape_visitor.h
    ${VISITOR_HEADERS_DIR}/shape_element.h
    ${VISITOR_HEADERS_DIR}/shape_area_visitor.h
    ${VISITOR_HEADERS_DIR}/shape.h
    ${VISITOR_HEADERS_DIR}/circle.h
    ${VISITOR_HEADERS_DIR}/rectangle.h
    ${VISITOR_HEADERS_DIR}/triangle.h
    )                

set(VISITOR_SOURCE_DIR
    src
    )

set(VISITOR_SOURCE
    ${VISITOR_SOURCE_DIR}/shape_area_visitor.cpp
    ${VISITOR_SOURCE_DIR}/triangle.cpp
    ${VISITOR_SOURCE_DIR}/rectangle.cpp
    ${VISITOR_SOURCE_DIR}/circle.cpp
    )

project(${VISITOR_PROJECT_NAME})

#########
# GTest #
#########
#enable_testing()
#add_subdirectory(libs/gtest-1.7.0)
#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

###########
# Project #
###########
add_library(${VISITOR_LIBRARY_NAME} STATIC
    ${VISITOR_HEADERS}
    ${VISITOR_SOURCE}
    )

target_include_directories(${VISITOR_LIBRARY_NAME} PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${VISITOR_LIBRARY_NAME}>
    $<INSTALL_INTERFACE:include/${VISITOR_LIBRARY_NAME}>
    )

target_include_directories(${VISITOR_LIBRARY_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    )

add_subdirectory(test)
#add_executable(${VISITOR_PROJECT_NAME} ${VISITOR_SOURCE})

#foreach(LIBRARY ${FOO_LIBRARIES})
#    add_subdirectory("${FOO_LIBRARIES_DIR}/${LIBRARY}")
#endforeach(LIBRARY)
#target_link_libraries(${FOO_PROJECT_NAME} ${FOO_LIBRARIES})
