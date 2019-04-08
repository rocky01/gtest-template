project("${CMAKE_PROJECT_NAME}-test")

file(GLOB_RECURSE T_SRCS *.cpp)
file(GLOB_RECURSE T_HEADERS *.hpp)

add_executable(${PROJECT_NAME} ${T_SRCS} ${T_HEADERS})

include(gtest.cmake)

include_directories("${GTEST_SOURCE_DIR}/googletest/include"
                    "${GTEST_SOURCE_DIR}/googlemock/include"
                    "${TST_DIR}")

target_link_libraries(${PROJECT_NAME}
    libgtest
    libgmock
)

add_test(NAME ${PROJECT_NAME}
         COMMAND ${PROJECT_NAME})
