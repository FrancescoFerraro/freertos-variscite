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


project(rpmsg_lite_pingpong_rtos_sdk_remote)

set(MCUX_SDK_PROJECT_NAME rpmsg_lite_pingpong_rtos_sdk_remote.elf)

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME} 
"${ProjDirPath}/../main_remote.c"
"${ProjDirPath}/../FreeRTOSConfig.h"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../rpmsg_config.h"
"${ProjDirPath}/../rsc_table.c"
"${ProjDirPath}/../rsc_table.h"
"${ProjDirPath}/../remoteproc.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../app_srtm.c"
"${ProjDirPath}/../app_srtm.h"
"${ProjDirPath}/../srtm/channels/srtm_rpmsg_endpoint.h"
"${ProjDirPath}/../srtm/channels/srtm_rpmsg_endpoint.c"
"${ProjDirPath}/../srtm/services/srtm_i2c_service.h"
"${ProjDirPath}/../srtm/services/srtm_i2c_service.c"
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${ProjDirPath}/.. debug
    ${ProjDirPath}/..
    ${ProjDirPath}/../srtm/channels
    ${ProjDirPath}/../srtm/services
)

set(CMAKE_MODULE_PATH
    ${ProjDirPath}/../../../../../../../devices/MIMX8QM6/drivers
    ${ProjDirPath}/../../../../../../../rtos/freertos
    ${ProjDirPath}/../../../../../../../devices/MIMX8QM6
    ${ProjDirPath}/../../../../../../../devices/MIMX8QM6/scfw_api
    ${ProjDirPath}/../../../../../../../devices/MIMX8QM6/utilities
    ${ProjDirPath}/../../../../../../../components/uart
    ${ProjDirPath}/../../../../../../../components/serial_manager
    ${ProjDirPath}/../../../../../../../components/lists
    ${ProjDirPath}/../../../../../../../CMSIS/Include
    ${ProjDirPath}/../../../../../../../components/srtm/port
    ${ProjDirPath}/../../../../../../../components/srtm
    ${ProjDirPath}/../../../../../../../middleware/multicore
)

# include modules
include(driver_irqsteer_MIMX8QM6_cm4_core1)

include(driver_clock_MIMX8QM6_cm4_core1)

include(driver_mu_MIMX8QM6_cm4_core1)

include(middleware_freertos-kernel_MIMX8QM6_cm4_core1)

include(driver_common_MIMX8QM6_cm4_core1)

include(device_MIMX8QM6_CMSIS_MIMX8QM6_cm4_core1)

include(device_MIMX8QM6_startup_MIMX8QM6_cm4_core1)

include(driver_lpuart_MIMX8QM6_cm4_core1)

include(driver_igpio_MIMX8QM6_cm4_core1)

include(driver_scfw_api_MIMX8QM6_cm4_core1)

include(utility_assert_MIMX8QM6_cm4_core1)

include(utility_debug_console_MIMX8QM6_cm4_core1)

include(component_lpuart_adapter_MIMX8QM6_cm4_core1)

include(component_serial_manager_MIMX8QM6_cm4_core1)

include(component_lists_MIMX8QM6_cm4_core1)

include(component_serial_manager_uart_MIMX8QM6_cm4_core1)

include(CMSIS_Include_core_cm4_MIMX8QM6_cm4_core1)

include(CMSIS_Include_common_MIMX8QM6_cm4_core1)

include(CMSIS_Include_dsp_MIMX8QM6_cm4_core1)

include(driver_intmux_MIMX8QM6_cm4_core1)

include(driver_srtm_freertos_MIMX8QM6_cm4_core1)

include(driver_srtm_MIMX8QM6_cm4_core1)

include(driver_lpi2c_MIMX8QM6_cm4_core1)

include(driver_lpi2c_freertos_MIMX8QM6_cm4_core1)

include(middleware_freertos-kernel_extension_MIMX8QM6_cm4_core1)

include(middleware_multicore_rpmsg_lite_imx8qm_m4_freertos_MIMX8QM6_cm4_core1)

include(middleware_multicore_rpmsg_lite_MIMX8QM6_cm4_core1)

include(middleware_freertos-kernel_heap_4_MIMX8QM6_cm4_core1)

include(utilities_misc_utilities_MIMX8QM6_cm4_core1)


TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE m)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE c)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE gcc)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE nosys)

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)

ADD_CUSTOM_COMMAND(TARGET ${MCUX_SDK_PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/${MCUX_SDK_PROJECT_NAME} ${EXECUTABLE_OUTPUT_PATH}/m4_1_image.bin)

