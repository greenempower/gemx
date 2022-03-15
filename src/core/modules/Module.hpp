#pragma once

/*
 *
 */

#include "Object.hpp"

#include <filesystem>

struct Module : Object {
    Module(std::filesystem::directory_entry dir) {
        // super
    }
};
