#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("numbers.html");
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // Even or odd not working correctly
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    file.close();
    // File not found
    ifstream input("numbers.htm");
    cout << input.rdbuf();
    input.close();
    return 0;
}
