#include <iostream>
#include <vector>
#include <numeric>
#include <utility>
#include <thread>

int main()
{
    std::vector<int> dataset(1'000'000, 1);
    std::cout << "original vector size: " << dataset.size() << std::endl;

    // define the lambda
    std::thread t([data = std::move(dataset)]()
    {
        long long sum = std::accumulate(data.begin(), data.end(), 0LL);
        std::cout << "[worker] sum = " << sum << std::endl;
        std::cout << "[worker] size = " << data.size() << std::endl;
    });

    std::cout << "vector size in main after thread launch: " << dataset.size() << std::endl;

    t.join();
    return 0;
}
