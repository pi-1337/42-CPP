

#include "Serializer.hpp"


int main()
{

    Data data;
    data.age = 314;

    uintptr_t ptrAsInt = Serializer::serialize(&data);
    Data *data2 = Serializer::deserialize(ptrAsInt);

    std::cout << data2->age << std::endl;

    return 0;
}
