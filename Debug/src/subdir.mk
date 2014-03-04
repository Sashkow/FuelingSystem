################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/FuelType.cpp \
../src/Simulation.cpp \
../src/VehicleFactory.cpp \
../src/main.cpp 

OBJS += \
./src/FuelType.o \
./src/Simulation.o \
./src/VehicleFactory.o \
./src/main.o 

CPP_DEPS += \
./src/FuelType.d \
./src/Simulation.d \
./src/VehicleFactory.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


