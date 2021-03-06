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

#include "Base\MagickException.h"

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick Warning exception object.
	///</summary>
	[Serializable]
	public ref class MagickWarningException : MagickException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickWarningException(String^ message)
			: MagickException(message) {};
		//===========================================================================================
		static MagickWarningException^ Create(const Magick::Warning& exception);
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningBlob exception object.
	///</summary>
	[Serializable]
	public ref class MagickBlobWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickBlobWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningCache exception object.
	///</summary>
	[Serializable]
	public ref class MagickCacheWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickCacheWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningCoder exception object.
	///</summary>
	[Serializable]
	public ref class MagickCoderWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickCoderWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningConfigure exception object.
	///</summary>
	[Serializable]
	public ref class MagickConfigureWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickConfigureWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningUndefined exception object.
	///</summary>
	[Serializable]
	public ref class MagickUndefinedWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickUndefinedWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningCorruptImage exception object.
	///</summary>
	[Serializable]
	public ref class MagickCorruptImageWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickCorruptImageWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningDelegate exception object.
	///</summary>
	[Serializable]
	public ref class MagickDelegateWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickDelegateWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningDraw exception object.
	///</summary>
	[Serializable]
	public ref class MagickDrawWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickDrawWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningFileOpen exception object.
	///</summary>
	[Serializable]
	public ref class MagickFileOpenWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickFileOpenWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningImage exception object.
	///</summary>
	[Serializable]
	public ref class MagickImageWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickImageWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningMissingDelegate exception object.
	///</summary>
	[Serializable]
	public ref class MagickMissingDelegateWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickMissingDelegateWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningModule exception object.
	///</summary>
	[Serializable]
	public ref class MagickModuleWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickModuleWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningOption exception object.
	///</summary>
	[Serializable]
	public ref class MagickOptionWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickOptionWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningRegistry exception object.
	///</summary>
	[Serializable]
	public ref class MagickRegistryWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickRegistryWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningResourceLimit exception object.
	///</summary>
	[Serializable]
	public ref class MagickResourceLimitWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickResourceLimitWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningStream exception object.
	///</summary>
	[Serializable]
	public ref class MagickStreamWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickStreamWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	///=============================================================================================
	///<summary>
	/// Encapsulation of the GraphicsMagick WarningType exception object.
	///</summary>
	[Serializable]
	public ref class MagickTypeWarningException sealed : MagickWarningException
	{
		//===========================================================================================
	internal:
		//===========================================================================================
		MagickTypeWarningException(String^ message)
			: MagickWarningException(message) {};
		//===========================================================================================
	};
	//==============================================================================================
}
