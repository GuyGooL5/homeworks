#include <stdio.h>

int main()
{
    int task_1, task_2, task_3, test, final_score;
    printf("Enter assignments' grades one at a time: ");
    scanf("%d%d%d", &task_1, &task_2, &task_3);
    printf("Enter the test's grade: ");
    scanf("%d", &test);
    final_score = test * 0.8 + 0.2 * ((task_1 + task_2 + task_3) / 3);
    printf("%d is your final score.", final_score);
    return 0;
}
