/*********************************************************\
 *  File: TextureBuffer2D.h                              *
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


#ifndef __PLRENDERER_TEXTUREBUFFER2D_H__
#define __PLRENDERER_TEXTUREBUFFER2D_H__
#pragma once


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
#include <PLMath/Vector2i.h>
#include "PLRenderer/Renderer/TextureBuffer.h"


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
namespace PLRenderer {


//[-------------------------------------------------------]
//[ Classes                                               ]
//[-------------------------------------------------------]
/**
*  @brief
*    Abstract renderer 2D texture buffer resource
*/
class TextureBuffer2D : public TextureBuffer {


	//[-------------------------------------------------------]
	//[ Public functions                                      ]
	//[-------------------------------------------------------]
	public:
		/**
		*  @brief
		*    Destructor
		*/
		PLRENDERER_API virtual ~TextureBuffer2D();

		/**
		*  @brief
		*    Returns the texture buffer size
		*
		*  @param[in] nMipmap
		*    Mipmap level (0 - GetNumOfMipmaps())
		*
		*  @return
		*    Texture buffer size
		*/
		PLRENDERER_API PLMath::Vector2i GetSize(PLCore::uint32 nMipmap = 0) const;


	//[-------------------------------------------------------]
	//[ Protected functions                                   ]
	//[-------------------------------------------------------]
	protected:
		/**
		*  @brief
		*    Constructor
		*
		*  @param[in] cRenderer
		*    Owner renderer
		*  @param[in] nFlags
		*    Texture buffer flags (see EFlags)
		*/
		PLRENDERER_API TextureBuffer2D(Renderer &cRenderer, PLCore::uint32 nFlags);


	//[-------------------------------------------------------]
	//[ Protected data                                        ]
	//[-------------------------------------------------------]
	protected:
		PLMath::Vector2i m_vSize;	/**< Texture buffer size */


	//[-------------------------------------------------------]
	//[ Private functions                                     ]
	//[-------------------------------------------------------]
	private:
		/**
		*  @brief
		*    Copy constructor
		*
		*  @param[in] cSource
		*    Source to copy from
		*/
		TextureBuffer2D(const TextureBuffer2D &cSource);

		/**
		*  @brief
		*    Copy operator
		*
		*  @param[in] cSource
		*    Source to copy from
		*
		*  @return
		*    Reference to this instance
		*/
		TextureBuffer2D &operator =(const TextureBuffer2D &cSource);


	//[-------------------------------------------------------]
	//[ Public virtual TextureBuffer functions                ]
	//[-------------------------------------------------------]
	public:
		PLRENDERER_API virtual PLCore::uint32 GetNumOfPixels(PLCore::uint32 nMipmap = 0) const override;
		PLRENDERER_API virtual PLCore::uint32 GetNumOfBytes(PLCore::uint32 nMipmap = 0, EPixelFormat nFormat = Unknown) const override;


};


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
} // PLRenderer


#endif // __PLRENDERER_TEXTUREBUFFER2D_H__
