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
 * @file AttitudeCommand.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "AttitudeCommand.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::AttitudeCommand::AttitudeCommand()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@44a3ec6b

    // m_roll com.eprosima.idl.parser.typecode.PrimitiveTypeCode@71623278
    m_roll = 0.0;
    // m_pitch com.eprosima.idl.parser.typecode.PrimitiveTypeCode@768b970c
    m_pitch = 0.0;
    // m_yaw com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5a4041cc
    m_yaw = 0.0;

}

idl_msg::AttitudeCommand::~AttitudeCommand()
{




}

idl_msg::AttitudeCommand::AttitudeCommand(
        const AttitudeCommand& x)
{
    m_header = x.m_header;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
}

idl_msg::AttitudeCommand::AttitudeCommand(
        AttitudeCommand&& x)
{
    m_header = std::move(x.m_header);
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;
}

idl_msg::AttitudeCommand& idl_msg::AttitudeCommand::operator =(
        const AttitudeCommand& x)
{

    m_header = x.m_header;
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;

    return *this;
}

idl_msg::AttitudeCommand& idl_msg::AttitudeCommand::operator =(
        AttitudeCommand&& x)
{

    m_header = std::move(x.m_header);
    m_roll = x.m_roll;
    m_pitch = x.m_pitch;
    m_yaw = x.m_yaw;

    return *this;
}

size_t idl_msg::AttitudeCommand::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t idl_msg::AttitudeCommand::getCdrSerializedSize(
        const idl_msg::AttitudeCommand& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void idl_msg::AttitudeCommand::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_roll;
    scdr << m_pitch;
    scdr << m_yaw;

}

void idl_msg::AttitudeCommand::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_roll;
    dcdr >> m_pitch;
    dcdr >> m_yaw;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::AttitudeCommand::header(
        const idl_msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::AttitudeCommand::header(
        idl_msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header& idl_msg::AttitudeCommand::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header& idl_msg::AttitudeCommand::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member roll
 * @param _roll New value for member roll
 */
void idl_msg::AttitudeCommand::roll(
        float _roll)
{
    m_roll = _roll;
}

/*!
 * @brief This function returns the value of member roll
 * @return Value of member roll
 */
float idl_msg::AttitudeCommand::roll() const
{
    return m_roll;
}

/*!
 * @brief This function returns a reference to member roll
 * @return Reference to member roll
 */
float& idl_msg::AttitudeCommand::roll()
{
    return m_roll;
}

/*!
 * @brief This function sets a value in member pitch
 * @param _pitch New value for member pitch
 */
void idl_msg::AttitudeCommand::pitch(
        float _pitch)
{
    m_pitch = _pitch;
}

/*!
 * @brief This function returns the value of member pitch
 * @return Value of member pitch
 */
float idl_msg::AttitudeCommand::pitch() const
{
    return m_pitch;
}

/*!
 * @brief This function returns a reference to member pitch
 * @return Reference to member pitch
 */
float& idl_msg::AttitudeCommand::pitch()
{
    return m_pitch;
}

/*!
 * @brief This function sets a value in member yaw
 * @param _yaw New value for member yaw
 */
void idl_msg::AttitudeCommand::yaw(
        float _yaw)
{
    m_yaw = _yaw;
}

/*!
 * @brief This function returns the value of member yaw
 * @return Value of member yaw
 */
float idl_msg::AttitudeCommand::yaw() const
{
    return m_yaw;
}

/*!
 * @brief This function returns a reference to member yaw
 * @return Reference to member yaw
 */
float& idl_msg::AttitudeCommand::yaw()
{
    return m_yaw;
}


size_t idl_msg::AttitudeCommand::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool idl_msg::AttitudeCommand::isKeyDefined()
{
    return false;
}

void idl_msg::AttitudeCommand::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

