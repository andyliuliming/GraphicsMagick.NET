//=================================================================================================
// Copyright 2014-2015 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#pragma once

#include "Base\DrawableWrapper.h"

using namespace System::Drawing;

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Encapsulation of the DrawableViewbox object.
	///</summary>
	public ref class DrawableViewbox sealed : DrawableWrapper<Magick::DrawableViewbox>
	{
		//===========================================================================================
	private:
		//===========================================================================================
		void Initialize(int upperLeftX, int upperLeftY, int lowerRightX, int lowerRightY);
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Creates a new DrawableViewbox instance.
		///</summary>
		///<param name="upperLeftX">The upper left X coordinate.</param>
		///<param name="upperLeftY">The upper left Y coordinate.</param>
		///<param name="lowerRightX">The lower right X coordinate.</param>
		///<param name="lowerRightY">The lower right Y coordinate.</param>
		DrawableViewbox(int upperLeftX, int upperLeftY, int lowerRightX, int lowerRightY);
		///==========================================================================================
		///<summary>
		/// Creates a new DrawableViewbox instance.
		///</summary>
		///<param name="rectangle">The rectangle to use.</param>
		DrawableViewbox(Rectangle rectangle);
		///==========================================================================================
		///<summary>
		/// The upper left X coordinate.
		///</summary>
		property double LowerRightX
		{
			double get();
			void set(double value);
		}
		///==========================================================================================
		///<summary>
		/// The upper left Y coordinate.
		///</summary>
		property double LowerRightY
		{
			double get();
			void set(double value);
		}
		///==========================================================================================
		///<summary>
		/// The upper left X coordinate.
		///</summary>
		property double UpperLeftX
		{
			double get();
			void set(double value);
		}
		///==========================================================================================
		///<summary>
		/// The upper left Y coordinate.
		///</summary>
		property double UpperLeftY
		{
			double get();
			void set(double value);
		}
		//===========================================================================================
	};
	//==============================================================================================
}