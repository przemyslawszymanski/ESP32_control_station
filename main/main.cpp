#include <stdio.h>
#include <vector>

extern "C"{
    void app_main();
}

void app_main(void)
{
    std::vector<int> container{1,2,3};
}
