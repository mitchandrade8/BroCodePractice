
#include <iostream>

int main() {

    // MARK: - Key Notes
        // Type Conversion = conversion of a value of one data type to another
                // Implicit = automatic
                // Explicit = Precede value with new data type (int)
    
    // Implicit cast Example:

    /// double x = (int) 3.14;

    /// std::cout << x;

    // Another Example:

    /// std::cout << 100;


    // MARK: - Another Example
    
    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    std::cout << score << "%";


    return 0;


}