#ifndef BUFFER_H
#define BUFFER_H

#include <iostream>
#include <cstring>

class Buffer {
public:
    Buffer(const char* text = "default") {
        data = new char[std::strlen(text) + 1];
        std::strcpy(data, text);
        std::cout << "Constructed: " << data << std::endl;
    }

    // Copy constructor
    Buffer(const Buffer& other) {
        data = new char[std::strlen(other.data) + 1];
        std::strcpy(data, other.data);
        std::cout << "Copied: " << data << std::endl;
    }

    // Copy assignment
    Buffer& operator=(const Buffer& other) {
        if (this != &other) {
            delete[] data;
            data = new char[std::strlen(other.data) + 1];
            std::strcpy(data, other.data);
        }
        std::cout << "Copy-assigned: " << data << std::endl;
        return *this;
    }

    // Move constructor
    Buffer(Buffer&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        std::cout << "Moved." << std::endl;
    }

    // Move assignment
    Buffer& operator=(Buffer&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        std::cout << "Move-assigned." << std::endl;
        return *this;
    }

    ~Buffer() {
        if (data)
            std::cout << "Destroyed: " << data << std::endl;
        else
            std::cout << "Destroyed: null" << std::endl;

        delete[] data;
    }

private:
    char* data;
};

#endif
