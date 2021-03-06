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

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Encapsulation of the DrawableDashOffset object.
	///</summary>
	public ref class DrawableDashOffset sealed : DrawableWrapper<Magick::DrawableDashOffset>
	{
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Creates a new DrawableDashOffset instance.
		///</summary>
		///<param name="offset">The dash offset.</param>
		DrawableDashOffset(double offset);
		///==========================================================================================
		///<summary>
		/// The dash offset.
		///</summary>
		property double Offset
		{
			double get();
			void set(double value);
		}
		//===========================================================================================
	};
	//==============================================================================================
}