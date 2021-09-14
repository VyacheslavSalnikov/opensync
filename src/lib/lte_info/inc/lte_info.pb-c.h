/*
Copyright (c) 2015, Plume Design Inc. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
   3. Neither the name of the Plume Design Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL Plume Design Inc. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: lte_info.proto */

#ifndef PROTOBUF_C_lte_5finfo_2eproto__INCLUDED
#define PROTOBUF_C_lte_5finfo_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Interfaces__LteInfo__LteCommonHeader Interfaces__LteInfo__LteCommonHeader;
typedef struct _Interfaces__LteInfo__LteNetInfo Interfaces__LteInfo__LteNetInfo;
typedef struct _Interfaces__LteInfo__LteDataUsage Interfaces__LteInfo__LteDataUsage;
typedef struct _Interfaces__LteInfo__LteNetServingCellInfo Interfaces__LteInfo__LteNetServingCellInfo;
typedef struct _Interfaces__LteInfo__LteNetNeighborCellInfo Interfaces__LteInfo__LteNetNeighborCellInfo;
typedef struct _Interfaces__LteInfo__LteInfoReport Interfaces__LteInfo__LteInfoReport;


/* --- enums --- */

/*
 * Network Registration Status
 */
typedef enum _Interfaces__LteInfo__LteNetRegStatus {
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_UNSPECIFIED = 0,
  /*
   * Not registered. ME is not currently searching a new operator to register to
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_NOTREG = 1,
  /*
   * Registered, home network
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_REG = 2,
  /*
   * Not registered, but ME is currently searching a new operator to register to
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_SEARCH = 3,
  /*
   * Registration denied
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_DENIED = 4,
  /*
   * Unknown
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_UNKNOWN = 5,
  /*
   * Registered, roaming
   */
  INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_ROAMING = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_NET_REG_STATUS)
} Interfaces__LteInfo__LteNetRegStatus;
/*
 * Serving Cell State
 */
typedef enum _Interfaces__LteInfo__LteServingCellState {
  INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_UNSPECIFIED = 0,
  /*
   * UE is searching but could not (yet) find a suitable 3G/4G cell.
   */
  INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_SEARCH = 1,
  /*
   * UE is camping on a cell but has not registered on the network.
   */
  INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_LIMSERV = 2,
  /*
   * UE is camping on a cell and has registered on the network, and it is in idle mode.
   */
  INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_NOCONN = 3,
  /*
   * UE is camping on a cell and has registered on the network, and a call is in progress.
   */
  INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_CONNECT = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE)
} Interfaces__LteInfo__LteServingCellState;
/*
 * cell mode
 */
typedef enum _Interfaces__LteInfo__LteCellMode {
  INTERFACES__LTE_INFO__LTE_CELL_MODE__LTE_CELL_MODE_UNSPECIFIED = 0,
  INTERFACES__LTE_INFO__LTE_CELL_MODE__LTE_CELL_MODE_LTE = 1,
  INTERFACES__LTE_INFO__LTE_CELL_MODE__LTE_CELL_MODE_WCDMA = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_CELL_MODE)
} Interfaces__LteInfo__LteCellMode;
/*
 * is_tdd
 */
typedef enum _Interfaces__LteInfo__LteFddTddMode {
  INTERFACES__LTE_INFO__LTE_FDD_TDD_MODE__LTE_MODE_UNSPECIFIED = 0,
  INTERFACES__LTE_INFO__LTE_FDD_TDD_MODE__LTE_MODE_FDD = 1,
  INTERFACES__LTE_INFO__LTE_FDD_TDD_MODE__LTE_MODE_TDD = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_FDD_TDD_MODE)
} Interfaces__LteInfo__LteFddTddMode;
/*
 * Uplink/Downlink Bandwidth in MHz
 */
typedef enum _Interfaces__LteInfo__LteBandwidth {
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_UNSPECIFIED = 0,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_1P4_MHZ = 1,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_3_MHZ = 2,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_5_MHZ = 3,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_10_MHZ = 4,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_15_MHZ = 5,
  INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_20_MHZ = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_BANDWIDTH)
} Interfaces__LteInfo__LteBandwidth;
/*
 * NeighborCell freq mode
 */
