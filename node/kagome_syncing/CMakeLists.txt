#
# Copyright Soramitsu Co., Ltd. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0
#

add_executable(kagome_syncing
    main.cpp
    )
target_link_libraries(kagome_syncing
    syncing_node_application
    Boost::program_options
    )
