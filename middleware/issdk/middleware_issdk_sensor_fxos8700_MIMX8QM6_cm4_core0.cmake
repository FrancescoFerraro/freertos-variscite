if(NOT MIDDLEWARE_ISSDK_SENSOR_FXOS8700_MIMX8QM6_cm4_core0_INCLUDED)
    
    set(MIDDLEWARE_ISSDK_SENSOR_FXOS8700_MIMX8QM6_cm4_core0_INCLUDED true CACHE BOOL "middleware_issdk_sensor_fxos8700 component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/sensors/fxos8700_drv.c
    )


    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/sensors
    )


    include(CMSIS_Driver_Include_I2C_MIMX8QM6_cm4_core0)

    include(CMSIS_Driver_Include_SPI_MIMX8QM6_cm4_core0)

endif()