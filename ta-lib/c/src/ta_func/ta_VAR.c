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
 *  MF       Mario Fortier
 *  JV       Jesus Viver <324122@cienz.unizar.es>
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  100502 JV   Speed optimization of the algorithm
 *  052603 MF   Adapt code to compile with .NET Managed C++
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
/* Generated */ int Core::VarianceLookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                           double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int varianceLookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                            double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_VAR_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */       optInNbDev = 1.000000e+0;
/* Generated */    else if( (optInNbDev < -3.000000e+37) ||/* Generated */  (optInNbDev > 3.000000e+37) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   UNUSED_VARIABLE(optInNbDev);

   return optInTimePeriod-1;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_VAR - Variance
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * optInNbDev:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Nb of deviations
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Variance( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          SubArray<double>^ inReal,
/* Generated */                                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Variance( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          cli::array<double>^ inReal,
/* Generated */                                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode variance( int    startIdx,
/* Generated */                          int    endIdx,
/* Generated */                          double       inReal[],
/* Generated */                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                          MInteger     outBegIdx,
/* Generated */                          MInteger     outNBElement,
/* Generated */                          double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_VAR( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                                          const double inReal[],
/* Generated */                                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                          int          *outBegIdx,
/* Generated */                                          int          *outNBElement,
/* Generated */                                          double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */

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
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */       optInNbDev = 1.000000e+0;
/* Generated */    else if( (optInNbDev < -3.000000e+37) ||/* Generated */  (optInNbDev > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */
   return FUNCTION_CALL(INT_VAR)( startIdx, endIdx, inReal,
                                  optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                      
                                  outBegIdx, outNBElement, outReal );
}


#if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
  // No INT function
#else

#if defined( _MANAGED ) && defined( USE_SUBARRAY )
enum class Core::RetCode Core::TA_INT_VAR( int    startIdx,
                                           int    endIdx,
							               SubArray<double>^ inReal,
                                           int    optInTimePeriod,                       
                                           [Out]int% outBegIdx,
                                           [Out]int% outNBElement,
										   SubArray<double>^ outReal )
#elif defined( _MANAGED ) 
enum class Core::RetCode Core::TA_INT_VAR( int    startIdx,
                                           int    endIdx,
							               cli::array<INPUT_TYPE>^ inReal,
                                           int    optInTimePeriod,                       
                                           [Out]int% outBegIdx,
                                           [Out]int% outNBElement,
										   cli::array<double>^ outReal )
#elif defined( _JAVA )
public RetCode TA_INT_VAR( int        startIdx,
                           int        endIdx,
                           INPUT_TYPE inReal[],
                           int        optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                       
                           MInteger   outBegIdx,
                           MInteger   outNBElement,
                           double     outReal[] )
#else
TA_RetCode TA_PREFIX(INT_VAR)( int    startIdx,
                               int    endIdx,
                               const INPUT_TYPE *inReal,
                               int    optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                       
                               int   *outBegIdx,
                               int   *outNBElement,
                               double      *outReal )
#endif
{
   double tempReal, periodTotal1, periodTotal2, meanValue1, meanValue2;
   int i, outIdx, trailingIdx, nbInitialElementNeeded;

   /* Validate the calculation method type and
    * identify the minimum number of price bar needed
    * to calculate at least one output.
    */
   nbInitialElementNeeded = (optInTimePeriod-1);

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < nbInitialElementNeeded )
      startIdx = nbInitialElementNeeded;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the MA calculation using tight loops. */
   /* Add-up the initial periods, except for the last value. */
   periodTotal1 = 0;
   periodTotal2 = 0;
   trailingIdx = startIdx-nbInitialElementNeeded;

   i=trailingIdx;
   if( optInTimePeriod > 1 )
   {
      while( i < startIdx ) {
         tempReal = inReal[i++];
         periodTotal1 += tempReal;
         tempReal *= tempReal;
         periodTotal2 += tempReal;
      }
   }

   /* Proceed with the calculation for the requested range.
    * Note that this algorithm allows the inReal and
    * outReal to be the same buffer.
    */
   outIdx = 0;
   do
   {
      tempReal = inReal[i++];

      /* Square and add all the deviation over
       * the same periods.
       */

      periodTotal1 += tempReal;
      tempReal *= tempReal;
      periodTotal2 += tempReal;

      /* Square and add all the deviation over
       * the same period.
       */

      meanValue1 = periodTotal1 / optInTimePeriod;
      meanValue2 = periodTotal2 / optInTimePeriod;

      tempReal = inReal[trailingIdx++];
      periodTotal1 -= tempReal;
      tempReal *= tempReal;
      periodTotal2 -= tempReal;

      outReal[outIdx++] = meanValue2-meanValue1*meanValue1;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}
#endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined( USE_SINGLE_PRECISION_INPUT )

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::VarianceStateInit( struct TA_Variance_State** _state,
/* Generated */                            int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                            double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int varianceStateInit( struct TA_variance_State** _state,
/* Generated */                             int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                             double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_VAR_StateInit( struct TA_VAR_State** _state,
/* Generated */                                           int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                           double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
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
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */       optInNbDev = 1.000000e+0;
/* Generated */    else if( (optInNbDev < -3.000000e+37) ||/* Generated */  (optInNbDev > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = calloc(1, sizeof(struct TA_VAR_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod = optInTimePeriod;
/* Generated */    STATE_P.optInNbDev = optInNbDev;
/* Generated */    #ifndef TA_VAR_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_VAR_Lookback(optInTimePeriod, optInNbDev );
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_VAR_Data));
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
/* Generated */ int Core::VarianceState( struct TA_Variance_State* _state,
/* Generated */                        cli::array<double>^ inReal,
/* Generated */                        cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int varianceState( struct TA_variance_State* _state,
/* Generated */                         double       inReal,
/* Generated */                         double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_VAR_State( struct TA_VAR_State* _state,
/* Generated */                                       const double inReal,
/* Generated */                                       double        *outReal )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   #define TA_VAR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
   double tempReal, meanValue1, meanValue2;
/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    int _cur_idx = ++STATE.mem_index % MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSHPOP ethods won't be used
/* Generated */    #ifndef TA_VAR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inReal,inReal);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */
   if (FIRST_LAUNCH)
    {
        STATE.periodTotal1 = 0.;
        STATE.periodTotal2 = 0.;
    }

    if (NEED_MORE_DATA)
    {
      STATE.periodTotal1 += inReal;
      STATE.periodTotal2 += inReal*inReal;
      PUSH_TO_MEM(inReal,inReal);
      return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData);
    }

    meanValue1 = STATE.periodTotal1 / STATE.optInTimePeriod;
    meanValue2 = STATE.periodTotal2 / STATE.optInTimePeriod;

    VALUE_HANDLE_DEREF(outReal) = meanValue2 - meanValue1 * meanValue1;

    tempReal = POP_FROM_MEM(inReal);
    STATE.periodTotal1 -= tempReal;
    STATE.periodTotal2 -= tempReal*tempReal;

    STATE.periodTotal1 += inReal;
    STATE.periodTotal2 += inReal*inReal;
    PUSH_TO_MEM(inReal,inReal);

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::VarianceStateFree( struct TA_Variance_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int varianceStateFree( struct TA_variance_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_VAR_StateFree( struct TA_VAR_State** _state )
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
/* Generated */    if (STATE != NULL) {
/* Generated */          if (MEM_P != NULL) free(MEM_P);
/* Generated */          free(STATE); STATE = NULL;}
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
/* Generated */ enum class Core::RetCode Core::Variance( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          SubArray<float>^ inReal,
/* Generated */                                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Variance( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          cli::array<float>^ inReal,
/* Generated */                                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode variance( int    startIdx,
/* Generated */                          int    endIdx,
/* Generated */                          float        inReal[],
/* Generated */                          int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                          double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                          MInteger     outBegIdx,
/* Generated */                          MInteger     outNBElement,
/* Generated */                          double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_VAR( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inReal[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 5;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */        optInNbDev = 1.000000e+0;
/* Generated */     else if( (optInNbDev < -3.000000e+37) ||  (optInNbDev > 3.000000e+37) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    return FUNCTION_CALL(INT_VAR)( startIdx, endIdx, inReal,
/* Generated */                                   optInTimePeriod,                       
/* Generated */                                   outBegIdx, outNBElement, outReal );
/* Generated */ }
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
/* Generated */   // No INT function
/* Generated */ #else
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::TA_INT_VAR( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */ 							               SubArray<double>^ inReal,
/* Generated */                                            int    optInTimePeriod,                       
/* Generated */                                            [Out]int% outBegIdx,
/* Generated */                                            [Out]int% outNBElement,
/* Generated */ 										   SubArray<double>^ outReal )
/* Generated */ #elif defined( _MANAGED ) 
/* Generated */ enum class Core::RetCode Core::TA_INT_VAR( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */ 							               cli::array<INPUT_TYPE>^ inReal,
/* Generated */                                            int    optInTimePeriod,                       
/* Generated */                                            [Out]int% outBegIdx,
/* Generated */                                            [Out]int% outNBElement,
/* Generated */ 										   cli::array<double>^ outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode TA_INT_VAR( int        startIdx,
/* Generated */                            int        endIdx,
/* Generated */                            INPUT_TYPE inReal[],
/* Generated */                            int        optInTimePeriod,                        
/* Generated */                            MInteger   outBegIdx,
/* Generated */                            MInteger   outNBElement,
/* Generated */                            double     outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_PREFIX(INT_VAR)( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                const INPUT_TYPE *inReal,
/* Generated */                                int    optInTimePeriod,                        
/* Generated */                                int   *outBegIdx,
/* Generated */                                int   *outNBElement,
/* Generated */                                double      *outReal )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double tempReal, periodTotal1, periodTotal2, meanValue1, meanValue2;
/* Generated */    int i, outIdx, trailingIdx, nbInitialElementNeeded;
/* Generated */    nbInitialElementNeeded = (optInTimePeriod-1);
/* Generated */    if( startIdx < nbInitialElementNeeded )
/* Generated */       startIdx = nbInitialElementNeeded;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    periodTotal1 = 0;
/* Generated */    periodTotal2 = 0;
/* Generated */    trailingIdx = startIdx-nbInitialElementNeeded;
/* Generated */    i=trailingIdx;
/* Generated */    if( optInTimePeriod > 1 )
/* Generated */    {
/* Generated */       while( i < startIdx ) {
/* Generated */          tempReal = inReal[i++];
/* Generated */          periodTotal1 += tempReal;
/* Generated */          tempReal *= tempReal;
/* Generated */          periodTotal2 += tempReal;
/* Generated */       }
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */       tempReal = inReal[i++];
/* Generated */       periodTotal1 += tempReal;
/* Generated */       tempReal *= tempReal;
/* Generated */       periodTotal2 += tempReal;
/* Generated */       meanValue1 = periodTotal1 / optInTimePeriod;
/* Generated */       meanValue2 = periodTotal2 / optInTimePeriod;
/* Generated */       tempReal = inReal[trailingIdx++];
/* Generated */       periodTotal1 -= tempReal;
/* Generated */       tempReal *= tempReal;
/* Generated */       periodTotal2 -= tempReal;
/* Generated */       outReal[outIdx++] = meanValue2-meanValue1*meanValue1;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ #endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined( USE_SINGLE_PRECISION_INPUT )
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

