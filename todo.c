#include <stdio.h>
#include <string.h>

// 할 일(Task) 구조체 정의
struct Task {
    char description[200]; // 할 일 내용
    int isDone;            // 완료 여부 (0: 미완료, 1: 완료)
};

// 최대 50개의 할 일을 저장할 배열
struct Task todoList[50];
int taskCount = 0; // 현재 저장된 할 일 개수

// 메뉴 출력 함수
void printMenu() {
    printf("\n--- 📝 C언어 To-Do 리스트 ---\n");
    printf("1. 할 일 추가\n");
    printf("2. 할 일 목록 보기\n");
    printf("3. 종료\n");
    printf("메뉴 선택: ");
}

int main(void) {
    int choice = 0;

    while (choice != 3) {
        printMenu();
        scanf("%d", &choice);

        // C언어에서 버퍼를 비우는 표준적인 방법
        while (getchar() != '\n');

        switch (choice) {
        case 1:
            printf("\n[1. 할 일 추가 - 구현 중...]\n");
            // addTask(); // 다음 커밋에서 구현
            break;
        case 2:
            printf("\n[2. 할 일 목록 보기 - 구현 중...]\n");
            // viewTasks(); // 다음 커밋에서 구현
            break;
        case 3:
            printf("\n[프로그램을 종료합니다.]\n");
            break;
        default:
            printf("\n[⚠️ 잘못된 입력입니다. 1~3 사이의 숫자를 입력하세요.]\n");
            break;
        }
    }

    return 0;
}