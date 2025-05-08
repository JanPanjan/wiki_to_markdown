// #include "../include/parser.h"
#include "../include/reader.h"
// #include "../include/result.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Buffer *testno = read_file_contents("../testna.txt");

    printf("%s\n", testno->raw);

    system("ls");

    return 0;
}
