# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MAGIC_ENABLE = yes          # Enable Magic
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Disable WS2812 RGB underlight.

SPLIT_KEYBOARD = yes

DEFAULT_FOLDER = redox/rev1/base

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Enable LTO
LTO_ENABLE = yes
