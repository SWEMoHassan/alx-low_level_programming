#include "main.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }

    int status = copy_file(argv[1], argv[2]);
    return status;
}

