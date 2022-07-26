#include "print.h"
void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_CYAN);
    print_str("64 Kernel");
}