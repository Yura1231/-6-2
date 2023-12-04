#include <iostream>
#include <cmath>

class SquareTransformer {
public:
    SquareTransformer(int* array, size_t size) : intArray_(array), size_(size) {}

    void transform() {
        for (size_t i = 0; i < size_; ++i) {
            intArray_[i] = square(intArray_[i]);
        }
    }

    void print() const {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << intArray_[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int square(int value) const {
        return value * value;
    }

    int* intArray_;
    size_t size_;
};

class FloatSquareTransformer {
public:
    FloatSquareTransformer(float* array, size_t size) : floatArray_(array), size_(size) {}

    void transform() {
        for (size_t i = 0; i < size_; ++i) {
            floatArray_[i] = square(floatArray_[i]);
        }
    }

    void print() const {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << floatArray_[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    float square(float value) const {
        return value * value;
    }

    float* floatArray_;
    size_t size_;
};

class LongSquareTransformer {
public:
    LongSquareTransformer(long* array, size_t size) : longArray_(array), size_(size) {}

    void transform() {
        for (size_t i = 0; i < size_; ++i) {
            longArray_[i] = square(longArray_[i]);
        }
    }

    void print() const {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << longArray_[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    long square(long value) const {
        return value * value;
    }

    long* longArray_;
    size_t size_;
};

int main() {
    int intArray[] = { 1, 2, 3, 4, 5 };
    SquareTransformer intTransformer(intArray, sizeof(intArray) / sizeof(int));

    std::cout << "Original int array: ";
    intTransformer.print();

    intTransformer.transform();

    std::cout << "Squared int array: ";
    intTransformer.print();

    float floatArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    FloatSquareTransformer floatTransformer(floatArray, sizeof(floatArray) / sizeof(float));

    std::cout << "Original float array: ";
    floatTransformer.print();

    floatTransformer.transform();

    std::cout << "Squared float array: ";
    floatTransformer.print();

    long longArray[] = { 1000L, 2000L, 3000L, 4000L, 5000L };
    LongSquareTransformer longTransformer(longArray, sizeof(longArray) / sizeof(long));

    std::cout << "Original long array: ";
    longTransformer.print();

    longTransformer.transform();

    std::cout << "Squared long array: ";
    longTransformer.print();

    return 0;
}
