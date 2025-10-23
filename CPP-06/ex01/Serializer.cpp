

#include "Serializer.hpp"

static uintptr_t    Serializer::serialize( Data* ptr )
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}
static Data*        Serializer::deserialize( uintptr_t raw )
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
