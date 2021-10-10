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
 * @file AttitudeRateCommand.cpp
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

#include "AttitudeRateCommand.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

AttitudeRateCommand::AttitudeRateCommand()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@2bea5ab4

    // m_roll_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@3d8314f0
    m_roll_rate = 0.0;
    // m_pitch_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2df32bf7
    m_pitch_rate = 0.0;
    // m_yaw_rate com.eprosima.idl.parser.typecode.PrimitiveTypeCode@530612ba
    m_yaw_rate = 0.0;

}

AttitudeRateCommand::~AttitudeRateCommand()
{




}

AttitudeRateCommand::AttitudeRateCommand(
        const AttitudeRateCommand& x)
{
    m_header = x.m_header;
    m_roll_rate = x.m_roll_rate;
    m_pitch_rate = x.m_pitch_rate;
    m_yaw_rate = x.m_yaw_rate;
}

AttitudeRateCommand::AttitudeRateCommand(
        AttitudeRateCommand&& x)
{
    m_header = std::move(x.m_header);
    m_roll_rate = x.m_roll_rate;
    m_pitch_rate = x.m_pitch_rate;
    m_yaw_rate = x.m_yaw_rate;
}

AttitudeRateCommand& AttitudeRateCommand::operator =(
        const AttitudeRateCommand& x)
{

    m_header = x.m_header;
    m_roll_rate = x.m_roll_rate;
    m_pitch_rate = x.m_pitch_rate;
    m_yaw_rate = x.m_yaw_rate;

    return *this;
}

AttitudeRateCommand& AttitudeRateCommand::operator =(
        AttitudeRateCommand&& x)
{

    m_header = std::move(x.m_header);
    m_roll_rate = x.m_roll_rate;
    m_pitch_rate = x.m_pitch_rate;
    m_yaw_rate = x.m_yaw_rate;

    return *this;
}

size_t AttitudeRateCommand::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t AttitudeRateCommand::getCdrSerializedSize(
        const AttitudeRateCommand& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void AttitudeRateCommand::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_roll_rate;
    scdr << m_pitch_rate;
    scdr << m_yaw_rate;

}

void AttitudeRateCommand::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_roll_rate;
    dcdr >> m_pitch_rate;
    dcdr >> m_yaw_rate;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void AttitudeRateCommand::header(
        const Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void AttitudeRateCommand::header(
        Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const Header& AttitudeRateCommand::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
Header& AttitudeRateCommand::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member roll_rate
 * @param _roll_rate New value for member roll_rate
 */
void AttitudeRateCommand::roll_rate(
        float _roll_rate)
{
    m_roll_rate = _roll_rate;
}

/*!
 * @brief This function returns the value of member roll_rate
 * @return Value of member roll_rate
 */
float AttitudeRateCommand::roll_rate() const
{
    return m_roll_rate;
}

/*!
 * @brief This function returns a reference to member roll_rate
 * @return Reference to member roll_rate
 */
float& AttitudeRateCommand::roll_rate()
{
    return m_roll_rate;
}

/*!
 * @brief This function sets a value in member pitch_rate
 * @param _pitch_rate New value for member pitch_rate
 */
void AttitudeRateCommand::pitch_rate(
        float _pitch_rate)
{
    m_pitch_rate = _pitch_rate;
}

/*!
 * @brief This function returns the value of member pitch_rate
 * @return Value of member pitch_rate
 */
float AttitudeRateCommand::pitch_rate() const
{
    return m_pitch_rate;
}

/*!
 * @brief This function returns a reference to member pitch_rate
 * @return Reference to member pitch_rate
 */
float& AttitudeRateCommand::pitch_rate()
{
    return m_pitch_rate;
}

/*!
 * @brief This function sets a value in member yaw_rate
 * @param _yaw_rate New value for member yaw_rate
 */
void AttitudeRateCommand::yaw_rate(
        float _yaw_rate)
{
    m_yaw_rate = _yaw_rate;
}

/*!
 * @brief This function returns the value of member yaw_rate
 * @return Value of member yaw_rate
 */
float AttitudeRateCommand::yaw_rate() const
{
    return m_yaw_rate;
}

/*!
 * @brief This function returns a reference to member yaw_rate
 * @return Reference to member yaw_rate
 */
float& AttitudeRateCommand::yaw_rate()
{
    return m_yaw_rate;
}


size_t AttitudeRateCommand::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool AttitudeRateCommand::isKeyDefined()
{
    return false;
}

void AttitudeRateCommand::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}
