/**
 * @file pom_sorter.hpp
 * @author melektron
 * @brief driver class for the pom sorter of the croissant robot
 * @version 0.1
 * @date 2023-02-08
 *
 * @copyright Copyright FrenchBakery (c) 2023
 *
 */

#pragma once

#include <kipr/servo.hpp>

class pom_sorter
{
protected:
    // Hardware access
    Servo selector_servo;

public:

    pom_sorter(int sp);

    void initialize();
    void terminate();
    enum pos_t
    {
        green,
        red
    };

    void setColorSelector(pos_t col);
};

namespace go
{
    extern ::pom_sorter pom_sorter;
};