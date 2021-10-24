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
 * @file PositionCommand.cpp
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

#include "PositionCommand.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::PositionCommand::PositionCommand()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@16e7dcfd

    // m_position com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@3d121db3


}

idl_msg::PositionCommand::~PositionCommand()
{


}

idl_msg::PositionCommand::PositionCommand(
        const PositionCommand& x)
{
    m_header = x.m_header;
    m_position = x.m_position;
}

idl_msg::PositionCommand::PositionCommand(
        PositionCommand&& x)
{
    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);
}

idl_msg::PositionCommand& idl_msg::PositionCommand::operator =(
        const PositionCommand& x)
{

    m_header = x.m_header;
    m_position = x.m_position;

    return *this;
}

idl_msg::PositionCommand& idl_msg::PositionCommand::operator =(
        PositionCommand&& x)
{

    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);

    return *this;
}

size_t idl_msg::PositionCommand::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Position::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t idl_msg::PositionCommand::getCdrSerializedSize(
        const idl_msg::PositionCommand& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += idl_msg::Position::getCdrSerializedSize(data.position(), current_alignment);

    return current_alignment - initial_alignment;
}

void idl_msg::PositionCommand::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_position;

}

void idl_msg::PositionCommand::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_position;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::PositionCommand::header(
        const idl_msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::PositionCommand::header(
        idl_msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header& idl_msg::PositionCommand::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header& idl_msg::PositionCommand::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member position
 * @param _position New value to be copied in member position
 */
void idl_msg::PositionCommand::position(
        const idl_msg::Position& _position)
{
    m_position = _position;
}

/*!
 * @brief This function moves the value in member position
 * @param _position New value to be moved in member position
 */
void idl_msg::PositionCommand::position(
        idl_msg::Position&& _position)
{
    m_position = std::move(_position);
}

/*!
 * @brief This function returns a constant reference to member position
 * @return Constant reference to member position
 */
const idl_msg::Position& idl_msg::PositionCommand::position() const
{
    return m_position;
}

/*!
 * @brief This function returns a reference to member position
 * @return Reference to member position
 */
idl_msg::Position& idl_msg::PositionCommand::position()
{
    return m_position;
}

size_t idl_msg::PositionCommand::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool idl_msg::PositionCommand::isKeyDefined()
{
    return false;
}

void idl_msg::PositionCommand::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

