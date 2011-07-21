/*********************************************************\
 *  File: TypeUInt32.inl                                 *
 *
 *  Copyright (C) 2002-2011 The PixelLight Team (http://www.pixellight.org/)
 *
 *  This file is part of PixelLight.
 *
 *  PixelLight is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  PixelLight is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with PixelLight. If not, see <http://www.gnu.org/licenses/>.
\*********************************************************/


#ifndef __PLCORE_TYPE_UINT32_INL__
#define __PLCORE_TYPE_UINT32_INL__
#pragma once


//[-------------------------------------------------------]
//[ Classes                                               ]
//[-------------------------------------------------------]
/**
*  @brief
*    Type wrapper for 'uint32'
*/
template <>
class Type<uint32> {


	//[-------------------------------------------------------]
	//[ Public static type information                        ]
	//[-------------------------------------------------------]
	public:
		// Type
		typedef uint32 _Type;			/**< Real type */
		typedef uint32 _StorageType;	/**< Storage type, for this type identical to the real type */

		// Type ID
		static const uint32 TypeID = TypeUInt32;

		// Get type name
		static String GetTypeName()
		{
			return "uint32";
		}

		// Convert var to uint32
		static uint32 ConvertFromVar(const DynVar *pValue)
		{
			return pValue->GetUInt32();
		}

		// Convert uint32 to bool
		static bool ConvertToBool(uint32 nValue)
		{
			return static_cast<bool>(nValue != 0);
		}

		// Convert bool to uint32
		static uint32 ConvertFromBool(bool bValue)
		{
			return static_cast<uint32>(bValue);
		}

		// Convert uint32 to int
		static int ConvertToInt(uint32 nValue)
		{
			return static_cast<int>(nValue);
		}

		// Convert int to uint32
		static uint32 ConvertFromInt(int nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to int8
		static int8 ConvertToInt8(uint32 nValue)
		{
			return static_cast<int8>(nValue);
		}

		// Convert int8 to uint32
		static uint32 ConvertFromInt8(int8 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to int16
		static int16 ConvertToInt16(uint32 nValue)
		{
			return static_cast<int16>(nValue);
		}

		// Convert int16 to uint32
		static uint32 ConvertFromInt16(int16 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to int32
		static int32 ConvertToInt32(uint32 nValue)
		{
			return static_cast<int32>(nValue);
		}

		// Convert int32 to uint32
		static uint32 ConvertFromInt32(int32 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to int64
		static int64 ConvertToInt64(uint32 nValue)
		{
			return static_cast<int64>(nValue);
		}

		// Convert int64 to uint32
		static uint32 ConvertFromInt64(int64 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint8
		static uint8 ConvertToUInt8(uint32 nValue)
		{
			return static_cast<uint8>(nValue);
		}

		// Convert uint8 to uint32
		static uint32 ConvertFromUInt8(uint8 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint16
		static uint16 ConvertToUInt16(uint32 nValue)
		{
			return static_cast<uint16>(nValue);
		}

		// Convert uint16 to uint32
		static uint32 ConvertFromUInt16(uint16 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint32
		static uint32 ConvertToUInt32(uint32 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint32
		static uint32 ConvertFromUInt32(uint32 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint64
		static uint64 ConvertToUInt64(uint32 nValue)
		{
			return static_cast<uint64>(nValue);
		}

		// Convert uint64 to uint32
		static uint32 ConvertFromUInt64(uint64 nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to uint_ptr
		static uint_ptr ConvertToUIntPtr(uint32 nValue)
		{
			return static_cast<uint_ptr>(nValue);
		}

		// Convert uint_ptr to uint32
		static uint32 ConvertFromUIntPtr(uint_ptr nValue)
		{
			return static_cast<uint32>(nValue);
		}

		// Convert uint32 to float
		static float ConvertToFloat(uint32 nValue)
		{
			return static_cast<float>(nValue);
		}

		// Convert float to uint32
		static uint32 ConvertFromFloat(float fValue)
		{
			return static_cast<uint32>(fValue);
		}

		// Convert uint32 to double
		static double ConvertToDouble(uint32 nValue)
		{
			return static_cast<double>(nValue);
		}

		// Convert double to uint32
		static uint32 ConvertFromDouble(double dValue)
		{
			return static_cast<uint32>(dValue);
		}

		// Convert uint32 to string
		static String ConvertToString(uint32 nValue)
		{
			return String() + static_cast<int>(nValue);
		}

		// Convert string to uint32
		static uint32 ConvertFromString(const String &sString)
		{
			return sString.GetInt();
		}

		// Convert real to storage type
		static uint32 ConvertRealToStorage(uint32 nValue)
		{
			return nValue;
		}

		// Convert storage to real type
		static uint32 ConvertStorageToReal(uint32 nValue)
		{
			return nValue;
		}

};


#endif // __PLCORE_TYPE_UINT32_INL__