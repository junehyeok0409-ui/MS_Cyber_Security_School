#include <stdio.h>

char *name[] = {"박길석", "박길은", "박길혜", "임길혁", "이길빈"};
char *f[] = {"번호", "이름", "국어", "영어", "수학"};
int kor[] = {10, 20, 30, 40, 50};
int eng[] = {60, 70, 80, 90, 99};
int mat[] = {70, 80, 90, 75, 60};

void swap(int *i, int *j);

int main(int n, char *s[]) {
    int start = 0, end = 5;
    
    int help_flag = 0;
    if (n > 1) {
        char *help_str = "--help";
        int i = 0;
        
    }

    if (help_flag) {
        printf("t20 [<번호>]\n");
        printf("  번호에 해당하는 학생의 이름과 과목 성적을 화면에 출력\n");
        printf("  <default>All\n");
        return 0;
    }
    
    if (n > 1) {
        start = s[1][0] - '0' - 1;
        end = start + 1;
    }

    for (int i = start; i < end; i++) {
        if (i == start) {
            for (int j = 0; j < 5; j++) {
                printf("%s\t", f[j]);
            }
            printf("\n");
        }
        printf("%2d\t%s\t%3d\t%3d\t%3d\n", i + 1, name[i], kor[i], eng[i], mat[i]);
    }

    int i = 10, j = 20;
    swap(&i, &j);

    return 0;
}

void swap(int *i, int *j) {
    int k;
    k = *i;
    *i = *j;
    *j = k;
}
