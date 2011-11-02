/*********************************************************\
 *  File: PLSoundFMOD.cpp                                *
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


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
#include <PLCore/ModuleMain.h>


//[-------------------------------------------------------]
//[ Module definition                                     ]
//[-------------------------------------------------------]
pl_module_plugin("PLSoundFMOD")
	pl_module_vendor("Copyright (C) 2002-2011 by The PixelLight Team")
	pl_module_license("GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version")
	pl_module_description("FMOD 3.75 (http://www.fmod.org/) sound implementation (legacy version of FMOD), FMOD Sound System, copyright Firelight Technologies Pty, Ltd., 1994-2011.")
	pl_module_dependencies_windows_32_release("fmod.dll")
	pl_module_dependencies_windows_32_debug("fmod.dll")
	pl_module_dependencies_windows_64_release("")	// No 64 bit support possible because there's no 64 bit version of FMOD 3.75
	pl_module_dependencies_windows_64_debug("")		// No 64 bit support possible because there's no 64 bit version of FMOD 3.75
pl_module_end
