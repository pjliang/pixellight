/*********************************************************\
 *  File: VirtualStandardController.h                    *
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


#ifndef __PLINPUT_VIRTUALSTANDARDCONTROLLER_H__
#define __PLINPUT_VIRTUALSTANDARDCONTROLLER_H__
#pragma once


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
#include "PLInput/Input/Virtual/VirtualController.h"
#include "PLInput/Input/Controls/Button.h"
#include "PLInput/Input/Controls/Axis.h"


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
namespace PLInput {


//[-------------------------------------------------------]
//[ Classes                                               ]
//[-------------------------------------------------------]
/**
*  @brief
*    Standard virtual input controller
*
*  @remarks
*    3D coordinate system:
*    @code
*      y = > Translation: Move up/down (+/-) => Rotation: Yaw (also called 'heading') change is turning to the left or right
*      |
*      |
*      *---x => Translation: Strafe left/right (+/-) => Rotation: Pitch (also called 'bank') change is moving the nose down and the tail up (or vice-versa)
*     /
*    z => Translation: Move forwards/backwards (+/-) => Rotation: Roll (also called 'attitude') change is moving one wingtip up and the other down
*    @endcode
**/
class VirtualStandardController : public VirtualController {


	//[-------------------------------------------------------]
	//[ Class definition                                      ]
	//[-------------------------------------------------------]
	pl_class(PLINPUT_RTTI_EXPORT, VirtualStandardController, "PLInput", PLInput::VirtualController, "Standard virtual input controller")
	pl_class_end


	//[-------------------------------------------------------]
	//[ Controller definition                                 ]
	//[-------------------------------------------------------]
	public:
		// Mouse
		Axis		MouseX;				/**< X axis */
		Axis		MouseY;				/**< Y axis */
		Axis		MouseWheel;			/**< Mouse wheel */
		Button		MouseLeft;			/**< Left mouse button  */
		Button		MouseRight;			/**< Right mouse button  */
		Button		MouseMiddle;		/**< Middle mouse button  */
		Button		MouseButton4;		/**< Mouse button #4 */
		Button		MouseButton5;		/**< Mouse button #5 */
		Button		MouseButton6;		/**< Mouse button #6 */
		Button		MouseButton7;		/**< Mouse button #7 */
		Button		MouseButton8;		/**< Mouse button #8 */
		Button		MouseButton9;		/**< Mouse button #9 */
		Button		MouseButton10;		/**< Mouse button #10 */
		Button		MouseButton11;		/**< Mouse button #11 */
		Button		MouseButton12;		/**< Mouse button #12 */

		// Keyboard
		Button		KeyBack;			/**< Backspace */
		Button		KeyTab;				/**< Tab */
		Button		KeyClear;			/**< Clear (not available everywhere) */
		Button		KeyReturn;			/**< Enter */
		Button		KeyShift;			/**< Shift */
		Button		KeyControl;			/**< Ctrl */
		Button		KeyAlt;				/**< Alt */
		Button		KeyPause;			/**< Pause */
		Button		KeyCapsLock;		/**< Caps lock */
		Button		KeyEscape;			/**< Escape */
		Button		KeySpace;			/**< Space */
		Button		KeyPageUp;			/**< Page up */
		Button		KeyPageDown;		/**< Page down */
		Button		KeyEnd;				/**< End */
		Button		KeyHome;			/**< Home */
		Button		KeyLeft;			/**< Left arrow */
		Button		KeyUp;				/**< Up arrow */
		Button		KeyRight;			/**< Right arrow */
		Button		KeyDown;			/**< Down arrow */
		Button		KeySelect;			/**< Select (not available everywhere) */
		Button		KeyExecute;			/**< Execute (not available everywhere) */
		Button		KeyPrintScreen;		/**< Print screen */
		Button		KeyInsert;			/**< Insert */
		Button		KeyDelete;			/**< Delete */
		Button		KeyHelp;			/**< Help (not available everywhere) */
		Button		Key0;				/**< 0 */
		Button		Key1;				/**< 1 */
		Button		Key2;				/**< 2 */
		Button		Key3;				/**< 3 */
		Button		Key4;				/**< 4 */
		Button		Key5;				/**< 5 */
		Button		Key6;				/**< 6 */
		Button		Key7;				/**< 7 */
		Button		Key8;				/**< 8 */
		Button		Key9;				/**< 9 */
		Button		KeyA;				/**< A */
		Button		KeyB;				/**< B */
		Button		KeyC;				/**< C */
		Button		KeyD;				/**< D */
		Button		KeyE;				/**< E */
		Button		KeyF;				/**< F */
		Button		KeyG;				/**< G */
		Button		KeyH;				/**< H */
		Button		KeyI;				/**< I */
		Button		KeyJ;				/**< J */
		Button		KeyK;				/**< K */
		Button		KeyL;				/**< L */
		Button		KeyM;				/**< M */
		Button		KeyN;				/**< N */
		Button		KeyO;				/**< O */
		Button		KeyP;				/**< P */
		Button		KeyQ;				/**< Q */
		Button		KeyR;				/**< R */
		Button		KeyS;				/**< S */
		Button		KeyT;				/**< T */
		Button		KeyU;				/**< U */
		Button		KeyV;				/**< V */
		Button		KeyW;				/**< W */
		Button		KeyX;				/**< X */
		Button		KeyY;				/**< Y */
		Button		KeyZ;				/**< Z */
		Button		KeyNumpad0;			/**< Numeric keypad 0 */
		Button		KeyNumpad1;			/**< Numeric keypad 1 */
		Button		KeyNumpad2;			/**< Numeric keypad 2 */
		Button		KeyNumpad3;			/**< Numeric keypad 3 */
		Button		KeyNumpad4;			/**< Numeric keypad 4 */
		Button		KeyNumpad5;			/**< Numeric keypad 5 */
		Button		KeyNumpad6;			/**< Numeric keypad 6 */
		Button		KeyNumpad7;			/**< Numeric keypad 7 */
		Button		KeyNumpad8;			/**< Numeric keypad 8 */
		Button		KeyNumpad9;			/**< Numeric keypad 9 */
		Button		KeyNumpadMultiply;	/**< Numeric keypad "Multiply" */
		Button		KeyNumpadAdd;		/**< Numeric keypad "Add" */
		Button		KeyNumpadSeparator;	/**< Numeric keypad "Separator" */
		Button		KeyNumpadSubtract;	/**< Numeric keypad "Subtract" */
		Button		KeyNumpadDecimal;	/**< Numeric keypad "Decimal" */
		Button		KeyNumpadDivide;	/**< Numeric keypad "Divide" */
		Button		KeyF1;				/**< F1 */
		Button		KeyF2;				/**< F2 */
		Button		KeyF3;				/**< F3 */
		Button		KeyF4;				/**< F4 */
		Button		KeyF5;				/**< F5 */
		Button		KeyF6;				/**< F6 */
		Button		KeyF7;				/**< F7 */
		Button		KeyF8;				/**< F8 */
		Button		KeyF9;				/**< F9 */
		Button		KeyF10;				/**< F10 */
		Button		KeyF11;				/**< F11 */
		Button		KeyF12;				/**< F12 */
		Button		KeyNumLock;			/**< Num lock */
		Button		KeyScrollLock;		/**< Scroll lock */
		Button		KeyCircumflex;		/**< Circumflex (^) */

