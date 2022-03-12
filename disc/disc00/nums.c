#include <stdio.h>

int main() {
    int nums[3] = {152, 161, 162};
    printf("%x, nums\n%x, &nums\n%x, &nums[0]\n", nums, &nums, &nums[0]);
    // same value
    return 0;
}