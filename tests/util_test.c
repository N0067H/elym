#include "../include/type.h"
#include "../include/util.h"
#include <assert.h>
#include <stdio.h>

int main() {
    // Test for elym_extent()
    u32 arr[4] = {1, 2, 3, 4};
    assert(elym_extent(arr) == 4);

    printf("Successful\n");
    return 0;
}
