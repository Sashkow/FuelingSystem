################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Fuelables/ElectricCar.cpp \
../src/Fuelables/PetrolCar.cpp 

OBJS += \
./src/Fuelables/ElectricCar.o \
./src/Fuelables/PetrolCar.o 

CPP_DEPS += \
./src/Fuelables/ElectricCar.d \
./src/Fuelables/PetrolCar.d 


# Each subdirectory must supply rules for building sources it contributes
src/Fuelables/%.o: ../src/Fuelables/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


