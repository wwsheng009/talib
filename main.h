#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "ta_func.h"
#include "ta_abstract.h"
/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

const char * DLL_EXPORT _cdecl DLL_TA_FunctionDescriptionXML( );


/* TA_Initialize() initialize the ressources used by TA-Lib. This
 * function must be called once prior to any other functions declared in
 * this file.
 *
 * TA_Shutdown() allows to free all ressources used by TA-Lib. Following
 * a shutdown, TA_Initialize() must be called again for re-using TA-Lib.
 *
 * TA_Shutdown() should be called prior to exiting the application code.
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_Initialize( void );
TA_RetCode DLL_EXPORT _cdecl DLL_TA_Shutdown( void );


/*
 * TA_ACOS - Vector Trigonometric ACos
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ACOS( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ACOS( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ACOS_Lookback( void );


/*
 * TA_AD - Chaikin A/D Line
 *
 * Input  = High, Low, Close, Volume
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_AD( int    startIdx,
                  int    endIdx,
                  const double inHigh[],
                  const double inLow[],
                  const double inClose[],
                  const double inVolume[],
                  int          *outBegIdx,
                  int          *outNBElement,
                  double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_AD( int    startIdx,
                    int    endIdx,
                    const float  inHigh[],
                    const float  inLow[],
                    const float  inClose[],
                    const float  inVolume[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_AD_Lookback( void );


/*
 * TA_ADD - Vector Arithmetic Add
 *
 * Input  = double, double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ADD( int    startIdx,
                   int    endIdx,
                   const double inReal0[],
                   const double inReal1[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ADD( int    startIdx,
                     int    endIdx,
                     const float  inReal0[],
                     const float  inReal1[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ADD_Lookback( void );


/*
 * TA_ADOSC - Chaikin A/D Oscillator
 *
 * Input  = High, Low, Close, Volume
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 *
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ADOSC( int    startIdx,
                     int    endIdx,
                     const double inHigh[],
                     const double inLow[],
                     const double inClose[],
                     const double inVolume[],
                     int           optInFastPeriod, /* From 2 to 100000 */
                     int           optInSlowPeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ADOSC( int    startIdx,
                       int    endIdx,
                       const float  inHigh[],
                       const float  inLow[],
                       const float  inClose[],
                       const float  inVolume[],
                       int           optInFastPeriod, /* From 2 to 100000 */
                       int           optInSlowPeriod, /* From 2 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ADOSC_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
                     int           optInSlowPeriod );  /* From 2 to 100000 */


/*
 * TA_ADX - Average Directional Movement Index
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ADX( int    startIdx,
                   int    endIdx,
                   const double inHigh[],
                   const double inLow[],
                   const double inClose[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ADX( int    startIdx,
                     int    endIdx,
                     const float  inHigh[],
                     const float  inLow[],
                     const float  inClose[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ADX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_ADXR - Average Directional Movement Index Rating
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ADXR( int    startIdx,
                    int    endIdx,
                    const double inHigh[],
                    const double inLow[],
                    const double inClose[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ADXR( int    startIdx,
                      int    endIdx,
                      const float  inHigh[],
                      const float  inLow[],
                      const float  inClose[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ADXR_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_APO - Absolute Price Oscillator
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 *
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 *
 * optInMAType:
 *    Type of Moving Average
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_APO( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInFastPeriod, /* From 2 to 100000 */
                   int           optInSlowPeriod, /* From 2 to 100000 */
                   TA_MAType     optInMAType,
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_APO( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInFastPeriod, /* From 2 to 100000 */
                     int           optInSlowPeriod, /* From 2 to 100000 */
                     TA_MAType     optInMAType,
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_APO_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
                   int           optInSlowPeriod, /* From 2 to 100000 */
                   TA_MAType     optInMAType );

/*
 * TA_AROON - Aroon
 *
 * Input  = High, Low
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_AROON( int    startIdx,
                     int    endIdx,
                     const double inHigh[],
                     const double inLow[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outAroonDown[],
                     double        outAroonUp[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_AROON( int    startIdx,
                       int    endIdx,
                       const float  inHigh[],
                       const float  inLow[],
                       int           optInTimePeriod, /* From 2 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outAroonDown[],
                       double        outAroonUp[] );

int DLL_EXPORT _cdecl DLL_TA_AROON_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_AROONOSC - Aroon Oscillator
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_AROONOSC( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_AROONOSC( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_AROONOSC_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_ASIN - Vector Trigonometric ASin
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ASIN( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ASIN( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ASIN_Lookback( void );


/*
 * TA_ATAN - Vector Trigonometric ATan
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ATAN( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ATAN( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ATAN_Lookback( void );


/*
 * TA_ATR - Average True Range
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ATR( int    startIdx,
                   int    endIdx,
                   const double inHigh[],
                   const double inLow[],
                   const double inClose[],
                   int           optInTimePeriod, /* From 1 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ATR( int    startIdx,
                     int    endIdx,
                     const float  inHigh[],
                     const float  inLow[],
                     const float  inClose[],
                     int           optInTimePeriod, /* From 1 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ATR_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_AVGPRICE - Average Price
 *
 * Input  = Open, High, Low, Close
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_AVGPRICE( int    startIdx,
                        int    endIdx,
                        const double inOpen[],
                        const double inHigh[],
                        const double inLow[],
                        const double inClose[],
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_AVGPRICE( int    startIdx,
                          int    endIdx,
                          const float  inOpen[],
                          const float  inHigh[],
                          const float  inLow[],
                          const float  inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_AVGPRICE_Lookback( void );


/*
 * TA_BBANDS - Bollinger Bands
 *
 * Input  = double
 * Output = double, double, double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 * optInNbDevUp:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Deviation multiplier for upper band
 *
 * optInNbDevDn:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Deviation multiplier for lower band
 *
 * optInMAType:
 *    Type of Moving Average
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_BBANDS( int    startIdx,
                      int    endIdx,
                      const double inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      double        optInNbDevUp, /* From TA_REAL_MIN to TA_REAL_MAX */
                      double        optInNbDevDn, /* From TA_REAL_MIN to TA_REAL_MAX */
                      TA_MAType     optInMAType,
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outRealUpperBand[],
                      double        outRealMiddleBand[],
                      double        outRealLowerBand[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_BBANDS( int    startIdx,
                        int    endIdx,
                        const float  inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        double        optInNbDevUp, /* From TA_REAL_MIN to TA_REAL_MAX */
                        double        optInNbDevDn, /* From TA_REAL_MIN to TA_REAL_MAX */
                        TA_MAType     optInMAType,
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outRealUpperBand[],
                        double        outRealMiddleBand[],
                        double        outRealLowerBand[] );

int DLL_EXPORT _cdecl DLL_TA_BBANDS_Lookback( int           optInTimePeriod, /* From 2 to 100000 */
                      double        optInNbDevUp, /* From TA_REAL_MIN to TA_REAL_MAX */
                      double        optInNbDevDn, /* From TA_REAL_MIN to TA_REAL_MAX */
                      TA_MAType     optInMAType );

/*
 * TA_BETA - Beta
 *
 * Input  = double, double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_BETA( int    startIdx,
                    int    endIdx,
                    const double inReal0[],
                    const double inReal1[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_BETA( int    startIdx,
                      int    endIdx,
                      const float  inReal0[],
                      const float  inReal1[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_BETA_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_BOP - Balance Of Power
 *
 * Input  = Open, High, Low, Close
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_BOP( int    startIdx,
                   int    endIdx,
                   const double inOpen[],
                   const double inHigh[],
                   const double inLow[],
                   const double inClose[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_BOP( int    startIdx,
                     int    endIdx,
                     const float  inOpen[],
                     const float  inHigh[],
                     const float  inLow[],
                     const float  inClose[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_BOP_Lookback( void );


/*
 * TA_CCI - Commodity Channel Index
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CCI( int    startIdx,
                   int    endIdx,
                   const double inHigh[],
                   const double inLow[],
                   const double inClose[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CCI( int    startIdx,
                     int    endIdx,
                     const float  inHigh[],
                     const float  inLow[],
                     const float  inClose[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_CCI_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_CDL2CROWS - Two Crows
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL2CROWS( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL2CROWS( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL2CROWS_Lookback( void );


/*
 * TA_CDL3BLACKCROWS - Three Black Crows
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3BLACKCROWS( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3BLACKCROWS( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3BLACKCROWS_Lookback( void );


/*
 * TA_CDL3INSIDE - Three Inside Up/Down
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3INSIDE( int    startIdx,
                          int    endIdx,
                          const double inOpen[],
                          const double inHigh[],
                          const double inLow[],
                          const double inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3INSIDE( int    startIdx,
                            int    endIdx,
                            const float  inOpen[],
                            const float  inHigh[],
                            const float  inLow[],
                            const float  inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3INSIDE_Lookback( void );


/*
 * TA_CDL3LINESTRIKE - Three-Line Strike
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3LINESTRIKE( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3LINESTRIKE( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3LINESTRIKE_Lookback( void );


/*
 * TA_CDL3OUTSIDE - Three Outside Up/Down
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3OUTSIDE( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3OUTSIDE( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3OUTSIDE_Lookback( void );


/*
 * TA_CDL3STARSINSOUTH - Three Stars In The South
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3STARSINSOUTH( int    startIdx,
                                int    endIdx,
                                const double inOpen[],
                                const double inHigh[],
                                const double inLow[],
                                const double inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3STARSINSOUTH( int    startIdx,
                                  int    endIdx,
                                  const float  inOpen[],
                                  const float  inHigh[],
                                  const float  inLow[],
                                  const float  inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3STARSINSOUTH_Lookback( void );


/*
 * TA_CDL3WHITESOLDIERS - Three Advancing White Soldiers
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDL3WHITESOLDIERS( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDL3WHITESOLDIERS( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDL3WHITESOLDIERS_Lookback( void );


/*
 * TA_CDLABANDONEDBABY - Abandoned Baby
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLABANDONEDBABY( int    startIdx,
                                int    endIdx,
                                const double inOpen[],
                                const double inHigh[],
                                const double inLow[],
                                const double inClose[],
                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLABANDONEDBABY( int    startIdx,
                                  int    endIdx,
                                  const float  inOpen[],
                                  const float  inHigh[],
                                  const float  inLow[],
                                  const float  inClose[],
                                  double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLABANDONEDBABY_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLADVANCEBLOCK - Advance Block
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLADVANCEBLOCK( int    startIdx,
                               int    endIdx,
                               const double inOpen[],
                               const double inHigh[],
                               const double inLow[],
                               const double inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLADVANCEBLOCK( int    startIdx,
                                 int    endIdx,
                                 const float  inOpen[],
                                 const float  inHigh[],
                                 const float  inLow[],
                                 const float  inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLADVANCEBLOCK_Lookback( void );


/*
 * TA_CDLBELTHOLD - Belt-hold
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLBELTHOLD( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLBELTHOLD( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLBELTHOLD_Lookback( void );


/*
 * TA_CDLBREAKAWAY - Breakaway
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLBREAKAWAY( int    startIdx,
                            int    endIdx,
                            const double inOpen[],
                            const double inHigh[],
                            const double inLow[],
                            const double inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLBREAKAWAY( int    startIdx,
                              int    endIdx,
                              const float  inOpen[],
                              const float  inHigh[],
                              const float  inLow[],
                              const float  inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLBREAKAWAY_Lookback( void );


/*
 * TA_CDLCLOSINGMARUBOZU - Closing Marubozu
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLCLOSINGMARUBOZU( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLCLOSINGMARUBOZU( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLCLOSINGMARUBOZU_Lookback( void );


/*
 * TA_CDLCONCEALBABYSWALL - Concealing Baby Swallow
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLCONCEALBABYSWALL( int    startIdx,
                                   int    endIdx,
                                   const double inOpen[],
                                   const double inHigh[],
                                   const double inLow[],
                                   const double inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLCONCEALBABYSWALL( int    startIdx,
                                     int    endIdx,
                                     const float  inOpen[],
                                     const float  inHigh[],
                                     const float  inLow[],
                                     const float  inClose[],
                                     int          *outBegIdx,
                                     int          *outNBElement,
                                     int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLCONCEALBABYSWALL_Lookback( void );


/*
 * TA_CDLCOUNTERATTACK - Counterattack
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLCOUNTERATTACK( int    startIdx,
                                int    endIdx,
                                const double inOpen[],
                                const double inHigh[],
                                const double inLow[],
                                const double inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLCOUNTERATTACK( int    startIdx,
                                  int    endIdx,
                                  const float  inOpen[],
                                  const float  inHigh[],
                                  const float  inLow[],
                                  const float  inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLCOUNTERATTACK_Lookback( void );


/*
 * TA_CDLDARKCLOUDCOVER - Dark Cloud Cover
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLDARKCLOUDCOVER( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLDARKCLOUDCOVER( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLDARKCLOUDCOVER_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLDOJI - Doji
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLDOJI( int    startIdx,
                       int    endIdx,
                       const double inOpen[],
                       const double inHigh[],
                       const double inLow[],
                       const double inClose[],
                       int          *outBegIdx,
                       int          *outNBElement,
                       int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLDOJI( int    startIdx,
                         int    endIdx,
                         const float  inOpen[],
                         const float  inHigh[],
                         const float  inLow[],
                         const float  inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLDOJI_Lookback( void );


/*
 * TA_CDLDOJISTAR - Doji Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLDOJISTAR( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLDOJISTAR( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLDOJISTAR_Lookback( void );


/*
 * TA_CDLDRAGONFLYDOJI - Dragonfly Doji
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLDRAGONFLYDOJI( int    startIdx,
                                int    endIdx,
                                const double inOpen[],
                                const double inHigh[],
                                const double inLow[],
                                const double inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLDRAGONFLYDOJI( int    startIdx,
                                  int    endIdx,
                                  const float  inOpen[],
                                  const float  inHigh[],
                                  const float  inLow[],
                                  const float  inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLDRAGONFLYDOJI_Lookback( void );


/*
 * TA_CDLENGULFING - Engulfing Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLENGULFING( int    startIdx,
                            int    endIdx,
                            const double inOpen[],
                            const double inHigh[],
                            const double inLow[],
                            const double inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLENGULFING( int    startIdx,
                              int    endIdx,
                              const float  inOpen[],
                              const float  inHigh[],
                              const float  inLow[],
                              const float  inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLENGULFING_Lookback( void );


/*
 * TA_CDLEVENINGDOJISTAR - Evening Doji Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLEVENINGDOJISTAR( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLEVENINGDOJISTAR( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLEVENINGDOJISTAR_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLEVENINGSTAR - Evening Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLEVENINGSTAR( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              double        optInPenetration, /* From 0 to TA_REAL_MAX */
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLEVENINGSTAR( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLEVENINGSTAR_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLGAPSIDESIDEWHITE - Up/Down-gap side-by-side white lines
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLGAPSIDESIDEWHITE( int    startIdx,
                                   int    endIdx,
                                   const double inOpen[],
                                   const double inHigh[],
                                   const double inLow[],
                                   const double inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLGAPSIDESIDEWHITE( int    startIdx,
                                     int    endIdx,
                                     const float  inOpen[],
                                     const float  inHigh[],
                                     const float  inLow[],
                                     const float  inClose[],
                                     int          *outBegIdx,
                                     int          *outNBElement,
                                     int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLGAPSIDESIDEWHITE_Lookback( void );


/*
 * TA_CDLGRAVESTONEDOJI - Gravestone Doji
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLGRAVESTONEDOJI( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLGRAVESTONEDOJI( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLGRAVESTONEDOJI_Lookback( void );


/*
 * TA_CDLHAMMER - Hammer
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHAMMER( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHAMMER( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHAMMER_Lookback( void );


/*
 * TA_CDLHANGINGMAN - Hanging Man
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHANGINGMAN( int    startIdx,
                             int    endIdx,
                             const double inOpen[],
                             const double inHigh[],
                             const double inLow[],
                             const double inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHANGINGMAN( int    startIdx,
                               int    endIdx,
                               const float  inOpen[],
                               const float  inHigh[],
                               const float  inLow[],
                               const float  inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHANGINGMAN_Lookback( void );


/*
 * TA_CDLHARAMI - Harami Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHARAMI( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHARAMI( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHARAMI_Lookback( void );


/*
 * TA_CDLHARAMICROSS - Harami Cross Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHARAMICROSS( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHARAMICROSS( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHARAMICROSS_Lookback( void );


/*
 * TA_CDLHIGHWAVE - High-Wave Candle
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHIGHWAVE( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHIGHWAVE( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHIGHWAVE_Lookback( void );


/*
 * TA_CDLHIKKAKE - Hikkake Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHIKKAKE( int    startIdx,
                          int    endIdx,
                          const double inOpen[],
                          const double inHigh[],
                          const double inLow[],
                          const double inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHIKKAKE( int    startIdx,
                            int    endIdx,
                            const float  inOpen[],
                            const float  inHigh[],
                            const float  inLow[],
                            const float  inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHIKKAKE_Lookback( void );


/*
 * TA_CDLHIKKAKEMOD - Modified Hikkake Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHIKKAKEMOD( int    startIdx,
                             int    endIdx,
                             const double inOpen[],
                             const double inHigh[],
                             const double inLow[],
                             const double inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHIKKAKEMOD( int    startIdx,
                               int    endIdx,
                               const float  inOpen[],
                               const float  inHigh[],
                               const float  inLow[],
                               const float  inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHIKKAKEMOD_Lookback( void );


/*
 * TA_CDLHOMINGPIGEON - Homing Pigeon
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLHOMINGPIGEON( int    startIdx,
                               int    endIdx,
                               const double inOpen[],
                               const double inHigh[],
                               const double inLow[],
                               const double inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLHOMINGPIGEON( int    startIdx,
                                 int    endIdx,
                                 const float  inOpen[],
                                 const float  inHigh[],
                                 const float  inLow[],
                                 const float  inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLHOMINGPIGEON_Lookback( void );


/*
 * TA_CDLIDENTICAL3CROWS - Identical Three Crows
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLIDENTICAL3CROWS( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLIDENTICAL3CROWS( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLIDENTICAL3CROWS_Lookback( void );


/*
 * TA_CDLINNECK - In-Neck Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLINNECK( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLINNECK( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLINNECK_Lookback( void );


/*
 * TA_CDLINVERTEDHAMMER - Inverted Hammer
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLINVERTEDHAMMER( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLINVERTEDHAMMER( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLINVERTEDHAMMER_Lookback( void );


/*
 * TA_CDLKICKING - Kicking
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLKICKING( int    startIdx,
                          int    endIdx,
                          const double inOpen[],
                          const double inHigh[],
                          const double inLow[],
                          const double inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLKICKING( int    startIdx,
                            int    endIdx,
                            const float  inOpen[],
                            const float  inHigh[],
                            const float  inLow[],
                            const float  inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLKICKING_Lookback( void );


/*
 * TA_CDLKICKINGBYLENGTH - Kicking - bull/bear determined by the longer marubozu
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLKICKINGBYLENGTH( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLKICKINGBYLENGTH( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLKICKINGBYLENGTH_Lookback( void );


/*
 * TA_CDLLADDERBOTTOM - Ladder Bottom
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLLADDERBOTTOM( int    startIdx,
                               int    endIdx,
                               const double inOpen[],
                               const double inHigh[],
                               const double inLow[],
                               const double inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLLADDERBOTTOM( int    startIdx,
                                 int    endIdx,
                                 const float  inOpen[],
                                 const float  inHigh[],
                                 const float  inLow[],
                                 const float  inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLLADDERBOTTOM_Lookback( void );


/*
 * TA_CDLLONGLEGGEDDOJI - Long Legged Doji
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLLONGLEGGEDDOJI( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLLONGLEGGEDDOJI( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLLONGLEGGEDDOJI_Lookback( void );


/*
 * TA_CDLLONGLINE - Long Line Candle
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLLONGLINE( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLLONGLINE( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLLONGLINE_Lookback( void );


/*
 * TA_CDLMARUBOZU - Marubozu
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLMARUBOZU( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLMARUBOZU( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLMARUBOZU_Lookback( void );


/*
 * TA_CDLMATCHINGLOW - Matching Low
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLMATCHINGLOW( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLMATCHINGLOW( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLMATCHINGLOW_Lookback( void );


/*
 * TA_CDLMATHOLD - Mat Hold
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLMATHOLD( int    startIdx,
                          int    endIdx,
                          const double inOpen[],
                          const double inHigh[],
                          const double inLow[],
                          const double inClose[],
                          double        optInPenetration, /* From 0 to TA_REAL_MAX */
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLMATHOLD( int    startIdx,
                            int    endIdx,
                            const float  inOpen[],
                            const float  inHigh[],
                            const float  inLow[],
                            const float  inClose[],
                            double        optInPenetration, /* From 0 to TA_REAL_MAX */
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLMATHOLD_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLMORNINGDOJISTAR - Morning Doji Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLMORNINGDOJISTAR( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLMORNINGDOJISTAR( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLMORNINGDOJISTAR_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLMORNINGSTAR - Morning Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInPenetration:(From 0 to TA_REAL_MAX)
 *    Percentage of penetration of a candle within another candle
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLMORNINGSTAR( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              double        optInPenetration, /* From 0 to TA_REAL_MAX */
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLMORNINGSTAR( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                double        optInPenetration, /* From 0 to TA_REAL_MAX */
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLMORNINGSTAR_Lookback( double        optInPenetration );  /* From 0 to TA_REAL_MAX */


/*
 * TA_CDLONNECK - On-Neck Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLONNECK( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLONNECK( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLONNECK_Lookback( void );


/*
 * TA_CDLPIERCING - Piercing Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLPIERCING( int    startIdx,
                           int    endIdx,
                           const double inOpen[],
                           const double inHigh[],
                           const double inLow[],
                           const double inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLPIERCING( int    startIdx,
                             int    endIdx,
                             const float  inOpen[],
                             const float  inHigh[],
                             const float  inLow[],
                             const float  inClose[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLPIERCING_Lookback( void );


/*
 * TA_CDLRICKSHAWMAN - Rickshaw Man
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLRICKSHAWMAN( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLRICKSHAWMAN( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLRICKSHAWMAN_Lookback( void );


/*
 * TA_CDLRISEFALL3METHODS - Rising/Falling Three Methods
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLRISEFALL3METHODS( int    startIdx,
                                   int    endIdx,
                                   const double inOpen[],
                                   const double inHigh[],
                                   const double inLow[],
                                   const double inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLRISEFALL3METHODS( int    startIdx,
                                     int    endIdx,
                                     const float  inOpen[],
                                     const float  inHigh[],
                                     const float  inLow[],
                                     const float  inClose[],
                                     int          *outBegIdx,
                                     int          *outNBElement,
                                     int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLRISEFALL3METHODS_Lookback( void );


/*
 * TA_CDLSEPARATINGLINES - Separating Lines
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSEPARATINGLINES( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSEPARATINGLINES( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSEPARATINGLINES_Lookback( void );


/*
 * TA_CDLSHOOTINGSTAR - Shooting Star
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSHOOTINGSTAR( int    startIdx,
                               int    endIdx,
                               const double inOpen[],
                               const double inHigh[],
                               const double inLow[],
                               const double inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSHOOTINGSTAR( int    startIdx,
                                 int    endIdx,
                                 const float  inOpen[],
                                 const float  inHigh[],
                                 const float  inLow[],
                                 const float  inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSHOOTINGSTAR_Lookback( void );


/*
 * TA_CDLSHORTLINE - Short Line Candle
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSHORTLINE( int    startIdx,
                            int    endIdx,
                            const double inOpen[],
                            const double inHigh[],
                            const double inLow[],
                            const double inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSHORTLINE( int    startIdx,
                              int    endIdx,
                              const float  inOpen[],
                              const float  inHigh[],
                              const float  inLow[],
                              const float  inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSHORTLINE_Lookback( void );


/*
 * TA_CDLSPINNINGTOP - Spinning Top
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSPINNINGTOP( int    startIdx,
                              int    endIdx,
                              const double inOpen[],
                              const double inHigh[],
                              const double inLow[],
                              const double inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSPINNINGTOP( int    startIdx,
                                int    endIdx,
                                const float  inOpen[],
                                const float  inHigh[],
                                const float  inLow[],
                                const float  inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSPINNINGTOP_Lookback( void );


/*
 * TA_CDLSTALLEDPATTERN - Stalled Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSTALLEDPATTERN( int    startIdx,
                                 int    endIdx,
                                 const double inOpen[],
                                 const double inHigh[],
                                 const double inLow[],
                                 const double inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSTALLEDPATTERN( int    startIdx,
                                   int    endIdx,
                                   const float  inOpen[],
                                   const float  inHigh[],
                                   const float  inLow[],
                                   const float  inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSTALLEDPATTERN_Lookback( void );


/*
 * TA_CDLSTICKSANDWICH - Stick Sandwich
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLSTICKSANDWICH( int    startIdx,
                                int    endIdx,
                                const double inOpen[],
                                const double inHigh[],
                                const double inLow[],
                                const double inClose[],
                                int          *outBegIdx,
                                int          *outNBElement,
                                int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLSTICKSANDWICH( int    startIdx,
                                  int    endIdx,
                                  const float  inOpen[],
                                  const float  inHigh[],
                                  const float  inLow[],
                                  const float  inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLSTICKSANDWICH_Lookback( void );


/*
 * TA_CDLTAKURI - Takuri (Dragonfly Doji with very long lower shadow)
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLTAKURI( int    startIdx,
                         int    endIdx,
                         const double inOpen[],
                         const double inHigh[],
                         const double inLow[],
                         const double inClose[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLTAKURI( int    startIdx,
                           int    endIdx,
                           const float  inOpen[],
                           const float  inHigh[],
                           const float  inLow[],
                           const float  inClose[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLTAKURI_Lookback( void );


/*
 * TA_CDLTASUKIGAP - Tasuki Gap
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLTASUKIGAP( int    startIdx,
                            int    endIdx,
                            const double inOpen[],
                            const double inHigh[],
                            const double inLow[],
                            const double inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLTASUKIGAP( int    startIdx,
                              int    endIdx,
                              const float  inOpen[],
                              const float  inHigh[],
                              const float  inLow[],
                              const float  inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLTASUKIGAP_Lookback( void );


/*
 * TA_CDLTHRUSTING - Thrusting Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLTHRUSTING( int    startIdx,
                            int    endIdx,
                            const double inOpen[],
                            const double inHigh[],
                            const double inLow[],
                            const double inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLTHRUSTING( int    startIdx,
                              int    endIdx,
                              const float  inOpen[],
                              const float  inHigh[],
                              const float  inLow[],
                              const float  inClose[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLTHRUSTING_Lookback( void );


/*
 * TA_CDLTRISTAR - Tristar Pattern
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLTRISTAR( int    startIdx,
                          int    endIdx,
                          const double inOpen[],
                          const double inHigh[],
                          const double inLow[],
                          const double inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLTRISTAR( int    startIdx,
                            int    endIdx,
                            const float  inOpen[],
                            const float  inHigh[],
                            const float  inLow[],
                            const float  inClose[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLTRISTAR_Lookback( void );


/*
 * TA_CDLUNIQUE3RIVER - Unique 3 River
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLUNIQUE3RIVER( int    startIdx,
                               int    endIdx,
                               const double inOpen[],
                               const double inHigh[],
                               const double inLow[],
                               const double inClose[],
                               int          *outBegIdx,
                               int          *outNBElement,
                               int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLUNIQUE3RIVER( int    startIdx,
                                 int    endIdx,
                                 const float  inOpen[],
                                 const float  inHigh[],
                                 const float  inLow[],
                                 const float  inClose[],
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLUNIQUE3RIVER_Lookback( void );


/*
 * TA_CDLUPSIDEGAP2CROWS - Upside Gap Two Crows
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLUPSIDEGAP2CROWS( int    startIdx,
                                  int    endIdx,
                                  const double inOpen[],
                                  const double inHigh[],
                                  const double inLow[],
                                  const double inClose[],
                                  int          *outBegIdx,
                                  int          *outNBElement,
                                  int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLUPSIDEGAP2CROWS( int    startIdx,
                                    int    endIdx,
                                    const float  inOpen[],
                                    const float  inHigh[],
                                    const float  inLow[],
                                    const float  inClose[],
                                    int          *outBegIdx,
                                    int          *outNBElement,
                                    int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLUPSIDEGAP2CROWS_Lookback( void );


/*
 * TA_CDLXSIDEGAP3METHODS - Upside/Downside Gap Three Methods
 *
 * Input  = Open, High, Low, Close
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CDLXSIDEGAP3METHODS( int    startIdx,
                                   int    endIdx,
                                   const double inOpen[],
                                   const double inHigh[],
                                   const double inLow[],
                                   const double inClose[],
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CDLXSIDEGAP3METHODS( int    startIdx,
                                     int    endIdx,
                                     const float  inOpen[],
                                     const float  inHigh[],
                                     const float  inLow[],
                                     const float  inClose[],
                                     int          *outBegIdx,
                                     int          *outNBElement,
                                     int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_CDLXSIDEGAP3METHODS_Lookback( void );


/*
 * TA_CEIL - Vector Ceil
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CEIL( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CEIL( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_CEIL_Lookback( void );


/*
 * TA_CMO - Chande Momentum Oscillator
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CMO( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CMO( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_CMO_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_CORREL - Pearson's Correlation Coefficient (r)
 *
 * Input  = double, double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_CORREL( int    startIdx,
                      int    endIdx,
                      const double inReal0[],
                      const double inReal1[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_CORREL( int    startIdx,
                        int    endIdx,
                        const float  inReal0[],
                        const float  inReal1[],
                        int           optInTimePeriod, /* From 1 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_CORREL_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_COS - Vector Trigonometric Cos
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_COS( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_COS( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_COS_Lookback( void );


/*
 * TA_COSH - Vector Trigonometric Cosh
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_COSH( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_COSH( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_COSH_Lookback( void );


/*
 * TA_DEMA - Double Exponential Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_DEMA( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_DEMA( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_DEMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_DIV - Vector Arithmetic Div
 *
 * Input  = double, double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_DIV( int    startIdx,
                   int    endIdx,
                   const double inReal0[],
                   const double inReal1[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_DIV( int    startIdx,
                     int    endIdx,
                     const float  inReal0[],
                     const float  inReal1[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_DIV_Lookback( void );


/*
 * TA_DX - Directional Movement Index
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_DX( int    startIdx,
                  int    endIdx,
                  const double inHigh[],
                  const double inLow[],
                  const double inClose[],
                  int           optInTimePeriod, /* From 2 to 100000 */
                  int          *outBegIdx,
                  int          *outNBElement,
                  double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_DX( int    startIdx,
                    int    endIdx,
                    const float  inHigh[],
                    const float  inLow[],
                    const float  inClose[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_DX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_EMA - Exponential Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_EMA( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_EMA( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_EMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_EXP - Vector Arithmetic Exp
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_EXP( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_EXP( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_EXP_Lookback( void );


/*
 * TA_FLOOR - Vector Floor
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_FLOOR( int    startIdx,
                     int    endIdx,
                     const double inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_FLOOR( int    startIdx,
                       int    endIdx,
                       const float  inReal[],
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_FLOOR_Lookback( void );


/*
 * TA_HT_DCPERIOD - Hilbert Transform - Dominant Cycle Period
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_DCPERIOD( int    startIdx,
                           int    endIdx,
                           const double inReal[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_DCPERIOD( int    startIdx,
                             int    endIdx,
                             const float  inReal[],
                             int          *outBegIdx,
                             int          *outNBElement,
                             double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_HT_DCPERIOD_Lookback( void );


/*
 * TA_HT_DCPHASE - Hilbert Transform - Dominant Cycle Phase
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_DCPHASE( int    startIdx,
                          int    endIdx,
                          const double inReal[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_DCPHASE( int    startIdx,
                            int    endIdx,
                            const float  inReal[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_HT_DCPHASE_Lookback( void );


/*
 * TA_HT_PHASOR - Hilbert Transform - Phasor Components
 *
 * Input  = double
 * Output = double, double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_PHASOR( int    startIdx,
                         int    endIdx,
                         const double inReal[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outInPhase[],
                         double        outQuadrature[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_PHASOR( int    startIdx,
                           int    endIdx,
                           const float  inReal[],
                           int          *outBegIdx,
                           int          *outNBElement,
                           double        outInPhase[],
                           double        outQuadrature[] );

int DLL_EXPORT _cdecl DLL_TA_HT_PHASOR_Lookback( void );


/*
 * TA_HT_SINE - Hilbert Transform - SineWave
 *
 * Input  = double
 * Output = double, double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_SINE( int    startIdx,
                       int    endIdx,
                       const double inReal[],
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outSine[],
                       double        outLeadSine[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_SINE( int    startIdx,
                         int    endIdx,
                         const float  inReal[],
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outSine[],
                         double        outLeadSine[] );

int DLL_EXPORT _cdecl DLL_TA_HT_SINE_Lookback( void );


/*
 * TA_HT_TRENDLINE - Hilbert Transform - Instantaneous Trendline
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_TRENDLINE( int    startIdx,
                            int    endIdx,
                            const double inReal[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_TRENDLINE( int    startIdx,
                              int    endIdx,
                              const float  inReal[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_HT_TRENDLINE_Lookback( void );


/*
 * TA_HT_TRENDMODE - Hilbert Transform - Trend vs Cycle Mode
 *
 * Input  = double
 * Output = int
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_HT_TRENDMODE( int    startIdx,
                            int    endIdx,
                            const double inReal[],
                            int          *outBegIdx,
                            int          *outNBElement,
                            int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_HT_TRENDMODE( int    startIdx,
                              int    endIdx,
                              const float  inReal[],
                              int          *outBegIdx,
                              int          *outNBElement,
                              int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_HT_TRENDMODE_Lookback( void );


/*
 * TA_KAMA - Kaufman Adaptive Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_KAMA( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_KAMA( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_KAMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_LINEARREG - Linear Regression
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LINEARREG( int    startIdx,
                         int    endIdx,
                         const double inReal[],
                         int           optInTimePeriod, /* From 2 to 100000 */
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LINEARREG( int    startIdx,
                           int    endIdx,
                           const float  inReal[],
                           int           optInTimePeriod, /* From 2 to 100000 */
                           int          *outBegIdx,
                           int          *outNBElement,
                           double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LINEARREG_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_LINEARREG_ANGLE - Linear Regression Angle
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LINEARREG_ANGLE( int    startIdx,
                               int    endIdx,
                               const double inReal[],
                               int           optInTimePeriod, /* From 2 to 100000 */
                               int          *outBegIdx,
                               int          *outNBElement,
                               double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LINEARREG_ANGLE( int    startIdx,
                                 int    endIdx,
                                 const float  inReal[],
                                 int           optInTimePeriod, /* From 2 to 100000 */
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LINEARREG_ANGLE_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_LINEARREG_INTERCEPT - Linear Regression Intercept
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LINEARREG_INTERCEPT( int    startIdx,
                                   int    endIdx,
                                   const double inReal[],
                                   int           optInTimePeriod, /* From 2 to 100000 */
                                   int          *outBegIdx,
                                   int          *outNBElement,
                                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LINEARREG_INTERCEPT( int    startIdx,
                                     int    endIdx,
                                     const float  inReal[],
                                     int           optInTimePeriod, /* From 2 to 100000 */
                                     int          *outBegIdx,
                                     int          *outNBElement,
                                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LINEARREG_INTERCEPT_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_LINEARREG_SLOPE - Linear Regression Slope
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LINEARREG_SLOPE( int    startIdx,
                               int    endIdx,
                               const double inReal[],
                               int           optInTimePeriod, /* From 2 to 100000 */
                               int          *outBegIdx,
                               int          *outNBElement,
                               double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LINEARREG_SLOPE( int    startIdx,
                                 int    endIdx,
                                 const float  inReal[],
                                 int           optInTimePeriod, /* From 2 to 100000 */
                                 int          *outBegIdx,
                                 int          *outNBElement,
                                 double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LINEARREG_SLOPE_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_LN - Vector Log Natural
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LN( int    startIdx,
                  int    endIdx,
                  const double inReal[],
                  int          *outBegIdx,
                  int          *outNBElement,
                  double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LN( int    startIdx,
                    int    endIdx,
                    const float  inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LN_Lookback( void );


/*
 * TA_LOG10 - Vector Log10
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_LOG10( int    startIdx,
                     int    endIdx,
                     const double inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_LOG10( int    startIdx,
                       int    endIdx,
                       const float  inReal[],
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_LOG10_Lookback( void );


/*
 * TA_MA - Moving average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 * optInMAType:
 *    Type of Moving Average
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MA( int    startIdx,
                  int    endIdx,
                  const double inReal[],
                  int           optInTimePeriod, /* From 1 to 100000 */
                  TA_MAType     optInMAType,
                  int          *outBegIdx,
                  int          *outNBElement,
                  double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MA( int    startIdx,
                    int    endIdx,
                    const float  inReal[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    TA_MAType     optInMAType,
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MA_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
                  TA_MAType     optInMAType );

/*
 * TA_MACD - Moving Average Convergence/Divergence
 *
 * Input  = double
 * Output = double, double, double
 *
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 *
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 *
 * optInSignalPeriod:(From 1 to 100000)
 *    Smoothing for the signal line (nb of period)
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MACD( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInFastPeriod, /* From 2 to 100000 */
                    int           optInSlowPeriod, /* From 2 to 100000 */
                    int           optInSignalPeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outMACD[],
                    double        outMACDSignal[],
                    double        outMACDHist[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MACD( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInFastPeriod, /* From 2 to 100000 */
                      int           optInSlowPeriod, /* From 2 to 100000 */
                      int           optInSignalPeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outMACD[],
                      double        outMACDSignal[],
                      double        outMACDHist[] );

int DLL_EXPORT _cdecl DLL_TA_MACD_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
                    int           optInSlowPeriod, /* From 2 to 100000 */
                    int           optInSignalPeriod );  /* From 1 to 100000 */


/*
 * TA_MACDEXT - MACD with controllable MA type
 *
 * Input  = double
 * Output = double, double, double
 *
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 *
 * optInFastMAType:
 *    Type of Moving Average for fast MA
 *
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 *
 * optInSlowMAType:
 *    Type of Moving Average for slow MA
 *
 * optInSignalPeriod:(From 1 to 100000)
 *    Smoothing for the signal line (nb of period)
 *
 * optInSignalMAType:
 *    Type of Moving Average for signal line
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MACDEXT( int    startIdx,
                       int    endIdx,
                       const double inReal[],
                       int           optInFastPeriod, /* From 2 to 100000 */
                       TA_MAType     optInFastMAType,
                       int           optInSlowPeriod, /* From 2 to 100000 */
                       TA_MAType     optInSlowMAType,
                       int           optInSignalPeriod, /* From 1 to 100000 */
                       TA_MAType     optInSignalMAType,
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outMACD[],
                       double        outMACDSignal[],
                       double        outMACDHist[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MACDEXT( int    startIdx,
                         int    endIdx,
                         const float  inReal[],
                         int           optInFastPeriod, /* From 2 to 100000 */
                         TA_MAType     optInFastMAType,
                         int           optInSlowPeriod, /* From 2 to 100000 */
                         TA_MAType     optInSlowMAType,
                         int           optInSignalPeriod, /* From 1 to 100000 */
                         TA_MAType     optInSignalMAType,
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outMACD[],
                         double        outMACDSignal[],
                         double        outMACDHist[] );

int DLL_EXPORT _cdecl DLL_TA_MACDEXT_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
                       TA_MAType     optInFastMAType,
                       int           optInSlowPeriod, /* From 2 to 100000 */
                       TA_MAType     optInSlowMAType,
                       int           optInSignalPeriod, /* From 1 to 100000 */
                       TA_MAType     optInSignalMAType );

/*
 * TA_MACDFIX - Moving Average Convergence/Divergence Fix 12/26
 *
 * Input  = double
 * Output = double, double, double
 *
 * Optional Parameters
 * -------------------
 * optInSignalPeriod:(From 1 to 100000)
 *    Smoothing for the signal line (nb of period)
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MACDFIX( int    startIdx,
                       int    endIdx,
                       const double inReal[],
                       int           optInSignalPeriod, /* From 1 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outMACD[],
                       double        outMACDSignal[],
                       double        outMACDHist[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MACDFIX( int    startIdx,
                         int    endIdx,
                         const float  inReal[],
                         int           optInSignalPeriod, /* From 1 to 100000 */
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outMACD[],
                         double        outMACDSignal[],
                         double        outMACDHist[] );

int DLL_EXPORT _cdecl DLL_TA_MACDFIX_Lookback( int           optInSignalPeriod );  /* From 1 to 100000 */


/*
 * TA_MAMA - MESA Adaptive Moving Average
 *
 * Input  = double
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInFastLimit:(From 0.01 to 0.99)
 *    Upper limit use in the adaptive algorithm
 *
 * optInSlowLimit:(From 0.01 to 0.99)
 *    Lower limit use in the adaptive algorithm
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MAMA( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    double        optInFastLimit, /* From 0.01 to 0.99 */
                    double        optInSlowLimit, /* From 0.01 to 0.99 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outMAMA[],
                    double        outFAMA[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MAMA( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      double        optInFastLimit, /* From 0.01 to 0.99 */
                      double        optInSlowLimit, /* From 0.01 to 0.99 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outMAMA[],
                      double        outFAMA[] );

int DLL_EXPORT _cdecl DLL_TA_MAMA_Lookback( double        optInFastLimit, /* From 0.01 to 0.99 */
                    double        optInSlowLimit );  /* From 0.01 to 0.99 */


/*
 * TA_MAVP - Moving average with variable period
 *
 * Input  = double, double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInMinPeriod:(From 2 to 100000)
 *    Value less than minimum will be changed to Minimum period
 *
 * optInMaxPeriod:(From 2 to 100000)
 *    Value higher than maximum will be changed to Maximum period
 *
 * optInMAType:
 *    Type of Moving Average
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MAVP( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    const double inPeriods[],
                    int           optInMinPeriod, /* From 2 to 100000 */
                    int           optInMaxPeriod, /* From 2 to 100000 */
                    TA_MAType     optInMAType,
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MAVP( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      const float  inPeriods[],
                      int           optInMinPeriod, /* From 2 to 100000 */
                      int           optInMaxPeriod, /* From 2 to 100000 */
                      TA_MAType     optInMAType,
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MAVP_Lookback( int           optInMinPeriod, /* From 2 to 100000 */
                    int           optInMaxPeriod, /* From 2 to 100000 */
                    TA_MAType     optInMAType );

/*
 * TA_MAX - Highest value over a specified period
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MAX( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MAX( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MAX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MAXINDEX - Index of highest value over a specified period
 *
 * Input  = double
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MAXINDEX( int    startIdx,
                        int    endIdx,
                        const double inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MAXINDEX( int    startIdx,
                          int    endIdx,
                          const float  inReal[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_MAXINDEX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MEDPRICE - Median Price
 *
 * Input  = High, Low
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MEDPRICE( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MEDPRICE( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MEDPRICE_Lookback( void );


/*
 * TA_MFI - Money Flow Index
 *
 * Input  = High, Low, Close, Volume
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MFI( int    startIdx,
                   int    endIdx,
                   const double inHigh[],
                   const double inLow[],
                   const double inClose[],
                   const double inVolume[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MFI( int    startIdx,
                     int    endIdx,
                     const float  inHigh[],
                     const float  inLow[],
                     const float  inClose[],
                     const float  inVolume[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MFI_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MIDPOINT - MidPoint over period
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MIDPOINT( int    startIdx,
                        int    endIdx,
                        const double inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MIDPOINT( int    startIdx,
                          int    endIdx,
                          const float  inReal[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MIDPOINT_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MIDPRICE - Midpoint Price over period
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MIDPRICE( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MIDPRICE( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MIDPRICE_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MIN - Lowest value over a specified period
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MIN( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MIN( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MIN_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MININDEX - Index of lowest value over a specified period
 *
 * Input  = double
 * Output = int
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MININDEX( int    startIdx,
                        int    endIdx,
                        const double inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        int           outInteger[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MININDEX( int    startIdx,
                          int    endIdx,
                          const float  inReal[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          int           outInteger[] );

int DLL_EXPORT _cdecl DLL_TA_MININDEX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MINMAX - Lowest and highest values over a specified period
 *
 * Input  = double
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MINMAX( int    startIdx,
                      int    endIdx,
                      const double inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outMin[],
                      double        outMax[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MINMAX( int    startIdx,
                        int    endIdx,
                        const float  inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outMin[],
                        double        outMax[] );

int DLL_EXPORT _cdecl DLL_TA_MINMAX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MINMAXINDEX - Indexes of lowest and highest values over a specified period
 *
 * Input  = double
 * Output = int, int
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MINMAXINDEX( int    startIdx,
                           int    endIdx,
                           const double inReal[],
                           int           optInTimePeriod, /* From 2 to 100000 */
                           int          *outBegIdx,
                           int          *outNBElement,
                           int           outMinIdx[],
                           int           outMaxIdx[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MINMAXINDEX( int    startIdx,
                             int    endIdx,
                             const float  inReal[],
                             int           optInTimePeriod, /* From 2 to 100000 */
                             int          *outBegIdx,
                             int          *outNBElement,
                             int           outMinIdx[],
                             int           outMaxIdx[] );

int DLL_EXPORT _cdecl DLL_TA_MINMAXINDEX_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_MINUS_DI - Minus Directional Indicator
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MINUS_DI( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        const double inClose[],
                        int           optInTimePeriod, /* From 1 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MINUS_DI( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          const float  inClose[],
                          int           optInTimePeriod, /* From 1 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MINUS_DI_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_MINUS_DM - Minus Directional Movement
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MINUS_DM( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        int           optInTimePeriod, /* From 1 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MINUS_DM( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          int           optInTimePeriod, /* From 1 to 100000 */
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MINUS_DM_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_MOM - Momentum
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MOM( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 1 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MOM( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 1 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MOM_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_MULT - Vector Arithmetic Mult
 *
 * Input  = double, double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_MULT( int    startIdx,
                    int    endIdx,
                    const double inReal0[],
                    const double inReal1[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_MULT( int    startIdx,
                      int    endIdx,
                      const float  inReal0[],
                      const float  inReal1[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_MULT_Lookback( void );


/*
 * TA_NATR - Normalized Average True Range
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_NATR( int    startIdx,
                    int    endIdx,
                    const double inHigh[],
                    const double inLow[],
                    const double inClose[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_NATR( int    startIdx,
                      int    endIdx,
                      const float  inHigh[],
                      const float  inLow[],
                      const float  inClose[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_NATR_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_OBV - On Balance Volume
 *
 * Input  = double, Volume
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_OBV( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   const double inVolume[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_OBV( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     const float  inVolume[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_OBV_Lookback( void );


/*
 * TA_PLUS_DI - Plus Directional Indicator
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_PLUS_DI( int    startIdx,
                       int    endIdx,
                       const double inHigh[],
                       const double inLow[],
                       const double inClose[],
                       int           optInTimePeriod, /* From 1 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_PLUS_DI( int    startIdx,
                         int    endIdx,
                         const float  inHigh[],
                         const float  inLow[],
                         const float  inClose[],
                         int           optInTimePeriod, /* From 1 to 100000 */
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_PLUS_DI_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_PLUS_DM - Plus Directional Movement
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_PLUS_DM( int    startIdx,
                       int    endIdx,
                       const double inHigh[],
                       const double inLow[],
                       int           optInTimePeriod, /* From 1 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_PLUS_DM( int    startIdx,
                         int    endIdx,
                         const float  inHigh[],
                         const float  inLow[],
                         int           optInTimePeriod, /* From 1 to 100000 */
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_PLUS_DM_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_PPO - Percentage Price Oscillator
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInFastPeriod:(From 2 to 100000)
 *    Number of period for the fast MA
 *
 * optInSlowPeriod:(From 2 to 100000)
 *    Number of period for the slow MA
 *
 * optInMAType:
 *    Type of Moving Average
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_PPO( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInFastPeriod, /* From 2 to 100000 */
                   int           optInSlowPeriod, /* From 2 to 100000 */
                   TA_MAType     optInMAType,
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_PPO( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInFastPeriod, /* From 2 to 100000 */
                     int           optInSlowPeriod, /* From 2 to 100000 */
                     TA_MAType     optInMAType,
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_PPO_Lookback( int           optInFastPeriod, /* From 2 to 100000 */
                   int           optInSlowPeriod, /* From 2 to 100000 */
                   TA_MAType     optInMAType );

/*
 * TA_ROC - Rate of change : ((price/prevPrice)-1)*100
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ROC( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 1 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ROC( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 1 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ROC_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_ROCP - Rate of change Percentage: (price-prevPrice)/prevPrice
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ROCP( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ROCP( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ROCP_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_ROCR - Rate of change ratio: (price/prevPrice)
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ROCR( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ROCR( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ROCR_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_ROCR100 - Rate of change ratio 100 scale: (price/prevPrice)*100
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ROCR100( int    startIdx,
                       int    endIdx,
                       const double inReal[],
                       int           optInTimePeriod, /* From 1 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ROCR100( int    startIdx,
                         int    endIdx,
                         const float  inReal[],
                         int           optInTimePeriod, /* From 1 to 100000 */
                         int          *outBegIdx,
                         int          *outNBElement,
                         double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ROCR100_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_RSI - Relative Strength Index
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_RSI( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_RSI( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_RSI_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_SAR - Parabolic SAR
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInAcceleration:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor used up to the Maximum value
 *
 * optInMaximum:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor Maximum value
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SAR( int    startIdx,
                   int    endIdx,
                   const double inHigh[],
                   const double inLow[],
                   double        optInAcceleration, /* From 0 to TA_REAL_MAX */
                   double        optInMaximum, /* From 0 to TA_REAL_MAX */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SAR( int    startIdx,
                     int    endIdx,
                     const float  inHigh[],
                     const float  inLow[],
                     double        optInAcceleration, /* From 0 to TA_REAL_MAX */
                     double        optInMaximum, /* From 0 to TA_REAL_MAX */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SAR_Lookback( double        optInAcceleration, /* From 0 to TA_REAL_MAX */
                   double        optInMaximum );  /* From 0 to TA_REAL_MAX */


/*
 * TA_SAREXT - Parabolic SAR - Extended
 *
 * Input  = High, Low
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInStartValue:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Start value and direction. 0 for Auto, >0 for Long, <0 for Short
 *
 * optInOffsetOnReverse:(From 0 to TA_REAL_MAX)
 *    Percent offset added/removed to initial stop on short/long reversal
 *
 * optInAccelerationInitLong:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor initial value for the Long direction
 *
 * optInAccelerationLong:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor for the Long direction
 *
 * optInAccelerationMaxLong:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor maximum value for the Long direction
 *
 * optInAccelerationInitShort:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor initial value for the Short direction
 *
 * optInAccelerationShort:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor for the Short direction
 *
 * optInAccelerationMaxShort:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor maximum value for the Short direction
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SAREXT( int    startIdx,
                      int    endIdx,
                      const double inHigh[],
                      const double inLow[],
                      double        optInStartValue, /* From TA_REAL_MIN to TA_REAL_MAX */
                      double        optInOffsetOnReverse, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationInitLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationMaxLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationInitShort, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationShort, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationMaxShort, /* From 0 to TA_REAL_MAX */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SAREXT( int    startIdx,
                        int    endIdx,
                        const float  inHigh[],
                        const float  inLow[],
                        double        optInStartValue, /* From TA_REAL_MIN to TA_REAL_MAX */
                        double        optInOffsetOnReverse, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationInitLong, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationLong, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationMaxLong, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationInitShort, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationShort, /* From 0 to TA_REAL_MAX */
                        double        optInAccelerationMaxShort, /* From 0 to TA_REAL_MAX */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SAREXT_Lookback( double        optInStartValue, /* From TA_REAL_MIN to TA_REAL_MAX */
                      double        optInOffsetOnReverse, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationInitLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationMaxLong, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationInitShort, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationShort, /* From 0 to TA_REAL_MAX */
                      double        optInAccelerationMaxShort );  /* From 0 to TA_REAL_MAX */


/*
 * TA_SIN - Vector Trigonometric Sin
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SIN( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SIN( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SIN_Lookback( void );


/*
 * TA_SINH - Vector Trigonometric Sinh
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SINH( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SINH( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SINH_Lookback( void );


/*
 * TA_SMA - Simple Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SMA( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SMA( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_SQRT - Vector Square Root
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SQRT( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SQRT( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SQRT_Lookback( void );


/*
 * TA_STDDEV - Standard Deviation
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 * optInNbDev:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Nb of deviations
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_STDDEV( int    startIdx,
                      int    endIdx,
                      const double inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_STDDEV( int    startIdx,
                        int    endIdx,
                        const float  inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_STDDEV_Lookback( int           optInTimePeriod, /* From 2 to 100000 */
                      double        optInNbDev );  /* From TA_REAL_MIN to TA_REAL_MAX */


/*
 * TA_STOCH - Stochastic
 *
 * Input  = High, Low, Close
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInFastK_Period:(From 1 to 100000)
 *    Time period for building the Fast-K line
 *
 * optInSlowK_Period:(From 1 to 100000)
 *    Smoothing for making the Slow-K line. Usually set to 3
 *
 * optInSlowK_MAType:
 *    Type of Moving Average for Slow-K
 *
 * optInSlowD_Period:(From 1 to 100000)
 *    Smoothing for making the Slow-D line
 *
 * optInSlowD_MAType:
 *    Type of Moving Average for Slow-D
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_STOCH( int    startIdx,
                     int    endIdx,
                     const double inHigh[],
                     const double inLow[],
                     const double inClose[],
                     int           optInFastK_Period, /* From 1 to 100000 */
                     int           optInSlowK_Period, /* From 1 to 100000 */
                     TA_MAType     optInSlowK_MAType,
                     int           optInSlowD_Period, /* From 1 to 100000 */
                     TA_MAType     optInSlowD_MAType,
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outSlowK[],
                     double        outSlowD[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_STOCH( int    startIdx,
                       int    endIdx,
                       const float  inHigh[],
                       const float  inLow[],
                       const float  inClose[],
                       int           optInFastK_Period, /* From 1 to 100000 */
                       int           optInSlowK_Period, /* From 1 to 100000 */
                       TA_MAType     optInSlowK_MAType,
                       int           optInSlowD_Period, /* From 1 to 100000 */
                       TA_MAType     optInSlowD_MAType,
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outSlowK[],
                       double        outSlowD[] );

int DLL_EXPORT _cdecl DLL_TA_STOCH_Lookback( int           optInFastK_Period, /* From 1 to 100000 */
                     int           optInSlowK_Period, /* From 1 to 100000 */
                     TA_MAType     optInSlowK_MAType,
                     int           optInSlowD_Period, /* From 1 to 100000 */
                     TA_MAType     optInSlowD_MAType );

/*
 * TA_STOCHF - Stochastic Fast
 *
 * Input  = High, Low, Close
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInFastK_Period:(From 1 to 100000)
 *    Time period for building the Fast-K line
 *
 * optInFastD_Period:(From 1 to 100000)
 *    Smoothing for making the Fast-D line. Usually set to 3
 *
 * optInFastD_MAType:
 *    Type of Moving Average for Fast-D
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_STOCHF( int    startIdx,
                      int    endIdx,
                      const double inHigh[],
                      const double inLow[],
                      const double inClose[],
                      int           optInFastK_Period, /* From 1 to 100000 */
                      int           optInFastD_Period, /* From 1 to 100000 */
                      TA_MAType     optInFastD_MAType,
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outFastK[],
                      double        outFastD[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_STOCHF( int    startIdx,
                        int    endIdx,
                        const float  inHigh[],
                        const float  inLow[],
                        const float  inClose[],
                        int           optInFastK_Period, /* From 1 to 100000 */
                        int           optInFastD_Period, /* From 1 to 100000 */
                        TA_MAType     optInFastD_MAType,
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outFastK[],
                        double        outFastD[] );

int DLL_EXPORT _cdecl DLL_TA_STOCHF_Lookback( int           optInFastK_Period, /* From 1 to 100000 */
                      int           optInFastD_Period, /* From 1 to 100000 */
                      TA_MAType     optInFastD_MAType );

/*
 * TA_STOCHRSI - Stochastic Relative Strength Index
 *
 * Input  = double
 * Output = double, double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 * optInFastK_Period:(From 1 to 100000)
 *    Time period for building the Fast-K line
 *
 * optInFastD_Period:(From 1 to 100000)
 *    Smoothing for making the Fast-D line. Usually set to 3
 *
 * optInFastD_MAType:
 *    Type of Moving Average for Fast-D
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_STOCHRSI( int    startIdx,
                        int    endIdx,
                        const double inReal[],
                        int           optInTimePeriod, /* From 2 to 100000 */
                        int           optInFastK_Period, /* From 1 to 100000 */
                        int           optInFastD_Period, /* From 1 to 100000 */
                        TA_MAType     optInFastD_MAType,
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outFastK[],
                        double        outFastD[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_STOCHRSI( int    startIdx,
                          int    endIdx,
                          const float  inReal[],
                          int           optInTimePeriod, /* From 2 to 100000 */
                          int           optInFastK_Period, /* From 1 to 100000 */
                          int           optInFastD_Period, /* From 1 to 100000 */
                          TA_MAType     optInFastD_MAType,
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outFastK[],
                          double        outFastD[] );

int DLL_EXPORT _cdecl DLL_TA_STOCHRSI_Lookback( int           optInTimePeriod, /* From 2 to 100000 */
                        int           optInFastK_Period, /* From 1 to 100000 */
                        int           optInFastD_Period, /* From 1 to 100000 */
                        TA_MAType     optInFastD_MAType );

/*
 * TA_SUB - Vector Arithmetic Substraction
 *
 * Input  = double, double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SUB( int    startIdx,
                   int    endIdx,
                   const double inReal0[],
                   const double inReal1[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SUB( int    startIdx,
                     int    endIdx,
                     const float  inReal0[],
                     const float  inReal1[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SUB_Lookback( void );


/*
 * TA_SUM - Summation
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SUM( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_SUM( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_SUM_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_T3 - Triple Exponential Moving Average (T3)
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 * optInVFactor:(From 0 to 1)
 *    Volume Factor
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_T3( int    startIdx,
                  int    endIdx,
                  const double inReal[],
                  int           optInTimePeriod, /* From 2 to 100000 */
                  double        optInVFactor, /* From 0 to 1 */
                  int          *outBegIdx,
                  int          *outNBElement,
                  double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_T3( int    startIdx,
                    int    endIdx,
                    const float  inReal[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    double        optInVFactor, /* From 0 to 1 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_T3_Lookback( int           optInTimePeriod, /* From 2 to 100000 */
                  double        optInVFactor );  /* From 0 to 1 */


/*
 * TA_TAN - Vector Trigonometric Tan
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TAN( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TAN( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TAN_Lookback( void );


/*
 * TA_TANH - Vector Trigonometric Tanh
 *
 * Input  = double
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TANH( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TANH( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TANH_Lookback( void );


/*
 * TA_TEMA - Triple Exponential Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TEMA( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 2 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TEMA( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 2 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TEMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_TRANGE - True Range
 *
 * Input  = High, Low, Close
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TRANGE( int    startIdx,
                      int    endIdx,
                      const double inHigh[],
                      const double inLow[],
                      const double inClose[],
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TRANGE( int    startIdx,
                        int    endIdx,
                        const float  inHigh[],
                        const float  inLow[],
                        const float  inClose[],
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TRANGE_Lookback( void );


/*
 * TA_TRIMA - Triangular Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TRIMA( int    startIdx,
                     int    endIdx,
                     const double inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TRIMA( int    startIdx,
                       int    endIdx,
                       const float  inReal[],
                       int           optInTimePeriod, /* From 2 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TRIMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_TRIX - 1-day Rate-Of-Change (ROC) of a Triple Smooth EMA
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TRIX( int    startIdx,
                    int    endIdx,
                    const double inReal[],
                    int           optInTimePeriod, /* From 1 to 100000 */
                    int          *outBegIdx,
                    int          *outNBElement,
                    double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TRIX( int    startIdx,
                      int    endIdx,
                      const float  inReal[],
                      int           optInTimePeriod, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TRIX_Lookback( int           optInTimePeriod );  /* From 1 to 100000 */


/*
 * TA_TSF - Time Series Forecast
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TSF( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TSF( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TSF_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_TYPPRICE - Typical Price
 *
 * Input  = High, Low, Close
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_TYPPRICE( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        const double inClose[],
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_TYPPRICE( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          const float  inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_TYPPRICE_Lookback( void );


/*
 * TA_ULTOSC - Ultimate Oscillator
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod1:(From 1 to 100000)
 *    Number of bars for 1st period.
 *
 * optInTimePeriod2:(From 1 to 100000)
 *    Number of bars fro 2nd period
 *
 * optInTimePeriod3:(From 1 to 100000)
 *    Number of bars for 3rd period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_ULTOSC( int    startIdx,
                      int    endIdx,
                      const double inHigh[],
                      const double inLow[],
                      const double inClose[],
                      int           optInTimePeriod1, /* From 1 to 100000 */
                      int           optInTimePeriod2, /* From 1 to 100000 */
                      int           optInTimePeriod3, /* From 1 to 100000 */
                      int          *outBegIdx,
                      int          *outNBElement,
                      double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_ULTOSC( int    startIdx,
                        int    endIdx,
                        const float  inHigh[],
                        const float  inLow[],
                        const float  inClose[],
                        int           optInTimePeriod1, /* From 1 to 100000 */
                        int           optInTimePeriod2, /* From 1 to 100000 */
                        int           optInTimePeriod3, /* From 1 to 100000 */
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_ULTOSC_Lookback( int           optInTimePeriod1, /* From 1 to 100000 */
                      int           optInTimePeriod2, /* From 1 to 100000 */
                      int           optInTimePeriod3 );  /* From 1 to 100000 */


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
TA_RetCode DLL_EXPORT _cdecl DLL_TA_VAR( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 1 to 100000 */
                   double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_VAR( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 1 to 100000 */
                     double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_VAR_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
                   double        optInNbDev );  /* From TA_REAL_MIN to TA_REAL_MAX */


/*
 * TA_WCLPRICE - Weighted Close Price
 *
 * Input  = High, Low, Close
 * Output = double
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_WCLPRICE( int    startIdx,
                        int    endIdx,
                        const double inHigh[],
                        const double inLow[],
                        const double inClose[],
                        int          *outBegIdx,
                        int          *outNBElement,
                        double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_WCLPRICE( int    startIdx,
                          int    endIdx,
                          const float  inHigh[],
                          const float  inLow[],
                          const float  inClose[],
                          int          *outBegIdx,
                          int          *outNBElement,
                          double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_WCLPRICE_Lookback( void );


/*
 * TA_WILLR - Williams' %R
 *
 * Input  = High, Low, Close
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_WILLR( int    startIdx,
                     int    endIdx,
                     const double inHigh[],
                     const double inLow[],
                     const double inClose[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_WILLR( int    startIdx,
                       int    endIdx,
                       const float  inHigh[],
                       const float  inLow[],
                       const float  inClose[],
                       int           optInTimePeriod, /* From 2 to 100000 */
                       int          *outBegIdx,
                       int          *outNBElement,
                       double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_WILLR_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/*
 * TA_WMA - Weighted Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_WMA( int    startIdx,
                   int    endIdx,
                   const double inReal[],
                   int           optInTimePeriod, /* From 2 to 100000 */
                   int          *outBegIdx,
                   int          *outNBElement,
                   double        outReal[] );

TA_RetCode DLL_EXPORT _cdecl DLL_TA_S_WMA( int    startIdx,
                     int    endIdx,
                     const float  inReal[],
                     int           optInTimePeriod, /* From 2 to 100000 */
                     int          *outBegIdx,
                     int          *outNBElement,
                     double        outReal[] );

int DLL_EXPORT _cdecl DLL_TA_WMA_Lookback( int           optInTimePeriod );  /* From 2 to 100000 */


/* Some TA functions takes a certain amount of input data
 * before stabilizing and outputing meaningful data. This is
 * a behavior pertaining to the algo of some TA functions and
 * is not particular to the TA-Lib implementation.
 * TA-Lib allows you to automatically strip off these unstabl
 * data from your output and from any internal processing.
 * (See documentation for more info)
 *
 * Examples:
 *      TA_SetUnstablePeriod( TA_FUNC_UNST_EMA, 30 );
 *           Always strip off 30 price bar for the TA_EMA function.
 *
 *      TA_SetUnstablePeriod( TA_FUNC_UNST_ALL, 30 );
 *           Always strip off 30 price bar from ALL functions
 *           having an unstable period.
 *
 * See ta_defs.h for the enumeration TA_FuncUnstId
 */

TA_RetCode DLL_EXPORT _cdecl DLL_TA_SetUnstablePeriod( TA_FuncUnstId id,
                                 unsigned int  unstablePeriod );

unsigned int DLL_EXPORT _cdecl DLL_TA_GetUnstablePeriod( TA_FuncUnstId id );

/* You can change slightly the behavior of the TA functions
 * by requesting compatibiliy with some existing software.
 *
 * By default, the behavior is as close as the original
 * author of the TA functions intend it to be.
 *
 * See ta_defs.h for the enumeration TA_Compatibility.
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SetCompatibility( TA_Compatibility value );
TA_Compatibility DLL_EXPORT _cdecl DLL_TA_GetCompatibility( void );

/* Candlesticks struct and functions
 * Because candlestick patterns are subjective, it is necessary
 * to allow the user to specify what should be the meaning of
 * 'long body', 'short shadows', etc.
 */

/* Call TA_SetCandleSettings to set that when comparing a candle
 * basing on settingType it must be compared with the average
 * of the last avgPeriod candles' rangeType multiplied by factor.
 * This setting is valid until TA_RestoreCandleDefaultSettings is called
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_SetCandleSettings( TA_CandleSettingType settingType,
                                 TA_RangeType rangeType,
                                 int avgPeriod,
                                 double factor );

/* Call TA_RestoreCandleDefaultSettings after using custom settings
 * to restore the default settings for the specified settingType
 */
TA_RetCode DLL_EXPORT _cdecl DLL_TA_RestoreCandleDefaultSettings( TA_CandleSettingType settingType );

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
