/*
 * heli_q8.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "heli_q8".
 *
 * Model version              : 11.119
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Tue Nov  2 11:19:54 2021
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_heli_q8_h_
#define RTW_HEADER_heli_q8_h_
#include <math.h>
#include <string.h>
#ifndef heli_q8_COMMON_INCLUDES_
#define heli_q8_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_string.h"
#include "quanser_stream.h"
#include "stream_call_block.h"
#include "quanser_utf.h"
#include "quanser_types.h"
#include "quanser_byte_order.h"
#include "quanser_hid.h"
#include "quanser_memory.h"
#include "quanser_extern.h"
#endif                                 /* heli_q8_COMMON_INCLUDES_ */

#include "heli_q8_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define heli_q8_rtModel                RT_MODEL_heli_q8_T

/* Block signals (default storage) */
typedef struct {
  real_T Switch[10];                   /* '<S4>/Switch' */
  real_T RateTransitionx;              /* '<S5>/Rate Transition: x' */
  real_T Joystick_gain_x;              /* '<S5>/Joystick_gain_x' */
  real_T RateTransitiony;              /* '<S5>/Rate Transition: y' */
  real_T Joystick_gain_y;              /* '<S5>/Joystick_gain_y' */
  real_T Multiply[2];                  /* '<S6>/Multiply' */
  real_T TravelCounttorad;             /* '<S3>/Travel: Count to rad' */
  real_T Gain[5];                      /* '<Root>/Gain' */
  real_T ElevationCounttorad;          /* '<S3>/Elevation: Count to rad' */
  real_T PitchCounttorad;              /* '<S3>/Pitch: Count to rad' */
  real_T FrontmotorSaturation;         /* '<S3>/Front motor: Saturation' */
  real_T BackmotorSaturation;          /* '<S3>/Back motor: Saturation' */
  real_T Sum;                          /* '<S6>/Sum' */
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T Sum2_b[5];                    /* '<S8>/Sum2' */
} B_heli_q8_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize1_AIMinimums[8]; /* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_AIMaximums[8]; /* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_AOMinimums[8]; /* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_AOMaximums[8]; /* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_AOVoltages[8]; /* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_FilterFrequency[8];/* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_POSortedFreqs[8];/* '<Root>/HIL Initialize1' */
  real_T HILInitialize1_POValues[8];   /* '<Root>/HIL Initialize1' */
  real_T Memory_PreviousInput[10];     /* '<S4>/Memory' */
  real_T RateTransitionx_Buffer0;      /* '<S5>/Rate Transition: x' */
  real_T RateTransitiony_Buffer0;      /* '<S5>/Rate Transition: y' */
  real_T HILWriteAnalog_Buffer[2];     /* '<S3>/HIL Write Analog' */
  t_stream StreamCall1_Stream;         /* '<S4>/Stream Call1' */
  t_game_controller GameController_Controller;/* '<S5>/Game Controller' */
  t_card HILInitialize1_Card;          /* '<Root>/HIL Initialize1' */
  t_task HILReadEncoderTimebase_Task;  /* '<S3>/HIL Read Encoder Timebase' */
  void *HILWriteAnalog_PWORK;          /* '<S3>/HIL Write Analog' */
  int32_T HILInitialize1_ClockModes[3];/* '<Root>/HIL Initialize1' */
  int32_T HILInitialize1_QuadratureModes[8];/* '<Root>/HIL Initialize1' */
  int32_T HILInitialize1_InitialEICounts[8];/* '<Root>/HIL Initialize1' */
  int32_T HILInitialize1_POModeValues[8];/* '<Root>/HIL Initialize1' */
  int32_T HILInitialize1_POAlignValues[8];/* '<Root>/HIL Initialize1' */
  int32_T HILInitialize1_POPolarityVals[8];/* '<Root>/HIL Initialize1' */
  int32_T HILReadEncoderTimebase_Buffer[3];/* '<S3>/HIL Read Encoder Timebase' */
  uint32_T HILInitialize1_POSortedChans[8];/* '<Root>/HIL Initialize1' */
  uint8_T StreamCall1_State;           /* '<S4>/Stream Call1' */
} DW_heli_q8_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[5];         /* '<S8>/Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S6>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S6>/Integrator1' */
  real_T ElevationTransferFcn_CSTATE;  /* '<S3>/Elevation: Transfer Fcn' */
  real_T PitchTransferFcn_CSTATE;      /* '<S3>/Pitch: Transfer Fcn' */
  real_T TravelTransferFcn_CSTATE;     /* '<S3>/Travel: Transfer Fcn' */
} X_heli_q8_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[5];         /* '<S8>/Integrator' */
  real_T Integrator_CSTATE_d;          /* '<S6>/Integrator' */
  real_T Integrator1_CSTATE;           /* '<S6>/Integrator1' */
  real_T ElevationTransferFcn_CSTATE;  /* '<S3>/Elevation: Transfer Fcn' */
  real_T PitchTransferFcn_CSTATE;      /* '<S3>/Pitch: Transfer Fcn' */
  real_T TravelTransferFcn_CSTATE;     /* '<S3>/Travel: Transfer Fcn' */
} XDot_heli_q8_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[5];      /* '<S8>/Integrator' */
  boolean_T Integrator_CSTATE_d;       /* '<S6>/Integrator' */
  boolean_T Integrator1_CSTATE;        /* '<S6>/Integrator1' */
  boolean_T ElevationTransferFcn_CSTATE;/* '<S3>/Elevation: Transfer Fcn' */
  boolean_T PitchTransferFcn_CSTATE;   /* '<S3>/Pitch: Transfer Fcn' */
  boolean_T TravelTransferFcn_CSTATE;  /* '<S3>/Travel: Transfer Fcn' */
} XDis_heli_q8_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            heli_q8_B
#define BlockIO                        B_heli_q8_T
#define rtX                            heli_q8_X
#define ContinuousStates               X_heli_q8_T
#define rtXdot                         heli_q8_XDot
#define StateDerivatives               XDot_heli_q8_T
#define tXdis                          heli_q8_XDis
#define StateDisabled                  XDis_heli_q8_T
#define rtP                            heli_q8_P
#define Parameters                     P_heli_q8_T
#define rtDWork                        heli_q8_DW
#define D_Work                         DW_heli_q8_T