typedef enum _Interfaces__LteInfo__LteNeighborFreqMode {
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_UNSPECIFIED = 0,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_INTRA = 1,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_INTER = 2,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_WCDMA = 3,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_WCDMA_LTE = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE)
} Interfaces__LteInfo__LteNeighborFreqMode;
/*
 * Set
 */
typedef enum _Interfaces__LteInfo__LteNeighborCellSet {
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET__LTE_NEIGHBOR_CELL_SET_UNSPECIFIED = 0,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET__LTE_NEIGHBOR_CELL_SET_ACTIVE_SET = 1,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET__LTE_NEIGHBOR_CELL_SET_SYNC_NEIGHBOR = 2,
  INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET__LTE_NEIGHBOR_CELL_SET_ASYNC_NEIGHBOR = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET)
} Interfaces__LteInfo__LteNeighborCellSet;

/* --- messages --- */

/*
 * LTE common fields
 */
struct  _Interfaces__LteInfo__LteCommonHeader
{
  ProtobufCMessage base;
  uint32_t request_id;
  /*
   * wwan0
   */
  char *if_name;
  char *node_id;
  char *location_id;
  char *imei;
  char *imsi;
  char *iccid;
  /*
   * Unix time in seconds
   */
  uint64_t reported_at;
};
#define INTERFACES__LTE_INFO__LTE_COMMON_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_common_header__descriptor) \
    , 0, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0 }


struct  _Interfaces__LteInfo__LteNetInfo
{
  ProtobufCMessage base;
  Interfaces__LteInfo__LteNetRegStatus net_status;
  int32_t rssi;
  int32_t ber;
};
#define INTERFACES__LTE_INFO__LTE_NET_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_net_info__descriptor) \
    , INTERFACES__LTE_INFO__LTE_NET_REG_STATUS__LTE_NET_REG_STAT_UNSPECIFIED, 0, 0 }


/*
 * LTE data usage
 */
struct  _Interfaces__LteInfo__LteDataUsage
{
  ProtobufCMessage base;
  uint64_t rx_bytes;
  uint64_t tx_bytes;
  /*
   * Unix time in seconds
   */
  uint64_t failover_start;
  /*
   * Unix time in seconds
   */
  uint64_t failover_end;
  uint32_t failover_count;
};
#define INTERFACES__LTE_INFO__LTE_DATA_USAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_data_usage__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  _Interfaces__LteInfo__LteNetServingCellInfo
{
  ProtobufCMessage base;
  Interfaces__LteInfo__LteServingCellState state;
  Interfaces__LteInfo__LteCellMode mode;
  Interfaces__LteInfo__LteFddTddMode fdd_tdd_mode;
  /*
   * Hexadecimal format. Cell ID. The parameter determines the 16-bit (GSM) or 28-bit (UMTS) cell ID. Range: 0-0xFFFFFFF.
   */
  uint32_t cellid;
  /*
   * Physical cell ID
   */
  uint32_t pcid;
  /*
   * Number format. The parameter determines the UTRA-ARFCN of the cell that was scanned
   */
  uint32_t uarfcn;
  /*
   * Number format. The parameter determines the E-UTRA-ARFCN of the cell that was scanned
   */
  uint32_t earfcn;
  /*
   * E-UTRA frequency band (see 3GPP 36.101)
   */
  uint32_t freq_band;
  Interfaces__LteInfo__LteBandwidth ul_bandwidth;
  Interfaces__LteInfo__LteBandwidth dl_bandwidth;
  /*
   * Tracking Area Code (see 3GPP 23.003 Section 19.4.2.3)
   */
  uint32_t tac;
  /*
   * Reference Signal Received Power (see 3GPP 36.214 Section 5.1.1)
   */
  int32_t rsrp;
  /*
   * Reference Signal Received Quality (see 3GPP 36.214 Section 5.1.2)
   */
  int32_t rsrq;
  /*
   * The parameter shows the Received Signal Strength Indication
   */
  int32_t rssi;
  /*
   * Logarithmic value of SINR, Values are in 1/5th of a dB. Range: 0-250 which translates to -20dB - +30dB
   */
  uint32_t sinr;
  /*
   * Select receive level value for base station in dB (see 3GPP25.304).
   */
  uint32_t srxlev;
};
#define INTERFACES__LTE_INFO__LTE_NET_SERVING_CELL_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_net_serving_cell_info__descriptor) \
    , INTERFACES__LTE_INFO__LTE_SERVING_CELL_STATE__LTE_SERVING_CELL_UNSPECIFIED, INTERFACES__LTE_INFO__LTE_CELL_MODE__LTE_CELL_MODE_UNSPECIFIED, INTERFACES__LTE_INFO__LTE_FDD_TDD_MODE__LTE_MODE_UNSPECIFIED, 0, 0, 0, 0, 0, INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_UNSPECIFIED, INTERFACES__LTE_INFO__LTE_BANDWIDTH__LTE_BANDWIDTH_UNSPECIFIED, 0, 0, 0, 0, 0, 0 }


