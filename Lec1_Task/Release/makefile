################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/GPIO/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Lec1_Task.lss \

FLASH_IMAGE += \
Lec1_Task.hex \

EEPROM_IMAGE += \
Lec1_Task.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Lec1_Task.elf secondary-outputs

# Tool invocations
Lec1_Task.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Lec1_Task.map -mmcu=atmega16 -o "Lec1_Task.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Lec1_Task.lss: Lec1_Task.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Lec1_Task.elf  >"Lec1_Task.lss"
	@echo 'Finished building: $@'
	@echo ' '

Lec1_Task.hex: Lec1_Task.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Lec1_Task.elf  "Lec1_Task.hex"
	@echo 'Finished building: $@'
	@echo ' '

Lec1_Task.eep: Lec1_Task.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Lec1_Task.elf  "Lec1_Task.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Lec1_Task.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 Lec1_Task.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Lec1_Task.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
