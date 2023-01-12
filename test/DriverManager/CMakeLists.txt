add_library(driver_manager_test DriverManagerUT.cpp)

target_include_directories(driver_manager_test PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_LIST_DIR}/../..)
target_link_libraries(driver_manager_test gtest_main gmock_main)
add_test(NAME driver_manager_test COMMAND driver_manager_test)