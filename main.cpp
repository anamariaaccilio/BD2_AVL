#include <iostream>
#include <fstream>
#include <cstring>
#include <climits>
#include <vector>
#include "avl.h"

using namespace std;

int main() {
    writeFile("data.bin");
    readFile("data.bin");
    return 0;
}