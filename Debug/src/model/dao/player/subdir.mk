################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/dao/player/PlayerDao.cpp 

OBJS += \
./src/model/dao/player/PlayerDao.o 

CPP_DEPS += \
./src/model/dao/player/PlayerDao.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/dao/player/%.o: ../src/model/dao/player/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/mysql -I/usr/include/library -I/usr/include/assimp -I/usr/include/GL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


