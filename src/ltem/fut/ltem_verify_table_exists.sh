#!/bin/sh

# Copyright (c) 2015, Plume Design Inc. All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#    1. Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#    2. Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#    3. Neither the name of the Plume Design Inc. nor the
#       names of its contributors may be used to endorse or promote products
#       derived from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


# FUT environment loading
# shellcheck disable=SC1091
source /tmp/fut-base/shell/config/default_shell.sh
[ -e "/tmp/fut-base/fut_set_env.sh" ] && source /tmp/fut-base/fut_set_env.sh
source "${FUT_TOPDIR}/shell/lib/ltem_lib.sh"
[ -e "${PLATFORM_OVERRIDE_FILE}" ] && source "${PLATFORM_OVERRIDE_FILE}" || raise "${PLATFORM_OVERRIDE_FILE}" -ofm
[ -e "${MODEL_OVERRIDE_FILE}" ] && source "${MODEL_OVERRIDE_FILE}" || raise "${MODEL_OVERRIDE_FILE}" -ofm

manager_setup_file="ltem/ltem_setup.sh"

usage()
{
cat << usage_string
ltem/ltem_verify_table_exists.sh [-h] arguments
Description:
    - This script is used to verify Lte_Config and Lte_State tables exist.
Arguments:
    -h : show this help message
Testcase procedure:
    - On DEVICE: Run: ./${manager_setup_file} (see ${manager_setup_file} -h)
                 Run: ./ltem/ltem_verify_table_exists.sh
Script usage example:
    ./ltem/ltem_verify_table_exists.sh
usage_string
}
if [ -n "${1}" ]; then
    case "${1}" in
        help | \
        --help | -h)
            usage && exit 1
            ;;
        *)
            ;;
    esac
fi

# Execute on EXIT signal.
trap '
fut_info_dump_line
print_tables Lte_Config Lte_State
check_restore_ovsdb_server
fut_info_dump_line
' EXIT SIGINT SIGTERM

check_ovsdb_table_exist Lte_Config &&
    log "ltem/ltem_verify_table_exists.sh: Lte_Config table exists in ovsdb - Success" ||
    raise "FAIL: Lte_Config table does not exist in ovsdb" -l "ltem/ltem_verify_table_exists.sh" -s

check_ovsdb_table_exist Lte_State &&
    log "ltem/ltem_verify_table_exists.sh: Lte_State table exists in ovsdb - Success" ||
    raise "FAIL: Lte_State table does not exist in ovsdb" -l "ltem/ltem_verify_table_exists.sh" -s

pass
