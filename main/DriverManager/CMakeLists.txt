idf_component_register(SRCS "DriverManager/DriverManager.cpp" "DriverManager/DriverManager.hpp"
                    INCLUDE_DIRS ".")

add_library(driver_manager DriverManager.cpp)