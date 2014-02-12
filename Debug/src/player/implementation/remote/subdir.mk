################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/player/implementation/remote/RemotePlayer.cpp 

OBJS += \
./src/player/implementation/remote/RemotePlayer.o 

CPP_DEPS += \
./src/player/implementation/remote/RemotePlayer.d 


# Each subdirectory must supply rules for building sources it contributes
src/player/implementation/remote/%.o: ../src/player/implementation/remote/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/library -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


