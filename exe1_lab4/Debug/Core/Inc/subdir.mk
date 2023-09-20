################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/SCH.c \
../Core/Inc/button.c \
../Core/Inc/fsm_manual.c \
../Core/Inc/global.c \
../Core/Inc/sm_auto.c \
../Core/Inc/software_timer.c \
../Core/Inc/traffic_controler.c 

OBJS += \
./Core/Inc/SCH.o \
./Core/Inc/button.o \
./Core/Inc/fsm_manual.o \
./Core/Inc/global.o \
./Core/Inc/sm_auto.o \
./Core/Inc/software_timer.o \
./Core/Inc/traffic_controler.o 

C_DEPS += \
./Core/Inc/SCH.d \
./Core/Inc/button.d \
./Core/Inc/fsm_manual.d \
./Core/Inc/global.d \
./Core/Inc/sm_auto.d \
./Core/Inc/software_timer.d \
./Core/Inc/traffic_controler.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/%.o Core/Inc/%.su: ../Core/Inc/%.c Core/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Inc

clean-Core-2f-Inc:
	-$(RM) ./Core/Inc/SCH.d ./Core/Inc/SCH.o ./Core/Inc/SCH.su ./Core/Inc/button.d ./Core/Inc/button.o ./Core/Inc/button.su ./Core/Inc/fsm_manual.d ./Core/Inc/fsm_manual.o ./Core/Inc/fsm_manual.su ./Core/Inc/global.d ./Core/Inc/global.o ./Core/Inc/global.su ./Core/Inc/sm_auto.d ./Core/Inc/sm_auto.o ./Core/Inc/sm_auto.su ./Core/Inc/software_timer.d ./Core/Inc/software_timer.o ./Core/Inc/software_timer.su ./Core/Inc/traffic_controler.d ./Core/Inc/traffic_controler.o ./Core/Inc/traffic_controler.su

.PHONY: clean-Core-2f-Inc

