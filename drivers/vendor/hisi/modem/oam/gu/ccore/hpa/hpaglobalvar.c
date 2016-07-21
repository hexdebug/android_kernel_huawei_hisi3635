/*****************************************************************************/
/*                                                                           */
/*                Copyright 1999 - 2003, Huawei Tech. Co., Ltd.              */
/*                           ALL RIGHTS RESERVED                             */
/*                                                                           */
/* FileName: HPAGlobalVar.c                                                  */
/*                                                                           */
/* Author: Xu cheng                                                          */
/*                                                                           */
/* Version: 1.0                                                              */
/*                                                                           */
/* Date: 2008-02                                                             */
/*                                                                           */
/* Description: Definition of HPA Global Var.                                */
/*                                                                           */
/* Others:                                                                   */
/*                                                                           */
/* History:                                                                  */
/* 1. Date: 2008-02                                                          */
/*    Author: Xu cheng                                                       */
/*    Modification: Create this file                                         */
/*                                                                           */
/*****************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#include "hpacomm.h"
#include "hpaglobalvar.h"
#include "hparingbuffer.h"
#include "sleepflow.h"
#include "gbbp_interface.h"

/* Macro of log */
#define    THIS_FILE_ID        PS_FILE_ID_HPA_GLOBAL_VAR_C



/* the number of DSP's interrupt */
hpa_atomic_t                        g_stDspMailBoxCount;

/* the number of DSP's transfer request */
hpa_atomic_t                        g_stDspMailBoxTransferCount;

/* the number of DSP's transfer request */
hpa_atomic_t                        g_stGDspMailBoxTransferCount;

/* the number of G1 DSP's transfer request */
hpa_atomic_t                        g_stGDsp1MailBoxTransferCount;

/* the semaphore which be used to wake up transfer task */
VOS_SEM                         g_ulHpaTransferSem;

/* Record CFN */
VOS_UCHAR                       g_ucHpaCfnRead;

/* Record SFN */
VOS_UINT16                      g_usHpaSfnRead;

/* record hpa's error */
HPA_ERROR_COUNT_STRU            g_astHpaErrorCount[HPA_MB_BUTT/2];

/* record hpa's interrupt */
HPA_INT_COUNT_STRU              g_stHpaIntCount;

#ifdef HPA_ITT
/* hook function of 0ms ISR */
HPA_DSP_INT_ISR_FUNC_HOOK       g_pfnHpaDspIsrStub;

/* hook function of ITT */
HPA_ITT_MSG_FILTER_FUNC_HOOK    g_pfnHpaIttMsgFilterFunc;
#endif


OM_MAX_REG_CNT_GSM_STRU         g_stGhpaRegCnt = {500};

#if  ( FEATURE_MULTI_MODEM == FEATURE_ON )

VOS_UINT32                      g_aulGBBPRegAddr[][MODEM_ID_BUTT] = {
                                {OAM_GBBP_ARM_INT_STA_ADDR,     OAM_GBBP1_ARM_INT_STA_ADDR},
                                {OAM_GBBP_ARM_INT_MASK_ADDR,    OAM_GBBP1_ARM_INT_MASK_ADDR},
                                {OAM_GBBP_ARM_INT_CLR_ADDR,     OAM_GBBP1_ARM_INT_CLR_ADDR},
                                {OAM_GBBP_BLER_ERRR_RPT_ADDR,   OAM_GBBP1_BLER_ERRR_RPT_ADDR},
                                {OAM_GBBP_BLER_TOTAL_RPT_ADDR,  OAM_GBBP1_BLER_TOTAL_RPT_ADDR},
                                {OAM_GBBP_GTC_FN_RPT_ADDR,      OAM_GBBP1_GTC_FN_RPT_ADDR},
                                {OAM_GBBP_GTC_FN_HIGH_RPT_ADDR, OAM_GBBP1_GTC_FN_HIGH_RPT_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_STA_ADDR, OAM_GBBP1_DRX_ARM_INT_STA_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_MASK_ADDR,OAM_GBBP1_DRX_ARM_INT_MASK_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_CLR_ADDR, OAM_GBBP1_DRX_ARM_INT_CLR_ADDR},
                                };

#else

VOS_UINT32                      g_aulGBBPRegAddr[][MODEM_ID_BUTT] = {
                                {OAM_GBBP_ARM_INT_STA_ADDR},
                                {OAM_GBBP_ARM_INT_MASK_ADDR},
                                {OAM_GBBP_ARM_INT_CLR_ADDR},
                                {OAM_GBBP_BLER_ERRR_RPT_ADDR},
                                {OAM_GBBP_BLER_TOTAL_RPT_ADDR},
                                {OAM_GBBP_GTC_FN_RPT_ADDR},
                                {OAM_GBBP_GTC_FN_HIGH_RPT_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_STA_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_MASK_ADDR},
                                {OAM_GBBP_DRX_ARM_INT_CLR_ADDR},
                                };

#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


