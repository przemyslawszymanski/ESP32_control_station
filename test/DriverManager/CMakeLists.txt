get_filename_component(MAIN_DIR ../../main/ ABSOLUTE)

include_directories(${MAIN_DIR})

add_executable(driver_manager_test DriverManagerUT.cpp ${SOURCES})

target_link_libraries(driver_manager_test gtest_main gmock_main)
add_test(NAME driver_manager_test COMMAND driver_manager_test)