/* Parameters (default storage) */
struct P_heli_q8_T_ {
  real_T A_est[25];                    /* Variable: A_est
                                        * Referenced by: '<S8>/Multiply'
                                        */
  real_T B_est[10];                    /* Variable: B_est
                                        * Referenced by: '<S8>/Multiply1'
                                        */
  real_T C[25];                        /* Variable: C
                                        * Referenced by:
                                        *   '<Root>/Gain'
                                        *   '<S8>/Multiply3'
                                        */
  real_T F[4];                         /* Variable: F
                                        * Referenced by: '<S6>/Multiply'
                                        */
  real_T Joystick_gain_x;              /* Variable: Joystick_gain_x
                                        * Referenced by: '<S5>/Joystick_gain_x'
                                        */
  real_T Joystick_gain_y;              /* Variable: Joystick_gain_y
                                        * Referenced by: '<S5>/Joystick_gain_y'
                                        */
  real_T K[10];                        /* Variable: K
                                        * Referenced by: '<S6>/Multiply1'
                                        */
  real_T L[25];                        /* Variable: L
                                        * Referenced by: '<S8>/Multiply2'
                                        */
  real_T vs_0;                         /* Variable: vs_0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  uint32_T HILWriteAnalog_channels[2];/* Mask Parameter: HILWriteAnalog_channels
                                       * Referenced by: '<S3>/HIL Write Analog'
                                       */
  real_T HILInitialize1_OOTerminate;
                                   /* Expression: set_other_outputs_at_terminate
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  real_T HILInitialize1_OOExit;   /* Expression: set_other_outputs_at_switch_out
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  real_T HILInitialize1_OOStart;       /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_OOEnter;   /* Expression: set_other_outputs_at_switch_in
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  real_T HILInitialize1_AOFinal;       /* Expression: final_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POFinal;       /* Expression: final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AIHigh;        /* Expression: analog_input_maximums
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AILow;         /* Expression: analog_input_minimums
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AOHigh;        /* Expression: analog_output_maximums
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AOLow;         /* Expression: analog_output_minimums
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AOInitial;     /* Expression: initial_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_AOWatchdog;    /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POFrequency;   /* Expression: pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POLeading;     /* Expression: pwm_leading_deadband
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POTrailing;    /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POInitial;     /* Expression: initial_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T HILInitialize1_POWatchdog;    /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize1'
                                        */
  real_T p_bias_Value;                 /* Expression: 0.1
                                        * Referenced by: '<Root>/p_bias'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 65
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Memory_InitialCondition[10];  /* Expression: [0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<S4>/Memory'
                                        */
  real_T Gain2_Gain[9];             /* Expression: [ 0, 0, 1; 0, 1, 0; -1, 0, 0]
                                     * Referenced by: '<S4>/Gain2'
                                     */
  real_T e_bias_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/e_bias'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Integrator_IC_g;              /* Expression: 0
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S6>/Integrator1'
                                        */
  real_T RateTransitionx_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S5>/Rate Transition: x'
                                          */
  real_T DeadZonex_Start;              /* Expression: -0.1
                                        * Referenced by: '<S5>/Dead Zone: x'
                                        */
  real_T DeadZonex_End;                /* Expression: 0.1
                                        * Referenced by: '<S5>/Dead Zone: x'
                                        */
  real_T Gainx_Gain;                   /* Expression: 10/9
                                        * Referenced by: '<S5>/Gain: x'
                                        */
  real_T RateTransitiony_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S5>/Rate Transition: y'
                                          */
  real_T DeadZoney_Start;              /* Expression: -0.1
                                        * Referenced by: '<S5>/Dead Zone: y'
                                        */
  real_T DeadZoney_End;                /* Expression: 0.1
                                        * Referenced by: '<S5>/Dead Zone: y'
                                        */
  real_T Gainy_Gain;                   /* Expression: 10/9
                                        * Referenced by: '<S5>/Gain: y'
                                        */
  real_T Backgain_Gain;                /* Expression: 0.5
                                        * Referenced by: '<S1>/Back gain'
                                        */
  real_T Frontgain_Gain;               /* Expression: 0.5
                                        * Referenced by: '<S1>/Front gain'
                                        */
  real_T Gain1_Gain[9];             /* Expression: [ 0, 0, 1; 0, 1, 0; -1, 0, 0]
                                     * Referenced by: '<S4>/Gain1'
                                     */
  real_T TravelCounttorad_Gain;        /* Expression: 2*pi/8192
                                        * Referenced by: '<S3>/Travel: Count to rad'
                                        */
  real_T ElevationCounttorad_Gain;     /* Expression: -2 * pi /4096
                                        * Referenced by: '<S3>/Elevation: Count to rad'
                                        */
  real_T ElevationTransferFcn_A;   /* Computed Parameter: ElevationTransferFcn_A
                                    * Referenced by: '<S3>/Elevation: Transfer Fcn'
                                    */
  real_T ElevationTransferFcn_C;   /* Computed Parameter: ElevationTransferFcn_C
                                    * Referenced by: '<S3>/Elevation: Transfer Fcn'
                                    */
  real_T ElevationTransferFcn_D;   /* Computed Parameter: ElevationTransferFcn_D
                                    * Referenced by: '<S3>/Elevation: Transfer Fcn'
                                    */
  real_T PitchCounttorad_Gain;         /* Expression: -2*pi /4096
                                        * Referenced by: '<S3>/Pitch: Count to rad'
                                        */
  real_T PitchTransferFcn_A;           /* Computed Parameter: PitchTransferFcn_A
                                        * Referenced by: '<S3>/Pitch: Transfer Fcn'
                                        */
  real_T PitchTransferFcn_C;           /* Computed Parameter: PitchTransferFcn_C
                                        * Referenced by: '<S3>/Pitch: Transfer Fcn'
                                        */
  real_T PitchTransferFcn_D;           /* Computed Parameter: PitchTransferFcn_D
                                        * Referenced by: '<S3>/Pitch: Transfer Fcn'
                                        */
  real_T TravelTransferFcn_A;         /* Computed Parameter: TravelTransferFcn_A
                                       * Referenced by: '<S3>/Travel: Transfer Fcn'
                                       */
  real_T TravelTransferFcn_C;         /* Computed Parameter: TravelTransferFcn_C
                                       * Referenced by: '<S3>/Travel: Transfer Fcn'
                                       */
  real_T TravelTransferFcn_D;         /* Computed Parameter: TravelTransferFcn_D
                                       * Referenced by: '<S3>/Travel: Transfer Fcn'
                                       */
  real_T FrontmotorSaturation_UpperSat;/* Expression: 5
                                        * Referenced by: '<S3>/Front motor: Saturation'
                                        */
  real_T FrontmotorSaturation_LowerSat;/* Expression: -5
                                        * Referenced by: '<S3>/Front motor: Saturation'
                                        */
  real_T BackmotorSaturation_UpperSat; /* Expression: 5
                                        * Referenced by: '<S3>/Back motor: Saturation'
                                        */
  real_T BackmotorSaturation_LowerSat; /* Expression: -5
                                        * Referenced by: '<S3>/Back motor: Saturation'
                                        */
  int32_T HILInitialize1_CKChannels[3];
                                /* Computed Parameter: HILInitialize1_CKChannels
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  int32_T HILInitialize1_DOWatchdog;
                                /* Computed Parameter: HILInitialize1_DOWatchdog
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  int32_T HILInitialize1_EIInitial;
                                 /* Computed Parameter: HILInitialize1_EIInitial
                                  * Referenced by: '<Root>/HIL Initialize1'
                                  */
  int32_T HILInitialize1_POModes;  /* Computed Parameter: HILInitialize1_POModes
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  int32_T HILInitialize1_POConfiguration;
                           /* Computed Parameter: HILInitialize1_POConfiguration
                            * Referenced by: '<Root>/HIL Initialize1'
                            */
  int32_T HILInitialize1_POAlignment;
                               /* Computed Parameter: HILInitialize1_POAlignment
                                * Referenced by: '<Root>/HIL Initialize1'
                                */
  int32_T HILInitialize1_POPolarity;
                                /* Computed Parameter: HILInitialize1_POPolarity
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  int32_T HILReadEncoderTimebase_Clock;
                             /* Computed Parameter: HILReadEncoderTimebase_Clock
                              * Referenced by: '<S3>/HIL Read Encoder Timebase'
                              */
  int32_T StreamCall1_SendBufferSize;
                               /* Computed Parameter: StreamCall1_SendBufferSize
                                * Referenced by: '<S4>/Stream Call1'
                                */
  int32_T StreamCall1_ReceiveBufferSize;
                            /* Computed Parameter: StreamCall1_ReceiveBufferSize
                             * Referenced by: '<S4>/Stream Call1'
                             */
  uint32_T HILInitialize1_AIChannels[8];
                                /* Computed Parameter: HILInitialize1_AIChannels
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  uint32_T HILInitialize1_AOChannels[8];
                                /* Computed Parameter: HILInitialize1_AOChannels
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  uint32_T HILInitialize1_EIChannels[8];
                                /* Computed Parameter: HILInitialize1_EIChannels
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  uint32_T HILInitialize1_EIQuadrature;
                              /* Computed Parameter: HILInitialize1_EIQuadrature
                               * Referenced by: '<Root>/HIL Initialize1'
                               */
  uint32_T HILInitialize1_POChannels[8];
                                /* Computed Parameter: HILInitialize1_POChannels
                                 * Referenced by: '<Root>/HIL Initialize1'
                                 */
  uint32_T HILReadEncoderTimebase_Channels[3];
                          /* Computed Parameter: HILReadEncoderTimebase_Channels
                           * Referenced by: '<S3>/HIL Read Encoder Timebase'
                           */
  uint32_T HILReadEncoderTimebase_SamplesI;
                          /* Computed Parameter: HILReadEncoderTimebase_SamplesI
                           * Referenced by: '<S3>/HIL Read Encoder Timebase'
                           */
  uint32_T StreamFormattedWrite_MaxUnits;
                            /* Computed Parameter: StreamFormattedWrite_MaxUnits
                             * Referenced by: '<S4>/Stream Formatted Write'
                             */
  uint16_T GameController_BufferSize;
                                /* Computed Parameter: GameController_BufferSize
                                 * Referenced by: '<S5>/Game Controller'
                                 */
  boolean_T HILInitialize1_Active;  /* Computed Parameter: HILInitialize1_Active
                                     * Referenced by: '<Root>/HIL Initialize1'
                                     */
  boolean_T HILInitialize1_AOTerminate;
                               /* Computed Parameter: HILInitialize1_AOTerminate
                                * Referenced by: '<Root>/HIL Initialize1'
                                */
  boolean_T HILInitialize1_AOExit;  /* Computed Parameter: HILInitialize1_AOExit
                                     * Referenced by: '<Root>/HIL Initialize1'
                                     */
  boolean_T HILInitialize1_DOTerminate;
                               /* Computed Parameter: HILInitialize1_DOTerminate
                                * Referenced by: '<Root>/HIL Initialize1'
                                */
  boolean_T HILInitialize1_DOExit;  /* Computed Parameter: HILInitialize1_DOExit
                                     * Referenced by: '<Root>/HIL Initialize1'
                                     */
  boolean_T HILInitialize1_POTerminate;
                               /* Computed Parameter: HILInitialize1_POTerminate
                                * Referenced by: '<Root>/HIL Initialize1'
                                */
  boolean_T HILInitialize1_POExit;  /* Computed Parameter: HILInitialize1_POExit
                                     * Referenced by: '<Root>/HIL Initialize1'
                                     */
  boolean_T HILInitialize1_CKPStart;
                                  /* Computed Parameter: HILInitialize1_CKPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_CKPEnter;
                                  /* Computed Parameter: HILInitialize1_CKPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_CKStart;/* Computed Parameter: HILInitialize1_CKStart
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_CKEnter;/* Computed Parameter: HILInitialize1_CKEnter
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_AIPStart;
                                  /* Computed Parameter: HILInitialize1_AIPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_AIPEnter;
                                  /* Computed Parameter: HILInitialize1_AIPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_AOPStart;
                                  /* Computed Parameter: HILInitialize1_AOPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_AOPEnter;
                                  /* Computed Parameter: HILInitialize1_AOPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_AOStart;/* Computed Parameter: HILInitialize1_AOStart
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_AOEnter;/* Computed Parameter: HILInitialize1_AOEnter
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_AOReset;/* Computed Parameter: HILInitialize1_AOReset
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_DOPStart;
                                  /* Computed Parameter: HILInitialize1_DOPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_DOPEnter;
                                  /* Computed Parameter: HILInitialize1_DOPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_DOStart;/* Computed Parameter: HILInitialize1_DOStart
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_DOEnter;/* Computed Parameter: HILInitialize1_DOEnter
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_DOReset;/* Computed Parameter: HILInitialize1_DOReset
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_EIPStart;
                                  /* Computed Parameter: HILInitialize1_EIPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_EIPEnter;
                                  /* Computed Parameter: HILInitialize1_EIPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_EIStart;/* Computed Parameter: HILInitialize1_EIStart
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_EIEnter;/* Computed Parameter: HILInitialize1_EIEnter
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_POPStart;
                                  /* Computed Parameter: HILInitialize1_POPStart
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_POPEnter;
                                  /* Computed Parameter: HILInitialize1_POPEnter
                                   * Referenced by: '<Root>/HIL Initialize1'
                                   */
  boolean_T HILInitialize1_POStart;/* Computed Parameter: HILInitialize1_POStart
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_POEnter;/* Computed Parameter: HILInitialize1_POEnter
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_POReset;/* Computed Parameter: HILInitialize1_POReset
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_OOReset;/* Computed Parameter: HILInitialize1_OOReset
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_DOFinal;/* Computed Parameter: HILInitialize1_DOFinal
                                    * Referenced by: '<Root>/HIL Initialize1'
                                    */
  boolean_T HILInitialize1_DOInitial;
                                 /* Computed Parameter: HILInitialize1_DOInitial
                                  * Referenced by: '<Root>/HIL Initialize1'
                                  */
  boolean_T HILReadEncoderTimebase_Active;
                            /* Computed Parameter: HILReadEncoderTimebase_Active
                             * Referenced by: '<S3>/HIL Read Encoder Timebase'
                             */
  boolean_T StreamCall1_NonBlocking;
                                  /* Computed Parameter: StreamCall1_NonBlocking
                                   * Referenced by: '<S4>/Stream Call1'
                                   */
  boolean_T StreamCall1_Active;        /* Computed Parameter: StreamCall1_Active
                                        * Referenced by: '<S4>/Stream Call1'
                                        */
  boolean_T HILWriteAnalog_Active;  /* Computed Parameter: HILWriteAnalog_Active
                                     * Referenced by: '<S3>/HIL Write Analog'
                                     */
  boolean_T GameController_AutoCenter;
                                /* Computed Parameter: GameController_AutoCenter
                                 * Referenced by: '<S5>/Game Controller'
                                 */
  boolean_T GameController_Enabled;/* Computed Parameter: GameController_Enabled
                                    * Referenced by: '<S5>/Game Controller'
                                    */
  uint8_T HILReadEncoderTimebase_Overflow;
                          /* Computed Parameter: HILReadEncoderTimebase_Overflow
                           * Referenced by: '<S3>/HIL Read Encoder Timebase'
                           */
  uint8_T StringConstant_Value[255];   /* Expression: value
                                        * Referenced by: '<S4>/String Constant'
                                        */
  uint8_T StreamCall1_URI;             /* Expression: uri_argument
                                        * Referenced by: '<S4>/Stream Call1'
                                        */
  uint8_T StreamCall1_Endian;          /* Computed Parameter: StreamCall1_Endian
                                        * Referenced by: '<S4>/Stream Call1'
                                        */
  uint8_T GameController_ControllerNumber;
                          /* Computed Parameter: GameController_ControllerNumber
                           * Referenced by: '<S5>/Game Controller'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_heli_q8_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeF[1][10];
  ODE1_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_heli_q8_T heli_q8_P;

/* Block signals (default storage) */
extern B_heli_q8_T heli_q8_B;

/* Continuous states (default storage) */
extern X_heli_q8_T heli_q8_X;

/* Block states (default storage) */
extern DW_heli_q8_T heli_q8_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void heli_q8_initialize(void);
extern void heli_q8_output0(void);
extern void heli_q8_update0(void);
extern void heli_q8_output(int_T tid);
extern void heli_q8_update(int_T tid);
extern void heli_q8_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern heli_q8_rtModel *heli_q8(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_heli_q8_T *const heli_q8_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'heli_q8'
 * '<S1>'   : 'heli_q8/Conversion1'
 * '<S2>'   : 'heli_q8/Gyro vector to [pitch rate, elevation rate, travel rate]'
 * '<S3>'   : 'heli_q8/Heli 3D1'
 * '<S4>'   : 'heli_q8/IMU1'
 * '<S5>'   : 'heli_q8/Joystick1'
 * '<S6>'   : 'heli_q8/LQR1'
 * '<S7>'   : 'heli_q8/MATLAB Function1'
 * '<S8>'   : 'heli_q8/Observer1'
 */
#endif                                 /* RTW_HEADER_heli_q8_h_ */