		// Main character controls
		Axis		TransX;				/**< X translation axis: Strafe left/right (+/-) */
		Axis		TransY;				/**< Y translation axis: Move up/down (+/-) */
		Axis		TransZ;				/**< Z translation axis: Move forwards/backwards (+/-) */
		Button		Pan;				/**< Keep pressed to pan */
		Axis		PanX;				/**< X pan translation axis: Strafe left/right (+/-) */
		Axis		PanY;				/**< Y pan translation axis: Move up/down (+/-) */
		Axis		PanZ;				/**< Z pan translation axis: Move forwards/backwards (+/-) */
		Axis		RotX;				/**< X rotation axis: Pitch (also called 'bank') change is moving the nose down and the tail up (or vice-versa) */
		Axis		RotY;				/**< Y rotation axis: Yaw (also called 'heading') change is turning to the left or right */
		Axis		RotZ;				/**< Z rotation axis: Roll (also called 'attitude') change is moving one wingtip up and the other down */
		Button		Rotate;				/**< Keep pressed to rotate */
		Button		Forward;			/**< Move forwards */
		Button		Backward;			/**< Move backwards */
		Button		Left;				/**< Move (rotate) left */
		Button		Right;				/**< Move (rotate) right */
		Button		StrafeLeft;			/**< Strafe left */
		Button		StrafeRight;		/**< Strafe right */
		Button		Up;					/**< Move up */
		Button		Down;				/**< Move down */
		Button		Run;				/**< Keep pressed to run */
		Button		Crouch;				/**< Keep pressed to crouch */
		Button		Jump;				/**< Jump */
		Button		Zoom;				/**< Keep pressed to zoom */
		Axis		ZoomAxis;			/**< Zoom axis to zoom in or out (+/-) */
		Button		Button1;			/**< Button for action #1 */
		Button		Button2;			/**< Button for action #2 */
		Button		Button3;			/**< Button for action #3 */
		Button		Button4;			/**< Button for action #4 */
		Button		Button5;			/**< Button for action #5 */

		// Interaction
		Button		Pickup;				/**< Keep pressed to pickup */
		Button		Throw;				/**< Throw the picked object */
		Button		IncreaseForce;		/**< Keep pressed to increase the force applied to the picked object */
		Button		DecreaseForce;		/**< Keep pressed to decrease the force applied to the picked object */
		Axis		PushPull;			/**< Used to push/pull the picked object */


	//[-------------------------------------------------------]
	//[ Public functions                                      ]
	//[-------------------------------------------------------]
	public:
		/**
		*  @brief
		*    Constructor
		*/
		PLINPUT_API VirtualStandardController();

		/**
		*  @brief
		*    Destructor
		*/
		PLINPUT_API virtual ~VirtualStandardController();


	//[-------------------------------------------------------]
	//[ Public virtual VirtualController functions            ]
	//[-------------------------------------------------------]
	public:
		PLINPUT_API virtual void ConnectToDevices() override;


};


//[-------------------------------------------------------]
//[ Namespace                                             ]
//[-------------------------------------------------------]
} // PLInput


#endif // __PLINPUT_VIRTUALSTANDARDCONTROLLER_H__
