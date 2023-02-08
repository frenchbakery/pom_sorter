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

#include <iostream>
#include <kipr/servo.hpp>
#include <kipr/util.hpp>

#include "pom_sorter.hpp"

PomSorter go::pom_sorter(0);
using c_t = PomSorter::pos_t;


// servo position defs
#define POSITION_CENTER 1117
#define POSITION_RED    1465
#define POSITION_GREEN  630




PomSorter::PomSorter(int sp)
    : selector_servo(sp)
{
}

void PomSorter::initialize()
{
    selector_servo.enable();
    selector_servo.setPosition(POSITION_CENTER);
        msleep(200);
    selector_servo.disable();
}

void PomSorter::terminate()
{
    selector_servo.enable();
    selector_servo.setPosition(POSITION_CENTER);
        msleep(200);
    selector_servo.disable();
}

void PomSorter::setColorSelector(PomSorter::pos_t col)
{
    if (col == c_t::green)
    {
        std::cout << "selecting green" << std::endl;
        selector_servo.enable();
        selector_servo.setPosition(POSITION_GREEN);
        msleep(200);
        selector_servo.disable();
    }
    else if (col == c_t::red)
    {
        std::cout << "selecting red" << std::endl;
        selector_servo.enable();
        selector_servo.setPosition(POSITION_RED);
        msleep(200);
        selector_servo.disable();
    }
}