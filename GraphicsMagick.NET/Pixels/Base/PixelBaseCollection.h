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
#include "..\Pixel.h"

using namespace System::Collections::Generic;

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Base class that can be used to access the individual pixels of an image.
	///</summary>
	public ref class PixelBaseCollection abstract : IEnumerable<Pixel^>
	{
		//===========================================================================================
	private:
		//===========================================================================================
		int _Channels;
		int _Height;
		Magick::IndexPacket* _Indexes;
		Magick::Pixels* _View;
		int _Width;
		//===========================================================================================
		PixelBaseCollection(){}
		//===========================================================================================
		!PixelBaseCollection()
		{
			if (_View == NULL)
				return;

			delete _View;
			_View = NULL;
		}
		//===========================================================================================
		ref class PixelBaseCollectionEnumerator sealed : IEnumerator<Pixel^>
		{
			//========================================================================================
		private:
			PixelBaseCollection^ _Collection;
			int _X;
			int _Y;
			//========================================================================================
		public:
			PixelBaseCollectionEnumerator(PixelBaseCollection^ collection);
			//========================================================================================
			~PixelBaseCollectionEnumerator()
			{
			}
			//========================================================================================
			property Pixel^ Current
			{
				virtual Pixel^ get() = IEnumerator<Pixel^>::Current::get;
			}
			//========================================================================================
			property Object^ Current2
			{
				virtual Object^ get() = System::Collections::IEnumerator::Current::get;
			}
			//========================================================================================
			virtual bool MoveNext();
			//========================================================================================
			virtual void Reset();
			//========================================================================================
		};
		//===========================================================================================
		Pixel^ CreatePixel(int x, int y);
		//===========================================================================================
		array<Magick::Quantum>^ GetValueUnchecked(int x, int y);
		//===========================================================================================
	protected private:
		//===========================================================================================
		PixelBaseCollection(Magick::Image* image, int width, int height);
		//===========================================================================================
		property const Magick::PixelPacket* Pixels
		{
			virtual const Magick::PixelPacket* get() abstract;
		}
		//===========================================================================================
		property Magick::IndexPacket* Indexes
		{
			Magick::IndexPacket* get();
		}
		//===========================================================================================
		property Magick::Pixels* View
		{
			Magick::Pixels* get();
		}
		//===========================================================================================
		void CheckIndex(int x, int y);
		//===========================================================================================
		void CheckPixels();
		//===========================================================================================
		int GetIndex(int x, int y);
		//===========================================================================================
		void LoadIndexes();
		//===========================================================================================
	public:
		//===========================================================================================
		~PixelBaseCollection()
		{
			this->!PixelBaseCollection();
		}
		///==========================================================================================
		///<summary>
		/// Returns the pixel at the specified coordinate.
		///</summary>
		property Pixel^ default[int, int]
		{
			Pixel^ get(int x, int y);
		}
		///==========================================================================================
		///<summary>
		/// Returns the number of channels that the image contains.
		///</summary>
		property int Channels
		{
			int get();
		}
		///==========================================================================================
		///<summary>
		/// Returns the height.
		///</summary>
		property int Height
		{
			int get();
		}
		///==========================================================================================
		///<summary>
		/// Returns the width.
		///</summary>
		property int Width
		{
			int get();
		}
		///==========================================================================================
		///<summary>
		/// Returns an enumerator that can iterate through the collection.
		///</summary>
		virtual IEnumerator<Pixel^>^ GetEnumerator();
		///==========================================================================================
		///<summary>
		/// Returns an enumerator that can iterate through the collection.
		///</summary>
		virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
		///==========================================================================================
		///<summary>
		/// Returns the pixel at the specified coordinate.
		///</summary>
		///<param name="x">The X coordinate of the pixel.</param>
		///<param name="y">The Y coordinate of the pixel.</param>
		Pixel^ GetPixel(int x, int y);
		///==========================================================================================
		///<summary>
		/// Returns the value of the specified coordinate.
		///</summary>
		///<param name="x">The X coordinate of the pixel.</param>
		///<param name="y">The Y coordinate of the pixel.</param>
		QUANTUM_CLS_COMPLIANT array<Magick::Quantum>^ GetValue(int x, int y);
		///==========================================================================================
		///<summary>
		/// Returns the values of the pixels as an array.
		///</summary>
		QUANTUM_CLS_COMPLIANT array<Magick::Quantum>^ GetValues();
		//===========================================================================================
	};
	//==============================================================================================
}