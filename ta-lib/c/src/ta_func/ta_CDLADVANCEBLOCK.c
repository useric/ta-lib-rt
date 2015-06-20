/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  120404 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlAdvanceBlockLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlAdvanceBlockLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLADVANCEBLOCK_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return max( max( max( TA_CANDLEAVGPERIOD(ShadowLong), TA_CANDLEAVGPERIOD(ShadowShort) ),
                     max( TA_CANDLEAVGPERIOD(Far), TA_CANDLEAVGPERIOD(Near) ) ),
                TA_CANDLEAVGPERIOD(BodyLong)
            ) + 2;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLADVANCEBLOCK - Advance Block
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlAdvanceBlock( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 SubArray<double>^ inOpen,
/* Generated */                                                 SubArray<double>^ inHigh,
/* Generated */                                                 SubArray<double>^ inLow,
/* Generated */                                                 SubArray<double>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlAdvanceBlock( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 cli::array<double>^ inOpen,
/* Generated */                                                 cli::array<double>^ inHigh,
/* Generated */                                                 cli::array<double>^ inLow,
/* Generated */                                                 cli::array<double>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlAdvanceBlock( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 double       inOpen[],
/* Generated */                                 double       inHigh[],
/* Generated */                                 double       inLow[],
/* Generated */                                 double       inClose[],
/* Generated */                                 MInteger     outBegIdx,
/* Generated */                                 MInteger     outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLADVANCEBLOCK( int    startIdx,
/* Generated */                                           int    endIdx,
/* Generated */                                                      const double inOpen[],
/* Generated */                                                      const double inHigh[],
/* Generated */                                                      const double inLow[],
/* Generated */                                                      const double inClose[],
/* Generated */                                                      int          *outBegIdx,
/* Generated */                                                      int          *outNBElement,
/* Generated */                                                      int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
	ARRAY_LOCAL(ShadowShortPeriodTotal,3);
	ARRAY_LOCAL(ShadowLongPeriodTotal,2);
	ARRAY_LOCAL(NearPeriodTotal,3);
	ARRAY_LOCAL(FarPeriodTotal,3);
    double BodyLongPeriodTotal;
    int i, outIdx, totIdx, BodyLongTrailingIdx, ShadowShortTrailingIdx, ShadowLongTrailingIdx, NearTrailingIdx, 
        FarTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLADVANCEBLOCK)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   ShadowShortPeriodTotal[2] = 0;
   ShadowShortPeriodTotal[1] = 0;
   ShadowShortPeriodTotal[0] = 0;
   ShadowShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowShort);
   ShadowLongPeriodTotal[1] = 0;
   ShadowLongPeriodTotal[0] = 0;
   ShadowLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowLong);
   NearPeriodTotal[2] = 0;
   NearPeriodTotal[1] = 0;
   NearPeriodTotal[0] = 0;
   NearTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Near);
   FarPeriodTotal[2] = 0;
   FarPeriodTotal[1] = 0;
   FarPeriodTotal[0] = 0;
   FarTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Far);
   BodyLongPeriodTotal = 0;
   BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);
   
   i = ShadowShortTrailingIdx;
   while( i < startIdx ) {
        ShadowShortPeriodTotal[2] += TA_CANDLERANGE( ShadowShort, i-2 );
        ShadowShortPeriodTotal[1] += TA_CANDLERANGE( ShadowShort, i-1 );
        ShadowShortPeriodTotal[0] += TA_CANDLERANGE( ShadowShort, i );
        i++;
   }
   i = ShadowLongTrailingIdx;
   while( i < startIdx ) {
        ShadowLongPeriodTotal[1] += TA_CANDLERANGE( ShadowLong, i-1 );
        ShadowLongPeriodTotal[0] += TA_CANDLERANGE( ShadowLong, i );
        i++;
   }
   i = NearTrailingIdx;
   while( i < startIdx ) {
        NearPeriodTotal[2] += TA_CANDLERANGE( Near, i-2 );
        NearPeriodTotal[1] += TA_CANDLERANGE( Near, i-1 );
        i++;
   }
   i = FarTrailingIdx;
   while( i < startIdx ) {
        FarPeriodTotal[2] += TA_CANDLERANGE( Far, i-2 );
        FarPeriodTotal[1] += TA_CANDLERANGE( Far, i-1 );
        i++;
   }
   i = BodyLongTrailingIdx;
   while( i < startIdx ) {
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 );
        i++;
   }
   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - three white candlesticks with consecutively higher closes
    * - each candle opens within or near the previous white real body 
    * - first candle: long white with no or very short upper shadow (a short shadow is accepted too for more flexibility)
    * - second and third candles, or only third candle, show signs of weakening: progressively smaller white real bodies 
    * and/or relatively long upper shadows; see below for specific conditions
    * The meanings of "long body", "short shadow", "far" and "near" are specified with TA_SetCandleSettings;
    * outInteger is negative (-1 to -100): advance block is always bearish;
    * the user should consider that advance block is significant when it appears in uptrend, while this function 
    * does not consider it
    */
   outIdx = 0;
   do
   {
        if( TA_CANDLECOLOR(i-2) == 1 &&                                                     // 1st white
            TA_CANDLECOLOR(i-1) == 1 &&                                                     // 2nd white
            TA_CANDLECOLOR(i) == 1 &&                                                       // 3rd white
            inClose[i] > inClose[i-1] && inClose[i-1] > inClose[i-2] &&                     // consecutive higher closes
            inOpen[i-1] > inOpen[i-2] &&                                                    // 2nd opens within/near 1st real body
#ifdef TA_LIB_PRO
      /* Section for code distributed with TA-Lib Pro only. */
#else
            inOpen[i-1] <= inClose[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal[2], i-2 ) &&
            inOpen[i] > inOpen[i-1] &&                                                      // 3rd opens within/near 2nd real body
#endif
            inOpen[i] <= inClose[i-1] + TA_CANDLEAVERAGE( Near, NearPeriodTotal[1], i-1 ) &&
            TA_REALBODY(i-2) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i-2 ) && // 1st: long real body
            TA_UPPERSHADOW(i-2) < TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[2], i-2 ) &&
                                                                                            // 1st: short upper shadow
            (
                // ( 2 far smaller than 1 && 3 not longer than 2 )
                // advance blocked with the 2nd, 3rd must not carry on the advance
                (   
                    TA_REALBODY(i-1) < TA_REALBODY(i-2) - TA_CANDLEAVERAGE( Far, FarPeriodTotal[2], i-2 ) &&
                    TA_REALBODY(i) < TA_REALBODY(i-1) + TA_CANDLEAVERAGE( Near, NearPeriodTotal[1], i-1 )
                ) ||
                // 3 far smaller than 2
                // advance blocked with the 3rd
                (
                    TA_REALBODY(i) < TA_REALBODY(i-1) - TA_CANDLEAVERAGE( Far, FarPeriodTotal[1], i-1 ) 
                ) ||
                // ( 3 smaller than 2 && 2 smaller than 1 && (3 or 2 not short upper shadow) )
                // advance blocked with progressively smaller real bodies and some upper shadows
                (
                    TA_REALBODY(i) < TA_REALBODY(i-1) &&
                    TA_REALBODY(i-1) < TA_REALBODY(i-2) &&
                    ( 
                        TA_UPPERSHADOW(i) > TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[0], i ) ||
                        TA_UPPERSHADOW(i-1) > TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[1], i-1 )
                    )
                ) ||
                // ( 3 smaller than 2 && 3 long upper shadow )
                // advance blocked with 3rd candle's long upper shadow and smaller body
                (
                    TA_REALBODY(i) < TA_REALBODY(i-1) &&
                    TA_UPPERSHADOW(i) > TA_CANDLEAVERAGE( ShadowLong, ShadowLongPeriodTotal[0], i )
                )
            )
          )
            outInteger[outIdx++] = -100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        for (totIdx = 2; totIdx >= 0; --totIdx)
            ShadowShortPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowShort, i-totIdx ) 
                                            - TA_CANDLERANGE( ShadowShort, ShadowShortTrailingIdx-totIdx );
        for (totIdx = 1; totIdx >= 0; --totIdx)
            ShadowLongPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowLong, i-totIdx ) 
                                           - TA_CANDLERANGE( ShadowLong, ShadowLongTrailingIdx-totIdx );
        for (totIdx = 2; totIdx >= 1; --totIdx) {
            FarPeriodTotal[totIdx] += TA_CANDLERANGE( Far, i-totIdx ) 
                                    - TA_CANDLERANGE( Far, FarTrailingIdx-totIdx );
            NearPeriodTotal[totIdx] += TA_CANDLERANGE( Near, i-totIdx ) 
                                     - TA_CANDLERANGE( Near, NearTrailingIdx-totIdx );
        }
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx-2 );
        i++; 
        ShadowShortTrailingIdx++;
        ShadowLongTrailingIdx++;
        NearTrailingIdx++;
        FarTrailingIdx++;
        BodyLongTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlAdvanceBlockStateInit( struct TA_CdlAdvanceBlock_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlAdvanceBlockStateInit( struct TA_cdlAdvanceBlock_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLADVANCEBLOCK_StateInit( struct TA_CDLADVANCEBLOCK_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = calloc(1, sizeof(struct TA_CDLADVANCEBLOCK_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    #ifndef TA_CDLADVANCEBLOCK_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_CDLADVANCEBLOCK_Lookback();
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_CDLADVANCEBLOCK_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlAdvanceBlockState( struct TA_CdlAdvanceBlock_State* _state,
/* Generated */                               cli::array<double>^ inOpen,
/* Generated */                               cli::array<double>^ inHigh,
/* Generated */                               cli::array<double>^ inLow,
/* Generated */                               cli::array<double>^ inClose,
/* Generated */                               cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlAdvanceBlockState( struct TA_cdlAdvanceBlock_State* _state,
/* Generated */                                double       inOpen,
/* Generated */                                double       inHigh,
/* Generated */                                double       inLow,
/* Generated */                                double       inClose,
/* Generated */                                int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLADVANCEBLOCK_State( struct TA_CDLADVANCEBLOCK_State* _state,
/* Generated */                                                   const double inOpen,
/* Generated */                                                   const double inHigh,
/* Generated */                                                   const double inLow,
/* Generated */                                                   const double inClose,
/* Generated */                                                   int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    int _cur_idx = ++STATE.mem_index % MEM_SIZE;
/* Generated */    #ifndef TA_CDLADVANCEBLOCK_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlAdvanceBlockStateFree( struct TA_CdlAdvanceBlock_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlAdvanceBlockStateFree( struct TA_cdlAdvanceBlock_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLADVANCEBLOCK_StateFree( struct TA_CDLADVANCEBLOCK_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (*_state != NULL) {
/* Generated */          if ((*_state)->memory != NULL) free((*_state)->memory);
/* Generated */          free(*_state); *_state = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlAdvanceBlock( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 SubArray<float>^ inOpen,
/* Generated */                                                 SubArray<float>^ inHigh,
/* Generated */                                                 SubArray<float>^ inLow,
/* Generated */                                                 SubArray<float>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlAdvanceBlock( int    startIdx,
/* Generated */                                                 int    endIdx,
/* Generated */                                                 cli::array<float>^ inOpen,
/* Generated */                                                 cli::array<float>^ inHigh,
/* Generated */                                                 cli::array<float>^ inLow,
/* Generated */                                                 cli::array<float>^ inClose,
/* Generated */                                                 [Out]int%    outBegIdx,
/* Generated */                                                 [Out]int%    outNBElement,
/* Generated */                                                 cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlAdvanceBlock( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                 float        inOpen[],
/* Generated */                                 float        inHigh[],
/* Generated */                                 float        inLow[],
/* Generated */                                 float        inClose[],
/* Generated */                                 MInteger     outBegIdx,
/* Generated */                                 MInteger     outNBElement,
/* Generated */                                 int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLADVANCEBLOCK( int    startIdx,
/* Generated */                                  int    endIdx,
/* Generated */                                  const float  inOpen[],
/* Generated */                                  const float  inHigh[],
/* Generated */                                  const float  inLow[],
/* Generated */                                  const float  inClose[],
/* Generated */                                  int          *outBegIdx,
/* Generated */                                  int          *outNBElement,
/* Generated */                                  int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */ 	ARRAY_LOCAL(ShadowShortPeriodTotal,3);
/* Generated */ 	ARRAY_LOCAL(ShadowLongPeriodTotal,2);
/* Generated */ 	ARRAY_LOCAL(NearPeriodTotal,3);
/* Generated */ 	ARRAY_LOCAL(FarPeriodTotal,3);
/* Generated */     double BodyLongPeriodTotal;
/* Generated */     int i, outIdx, totIdx, BodyLongTrailingIdx, ShadowShortTrailingIdx, ShadowLongTrailingIdx, NearTrailingIdx, 
/* Generated */         FarTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLADVANCEBLOCK)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    ShadowShortPeriodTotal[2] = 0;
/* Generated */    ShadowShortPeriodTotal[1] = 0;
/* Generated */    ShadowShortPeriodTotal[0] = 0;
/* Generated */    ShadowShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowShort);
/* Generated */    ShadowLongPeriodTotal[1] = 0;
/* Generated */    ShadowLongPeriodTotal[0] = 0;
/* Generated */    ShadowLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowLong);
/* Generated */    NearPeriodTotal[2] = 0;
/* Generated */    NearPeriodTotal[1] = 0;
/* Generated */    NearPeriodTotal[0] = 0;
/* Generated */    NearTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Near);
/* Generated */    FarPeriodTotal[2] = 0;
/* Generated */    FarPeriodTotal[1] = 0;
/* Generated */    FarPeriodTotal[0] = 0;
/* Generated */    FarTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(Far);
/* Generated */    BodyLongPeriodTotal = 0;
/* Generated */    BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);
/* Generated */    i = ShadowShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowShortPeriodTotal[2] += TA_CANDLERANGE( ShadowShort, i-2 );
/* Generated */         ShadowShortPeriodTotal[1] += TA_CANDLERANGE( ShadowShort, i-1 );
/* Generated */         ShadowShortPeriodTotal[0] += TA_CANDLERANGE( ShadowShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = ShadowLongTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowLongPeriodTotal[1] += TA_CANDLERANGE( ShadowLong, i-1 );
/* Generated */         ShadowLongPeriodTotal[0] += TA_CANDLERANGE( ShadowLong, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = NearTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         NearPeriodTotal[2] += TA_CANDLERANGE( Near, i-2 );
/* Generated */         NearPeriodTotal[1] += TA_CANDLERANGE( Near, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = FarTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         FarPeriodTotal[2] += TA_CANDLERANGE( Far, i-2 );
/* Generated */         FarPeriodTotal[1] += TA_CANDLERANGE( Far, i-1 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = BodyLongTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( TA_CANDLECOLOR(i-2) == 1 &&                                                     // 1st white
/* Generated */             TA_CANDLECOLOR(i-1) == 1 &&                                                     // 2nd white
/* Generated */             TA_CANDLECOLOR(i) == 1 &&                                                       // 3rd white
/* Generated */             inClose[i] > inClose[i-1] && inClose[i-1] > inClose[i-2] &&                     // consecutive higher closes
/* Generated */             inOpen[i-1] > inOpen[i-2] &&                                                    // 2nd opens within/near 1st real body
/* Generated */ #ifdef TA_LIB_PRO
/* Generated */ #else
/* Generated */             inOpen[i-1] <= inClose[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal[2], i-2 ) &&
/* Generated */             inOpen[i] > inOpen[i-1] &&                                                      // 3rd opens within/near 2nd real body
/* Generated */ #endif
/* Generated */             inOpen[i] <= inClose[i-1] + TA_CANDLEAVERAGE( Near, NearPeriodTotal[1], i-1 ) &&
/* Generated */             TA_REALBODY(i-2) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i-2 ) && // 1st: long real body
/* Generated */             TA_UPPERSHADOW(i-2) < TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[2], i-2 ) &&
/* Generated */                                                                                             // 1st: short upper shadow
/* Generated */             (
/* Generated */                 // ( 2 far smaller than 1 && 3 not longer than 2 )
/* Generated */                 // advance blocked with the 2nd, 3rd must not carry on the advance
/* Generated */                 (   
/* Generated */                     TA_REALBODY(i-1) < TA_REALBODY(i-2) - TA_CANDLEAVERAGE( Far, FarPeriodTotal[2], i-2 ) &&
/* Generated */                     TA_REALBODY(i) < TA_REALBODY(i-1) + TA_CANDLEAVERAGE( Near, NearPeriodTotal[1], i-1 )
/* Generated */                 ) ||
/* Generated */                 // 3 far smaller than 2
/* Generated */                 // advance blocked with the 3rd
/* Generated */                 (
/* Generated */                     TA_REALBODY(i) < TA_REALBODY(i-1) - TA_CANDLEAVERAGE( Far, FarPeriodTotal[1], i-1 ) 
/* Generated */                 ) ||
/* Generated */                 // ( 3 smaller than 2 && 2 smaller than 1 && (3 or 2 not short upper shadow) )
/* Generated */                 // advance blocked with progressively smaller real bodies and some upper shadows
/* Generated */                 (
/* Generated */                     TA_REALBODY(i) < TA_REALBODY(i-1) &&
/* Generated */                     TA_REALBODY(i-1) < TA_REALBODY(i-2) &&
/* Generated */                     ( 
/* Generated */                         TA_UPPERSHADOW(i) > TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[0], i ) ||
/* Generated */                         TA_UPPERSHADOW(i-1) > TA_CANDLEAVERAGE( ShadowShort, ShadowShortPeriodTotal[1], i-1 )
/* Generated */                     )
/* Generated */                 ) ||
/* Generated */                 // ( 3 smaller than 2 && 3 long upper shadow )
/* Generated */                 // advance blocked with 3rd candle's long upper shadow and smaller body
/* Generated */                 (
/* Generated */                     TA_REALBODY(i) < TA_REALBODY(i-1) &&
/* Generated */                     TA_UPPERSHADOW(i) > TA_CANDLEAVERAGE( ShadowLong, ShadowLongPeriodTotal[0], i )
/* Generated */                 )
/* Generated */             )
/* Generated */           )
/* Generated */             outInteger[outIdx++] = -100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         for (totIdx = 2; totIdx >= 0; --totIdx)
/* Generated */             ShadowShortPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowShort, i-totIdx ) 
/* Generated */                                             - TA_CANDLERANGE( ShadowShort, ShadowShortTrailingIdx-totIdx );
/* Generated */         for (totIdx = 1; totIdx >= 0; --totIdx)
/* Generated */             ShadowLongPeriodTotal[totIdx] += TA_CANDLERANGE( ShadowLong, i-totIdx ) 
/* Generated */                                            - TA_CANDLERANGE( ShadowLong, ShadowLongTrailingIdx-totIdx );
/* Generated */         for (totIdx = 2; totIdx >= 1; --totIdx) {
/* Generated */             FarPeriodTotal[totIdx] += TA_CANDLERANGE( Far, i-totIdx ) 
/* Generated */                                     - TA_CANDLERANGE( Far, FarTrailingIdx-totIdx );
/* Generated */             NearPeriodTotal[totIdx] += TA_CANDLERANGE( Near, i-totIdx ) 
/* Generated */                                      - TA_CANDLERANGE( Near, NearTrailingIdx-totIdx );
/* Generated */         }
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i-2 ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx-2 );
/* Generated */         i++; 
/* Generated */         ShadowShortTrailingIdx++;
/* Generated */         ShadowLongTrailingIdx++;
/* Generated */         NearTrailingIdx++;
/* Generated */         FarTrailingIdx++;
/* Generated */         BodyLongTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

