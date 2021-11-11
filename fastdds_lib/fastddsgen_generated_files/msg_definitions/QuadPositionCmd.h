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
 * @file QuadPositionCmd.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_QUADPOSITIONCMD_H_
#define _IDL_MSG_QUADPOSITIONCMD_H_

#include "Header.h"
#include "Position.h"

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
#if defined(QuadPositionCmd_SOURCE)
#define QuadPositionCmd_DllAPI __declspec( dllexport )
#else
#define QuadPositionCmd_DllAPI __declspec( dllimport )
#endif // QuadPositionCmd_SOURCE
#else
#define QuadPositionCmd_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define QuadPositionCmd_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure QuadPositionCmd defined by the user in the IDL file.
     * @ingroup QUADPOSITIONCMD
     */
    class QuadPositionCmd
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport QuadPositionCmd();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~QuadPositionCmd();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::QuadPositionCmd that will be copied.
         */
        eProsima_user_DllExport QuadPositionCmd(
                const QuadPositionCmd& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::QuadPositionCmd that will be copied.
         */
        eProsima_user_DllExport QuadPositionCmd(
                QuadPositionCmd&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::QuadPositionCmd that will be copied.
         */
        eProsima_user_DllExport QuadPositionCmd& operator =(
                const QuadPositionCmd& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::QuadPositionCmd that will be copied.
         */
        eProsima_user_DllExport QuadPositionCmd& operator =(
                QuadPositionCmd&& x);

        /*!
         * @brief This function copies the value in member header
         * @param _header New value to be copied in member header
         */
        eProsima_user_DllExport void header(
                const idl_msg::Header& _header);

        /*!
         * @brief This function moves the value in member header
         * @param _header New value to be moved in member header
         */
        eProsima_user_DllExport void header(
                idl_msg::Header&& _header);

        /*!
         * @brief This function returns a constant reference to member header
         * @return Constant reference to member header
         */
        eProsima_user_DllExport const idl_msg::Header& header() const;

        /*!
         * @brief This function returns a reference to member header
         * @return Reference to member header
         */
        eProsima_user_DllExport idl_msg::Header& header();
        /*!
         * @brief This function copies the value in member position
         * @param _position New value to be copied in member position
         */
        eProsima_user_DllExport void position(
                const idl_msg::Position& _position);

        /*!
         * @brief This function moves the value in member position
         * @param _position New value to be moved in member position
         */
        eProsima_user_DllExport void position(
                idl_msg::Position&& _position);

        /*!
         * @brief This function returns a constant reference to member position
         * @return Constant reference to member position
         */
        eProsima_user_DllExport const idl_msg::Position& position() const;

        /*!
         * @brief This function returns a reference to member position
         * @return Reference to member position
         */
        eProsima_user_DllExport idl_msg::Position& position();
        /*!
         * @brief This function sets a value in member yaw_angle
         * @param _yaw_angle New value for member yaw_angle
         */
        eProsima_user_DllExport void yaw_angle(
                float _yaw_angle);

        /*!
         * @brief This function returns the value of member yaw_angle
         * @return Value of member yaw_angle
         */
        eProsima_user_DllExport float yaw_angle() const;

        /*!
         * @brief This function returns a reference to member yaw_angle
         * @return Reference to member yaw_angle
         */
        eProsima_user_DllExport float& yaw_angle();


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
                const idl_msg::QuadPositionCmd& data,
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

        idl_msg::Header m_header;
        idl_msg::Position m_position;
        float m_yaw_angle;
    };
} // namespace idl_msg

#endif // _IDL_MSG_QUADPOSITIONCMD_H_