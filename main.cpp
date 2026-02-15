#include <bits/stdc++.h>
using namespace std;

int countWords(const string &fname) {
    ifstream file(fname);
    if (!file.is_open()) {
        cout << "Error: Couldn't open file\n";
        return -1;
    }

    string word;
    int count = 0;

    while (file >> word) {
        count++;
    }

    file.close();
    return count;
}

int main(int argc, char* argv[]) {
    if (argc<2) {
        cout << "Usage: ./publish <fname>\n";
        return 0;
    }

    string fname = argv[1];
    int words = countWords(fname);

    if (words != -1)
        cout << "Word count: " << words << endl;

    return 0;
}
