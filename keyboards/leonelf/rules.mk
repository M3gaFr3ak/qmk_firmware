# MCU name

MCU_FAMILY = STM32
MCU_SERIES = STM32F3xx
MCU = cortex-m4

# Startup script to use
# - it should exist either in <chibios>/os/common/startup/ARMCMx/compilers/GCC/mk/
#   or <this_dir>mk/ (untested this part)
MCU_STARTUP = stm32f3xx

# BOOTLOADER = stm32duino
ARMV = 7

# Board: it should exist either in <chibios>/os/hal/boards/
#  or <this_dir>/boards
BOARD = ST_NUCLEO64_F302R8

# MCU changed to f105 in board.h
# PLATFORM_NAME = platform_f105_f107

# Linker script to use
# - it should exist either in <chibios>/os/common/startup/ARMCMx/compilers/GCC/ld/
#   or <this_dir>/ld/
MCU_LDSCRIPT = STM32F302x8

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
# RGB_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812
ENCODER_ENABLE = yes
# EEPROM_DRIVER = i2c
EEPROM_DRIVER = transient
ENCODER_ENABLE = yes

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE