// printpttest.c

#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int pid = getpid();  // ���� ���μ����� PID�� �����ɴϴ�.

    printf(1, "Testing printpt system call\n");
    printf(1, "Process ID: %d\n", pid);

    printpt(pid);  // �ý��� ȣ�� ����

    exit();
}
