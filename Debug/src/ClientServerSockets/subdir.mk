################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ClientServerSockets/ClientSocket.cpp \
../src/ClientServerSockets/ServerSocket.cpp \
../src/ClientServerSockets/Socket.cpp \
../src/ClientServerSockets/simple_client_main.cpp \
../src/ClientServerSockets/simple_server_main.cpp 

OBJS += \
./src/ClientServerSockets/ClientSocket.o \
./src/ClientServerSockets/ServerSocket.o \
./src/ClientServerSockets/Socket.o \
./src/ClientServerSockets/simple_client_main.o \
./src/ClientServerSockets/simple_server_main.o 

CPP_DEPS += \
./src/ClientServerSockets/ClientSocket.d \
./src/ClientServerSockets/ServerSocket.d \
./src/ClientServerSockets/Socket.d \
./src/ClientServerSockets/simple_client_main.d \
./src/ClientServerSockets/simple_server_main.d 


# Each subdirectory must supply rules for building sources it contributes
src/ClientServerSockets/%.o: ../src/ClientServerSockets/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


