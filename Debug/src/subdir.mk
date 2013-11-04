################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Mnemosyne.cpp \
../src/MnemosyneEntry.cpp \
../src/MnemosyneFrame.cpp 

OBJS += \
./src/Mnemosyne.o \
./src/MnemosyneEntry.o \
./src/MnemosyneFrame.o 

CPP_DEPS += \
./src/Mnemosyne.d \
./src/MnemosyneEntry.d \
./src/MnemosyneFrame.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	clang++ -I"pch" -D_DEBUG -I"/home/tizentest/workspace/Mnemosyne/inc" -O0 -g3 -Wall -c -fmessage-length=0 -target i386-tizen-linux-gnueabi -gcc-toolchain /home/tizentest/tizen-sdk/tools/smart-build-interface/../i386-linux-gnueabi-gcc-4.5/ -ccc-gcc-name i386-linux-gnueabi-g++ -march=i386 -Wno-gnu -fPIE --sysroot="/home/tizentest/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-emulator-2.2.native" -I"/home/tizentest/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-emulator-2.2.native/usr/include/libxml2" -I"/home/tizentest/tizen-sdk/library" -I"/home/tizentest/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-emulator-2.2.native/usr/include" -I"/home/tizentest/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-emulator-2.2.native/usr/include/osp" -D_APP_LOG -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


