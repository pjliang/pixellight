/*********************************************************\
 *  File: SceneLoaderOgreXML.h                           *
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


#ifndef __PLASSIMP_SCENELOADER_OGREXML_H__
#define __PLASSIMP_SCENELOADER_OGREXML_H__
#pragma once


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
#include "PLAssimp/SceneLoader/SceneLoader.h"


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
namespace PLAssimp {


//[-------------------------------------------------------]
//[ Classes                                               ]
//[-------------------------------------------------------]
/**
*  @brief
*    Scene loader implementation for Scene.xml (Ogre XML) using Assimp
*/
class SceneLoaderOgreXML : public SceneLoader {


	//[-------------------------------------------------------]
	//[ RTTI interface                                        ]
	//[-------------------------------------------------------]
	pl_class(pl_rtti_export, SceneLoaderOgreXML, "PLAssimp", PLAssimp::SceneLoader, "Scene loader implementation for mesh.xml (Ogre XML) using Assimp")
		// Properties
		pl_properties
			pl_property("Formats",	"mesh.xml,MESH.XML")
		pl_properties_end
		// Constructors
		pl_constructor_0(DefaultConstructor,	"Default constructor",	"")
	pl_class_end


	//[-------------------------------------------------------]
	//[ Public virtual SceneLoader functions                  ]
	//[-------------------------------------------------------]
	public:
		virtual bool LoadParams(PLScene::SceneContainer &cContainer, PLCore::File &cFile, PLCore::uint8 nQuality) override;


	//[-------------------------------------------------------]
	//[ Public functions                                      ]
	//[-------------------------------------------------------]
	public:
		/**
		*  @brief
		*    Default constructor
		*/
		SceneLoaderOgreXML();

		/**
		*  @brief
		*    Destructor
		*/
		virtual ~SceneLoaderOgreXML();


};


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
} // PLAssimp


#endif // __PLASSIMP_SCENELOADER_OGREXML_H__
