################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/bean/goban/Goban.cpp 

OBJS += \
./src/model/bean/goban/Goban.o 

CPP_DEPS += \
./src/model/bean/goban/Goban.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/bean/goban/%.o: ../src/model/bean/goban/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/mysql -I/usr/include/library -I/usr/include/assimp -I/usr/include/GL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