/*
 * [+QENG: "neighbourcell intra","LTE",<earfcn>,<pcid>,<rsrq>,<rsrp>,<rssi>,<sinr>,<srxlev>,<cell_resel_priority>,<s_non_intra_search>,<thresh_serving_low>,<s_intra_search>
 * [+QENG: "neighbourcell inter","LTE",<earfcn>,<pcid>,<rsrq>,<rsrp>,<rssi>,<sinr>,<srxlev>,<cell_resel_priority>,<threshX_low>,<threshX_high>
 * [+QENG:"neighbourcell","WCDMA",<uarfcn>,<cell_resel_priority>,<thresh_Xhigh>,<thresh_Xlow>,<psc>,<rscp><ecno>,<srxlev>
 * [+QENG: "neighbourcell","LTE",<earfcn>,<cellid>,<rsrp>,<rsrq>,<s_rxlev>
 */
struct  _Interfaces__LteInfo__LteNetNeighborCellInfo
{
  ProtobufCMessage base;
  Interfaces__LteInfo__LteCellMode mode;
  Interfaces__LteInfo__LteNeighborFreqMode freq_mode;
  uint32_t earfcn;
  uint32_t uarfcn;
  uint32_t pcid;
  int32_t rsrq;
  int32_t rsrp;
  int32_t rssi;
  uint32_t sinr;
  uint32_t srxlev;
  /*
   * Cell reselection priority. Range: 0-7
   */
  uint32_t cell_resel_priority;
  /*
   * Threshold to control non-intra frequency searches.
   */
  uint32_t s_non_intra_search;
  /*
   *Specifies the suitable receive level threshold (in dB) used by the UE on the serving cell when reselecting towards a lower priority RAT/frequency.
   */
  uint32_t thresh_serving_low;
  /*
   * Cell selection parameter for the intra frequency cell.
   */
  uint32_t s_intra_search;
  /*
   * The suitable receive level value of an evaluated lower priority cell must be greater than this value.
   */
  uint32_t thresh_x_low;
  /*
   * The suitable receive level value of an evaluated higher priority cell must be greater than this value.
   */
  uint32_t thresh_x_high;
  /*
   *The parameter determines the primary scrambling code of the cell that was scanned
   */
  uint32_t psc;
  /*
   * The parameter determines the Received Signal Code Power level of the cell that was scanned
   */
  int32_t rscp;
  /*
   * Carrier to noise ratio in dB = measured Ec/Io value in dB.
   */
  int32_t ecno;
  /*
   * 3G neighbour cell set
   */
  Interfaces__LteInfo__LteNeighborCellSet cell_set;
  /*
   * Rank of this cell as neighbour for inter-RAT cell reselection
   */
  int32_t rank;
  /*
   * Hexadecimal format. Cell ID. The parameter determines the 16-bit (GSM) or 28-bit (UMTS) cell ID. Range: 0-0xFFFFFFF.
   */
  uint32_t cellid;
  /*
   * Suitable receive level for inter frequency cell
   */
  int32_t inter_freq_srxlev;
};
#define INTERFACES__LTE_INFO__LTE_NET_NEIGHBOR_CELL_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_net_neighbor_cell_info__descriptor) \
    , INTERFACES__LTE_INFO__LTE_CELL_MODE__LTE_CELL_MODE_UNSPECIFIED, INTERFACES__LTE_INFO__LTE_NEIGHBOR_FREQ_MODE__LTE_FREQ_MODE_UNSPECIFIED, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, INTERFACES__LTE_INFO__LTE_NEIGHBOR_CELL_SET__LTE_NEIGHBOR_CELL_SET_UNSPECIFIED, 0, 0, 0 }


