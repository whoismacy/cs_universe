#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;

    // Parsing command-line options "f:o:"
    while ((opt = getopt(argc, argv, "f:o:")) != -1) {
        switch (opt) {
            case 'f':
                printf("Option -f with argument '%s'\n", optarg);
                break;
            case 'o':
                printf("Option -o with argument '%s'\n", optarg);
                break;
            case '?':  // Handles unknown options
                printf("Unknown option: %c\n", optopt);
                break;
            default:
                printf("Usage: %s [-f filename] [-o output]\n", argv[0]);
                return 1;
        }
    }

    // Accessing non-option arguments
    printf("optind is now %d\n", optind);
    for (int index = optind; index < argc; index++) {
        printf("Non-option argument: %s\n", argv[index]);
    }

    return 0;
}
