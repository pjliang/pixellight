/*********************************************************\
 *  File: DynVar.cpp                                     *
 *
 *  Copyright (C) 2002-2013 The PixelLight Team (http://www.pixellight.org/)
 *
 *  This file is part of PixelLight.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 *  and associated documentation files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all copies or
 *  substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 *  BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 *  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
\*********************************************************/


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
#include "PLCore/PLCoreDefinitions.h"
#include "PLCore/Base/Type/Type.h"
#include "PLCore/Base/Var/DynVar.h"


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
namespace PLCore {


//[-------------------------------------------------------]
//[ Public functions                                      ]
//[-------------------------------------------------------]
/**
*  @brief
*    Constructor
*/
DynVar::DynVar()
{
}

/**
*  @brief
*    Destructor
*/
DynVar::~DynVar()
{
}


//[-------------------------------------------------------]
//[ Public virtual DynVar functions                       ]
//[-------------------------------------------------------]
/**
*  @brief
*    Get variable descriptor
*/
const VarDesc *DynVar::GetDesc() const
{
	// No descriptor by default
	return nullptr;
}

/**
*  @brief
*    Get type
*/
DynTypeInfo &DynVar::GetType() const
{
	// Return unknown type
	return TypeInfo<NullType>::Instance;
}

/**
*  @brief
*    Get type ID
*/
int DynVar::GetTypeID() const
{
	// Return unknown type
	return TypeNull;
}

/**
*  @brief
*    Get type name
*/
String DynVar::GetTypeName() const
{
	// Return unknown type
	return "";
}

/**
*  @brief
*    Check if variable is set to default value
*/
bool DynVar::IsDefault() const
{
	// No data
	return false;
}

/**
*  @brief
*    Set variable to default value
*/
void DynVar::SetDefault()
{
	// No data
}

/**
*  @brief
*    Get default value as string
*/
String DynVar::GetDefault() const
{
	// No data
	return "";
}

/**
*  @brief
*    Set value
*/
void DynVar::SetVar(const DynVar &cValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
bool DynVar::GetBool() const
{
	// No data available
	return false;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetBool(bool bValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
int DynVar::GetInt() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetInt(int nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
int8 DynVar::GetInt8() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetInt8(int8 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
int16 DynVar::GetInt16() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetInt16(int16 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
int32 DynVar::GetInt32() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetInt32(int32 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
int64 DynVar::GetInt64() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetInt64(int64 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
uint8 DynVar::GetUInt8() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetUInt8(uint8 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
uint16 DynVar::GetUInt16() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetUInt16(uint16 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
uint32 DynVar::GetUInt32() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetUInt32(uint32 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
uint64 DynVar::GetUInt64() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetUInt64(uint64 nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
uint_ptr DynVar::GetUIntPtr() const
{
	// No data available
	return 0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetUIntPtr(uint_ptr nValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
float DynVar::GetFloat() const
{
	// No data available
	return 0.0f;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetFloat(float fValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
double DynVar::GetDouble() const
{
	// No data available
	return 0.0;
}

/**
*  @brief
*    Set value
*/
void DynVar::SetDouble(double dValue)
{
	// No data
}

/**
*  @brief
*    Get value
*/
String DynVar::GetString() const
{
	// No data available
	return "";
}

/**
*  @brief
*    Set value
*/
void DynVar::SetString(const String &sValue)
{
	// No data
}


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
} // PLCore
