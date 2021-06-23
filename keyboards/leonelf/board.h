#include_next <board.h>

#undef  BOARD_NAME
#undef  STM32_HSECLK
#undef  STM32_HSE_BYPASS
#define BOARD_NAME              "Leonelf custom board"
#define STM32_HSECLK            16000000