#include <fstream>

int main()
{
    // todo: I'd like to figure out how to do WAV files sometime in the future
    std::ofstream square_file{"D:/projects/cpp_sandbox/projects/_tests/file_ops/squares.txt"};
    for (int i = 0; i < 10; i++) {
        square_file << i << "^2=" << i*i << "\n";
    }
    return 0;
}
