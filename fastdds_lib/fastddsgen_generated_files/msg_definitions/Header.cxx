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
 * @file Header.cpp
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

#include "Header.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Header::Header()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@687e99d8
    m_timestamp = 0;
    // m_id com.eprosima.idl.parser.typecode.StringTypeCode@e4487af
    m_id ="";

}

idl_msg::Header::~Header()
{


}

idl_msg::Header::Header(
        const Header& x)
{
    m_timestamp = x.m_timestamp;
    m_id = x.m_id;
}

idl_msg::Header::Header(
        Header&& x)
{
    m_timestamp = x.m_timestamp;
    m_id = std::move(x.m_id);
}

idl_msg::Header& idl_msg::Header::operator =(
        const Header& x)
{

    m_timestamp = x.m_timestamp;
    m_id = x.m_id;

    return *this;
}

idl_msg::Header& idl_msg::Header::operator =(
        Header&& x)
{

    m_timestamp = x.m_timestamp;
    m_id = std::move(x.m_id);

    return *this;
}

size_t idl_msg::Header::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t idl_msg::Header::getCdrSerializedSize(
        const idl_msg::Header& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.id().size() + 1;


    return current_alignment - initial_alignment;
}

void idl_msg::Header::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_timestamp;
    scdr << m_id;

}

void idl_msg::Header::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_id;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void idl_msg::Header::timestamp(
        int32_t _timestamp)
{
    m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
int32_t idl_msg::Header::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
int32_t& idl_msg::Header::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member id
 * @param _id New value to be copied in member id
 */
void idl_msg::Header::id(
        const std::string& _id)
{
    m_id = _id;
}

/*!
 * @brief This function moves the value in member id
 * @param _id New value to be moved in member id
 */
void idl_msg::Header::id(
        std::string&& _id)
{
    m_id = std::move(_id);
}

/*!
 * @brief This function returns a constant reference to member id
 * @return Constant reference to member id
 */
const std::string& idl_msg::Header::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
std::string& idl_msg::Header::id()
{
    return m_id;
}

size_t idl_msg::Header::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool idl_msg::Header::isKeyDefined()
{
    return false;
}

void idl_msg::Header::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

