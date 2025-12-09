

#include "Serializer.hpp"

// ORTHODOX
Serializer::Serializer()
{
}
Serializer::Serializer(const Serializer& other)
{
    (void)other;
}
Serializer& Serializer::operator=(const Serializer& other)
{
    (void)other;
    return *this;
}
Serializer::~Serializer()
{
}

// Utility
uintptr_t    Serializer::serialize( Data* ptr )
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}
Data*        Serializer::deserialize( uintptr_t raw )
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
