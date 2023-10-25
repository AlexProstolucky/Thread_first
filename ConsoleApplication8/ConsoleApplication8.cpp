#include <iostream>
#include <thread>
using namespace std;

void displayHexDigits() {
    for (int i = 0; i <= 9; ++i) {
        cout << i << " ";
    }

    for (char c = 'a'; c <= 'f'; ++c) {
        cout << c << " ";
    }

    std::cout << std::endl;
}

int main() {
    thread hexThread(displayHexDigits);

    cout << "Main thread is running..." << std::endl;

    hexThread.join();

    cout << "Main thread is done." << std::endl;

    return 0;
}
