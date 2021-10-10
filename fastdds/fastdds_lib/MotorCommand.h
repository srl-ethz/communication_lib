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
 * @file MotorCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _MOTORCOMMAND_H_
#define _MOTORCOMMAND_H_

#include "std_msgs/msgs/Header.h"
#include "actuator_msgs/msgs/MotorSpeed.h"

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
#if defined(MotorCommand_SOURCE)
#define MotorCommand_DllAPI __declspec( dllexport )
#else
#define MotorCommand_DllAPI __declspec( dllimport )
#endif // MotorCommand_SOURCE
#else
#define MotorCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define MotorCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure MotorCommand defined by the user in the IDL file.
 * @ingroup MOTORCOMMAND
 */
class MotorCommand
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MotorCommand();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MotorCommand();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MotorCommand that will be copied.
     */
    eProsima_user_DllExport MotorCommand(
            const MotorCommand& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MotorCommand that will be copied.
     */
    eProsima_user_DllExport MotorCommand(
            MotorCommand&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MotorCommand that will be copied.
     */
    eProsima_user_DllExport MotorCommand& operator =(
            const MotorCommand& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MotorCommand that will be copied.
     */
    eProsima_user_DllExport MotorCommand& operator =(
            MotorCommand&& x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    eProsima_user_DllExport void header(
            const Header& _header);

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    eProsima_user_DllExport void header(
            Header&& _header);

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    eProsima_user_DllExport const Header& header() const;

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    eProsima_user_DllExport Header& header();
    /*!
     * @brief This function copies the value in member speed
     * @param _speed New value to be copied in member speed
     */
    eProsima_user_DllExport void speed(
            const std::array<MotorSpeed, 4>& _speed);

    /*!
     * @brief This function moves the value in member speed
     * @param _speed New value to be moved in member speed
     */
    eProsima_user_DllExport void speed(
            std::array<MotorSpeed, 4>&& _speed);

    /*!
     * @brief This function returns a constant reference to member speed
     * @return Constant reference to member speed
     */
    eProsima_user_DllExport const std::array<MotorSpeed, 4>& speed() const;

    /*!
     * @brief This function returns a reference to member speed
     * @return Reference to member speed
     */
    eProsima_user_DllExport std::array<MotorSpeed, 4>& speed();

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
            const MotorCommand& data,
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

    Header m_header;
    std::array<MotorSpeed, 4> m_speed;
};

#endif // _MOTORCOMMAND_H_