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
     * @brief Enum of all supportet sensor model names.
     */
    enum SensorType : uint8_t {
        NONE, 
        BNO055_T, 
        //VL53L0X_T, 
        //VL6180X_T, 
        SRF08_T
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
         * @brief Enum of all supportet sensor model names.
         */
        enum Status : int16_t {
            DEFAULT = 0, 
        };

        /**
         * @enum ErrorCode
         * 
         * @brief Enum of all supportet sensor model names.
         * 
         * Codes < 0 -> Error
         * Codes > 0 -> Warning
         */
        enum Error : int16_t {
            NONE = 0, 

            // warnings

            SensorInit = 200,
            SensorInitBNO055 = 201,
            SensorInitVL53L0X = 202,
            SensorInitVL6180X = 203,
            SensorInitSRF08 = 204,

            SensorReading = 250,
            SensorReadingBNO055 = 251,
            SensorReadingVL53L0X = 252,
            SensorReadingVL6180X = 253,
            SensorReadingSRF08 = 254,


            // errors

            Fatal = -1,

            OmeError = -100,
            OmeInvalidObjSize = -101,
            OmeNoMemorSliceInWishedSizeAvaliable = -102,
            OmeMaxNumberOfObjInPoolReached = -103,
            OmePoolObjeOutOfRange = -104,
            OmeObjPtrOutOfRange = -105,
            OmeObjPtrIsNotPointingToTheFirstElementOfTheMemorySlice = -106,

            SensorInit = -200,
            SensorInitBNO055 = -201,
            SensorInitVL53L0X = -202,
            SensorInitVL6180X = -203,
            SensorInitSRF08 = -204,

            SensorReading = -250,
            SensorReadingBNO055 = -251,
            SensorReadingVL53L0X = -252,
            SensorReadingVL6180X = -253,
            SensorReadingSRF08 = -254
        };

    
    }
}

#endif
