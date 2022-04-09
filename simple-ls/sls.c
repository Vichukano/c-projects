#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

char *reslove_d_type(unsigned char raw_type) {
    if (raw_type == DT_REG) {
        return "file     ";
    }
    if (raw_type == DT_DIR) {
        return "directory";
    }
    if (raw_type == DT_LNK) {
        return "simlink  ";
    }
    return "unknown  ";
}

void print_directory(const char *dir_name) {
    DIR *dir = opendir(dir_name);
    if (dir == NULL) {
        printf("Failed to open directory: %s\n", dir_name);
    }
    struct dirent *dir_entity;
    dir_entity = readdir(dir);
    while (dir_entity != NULL) {
        unsigned char raw_type = dir_entity->d_type;
        char *name = dir_entity->d_name;
        char *type = reslove_d_type(raw_type);
        printf("%s\t%s\n", type, name);
        dir_entity = readdir(dir);
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        print_directory(".");
        return 0;
    }
    print_directory(argv[1]);
    return 0;
}
