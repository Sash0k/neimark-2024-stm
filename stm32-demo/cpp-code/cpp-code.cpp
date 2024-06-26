#include "cpp-code.h"
#include <map>
#include <string>

#include "stm32f1xx_hal.h"

static const unsigned char cpp_text[] = "Hello, stm32 C++ developer!\r\n";

extern UART_HandleTypeDef huart1;

void function_to_investigate()
{
    std::map<std::string, int> m;
    for (int i = 1; i <= 10; ++i)
    {
        m[std::to_string(i)] = i;
    }
}

void print_stat()
{
    // Some code here should print statistic of _sbrk, malloc, free usage
    printf("_sbrk = %d, malloc = %d, free = %d\r\n", get_counter('s'), get_counter('m'), get_counter('f'));
}

void cpp_code_entry_point()
{
    function_to_investigate();
    print_stat();
}
