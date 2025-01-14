/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */
#ifndef ZBOSS_BUILD_INFO_H__
#define ZBOSS_BUILD_INFO_H__

/**
 * This is an autogenerated file.
 * Please use release scripts to update it's contents.
 *
 * Repositories:
 * platform_ncs       db349cfbf4d32d03bc8ca2b1934c055cedd38746 https://projecttools.nordicsemi.no/bitbucket/scm/zoi/platform_ncs.git
 * zboss-stack-src    527882038813c10bc16c58b3822728f01839f8e4 https://projecttools.nordicsemi.no/bitbucket/scm/zoi/zboss_stable
 * zboss-stack-doc    a9e550875d1a486bb829f4be6ab45042cb758e02 https://projecttools.nordicsemi.no/bitbucket/scm/zoi/zboss_doc
 * nrf                2dee59af02a114e7fc7856bee2e35fc9f37d7ddd https://github.com/nrfconnect/sdk-nrf
 * zephyr             0a2e205750dc7eff8767afa543b2fd23a1fbb332 https://github.com/nrfconnect/sdk-zephyr
 * wfa-qt-control-app af011c8a8d338ba529f17aed2cc2ef4c1c591a58 https://github.com/nrfconnect/sdk-wi-fiquicktrack-controlappc
 * mcuboot            12e5ee106034972b0f1074d6f2261b2b39d1501b https://github.com/nrfconnect/sdk-mcuboot
 * qcbor              751d36583a9ce1a640900c57e13c9b6b8f3a2ba2 https://github.com/laurencelundblade/QCBOR
 * mbedtls            98603a8c91660beac00e0ee1d76198fb7c4ed29b https://github.com/nrfconnect/sdk-mbedtls
 * oberon-psa-crypto  21728cf8402ac567326d0d69eec891a2bfdb8ea3 https://github.com/nrfconnect/sdk-oberon-psa-crypto
 * nrfxlib            1ab292d04974dc97523c00dfa82eb461fd27bdb1 https://github.com/nrfconnect/sdk-nrfxlib
 * trusted-firmware-m f2bf78452629355e4180dc36756f6c1becc819fa https://github.com/nrfconnect/sdk-trusted-firmware-m
 * psa-arch-tests     3da9313e64806d352c519e3205e81cf959067588 https://github.com/nrfconnect/sdk-psa-arch-tests
 * matter             9a6edcf725a9766e513fe789745da92e0f640cb1 https://github.com/nrfconnect/sdk-connectedhomeip
 * soc-hwmv1          bd39fcf7832b4eb682a9c5ef5ad0e3b2e34cd502 https://github.com/nrfconnect/sdk-soc-hwmv1
 * cjson              c6af068b7f05207b28d68880740e4b9ec1e4b50a https://github.com/nrfconnect/sdk-cjson
 * azure-sdk-for-c    308c171cb4b5eed266649012a68406487ec81fb2 https://github.com/nrfconnect/azure-sdk-for-c
 * cirrus             3873a08377d93a479105a75ac390d3bbcd31d690 https://github.com/nrfconnect/sdk-mcu-drivers
 * openthread         ee86dc26d71c9ef021fad8a28898829df772011a https://github.com/nrfconnect/sdk-openthread
 * suit-generator     8f9ce9039e6fb8584dc915944b2bc275856757c0 https://github.com/nrfconnect/suit-generator
 * suit-processor     6802f3008cba16a74a8c65814af00808327a7ee7 https://github.com/nrfconnect/suit-processor
 * cmock              f65066f15d8248e6dcb778efb8739904a4512087 https://github.com/ThrowTheSwitch/cmock
 * memfault-firmware-sdk 47d69c572c44c19d23936193629e19372e22c7e2 https://github.com/memfault/memfault-firmware-sdk
 * bsim               1f242f4ed7fc141fdfcfeca8d21c6d9e801179d7 https://github.com/BabbleSim/bsim_west
 * coremark           d5fad6bd094899101a4e5fd53af7298160ced6ab https://github.com/eembc/coremark
 * canopennode        dec12fa3f0d790cafa8414a4c2930ea71ab72ffd https://github.com/zephyrproject-rtos/canopennode
 * chre               3b32c76efee705af146124fb4190f71be5a4e36e https://github.com/zephyrproject-rtos/chre
 * lz4                11b8a1e22fa651b524494e55d22b69d3d9cebcfd https://github.com/zephyrproject-rtos/lz4
 * nanopb             4474bd35bd39de067f0532a1b19ce3aed9ed9807 https://github.com/zephyrproject-rtos/nanopb
 * tf-m-tests         d552e4f18b92032bd335d5e3aa312f6acd82a83b https://github.com/zephyrproject-rtos/tf-m-tests
 * zscilib            ee1b287d9dd07208d2cc52284240ac25bb66eae3 https://github.com/zephyrproject-rtos/zscilib
 * cmsis              4b96cbb174678dcd3ca86e11e1f24bc5f8726da0 https://github.com/zephyrproject-rtos/cmsis
 * cmsis-dsp          6489e771e9c405f1763b52d64a3f17a1ec488ace https://github.com/zephyrproject-rtos/cmsis-dsp
 * cmsis-nn           ea987c1ca661be723de83bd159aed815d6cbd430 https://github.com/zephyrproject-rtos/cmsis-nn
 * edtt               b9ca3c7030518f07b7937dacf970d37a47865a76 https://github.com/zephyrproject-rtos/edtt
 * fatfs              427159bf95ea49b7680facffaa29ad506b42709b https://github.com/zephyrproject-rtos/fatfs
 * hal_nordic         54bde38c6f6ffb3780b26ae728cf79426184384e https://github.com/zephyrproject-rtos/hal_nordic
 * hal_st             b2f548fe672f24122c7f92027b2c9eeea8a0483a https://github.com/zephyrproject-rtos/hal_st
 * hal_wurthelektronik e5bcb2eac1bb9639ce13b4dafc78eb254e014342 https://github.com/zephyrproject-rtos/hal_wurthelektronik
 * hostap             44285310338f423021cc7df2c1056256882a00cc https://github.com/zephyrproject-rtos/hostap
 * libmetal           a6851ba6dba8c9e87d00c42f171a822f7a29639b https://github.com/zephyrproject-rtos/libmetal
 * liblc3             1a5938ebaca4f13fe79ce074f5dee079783aa29f https://github.com/zephyrproject-rtos/liblc3
 * littlefs           009bcff0ed4853a53df8256039fa815bda6854dd https://github.com/zephyrproject-rtos/littlefs
 * loramac-node       fb00b383072518c918e2258b0916c996f2d4eebe https://github.com/zephyrproject-rtos/loramac-node
 * lvgl               2b498e6f36d6b82ae1da12c8b7742e318624ecf5 https://github.com/zephyrproject-rtos/lvgl
 * mipi-sys-t         71ace1f5caa03e56c8740a09863e685efb4b2360 https://github.com/zephyrproject-rtos/mipi-sys-t
 * net-tools          93acc8bac4661e74e695eb1aea94c7c5262db2e2 https://github.com/zephyrproject-rtos/net-tools
 * nrf_hw_models      3cfca0192ff84da919e9bc7978bcc2239cd6a395 https://github.com/zephyrproject-rtos/nrf_hw_models
 * nrf_wifi           71261e2b719b98500b7741c3398a74a5fb631596 https://github.com/zephyrproject-rtos/nrf_wifi
 * open-amp           b735edbc739ad59156eb55bb8ce2583d74537719 https://github.com/zephyrproject-rtos/open-amp
 * picolibc           27746bbc246841852912fc3bb5b45094cd8a505a https://github.com/zephyrproject-rtos/picolibc
 * segger             b011c45b585e097d95d9cf93edf4f2e01588d3cd https://github.com/zephyrproject-rtos/segger
 * tinycrypt          1012a3ebee18c15ede5efc8332ee2fc37817670f https://github.com/zephyrproject-rtos/tinycrypt
 * uoscore-uedhoc     84ef879a46d7bfd9a423fbfb502b04289861f9ea https://github.com/zephyrproject-rtos/uoscore-uedhoc
 * zcbor              47f34dd7f5284e8750b5a715dee7f77c6c5bdc3f https://github.com/zephyrproject-rtos/zcbor
 */


/** ZBOSS build tag */
#define ZBOSS_BUILD_TAG "ncs_release-3.11.6.0"

/** ZBOSS platform build tag */
#define ZBOSS_PLATFORM_BUILD_TAG "v3.11.6.0+v5.1.7"

/** ZBOSS build date (UTC) */
#define ZBOSS_BUILD_DATE 20241211

/** ZBOSS build time (UTC) */
#define ZBOSS_BUILD_TIME 122248


#endif /* ZBOSS_BUILD_INFO_H__ */
