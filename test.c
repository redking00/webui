#include <stdio.h>
#include <stdlib.h>

void test(char* buffer, size_t len) {
    snprintf(buffer, (len + 1), " -P %s", "_Firefox_Profile_Name_Test_");
}

int main() {
    char buffer[10] = {0};
    size_t len = sizeof(buffer);
    test(buffer, len); // and this should be test(buffer, len - 1);
    printf("[%s]\n", buffer);
    return 0;
}