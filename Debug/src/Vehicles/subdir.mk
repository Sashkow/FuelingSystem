################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Vehicles/ElectricCar.cpp \
../src/Vehicles/PetrolCar.cpp 

OBJS += \
./src/Vehicles/ElectricCar.o \
./src/Vehicles/PetrolCar.o 

CPP_DEPS += \
./src/Vehicles/ElectricCar.d \
./src/Vehicles/PetrolCar.d 


# Each subdirectory must supply rules for building sources it contributes
src/Vehicles/%.o: ../src/Vehicles/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