/*
 * LTE info
 */
struct  _Interfaces__LteInfo__LteInfoReport
{
  ProtobufCMessage base;
  Interfaces__LteInfo__LteCommonHeader *header;
  /*
   * LTE info
   */
  Interfaces__LteInfo__LteNetInfo *lte_net_info;
  /*
   * Data usage
   */
  Interfaces__LteInfo__LteDataUsage *lte_data_usage;
  /*
   * Serving cell info
   */
  Interfaces__LteInfo__LteNetServingCellInfo *lte_srv_cell;
  /*
   * Neighbor cell info
   */
  size_t n_lte_neigh_cell_info;
  Interfaces__LteInfo__LteNetNeighborCellInfo **lte_neigh_cell_info;
};
#define INTERFACES__LTE_INFO__LTE_INFO_REPORT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&interfaces__lte_info__lte_info_report__descriptor) \
    , NULL, NULL, NULL, NULL, 0,NULL }


/* Interfaces__LteInfo__LteCommonHeader methods */
void   interfaces__lte_info__lte_common_header__init
                     (Interfaces__LteInfo__LteCommonHeader         *message);
size_t interfaces__lte_info__lte_common_header__get_packed_size
                     (const Interfaces__LteInfo__LteCommonHeader   *message);
size_t interfaces__lte_info__lte_common_header__pack
                     (const Interfaces__LteInfo__LteCommonHeader   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_common_header__pack_to_buffer
                     (const Interfaces__LteInfo__LteCommonHeader   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteCommonHeader *
       interfaces__lte_info__lte_common_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_common_header__free_unpacked
                     (Interfaces__LteInfo__LteCommonHeader *message,
                      ProtobufCAllocator *allocator);
/* Interfaces__LteInfo__LteNetInfo methods */
void   interfaces__lte_info__lte_net_info__init
                     (Interfaces__LteInfo__LteNetInfo         *message);
size_t interfaces__lte_info__lte_net_info__get_packed_size
                     (const Interfaces__LteInfo__LteNetInfo   *message);
size_t interfaces__lte_info__lte_net_info__pack
                     (const Interfaces__LteInfo__LteNetInfo   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_net_info__pack_to_buffer
                     (const Interfaces__LteInfo__LteNetInfo   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteNetInfo *
       interfaces__lte_info__lte_net_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_net_info__free_unpacked
                     (Interfaces__LteInfo__LteNetInfo *message,
                      ProtobufCAllocator *allocator);
/* Interfaces__LteInfo__LteDataUsage methods */
void   interfaces__lte_info__lte_data_usage__init
                     (Interfaces__LteInfo__LteDataUsage         *message);
size_t interfaces__lte_info__lte_data_usage__get_packed_size
                     (const Interfaces__LteInfo__LteDataUsage   *message);
size_t interfaces__lte_info__lte_data_usage__pack
                     (const Interfaces__LteInfo__LteDataUsage   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_data_usage__pack_to_buffer
                     (const Interfaces__LteInfo__LteDataUsage   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteDataUsage *
       interfaces__lte_info__lte_data_usage__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_data_usage__free_unpacked
                     (Interfaces__LteInfo__LteDataUsage *message,
                      ProtobufCAllocator *allocator);
/* Interfaces__LteInfo__LteNetServingCellInfo methods */
void   interfaces__lte_info__lte_net_serving_cell_info__init
                     (Interfaces__LteInfo__LteNetServingCellInfo         *message);
size_t interfaces__lte_info__lte_net_serving_cell_info__get_packed_size
                     (const Interfaces__LteInfo__LteNetServingCellInfo   *message);
size_t interfaces__lte_info__lte_net_serving_cell_info__pack
                     (const Interfaces__LteInfo__LteNetServingCellInfo   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_net_serving_cell_info__pack_to_buffer
                     (const Interfaces__LteInfo__LteNetServingCellInfo   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteNetServingCellInfo *
       interfaces__lte_info__lte_net_serving_cell_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_net_serving_cell_info__free_unpacked
                     (Interfaces__LteInfo__LteNetServingCellInfo *message,
                      ProtobufCAllocator *allocator);
/* Interfaces__LteInfo__LteNetNeighborCellInfo methods */
void   interfaces__lte_info__lte_net_neighbor_cell_info__init
                     (Interfaces__LteInfo__LteNetNeighborCellInfo         *message);
size_t interfaces__lte_info__lte_net_neighbor_cell_info__get_packed_size
                     (const Interfaces__LteInfo__LteNetNeighborCellInfo   *message);
size_t interfaces__lte_info__lte_net_neighbor_cell_info__pack
                     (const Interfaces__LteInfo__LteNetNeighborCellInfo   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_net_neighbor_cell_info__pack_to_buffer
                     (const Interfaces__LteInfo__LteNetNeighborCellInfo   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteNetNeighborCellInfo *
       interfaces__lte_info__lte_net_neighbor_cell_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_net_neighbor_cell_info__free_unpacked
                     (Interfaces__LteInfo__LteNetNeighborCellInfo *message,
                      ProtobufCAllocator *allocator);
/* Interfaces__LteInfo__LteInfoReport methods */
void   interfaces__lte_info__lte_info_report__init
                     (Interfaces__LteInfo__LteInfoReport         *message);
size_t interfaces__lte_info__lte_info_report__get_packed_size
                     (const Interfaces__LteInfo__LteInfoReport   *message);
size_t interfaces__lte_info__lte_info_report__pack
                     (const Interfaces__LteInfo__LteInfoReport   *message,
                      uint8_t             *out);
size_t interfaces__lte_info__lte_info_report__pack_to_buffer
                     (const Interfaces__LteInfo__LteInfoReport   *message,
                      ProtobufCBuffer     *buffer);
Interfaces__LteInfo__LteInfoReport *
       interfaces__lte_info__lte_info_report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   interfaces__lte_info__lte_info_report__free_unpacked
                     (Interfaces__LteInfo__LteInfoReport *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Interfaces__LteInfo__LteCommonHeader_Closure)
                 (const Interfaces__LteInfo__LteCommonHeader *message,
                  void *closure_data);
typedef void (*Interfaces__LteInfo__LteNetInfo_Closure)
                 (const Interfaces__LteInfo__LteNetInfo *message,
                  void *closure_data);
typedef void (*Interfaces__LteInfo__LteDataUsage_Closure)
                 (const Interfaces__LteInfo__LteDataUsage *message,
                  void *closure_data);
typedef void (*Interfaces__LteInfo__LteNetServingCellInfo_Closure)
                 (const Interfaces__LteInfo__LteNetServingCellInfo *message,
                  void *closure_data);
typedef void (*Interfaces__LteInfo__LteNetNeighborCellInfo_Closure)
                 (const Interfaces__LteInfo__LteNetNeighborCellInfo *message,
                  void *closure_data);
typedef void (*Interfaces__LteInfo__LteInfoReport_Closure)
                 (const Interfaces__LteInfo__LteInfoReport *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_net_reg_status__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_serving_cell_state__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_cell_mode__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_fdd_tdd_mode__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_bandwidth__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_neighbor_freq_mode__descriptor;
extern const ProtobufCEnumDescriptor    interfaces__lte_info__lte_neighbor_cell_set__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_common_header__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_net_info__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_data_usage__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_net_serving_cell_info__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_net_neighbor_cell_info__descriptor;
extern const ProtobufCMessageDescriptor interfaces__lte_info__lte_info_report__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_lte_5finfo_2eproto__INCLUDED */