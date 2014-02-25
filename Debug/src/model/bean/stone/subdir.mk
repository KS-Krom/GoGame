################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/bean/stone/Stone.cpp 

OBJS += \
./src/model/bean/stone/Stone.o 

CPP_DEPS += \
./src/model/bean/stone/Stone.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/bean/stone/%.o: ../src/model/bean/stone/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/mysql -I/usr/include/library -I/usr/include/assimp -I/usr/include/GL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


