// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file optical_flow.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _OPTICAL_FLOW_H_
#define _OPTICAL_FLOW_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(optical_flow_SOURCE)
#define optical_flow_DllAPI __declspec( dllexport )
#else
#define optical_flow_DllAPI __declspec( dllimport )
#endif // optical_flow_SOURCE
#else
#define optical_flow_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define optical_flow_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


const uint8_t optical_flow__MODE_UNKNOWN = 0;
const uint8_t optical_flow__MODE_BRIGHT = 1;
const uint8_t optical_flow__MODE_LOWLIGHT = 2;
const uint8_t optical_flow__MODE_SUPER_LOWLIGHT = 3;
/*!
 * @brief This class represents the structure optical_flow defined by the user in the IDL file.
 * @ingroup OPTICAL_FLOW
 */
class optical_flow
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport optical_flow();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~optical_flow();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object optical_flow that will be copied.
     */
    eProsima_user_DllExport optical_flow(
            const optical_flow& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object optical_flow that will be copied.
     */
    eProsima_user_DllExport optical_flow(
            optical_flow&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object optical_flow that will be copied.
     */
    eProsima_user_DllExport optical_flow& operator =(
            const optical_flow& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object optical_flow that will be copied.
     */
    eProsima_user_DllExport optical_flow& operator =(
            optical_flow&& x);

    /*!
     * @brief This function sets a value in member timestamp_
     * @param _timestamp_ New value for member timestamp_
     */
    eProsima_user_DllExport void timestamp_(
            uint64_t _timestamp_);

    /*!
     * @brief This function returns the value of member timestamp_
     * @return Value of member timestamp_
     */
    eProsima_user_DllExport uint64_t timestamp_() const;

    /*!
     * @brief This function returns a reference to member timestamp_
     * @return Reference to member timestamp_
     */
    eProsima_user_DllExport uint64_t& timestamp_();

    /*!
     * @brief This function sets a value in member sensor_id_
     * @param _sensor_id_ New value for member sensor_id_
     */
    eProsima_user_DllExport void sensor_id_(
            uint8_t _sensor_id_);

    /*!
     * @brief This function returns the value of member sensor_id_
     * @return Value of member sensor_id_
     */
    eProsima_user_DllExport uint8_t sensor_id_() const;

    /*!
     * @brief This function returns a reference to member sensor_id_
     * @return Reference to member sensor_id_
     */
    eProsima_user_DllExport uint8_t& sensor_id_();

    /*!
     * @brief This function sets a value in member pixel_flow_x_integral_
     * @param _pixel_flow_x_integral_ New value for member pixel_flow_x_integral_
     */
    eProsima_user_DllExport void pixel_flow_x_integral_(
            float _pixel_flow_x_integral_);

    /*!
     * @brief This function returns the value of member pixel_flow_x_integral_
     * @return Value of member pixel_flow_x_integral_
     */
    eProsima_user_DllExport float pixel_flow_x_integral_() const;

    /*!
     * @brief This function returns a reference to member pixel_flow_x_integral_
     * @return Reference to member pixel_flow_x_integral_
     */
    eProsima_user_DllExport float& pixel_flow_x_integral_();

    /*!
     * @brief This function sets a value in member pixel_flow_y_integral_
     * @param _pixel_flow_y_integral_ New value for member pixel_flow_y_integral_
     */
    eProsima_user_DllExport void pixel_flow_y_integral_(
            float _pixel_flow_y_integral_);

    /*!
     * @brief This function returns the value of member pixel_flow_y_integral_
     * @return Value of member pixel_flow_y_integral_
     */
    eProsima_user_DllExport float pixel_flow_y_integral_() const;

    /*!
     * @brief This function returns a reference to member pixel_flow_y_integral_
     * @return Reference to member pixel_flow_y_integral_
     */
    eProsima_user_DllExport float& pixel_flow_y_integral_();

    /*!
     * @brief This function sets a value in member gyro_x_rate_integral_
     * @param _gyro_x_rate_integral_ New value for member gyro_x_rate_integral_
     */
    eProsima_user_DllExport void gyro_x_rate_integral_(
            float _gyro_x_rate_integral_);

    /*!
     * @brief This function returns the value of member gyro_x_rate_integral_
     * @return Value of member gyro_x_rate_integral_
     */
    eProsima_user_DllExport float gyro_x_rate_integral_() const;

    /*!
     * @brief This function returns a reference to member gyro_x_rate_integral_
     * @return Reference to member gyro_x_rate_integral_
     */
    eProsima_user_DllExport float& gyro_x_rate_integral_();

    /*!
     * @brief This function sets a value in member gyro_y_rate_integral_
     * @param _gyro_y_rate_integral_ New value for member gyro_y_rate_integral_
     */
    eProsima_user_DllExport void gyro_y_rate_integral_(
            float _gyro_y_rate_integral_);

    /*!
     * @brief This function returns the value of member gyro_y_rate_integral_
     * @return Value of member gyro_y_rate_integral_
     */
    eProsima_user_DllExport float gyro_y_rate_integral_() const;

    /*!
     * @brief This function returns a reference to member gyro_y_rate_integral_
     * @return Reference to member gyro_y_rate_integral_
     */
    eProsima_user_DllExport float& gyro_y_rate_integral_();

    /*!
     * @brief This function sets a value in member gyro_z_rate_integral_
     * @param _gyro_z_rate_integral_ New value for member gyro_z_rate_integral_
     */
    eProsima_user_DllExport void gyro_z_rate_integral_(
            float _gyro_z_rate_integral_);

    /*!
     * @brief This function returns the value of member gyro_z_rate_integral_
     * @return Value of member gyro_z_rate_integral_
     */
    eProsima_user_DllExport float gyro_z_rate_integral_() const;

    /*!
     * @brief This function returns a reference to member gyro_z_rate_integral_
     * @return Reference to member gyro_z_rate_integral_
     */
    eProsima_user_DllExport float& gyro_z_rate_integral_();

    /*!
     * @brief This function sets a value in member ground_distance_m_
     * @param _ground_distance_m_ New value for member ground_distance_m_
     */
    eProsima_user_DllExport void ground_distance_m_(
            float _ground_distance_m_);

    /*!
     * @brief This function returns the value of member ground_distance_m_
     * @return Value of member ground_distance_m_
     */
    eProsima_user_DllExport float ground_distance_m_() const;

    /*!
     * @brief This function returns a reference to member ground_distance_m_
     * @return Reference to member ground_distance_m_
     */
    eProsima_user_DllExport float& ground_distance_m_();

    /*!
     * @brief This function sets a value in member integration_timespan_
     * @param _integration_timespan_ New value for member integration_timespan_
     */
    eProsima_user_DllExport void integration_timespan_(
            uint32_t _integration_timespan_);

    /*!
     * @brief This function returns the value of member integration_timespan_
     * @return Value of member integration_timespan_
     */
    eProsima_user_DllExport uint32_t integration_timespan_() const;

    /*!
     * @brief This function returns a reference to member integration_timespan_
     * @return Reference to member integration_timespan_
     */
    eProsima_user_DllExport uint32_t& integration_timespan_();

    /*!
     * @brief This function sets a value in member time_since_last_sonar_update_
     * @param _time_since_last_sonar_update_ New value for member time_since_last_sonar_update_
     */
    eProsima_user_DllExport void time_since_last_sonar_update_(
            uint32_t _time_since_last_sonar_update_);

    /*!
     * @brief This function returns the value of member time_since_last_sonar_update_
     * @return Value of member time_since_last_sonar_update_
     */
    eProsima_user_DllExport uint32_t time_since_last_sonar_update_() const;

    /*!
     * @brief This function returns a reference to member time_since_last_sonar_update_
     * @return Reference to member time_since_last_sonar_update_
     */
    eProsima_user_DllExport uint32_t& time_since_last_sonar_update_();

    /*!
     * @brief This function sets a value in member frame_count_since_last_readout_
     * @param _frame_count_since_last_readout_ New value for member frame_count_since_last_readout_
     */
    eProsima_user_DllExport void frame_count_since_last_readout_(
            uint16_t _frame_count_since_last_readout_);

    /*!
     * @brief This function returns the value of member frame_count_since_last_readout_
     * @return Value of member frame_count_since_last_readout_
     */
    eProsima_user_DllExport uint16_t frame_count_since_last_readout_() const;

    /*!
     * @brief This function returns a reference to member frame_count_since_last_readout_
     * @return Reference to member frame_count_since_last_readout_
     */
    eProsima_user_DllExport uint16_t& frame_count_since_last_readout_();

    /*!
     * @brief This function sets a value in member gyro_temperature_
     * @param _gyro_temperature_ New value for member gyro_temperature_
     */
    eProsima_user_DllExport void gyro_temperature_(
            int16_t _gyro_temperature_);

    /*!
     * @brief This function returns the value of member gyro_temperature_
     * @return Value of member gyro_temperature_
     */
    eProsima_user_DllExport int16_t gyro_temperature_() const;

    /*!
     * @brief This function returns a reference to member gyro_temperature_
     * @return Reference to member gyro_temperature_
     */
    eProsima_user_DllExport int16_t& gyro_temperature_();

    /*!
     * @brief This function sets a value in member quality_
     * @param _quality_ New value for member quality_
     */
    eProsima_user_DllExport void quality_(
            uint8_t _quality_);

    /*!
     * @brief This function returns the value of member quality_
     * @return Value of member quality_
     */
    eProsima_user_DllExport uint8_t quality_() const;

    /*!
     * @brief This function returns a reference to member quality_
     * @return Reference to member quality_
     */
    eProsima_user_DllExport uint8_t& quality_();

    /*!
     * @brief This function sets a value in member max_flow_rate_
     * @param _max_flow_rate_ New value for member max_flow_rate_
     */
    eProsima_user_DllExport void max_flow_rate_(
            float _max_flow_rate_);

    /*!
     * @brief This function returns the value of member max_flow_rate_
     * @return Value of member max_flow_rate_
     */
    eProsima_user_DllExport float max_flow_rate_() const;

    /*!
     * @brief This function returns a reference to member max_flow_rate_
     * @return Reference to member max_flow_rate_
     */
    eProsima_user_DllExport float& max_flow_rate_();

    /*!
     * @brief This function sets a value in member min_ground_distance_
     * @param _min_ground_distance_ New value for member min_ground_distance_
     */
    eProsima_user_DllExport void min_ground_distance_(
            float _min_ground_distance_);

    /*!
     * @brief This function returns the value of member min_ground_distance_
     * @return Value of member min_ground_distance_
     */
    eProsima_user_DllExport float min_ground_distance_() const;

    /*!
     * @brief This function returns a reference to member min_ground_distance_
     * @return Reference to member min_ground_distance_
     */
    eProsima_user_DllExport float& min_ground_distance_();

    /*!
     * @brief This function sets a value in member max_ground_distance_
     * @param _max_ground_distance_ New value for member max_ground_distance_
     */
    eProsima_user_DllExport void max_ground_distance_(
            float _max_ground_distance_);

    /*!
     * @brief This function returns the value of member max_ground_distance_
     * @return Value of member max_ground_distance_
     */
    eProsima_user_DllExport float max_ground_distance_() const;

    /*!
     * @brief This function returns a reference to member max_ground_distance_
     * @return Reference to member max_ground_distance_
     */
    eProsima_user_DllExport float& max_ground_distance_();

    /*!
     * @brief This function sets a value in member mode_
     * @param _mode_ New value for member mode_
     */
    eProsima_user_DllExport void mode_(
            uint8_t _mode_);

    /*!
     * @brief This function returns the value of member mode_
     * @return Value of member mode_
     */
    eProsima_user_DllExport uint8_t mode_() const;

    /*!
     * @brief This function returns a reference to member mode_
     * @return Reference to member mode_
     */
    eProsima_user_DllExport uint8_t& mode_();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const optical_flow& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    uint64_t m_timestamp_;
    uint8_t m_sensor_id_;
    float m_pixel_flow_x_integral_;
    float m_pixel_flow_y_integral_;
    float m_gyro_x_rate_integral_;
    float m_gyro_y_rate_integral_;
    float m_gyro_z_rate_integral_;
    float m_ground_distance_m_;
    uint32_t m_integration_timespan_;
    uint32_t m_time_since_last_sonar_update_;
    uint16_t m_frame_count_since_last_readout_;
    int16_t m_gyro_temperature_;
    uint8_t m_quality_;
    float m_max_flow_rate_;
    float m_min_ground_distance_;
    float m_max_ground_distance_;
    uint8_t m_mode_;
};

#endif // _OPTICAL_FLOW_H_