# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 3.1.1)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

SET(EXECUTABLE_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})
SET(LIBRARY_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})


project(cmsis_lpspi_int_b2b_xfer_master_m40)

set(MCUX_SDK_PROJECT_NAME cmsis_lpspi_int_b2b_xfer_master_m40.elf)

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME} 
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../empty_rsc_table.c"
"${ProjDirPath}/../cmsis_lpspi_int_b2b_transfer_master.c"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../RTE_Device.h"
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${ProjDirPath}/..
)

set(CMAKE_MODULE_PATH
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6/drivers
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6/utilities/debug_console_lite
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6/cmsis_drivers
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6/scfw_api
    ${ProjDirPath}/../../../../../../../../components/uart
    ${ProjDirPath}/../../../../../../../../components/lists
    ${ProjDirPath}/../../../../../../../../CMSIS/Include
    ${ProjDirPath}/../../../../../../../../CMSIS/Driver/Include
    ${ProjDirPath}/../../../../../../../../devices/MIMX8QM6/utilities
)

# include modules
include(driver_irqsteer_MIMX8QM6_cm4_core0)

include(driver_memory_MIMX8QM6_cm4_core0)

include(driver_dma3_MIMX8QM6_cm4_core0)

include(utility_debug_console_lite_MIMX8QM6_cm4_core0)

include(utility_assert_lite_MIMX8QM6_cm4_core0)

include(driver_clock_MIMX8QM6_cm4_core0)

include(driver_lpuart_MIMX8QM6_cm4_core0)

include(driver_lpspi_MIMX8QM6_cm4_core0)

include(driver_lpspi_edma_MIMX8QM6_cm4_core0)

include(driver_cmsis_lpspi_MIMX8QM6_cm4_core0)

include(driver_common_MIMX8QM6_cm4_core0)

include(device_MIMX8QM6_CMSIS_MIMX8QM6_cm4_core0)

include(device_MIMX8QM6_startup_MIMX8QM6_cm4_core0)

include(driver_igpio_MIMX8QM6_cm4_core0)

include(driver_scfw_api_MIMX8QM6_cm4_core0)

include(component_lpuart_adapter_MIMX8QM6_cm4_core0)

include(component_lists_MIMX8QM6_cm4_core0)

include(CMSIS_Include_core_cm4_MIMX8QM6_cm4_core0)

include(CMSIS_Include_common_MIMX8QM6_cm4_core0)

include(CMSIS_Include_dsp_MIMX8QM6_cm4_core0)

include(CMSIS_Driver_Include_SPI_MIMX8QM6_cm4_core0)

include(CMSIS_Driver_Include_Common_MIMX8QM6_cm4_core0)

include(utilities_misc_utilities_MIMX8QM6_cm4_core0)


TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE m)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE c)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE gcc)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE nosys)

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)

ADD_CUSTOM_COMMAND(TARGET ${MCUX_SDK_PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/${MCUX_SDK_PROJECT_NAME} ${EXECUTABLE_OUTPUT_PATH}/m4_image.bin)

