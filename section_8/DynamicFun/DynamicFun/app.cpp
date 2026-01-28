// Professional version

#include <iostream>
#include <memory>   // <-- required for std::unique_ptr and std::make_unique

int main()
{
    // Instead of: int* intPtr = new int;
    auto intPtr = std::make_unique<int>(333);

    std::cout << "The int pointer value is " << *intPtr << std::endl;
    std::cout << "\n";

    // No delete needed — automatic cleanup when leaving scope


    // Instead of: bool* boolPtr = new bool;
    auto boolPtr = std::make_unique<bool>(true);

    std::cout << "The boolean pointer value is " << *boolPtr << std::endl;
    std::cout << "The boolean pointer alpha value is "
              << std::boolalpha << *boolPtr << std::endl;
    std::cout << "\n";

    // No delete needed here either

    return 0;
}


// Learner's version
// #include <iostream>

// int main() {

//     // int* intPtr = new int(123);
//     int* intPtr = new int;
//     *intPtr = 327;

//     std::cout << "The int pointer address is " << intPtr << std::endl;
//     std::cout << "The int pointer value is " << *intPtr << std::endl;
//     std::cout << "\n";

//     delete intPtr;
//     intPtr = nullptr;

//     bool* boolPtr = new bool;
//     *boolPtr = true;

//     std::cout << "The boolean pointer address is " << boolPtr << std::endl;
//     std::cout << "The boolean pointer value is " << *boolPtr << std::endl;
//     std::cout << "The boolean pointer alpha value is " << std::boolalpha << *boolPtr << std::endl;
//     std::cout << "\n";

//     delete boolPtr;
//     boolPtr = nullptr;

//     return 0;
// }