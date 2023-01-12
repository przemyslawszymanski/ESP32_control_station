project(ESP32_control_station)
cmake_minimum_required(VERSION 3.5)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(main_test main_test.cpp DriverManager/DriverManagerUT.cpp)
target_link_libraries(main_test gtest_main gmock_main driver_manager_test)
add_test(NAME main_test COMMAND main_test )

add_subdirectory(DriverManager)