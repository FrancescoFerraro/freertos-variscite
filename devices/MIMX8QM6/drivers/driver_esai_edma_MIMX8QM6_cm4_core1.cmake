if(NOT DRIVER_ESAI_EDMA_MIMX8QM6_cm4_core1_INCLUDED)
    
    set(DRIVER_ESAI_EDMA_MIMX8QM6_cm4_core1_INCLUDED true CACHE BOOL "driver_esai_edma component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/fsl_esai_edma.c
    )


    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/.
    )


    include(driver_esai_MIMX8QM6_cm4_core1)

endif()
