

#ifndef __APSCDSINTERFACE_H__
#define __APSCDSINTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "LPSCommon.h"



#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif


/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
 结构名    : CDS_BEARER_DATA_FLOW_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 流量查询结构
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulTotalSendFluxLow;     /* 累计发送流量低四字节     */
    VOS_UINT32                          ulTotalSendFluxHigh;    /* 累计发送流量高四字节     */
    VOS_UINT32                          ulTotalReceiveFluxLow;  /* 累计接收流量低四字节     */
    VOS_UINT32                          ulTotalReceiveFluxHigh; /* 累计接收流量高四字节     */
} CDS_BEARER_DATA_FLOW_STRU;


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

extern VOS_VOID CDS_GetBearerDataFlowInfo(VOS_UINT8                     ucRabId,
                                                  CDS_BEARER_DATA_FLOW_STRU    *pstDataFlowInfo,
                                                  MODEM_ID_ENUM_UINT16          enModemId);

extern VOS_VOID CDS_ClearBearerDataFlowInfo( VOS_UINT8              ucBearerId,
                                                     MODEM_ID_ENUM_UINT16   enModemId);


extern VOS_VOID TAF_APS_SetDfsMax(VOS_VOID);

#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of ApsCdsInterface.h */
