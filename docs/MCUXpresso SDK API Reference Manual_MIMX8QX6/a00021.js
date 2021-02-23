var a00021 =
[
    [ "flexspi_config_t", "a00021.html#a00267", [
      [ "rxSampleClock", "a00021.html#a9a6d5f8a07fb46097107c9eb286b274f", null ],
      [ "enableSckFreeRunning", "a00021.html#aff3b7741db982d0de6b123e449173fea", null ],
      [ "enableCombination", "a00021.html#ac9919bbdaeaf47d77de8503dc794562f", null ],
      [ "enableDoze", "a00021.html#a874d2c8764b144c7cb1e490721b92c79", null ],
      [ "enableHalfSpeedAccess", "a00021.html#a8970f0b6e4456a5aef0b5062b5081653", null ],
      [ "enableSckBDiffOpt", "a00021.html#adb81f059fd762c30013c130f4672a89e", null ],
      [ "enableSameConfigForAll", "a00021.html#a6b92b43578a6461b8a2790bdb3f6ef6d", null ],
      [ "seqTimeoutCycle", "a00021.html#ac441de6664a70ba5569701f7a627a071", null ],
      [ "ipGrantTimeoutCycle", "a00021.html#af4432f3255d836eae19a72b45dc1b012", null ],
      [ "txWatermark", "a00021.html#a4969ebe59f35ccb2921f06ff96089fd8", null ],
      [ "rxWatermark", "a00021.html#ac7785802f92e16462a68c6356ca33c90", null ],
      [ "enableAHBWriteIpTxFifo", "a00021.html#a9a18e13964c232842cf6ae96edf28ea1", null ],
      [ "enableAHBWriteIpRxFifo", "a00021.html#aa5c34f776b52effb6911953cbaf0de2e", null ],
      [ "ahbGrantTimeoutCycle", "a00021.html#ab4f4961d0cb1356098f4ec8391abb94d", null ],
      [ "ahbBusTimeoutCycle", "a00021.html#ae33367c97edea46d2a7c5e13fe667907", null ],
      [ "resumeWaitCycle", "a00021.html#a24f916c7678066c312431c726a4b5816", null ],
      [ "buffer", "a00021.html#a3762c6e88eb7f6124ba28bcbafbb3f0a", null ],
      [ "enableClearAHBBufferOpt", "a00021.html#a469a7ac283caeb330b2fe4737741d1f1", null ],
      [ "enableReadAddressOpt", "a00021.html#a52e4621d2ad8fef342bba460e433ecec", null ],
      [ "enableAHBPrefetch", "a00021.html#ad8233ff382b0d721fa7a0b96ce478ad8", null ],
      [ "enableAHBBufferable", "a00021.html#aa85616f967cd9582bf3212e25d8aaee9", null ],
      [ "enableAHBCachable", "a00021.html#a201560e33a07598c65cb1ccb7d510446", null ]
    ] ],
    [ "flexspi_device_config_t", "a00021.html#a00268", [
      [ "flexspiRootClk", "a00021.html#a809837315f7851315f2eb83bfee03b9d", null ],
      [ "isSck2Enabled", "a00021.html#a4dc1ab693f5c62858f216eeafc8dcdaa", null ],
      [ "flashSize", "a00021.html#a341c39425de7eb023afb4245b8953377", null ],
      [ "CSIntervalUnit", "a00021.html#a0ba4f8679ec1ea8cde256ca5094c3a93", null ],
      [ "CSInterval", "a00021.html#af9965ff1bce10b973025a54f15c1ab4f", null ],
      [ "CSHoldTime", "a00021.html#ac4c58d5a47f7ddb3b698953bcb5e7255", null ],
      [ "CSSetupTime", "a00021.html#a2c7d1e71edd03848d3296f21846f0012", null ],
      [ "dataValidTime", "a00021.html#a0b4d870b95326740e1360e4bdd7decce", null ],
      [ "columnspace", "a00021.html#ad96a836bc4821b39e1dd577d2cb1890d", null ],
      [ "enableWordAddress", "a00021.html#a8c16a3ff44a3b77a078698e454e56f73", null ],
      [ "AWRSeqIndex", "a00021.html#a2902cf884ec786ae844bb70081c4c66a", null ],
      [ "AWRSeqNumber", "a00021.html#a6b9beed37b207c23d3f94621a14ae851", null ],
      [ "ARDSeqIndex", "a00021.html#a8b9e4624335d717f06d892f3b9b0dd59", null ],
      [ "ARDSeqNumber", "a00021.html#a2eda9dcea9c95e6ea8af30c8877ccc3f", null ],
      [ "AHBWriteWaitUnit", "a00021.html#a90b3175a91354f25e6632a323564e495", null ],
      [ "AHBWriteWaitInterval", "a00021.html#ac257c0df9ebe1e95af1b2eccd9bac6da", null ],
      [ "enableWriteMask", "a00021.html#a537cacf6f847b62d33ef849149984ee3", null ]
    ] ],
    [ "flexspi_transfer_t", "a00021.html#a00269", [
      [ "deviceAddress", "a00021.html#ad60ddfe61616ffc2b1c289b398249687", null ],
      [ "port", "a00021.html#a494f8e3695226d89469edfacf040c779", null ],
      [ "cmdType", "a00021.html#a2d9a15603f7c60495351d6e784efa21f", null ],
      [ "seqIndex", "a00021.html#a20386fec82b36c85cbf8d25aa7981f49", null ],
      [ "SeqNumber", "a00021.html#a237b92ed61e60a2dc290e193793bc9e9", null ],
      [ "data", "a00021.html#a9f868d6eaf921590653512ce58480f6b", null ],
      [ "dataSize", "a00021.html#a80b74d7879a7359ad5f79980ca5f3e53", null ]
    ] ],
    [ "flexspi_handle_t", "a00021.html#a00200", [
      [ "state", "a00021.html#a933e9a2e61686adbe8e85cc6e996c707", null ],
      [ "data", "a00021.html#abce3dc34abdfbdcbdafe2c6745940e5a", null ],
      [ "dataSize", "a00021.html#af398d4e2e49ebb106f29a2afe50e0f97", null ],
      [ "transferTotalSize", "a00021.html#a545846b125a3a78dc0328b3a446a132e", null ],
      [ "completionCallback", "a00021.html#a3fb995fc8cad27df08d2581224ee3e46", null ],
      [ "userData", "a00021.html#a39db7f929a1fc22a199ccaf739fa6f6c", null ]
    ] ],
    [ "FSL_FLEXSPI_DRIVER_VERSION", "a00021.html#gaccd01fe073049ed2082d17703c25ee3e", null ],
    [ "FLEXSPI_LUT_SEQ", "a00021.html#ga179bcd92daf142c311948082c06c848a", null ],
    [ "flexspi_transfer_callback_t", "a00021.html#ga40558fffabe6bc75ad0d978ac56726a7", [
      [ "kStatus_FLEXSPI_Busy", "a00021.html#gga96a58e29e8dbf2b5bdeb775cba46556ea21bccbd47a8f5f8690d0825b6cb41761", null ],
      [ "kStatus_FLEXSPI_SequenceExecutionTimeout", "a00021.html#gga96a58e29e8dbf2b5bdeb775cba46556eaf247efbe53e40fe0001914530d483bdf", null ],
      [ "kStatus_FLEXSPI_IpCommandSequenceError", "a00021.html#gga96a58e29e8dbf2b5bdeb775cba46556ea6950d19c6f71e399821ae198f74f65e9", null ],
      [ "kStatus_FLEXSPI_IpCommandGrantTimeout", "a00021.html#gga96a58e29e8dbf2b5bdeb775cba46556eaad44a571485ffa081f6a72fce35458ce", null ],
      [ "kFLEXSPI_Command_STOP", "a00021.html#ggab48899087cc647f0f791ed0c459adc53acab6a9e0362f2c1fb8984913dafeca33", null ],
      [ "kFLEXSPI_Command_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a1c8772bef3a08e52dc80f57af34366ba", null ],
      [ "kFLEXSPI_Command_RADDR_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a29dd81e7a6f0ed9e0197e2b0d60ba7f4", null ],
      [ "kFLEXSPI_Command_CADDR_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a1a3fa82cf8b0677dc42f839f98125fd2", null ],
      [ "kFLEXSPI_Command_MODE1_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a1f0865c56954d718bcb029efca53d716", null ],
      [ "kFLEXSPI_Command_MODE2_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53acaf987f395572783c1bcc49c7c733562", null ],
      [ "kFLEXSPI_Command_MODE4_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a539d1d925c24c1d5d28db53145ac0098", null ],
      [ "kFLEXSPI_Command_MODE8_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a75da61b0b5a52a62aec4cfd9beb74c41", null ],
      [ "kFLEXSPI_Command_WRITE_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a9e30b0f10c66e9ae6acb06829dccb787", null ],
      [ "kFLEXSPI_Command_READ_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53adf06bfb1db55de99a9c1332cb52acb0a", null ],
      [ "kFLEXSPI_Command_LEARN_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a4b65366f6884c88d255a7189d771fdfc", null ],
      [ "kFLEXSPI_Command_DATSZ_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a20d443a0566f4468d82573f26f8cd67a", null ],
      [ "kFLEXSPI_Command_DUMMY_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53ac9f6c32fe54dadad88b44186ef5a1799", null ],
      [ "kFLEXSPI_Command_DUMMY_RWDS_SDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a0ea62a346e865a749143ebb6ea0706b5", null ],
      [ "kFLEXSPI_Command_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a1eca9a5742e650263aaa264bdfee4a22", null ],
      [ "kFLEXSPI_Command_RADDR_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a4e44e443ba90f7183a52f8f9eabe2c31", null ],
      [ "kFLEXSPI_Command_CADDR_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53af58fe6950b4f1b472bf81ddcab42709f", null ],
      [ "kFLEXSPI_Command_MODE1_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53afe085498075659a0c6989dbca3591c4a", null ],
      [ "kFLEXSPI_Command_MODE2_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53aa09cd14e9354e91fefe5e1796b49ee82", null ],
      [ "kFLEXSPI_Command_MODE4_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a4734dbae99656af5500d65766743862e", null ],
      [ "kFLEXSPI_Command_MODE8_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53af5ee8359bc3d1444ca5611ea5da5de25", null ],
      [ "kFLEXSPI_Command_WRITE_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53ae5ac267451675a466b737ca4ab605929", null ],
      [ "kFLEXSPI_Command_READ_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a91bceb3ad87da1b6c2723ed7b07f2cf1", null ],
      [ "kFLEXSPI_Command_LEARN_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a1b51830f2992cb7ae10ca35736663e4e", null ],
      [ "kFLEXSPI_Command_DATSZ_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a22097b53c3b05c555bc76d4b659b662e", null ],
      [ "kFLEXSPI_Command_DUMMY_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a2ce6180762ad977e0284e139bbc91c1a", null ],
      [ "kFLEXSPI_Command_DUMMY_RWDS_DDR", "a00021.html#ggab48899087cc647f0f791ed0c459adc53a0b4f03d35c08558f4094f7e1ba13a22e", null ],
      [ "kFLEXSPI_Command_JUMP_ON_CS", "a00021.html#ggab48899087cc647f0f791ed0c459adc53ac3abaaee8f2a43ab63315ce05ba485b0", null ]
    ] ],
    [ "flexspi_pad_t", "a00021.html#gac53270703e6ff35007bdd30e9921e187", [
      [ "kFLEXSPI_1PAD", "a00021.html#ggac53270703e6ff35007bdd30e9921e187aabb7baedf9c64ad0a382587105cbf3b4", null ],
      [ "kFLEXSPI_2PAD", "a00021.html#ggac53270703e6ff35007bdd30e9921e187a95d1a2d72fa9c8ca2a221cc3c4f431be", null ],
      [ "kFLEXSPI_4PAD", "a00021.html#ggac53270703e6ff35007bdd30e9921e187abfb84ebae8934b725e4164d1b643931c", null ],
      [ "kFLEXSPI_8PAD", "a00021.html#ggac53270703e6ff35007bdd30e9921e187ab67dd50438697de88314abe08598bfd6", null ]
    ] ],
    [ "flexspi_flags_t", "a00021.html#gaf305b6202c5df2ce9ffc2bc86a02d31c", [
      [ "kFLEXSPI_SequenceExecutionTimeoutFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca926d49476fe684b0c912bf39124761b6", null ],
      [ "kFLEXSPI_AhbBusTimeoutFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31caaff7260c000311495dbae646cf7cf977", null ],
      [ "kFLEXSPI_SckStoppedBecauseTxEmptyFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31cab8e2204cbed4f7b443052aeab6c9495b", null ],
      [ "kFLEXSPI_SckStoppedBecauseRxFullFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca8f0e6574ce2eda2a9080b457dcc17369", null ],
      [ "kFLEXSPI_DataLearningFailedFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca1f166067d97bf3063fe8e721934d2a3b", null ],
      [ "kFLEXSPI_IpTxFifoWatermarkEmptyFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31caf6fff015f6467f94244ccfce73ed45ea", null ],
      [ "kFLEXSPI_IpRxFifoWatermarkAvailableFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca467607530d9f93e3b4dd24ed30b1daf9", null ],
      [ "kFLEXSPI_AhbCommandSequenceErrorFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31caeade1012fb934333db2a0058c366f731", null ],
      [ "kFLEXSPI_IpCommandSequenceErrorFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca37ceccdbb6bc3d936662788eb3cdba07", null ],
      [ "kFLEXSPI_AhbCommandGrantTimeoutFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31cade934b2883d46cae2b46f620fcd993cc", null ],
      [ "kFLEXSPI_IpCommandGrantTimeoutFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31caadd6f24bbc89ba4be6200111fb20982b", null ],
      [ "kFLEXSPI_IpCommandExecutionDoneFlag", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca25be525051c616ada040c8ed6d69ef17", null ],
      [ "kFLEXSPI_AllInterruptFlags", "a00021.html#ggaf305b6202c5df2ce9ffc2bc86a02d31ca0b68913b136867c72818d8f434652111", null ]
    ] ],
    [ "flexspi_read_sample_clock_t", "a00021.html#gae77f49e32c3eaf497e9a28369bbf8053", [
      [ "kFLEXSPI_ReadSampleClkLoopbackInternally", "a00021.html#ggae77f49e32c3eaf497e9a28369bbf8053af6182ef9c776fa291cbbd34a727d4a9d", null ],
      [ "kFLEXSPI_ReadSampleClkLoopbackFromDqsPad", "a00021.html#ggae77f49e32c3eaf497e9a28369bbf8053a86986f70a9cd9123dc708a4cd9439f14", null ],
      [ "kFLEXSPI_ReadSampleClkLoopbackFromSckPad", "a00021.html#ggae77f49e32c3eaf497e9a28369bbf8053aa10f2854d50ae1cf60da887cb5ee8721", null ],
      [ "kFLEXSPI_ReadSampleClkExternalInputFromDqsPad", "a00021.html#ggae77f49e32c3eaf497e9a28369bbf8053a37b19889732ad1d8d5336452577a6fe5", null ]
    ] ],
    [ "flexspi_cs_interval_cycle_unit_t", "a00021.html#ga446516de2be1ce209435bd6743164557", [
      [ "kFLEXSPI_CsIntervalUnit1SckCycle", "a00021.html#gga446516de2be1ce209435bd6743164557a0c13470fc2dd7cdae32d89629f476bc2", null ],
      [ "kFLEXSPI_CsIntervalUnit256SckCycle", "a00021.html#gga446516de2be1ce209435bd6743164557a39cdab3817b97ee2783ceb0a48784c44", null ]
    ] ],
    [ "flexspi_ahb_write_wait_unit_t", "a00021.html#ga3c773143ad080de42e5e18928fb26f71", [
      [ "kFLEXSPI_AhbWriteWaitUnit2AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71a77bd176c235c440474130c9333acfe36", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit8AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71a507634102520b1f1b227b4baaabdd562", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit32AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71a4b54ae64ef18997af8bc7ed0d41c7ef5", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit128AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71aec6164016a913fdb5fc174c39af1296c", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit512AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71ad97d3600a3f5df7e13fe0a3343f0ddfc", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit2048AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71aa424000e33c88b2e93529d1503f40d86", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit8192AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71ab49ac5e2a68f75adcb96d39359e21a0b", null ],
      [ "kFLEXSPI_AhbWriteWaitUnit32768AhbCycle", "a00021.html#gga3c773143ad080de42e5e18928fb26f71af64e1be9ff0301d3f418ed783c045c1e", null ]
    ] ],
    [ "flexspi_ip_error_code_t", "a00021.html#gaa59b8ddbe616c8ba0019f768ace1527f", [
      [ "kFLEXSPI_IpCmdErrorNoError", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa5a9ef1b8776c5e91f94045d0c488cc92", null ],
      [ "kFLEXSPI_IpCmdErrorJumpOnCsInIpCmd", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa09b36a52a3719012b6262d0df758c26c", null ],
      [ "kFLEXSPI_IpCmdErrorUnknownOpCode", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa2566abfe918545548cdc391ecad3562d", null ],
      [ "kFLEXSPI_IpCmdErrorSdrDummyInDdrSequence", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa3a45578abf83e3679f13f7a47692b0b2", null ],
      [ "kFLEXSPI_IpCmdErrorDdrDummyInSdrSequence", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa2b93718689f2d9dd58d124fd25ff2f85", null ],
      [ "kFLEXSPI_IpCmdErrorInvalidAddress", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa5a974de28e0771b0e93ecd12df485a62", null ],
      [ "kFLEXSPI_IpCmdErrorSequenceExecutionTimeout", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fad2b76bec366730732a07c2c7a9e5aeec", null ],
      [ "kFLEXSPI_IpCmdErrorFlashBoundaryAcrosss", "a00021.html#ggaa59b8ddbe616c8ba0019f768ace1527fa2f318a896dfe31a4b8b507daf339c16d", null ]
    ] ],
    [ "flexspi_ahb_error_code_t", "a00021.html#gac8c57dd8e797af1040fd9fcc21b10917", [
      [ "kFLEXSPI_AhbCmdErrorNoError", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917a3b055af2f8c32b1c20c781f9be9406e2", null ],
      [ "kFLEXSPI_AhbCmdErrorJumpOnCsInWriteCmd", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917aa1a1fb4ea86b9f3d159cf4af471fff6a", null ],
      [ "kFLEXSPI_AhbCmdErrorUnknownOpCode", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917a028741e0f08e9f253b43a5ff5db23a3f", null ],
      [ "kFLEXSPI_AhbCmdErrorSdrDummyInDdrSequence", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917a4ae2658aaf3b9e392409233fb4e103e6", null ],
      [ "kFLEXSPI_AhbCmdErrorDdrDummyInSdrSequence", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917a33e985c357a9fd0161b79b04ce94deb9", null ],
      [ "kFLEXSPI_AhbCmdSequenceExecutionTimeout", "a00021.html#ggac8c57dd8e797af1040fd9fcc21b10917a66bb317d820fe1aa2f180ab88f680d31", null ]
    ] ],
    [ "flexspi_port_t", "a00021.html#gac505db1d39e88405032305cfe57c8d56", [
      [ "kFLEXSPI_PortA1", "a00021.html#ggac505db1d39e88405032305cfe57c8d56a280a07425f3d2e4b876b51c6216da136", null ],
      [ "kFLEXSPI_PortA2", "a00021.html#ggac505db1d39e88405032305cfe57c8d56a9766a70521fd112539bb3ec1b934521f", null ],
      [ "kFLEXSPI_PortB1", "a00021.html#ggac505db1d39e88405032305cfe57c8d56a8150e6d14305f5cf93bdab0bc0309413", null ],
      [ "kFLEXSPI_PortB2", "a00021.html#ggac505db1d39e88405032305cfe57c8d56a4112f4afdbf272c68d4adfd7a608c561", null ]
    ] ],
    [ "flexspi_arb_command_source_t", "a00021.html#ga884bdaa9f8e8c1f5bd80b483c5097489", null ],
    [ "flexspi_command_type_t", "a00021.html#ga97ab40a33a8a6db9d0482c28db0b05f9", [
      [ "kFLEXSPI_Command", "a00021.html#gga97ab40a33a8a6db9d0482c28db0b05f9a434864ad0a1db118a09007d87d2f303d", null ],
      [ "kFLEXSPI_Config", "a00021.html#gga97ab40a33a8a6db9d0482c28db0b05f9a30c6392c74b9546179fe975bdbe7d77e", null ]
    ] ],
    [ "FLEXSPI_GetInstance", "a00021.html#ga91bdb9ace32497122bb682c4d6e19eeb", null ],
    [ "FLEXSPI_CheckAndClearError", "a00021.html#ga32000baf3445d1b43444fd0dc0dbb643", null ],
    [ "FLEXSPI_Init", "a00021.html#ga8f12065e78d8a8c6527b0a937f06316d", null ],
    [ "FLEXSPI_GetDefaultConfig", "a00021.html#ga87d69b2d33a696ec0f1f9e9a361c0e4b", null ],
    [ "FLEXSPI_Deinit", "a00021.html#gaad2d8ae42188749382c0d1dd0f6572d0", null ],
    [ "FLEXSPI_UpdateDllValue", "a00021.html#ga03e96ef7a2fbf0c6a931b4d6701bb573", null ],
    [ "FLEXSPI_SetFlashConfig", "a00021.html#ga43bbcb0a954c93243a0dc472e07db7d3", null ],
    [ "FLEXSPI_SoftwareReset", "a00021.html#ga9d6bcd77beebeff56c9e3ffda2530f36", null ],
    [ "FLEXSPI_Enable", "a00021.html#ga03b576eeef78cff73cfc5aba065a99d4", null ],
    [ "FLEXSPI_EnableInterrupts", "a00021.html#ga2f7c7641c3531892350f8fb6bfedba67", null ],
    [ "FLEXSPI_DisableInterrupts", "a00021.html#ga0ed8c3ce0f2b36a1c43d9fa133630455", null ],
    [ "FLEXSPI_EnableTxDMA", "a00021.html#gad463c753b8ebc2856957adc8ba4e2e41", null ],
    [ "FLEXSPI_EnableRxDMA", "a00021.html#gaf4f5b43a95ecb42717665b540c3b4abd", null ],
    [ "FLEXSPI_GetTxFifoAddress", "a00021.html#gab0476f9699fc375fee33a5afc7ec5ee8", null ],
    [ "FLEXSPI_GetRxFifoAddress", "a00021.html#ga34c014e6d3d86f854f2ff767f0891dbe", null ],
    [ "FLEXSPI_ResetFifos", "a00021.html#gadd183feac77a644fe03802bd2989d1f7", null ],
    [ "FLEXSPI_GetFifoCounts", "a00021.html#ga10b56b803c3aeb60ff94e2385230799e", null ],
    [ "FLEXSPI_GetInterruptStatusFlags", "a00021.html#ga522bf36c8d24a9e50756fbe2c92982fc", null ],
    [ "FLEXSPI_ClearInterruptStatusFlags", "a00021.html#ga3a374e8190cb2a45fa1eea1ffa31b912", null ],
    [ "FLEXSPI_GetDataLearningPhase", "a00021.html#gafaeaaa4cd03e24157a63fe83ffd62e17", null ],
    [ "FLEXSPI_GetArbitratorCommandSource", "a00021.html#gabfa17750808e32b1bd7504abd27f0165", null ],
    [ "FLEXSPI_GetIPCommandErrorCode", "a00021.html#gad88eb12348e8f55a70373b400d1de4fc", null ],
    [ "FLEXSPI_GetAHBCommandErrorCode", "a00021.html#ga33ef8b44ab234ba4c66dda29d3dad20c", null ],
    [ "FLEXSPI_GetBusIdleStatus", "a00021.html#ga7ba5bbdc98dd7c46c46ae4f5c5cad2da", null ],
    [ "FLEXSPI_UpdateRxSampleClock", "a00021.html#ga482b015aec3e0491c9359e698ca638a1", null ],
    [ "FLEXSPI_EnableIPParallelMode", "a00021.html#ga00e6635ac6316340e94ec67306cd7e83", null ],
    [ "FLEXSPI_EnableAHBParallelMode", "a00021.html#ga948ce06b1ddd4cf1816701d82816ba96", null ],
    [ "FLEXSPI_UpdateLUT", "a00021.html#ga160f066685276e79b0f79968e3087489", null ],
    [ "FLEXSPI_WriteData", "a00021.html#ga054519fc1555d02f1c3e6652631e50ae", null ],
    [ "FLEXSPI_ReadData", "a00021.html#ga05c507ce3babcb459cda71a4ab347eae", null ],
    [ "FLEXSPI_WriteBlocking", "a00021.html#ga280f49b55e211c416f38085dd67c0559", null ],
    [ "FLEXSPI_ReadBlocking", "a00021.html#ga3c4c3127c9420d3a97755dec9931a306", null ],
    [ "FLEXSPI_TransferBlocking", "a00021.html#ga7a3c2f27e20ac2862f61d5e393abf8d7", null ],
    [ "FLEXSPI_TransferCreateHandle", "a00021.html#ga6f3f9cb5f3499ba238a3f316949742f0", null ],
    [ "FLEXSPI_TransferNonBlocking", "a00021.html#ga9d2eccbfd3eaf1554fd287a4a808956d", null ],
    [ "FLEXSPI_TransferGetCount", "a00021.html#ga0aaa78d6b73d8f45063c21378fd60eb2", null ],
    [ "FLEXSPI_TransferAbort", "a00021.html#ga70042fa4a608b8e1db6df774a3d0a120", null ],
    [ "FLEXSPI_TransferHandleIRQ", "a00021.html#gaa62fce61693a55bc12f31176524da48d", null ]
];