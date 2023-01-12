#pragma once

#include <string>
#include <memory>
#include <map>

/*
    Class only for test purposes, refactor is needed
*/

struct DriverConfiguration;

class DriverManager
{
public:
    struct Driver
    {
        int m_id;
        int m_data;
        std::string m_name;
    };

    void addDriver(std::unique_ptr<Driver> newDriver);
    bool removeDriver(const int& driverId);
    bool configureDriver(const DriverConfiguration& driverConfiguration);
    int getData() const;

private:
    std::map<int, std::unique_ptr<Driver>> m_DriversMap;
};