

#define SUCCESS 1

int main() {
    printf("current operation is split_file(1) or merge_file(2)?");

    int operation;
    int result = scanf("%d", &operation);

    if (result < 0 || (operation != 1 && operation != 2)) {
        printf("operation must be 2 or 1!");
        return 0;
    }

    if (operation == 1) {
        char srcPath[100];
        int count;

        printf("please enter src file path:");
        scanf("%s", srcPath);

        printf("please enter split count:");
        scanf("%d", &count);

        int ret = split_file(srcPath, count, NULL);
        if (ret == SUCCESS) {
            printf("split file success!/n");
        } else {
            printf("split file failure!/n");
        }
    }


    return 0;
}


