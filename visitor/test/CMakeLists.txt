cmake_minimum_required(VERSION 3.0.0)

enable_testing()

set(VISITOR_TESTS_NAME
    VisitorTests
    )
set(VISITOR_TESTS_SOURCE
    main.cpp
    )
add_executable(${VISITOR_TESTS_NAME} ${VISITOR_TESTS_SOURCE})
target_link_libraries(${VISITOR_TESTS_NAME} 
    ${VISITOR_LIBRARY_NAME}
    )
