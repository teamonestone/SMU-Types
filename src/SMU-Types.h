/**
 * @file SMU-Types.h
 * @brief The header file for SMU-Types Library.
 * @author Jonas Merkle [JJM] <a href="mailto:jonas.merkle@tam-onestone.net">jonas.merkle@tam-onestone.net</a>
 * @author Dominik Authaler <a href="mailto:dominik.authaler@team-onestone.net">dominik.authaler@team-onestone.net</a>
 * @author
 * This library is maintained by <a href="https://team-onestone.net">Team Onestone</a>.
 * E-Mail: <a href="mailto:info@team-onestone.net">info@team-onestone.net</a>
 * @version 1.0.0
 * @date 31 January 2020
 * @copyright This project is released under the GNU General Public License v3.0
 */
#ifndef SMU_TYPES_h
#define SMU_TYPES_h

//////////////
// Includes //
//////////////

// basic Includes
#include <inttypes.h>


///////////////
// Namespace //
///////////////

/**
 * @namespace smu_types
 * 
 * @brief Namspace for smu related data types and more.
 */
namespace smu_types {

    /**
     * @enum SensorType
     * 
     * @brief Enum of all supported sensor model names.
     */
    enum SensorType : uint8_t {
        NONE, 
        BNO055_T, 
        SRF08_T
        //CMPS10,
        //VL53L0X_T, 
        //VL6180X_T, 
    };

    /**
     * @namespace codes
     * 
     * @brief Namspace for smu related status & error codes.
     */
    namespace codes {
    
        /**
         * @enum StatusCode
         * 
         * @brief Enum of all supported status codes.
         * 
         * Codes <  1000 -> Major status code.
         * Codes >= 1000 -> Fine software information.
         */
        enum Status : uint16_t {

            // major status codes

            STATUS_NONE = 0,

            STATUS_ReadMsg = 1,
            STATUS_ProcessMsg = 2,
            STATUS_UpdateSensorReadings = 3,

            STATUS_Sensors_Init_BNO055 = 4, 
            STATUS_Sensors_Init_VL53L0X = 5, 
            STATUS_Sensors_Init_VL6180X = 6,
            STATUS_Sensors_Init_SRF08 = 7,
            STATUS_Sensors_Init_CMPS10 = 8,


            // fine software informations

            INFO_MainSetup = 1000,
            INFO_MainLoop = 1001,
            INFO_ComNo4BytesRec = 1002,
            INFO_ProcessMsgDone = 1003,
            INFO_AutoUpdateDisables = 1004,

            INFO_Sensors_activateSensor = 1009,
		    INFO_Sensors_deactivateSensor = 1010,
		    INFO_Sensors_isActive = 1011,
		    INFO_Sensors_disconnectSensor = 1012,
		    INFO_Sensors_updateSensor = 1013,
		    INFO_Sensors_updateAllSensors = 1014,
		    INFO_Sensors_getReading = 1015,
        };

        /**
         * @enum ErrorCode
         * 
         * @brief Enum of all supported error codes.
         * 
         * Codes < 0 -> Error
         * Codes > 0 -> Warning
         */
        enum Error : int16_t {
            ERR_NONE = 0, 

            // warnings

            WARN_SensorInit = 200,
            WARN_SensorInitBNO055 = 201,
            WARN_SensorInitVL53L0X = 202,
            WARN_SensorInitVL6180X = 203,
            WARN_SensorInitSRF08 = 204,

            WARN_SensorReading = 250,
            WARN_SensorReadingBNO055 = 251,
            WARN_SensorReadingVL53L0X = 252,
            WARN_SensorReadingVL6180X = 253,
            WARN_SensorReadingSRF08 = 254,

            WARN_ComCouldNotReadIncomingMsg = 1000,


            // errors

            ERROR_Fatal = -1,

            ERR_OmeError = -100,
            ERR_OmeInvalidObjSize = -101,
            ERR_OmeNoMemorySliceInWishedSizeAvaliable = -102,
            ERR_OmeMaxNumberOfObjInPoolReached = -103,
            ERR_OmePoolObjectOutOfRange = -104,
            ERR_OmeObjPtrOutOfRange = -105,
            ERR_OmeObjPtrIsNotPointingToTheFirstElementOfTheMemorySlice = -106,

            ERR_SensorInit = -200,
            ERR_SensorInitBNO055 = -201,
            ERR_SensorInitVL53L0X = -202,
            ERR_SensorInitVL6180X = -203,
            ERR_SensorInitSRF08 = -204,

            ERR_SensorReading = -250,
            ERR_SensorReadingBNO055 = -251,
            ERR_SensorReadingVL53L0X = -252,
            ERR_SensorReadingVL6180X = -253,
            ERR_SensorReadingSRF08 = -254,

            ERR_ComCouldNotProcessCurrentMsg = -1000
        };
    }
}

#endif
