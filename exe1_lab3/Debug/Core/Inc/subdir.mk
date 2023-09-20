################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/button.c \
../Core/Inc/fsm.c \
../Core/Inc/global.c \
../Core/Inc/manual.c \
../Core/Inc/timer.c 

OBJS += \
./Core/Inc/button.o \
./Core/Inc/fsm.o \
./Core/Inc/global.o \
./Core/Inc/manual.o \
./Core/Inc/timer.o 

C_DEPS += \
./Core/Inc/button.d \
./Core/Inc/fsm.d \
./Core/Inc/global.d \
./Core/Inc/manual.d \
./Core/Inc/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/%.o Core/Inc/%.su: ../Core/Inc/%.c Core/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc

clean-Core-2f-Inc:
	-$(RM) ./Core/Inc/button.d ./Core/Inc/button.o ./Core/Inc/button.su ./Core/Inc/fsm.d ./Core/Inc/fsm.o ./Core/Inc/fsm.su ./Core/Inc/global.d ./Core/Inc/global.o ./Core/Inc/global.su ./Core/Inc/manual.d ./Core/Inc/manual.o ./Core/Inc/manual.su ./Core/Inc/timer.d ./Core/Inc/timer.o ./Core/Inc/timer.su

.PHONY: clean-Core-2f-Inc

