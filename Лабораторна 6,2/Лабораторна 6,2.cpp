#include <iostream>

template <typename T>
class SquareTransformer {
public:
    
    SquareTransformer(T* array, size_t size) : array_(array), size_(size) {}

    
    void transform() {
        for (size_t i = 0; i < size_; ++i) {
            array_[i] = square(array_[i]);
        }
    }

    
    T square(T value) {
        return value * value;
    }

    
    void printArray() {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << array_[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    T* array_;
    size_t size_;
};

int main() {
    
    int intArray[] = { 1, 2, 3, 4, 5 };
    SquareTransformer<int> intTransformer(intArray, sizeof(intArray) / sizeof(int));
    intTransformer.transform();
    std::cout << "Transformed int array: ";
    intTransformer.printArray();

    
    float floatArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    SquareTransformer<float> floatTransformer(floatArray, sizeof(floatArray) / sizeof(float));
    floatTransformer.transform();
    std::cout << "Transformed float array: ";
    floatTransformer.printArray();

    
    long longArray[] = { 1L, 2L, 3L, 4L, 5L };
    SquareTransformer<long> longTransformer(longArray, sizeof(longArray) / sizeof(long));
    longTransformer.transform();
    std::cout << "Transformed long array: ";
    longTransformer.printArray();

    return 0;
}

    longTransformer.print();

    return 0;
}
