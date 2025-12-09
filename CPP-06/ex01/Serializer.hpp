
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <stdint.h>
#include "Data.hpp"
#include <iostream>

class Serializer {
private:
    // ORTHODOX
    Serializer();
    Serializer(const Serializer& other);
    Serializer& operator=(const Serializer& other);
    ~Serializer();

public:
    // Utility
    static uintptr_t    serialize( Data* ptr );
    static Data*        deserialize( uintptr_t raw );
};

#endif