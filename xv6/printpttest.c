// printpttest.c

#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int pid = getpid();  // 현재 프로세스의 PID를 가져옵니다.

    printf(1, "Testing printpt system call\n");
    printf(1, "Process ID: %d\n", pid);

    printpt(pid);  // 시스템 호출 실행

    exit();
}
