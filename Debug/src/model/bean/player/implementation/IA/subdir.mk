################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/bean/player/implementation/IA/IAPlayer.cpp 

OBJS += \
./src/model/bean/player/implementation/IA/IAPlayer.o 

CPP_DEPS += \
./src/model/bean/player/implementation/IA/IAPlayer.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/bean/player/implementation/IA/%.o: ../src/model/bean/player/implementation/IA/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/mysql -I/usr/include/library -I/usr/include/assimp -I/usr/include/GL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


