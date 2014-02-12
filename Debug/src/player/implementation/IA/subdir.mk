################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/player/implementation/IA/IAPlayer.cpp 

OBJS += \
./src/player/implementation/IA/IAPlayer.o 

CPP_DEPS += \
./src/player/implementation/IA/IAPlayer.d 


# Each subdirectory must supply rules for building sources it contributes
src/player/implementation/IA/%.o: ../src/player/implementation/IA/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


