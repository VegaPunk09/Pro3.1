#include <iostream>
#include <vector>

template <typename T>
T square(const T& number) {
    return number * number;
}

template <typename T>
std::vector<T> square(const std::vector<T>& numbers) {
    std::vector<T> result;

    for (const auto& number : numbers) {
        result.push_back(number * number);
    }

    return result;
}

int main() {
    std::cout << square(4) << std::endl;

    std::vector<int> numbers = { -1, 4, 8 };
    auto result = square(numbers);

    for (std::size_t i = 0; i < result.size(); ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << result[i];
    }

    std::cout << std::endl;

    return 0;
}
