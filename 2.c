#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int num;
    char *f[] = {"Apple", "Banana", "Kiwi","Strawberry","Orange"};
    char in[10];
    printf("%ld\n", time(NULL));
    srand(time(NULL));
    num = rand() % 5;
    printf("Apple, Banana, Kiwi, Strawberry, Orange 중 하나를 선택하였습니다. 맞춰보세요!\n");
    while (1) {
        printf("과일 이름을 입력하세요: ");
        fgets(in, sizeof(in), stdin);
        in[strcspn(in, "\n")] = '\0';
        if (strcmp(in, f[num]) == 0) {
            printf("축하합니다! 정답입니다.\n");
            break;
        }
        else {
            printf("틀렸습니다. 다시 시도해보세요.\n");
        }
    }
    return 0;
}