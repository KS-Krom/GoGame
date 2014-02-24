################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/gui/asset/Asset.cpp 

OBJS += \
./src/gui/asset/Asset.o 

CPP_DEPS += \
./src/gui/asset/Asset.d 


# Each subdirectory must supply rules for building sources it contributes
src/gui/asset/%.o: ../src/gui/asset/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/library -I/usr/include/assimp -I/usr/include/GL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


