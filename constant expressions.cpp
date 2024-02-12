#include <iostream>

int main() {
    using namespace std;  // This line brings the entire std namespace into scope

    constexpr int SOME_LIB_MAJOR_VERSION {1237};
    constexpr int eye_count {2};
    constexpr double PI {3.14};

    // Uncommented lines
    // eye_count = 4; // Error: eye_count is a constant expression and cannot be modified

    cout << "eye count: " << eye_count << endl;
    cout << "PI: " << PI << endl;

    // int leg_count {2}; // Non-constexpr
    // constexpr int arm_count{leg_count}; // Error: leg_count is not known at compile time

    constexpr int room_count{10};
    constexpr int door_count{room_count}; // OK

    const int table_count{5};
    constexpr int chair_count{table_count * 5}; // Works

    // Uncommented lines
    // static_assert(SOME_LIB_MAJOR_VERSION == 1237, "Invalid major version");
    // int age = 5;
    // static_assert(age == 5, "Invalid age");

    cout << "App doing its thing..." << endl;

    return 0;
}
