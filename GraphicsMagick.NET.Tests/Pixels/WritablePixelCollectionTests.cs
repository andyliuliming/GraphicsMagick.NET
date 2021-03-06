﻿//=================================================================================================
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

using System;
using System.Drawing;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;
#if Q8
	using QuantumType = System.Byte;
#elif Q16
using QuantumType = System.UInt16;
#else
#error Not implemented!
#endif

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public sealed class WritablePixelCollectionTests
	{
		//===========================================================================================
		private const string _Category = "WritablePixelCollection";
		//===========================================================================================
		private static void Test_PixelColor(PixelBaseCollection pixels, Color color)
		{
			var values = pixels.GetValue(0, 0);
			Assert.AreEqual(5, values.Length);

			MagickColor magickColor = new MagickColor(values[0], values[1], values[2], values[3]);
			ColorAssert.AreEqual(color, magickColor);
		}
		//===========================================================================================
		private static void Test_Set(WritablePixelCollection pixels, QuantumType[] value)
		{
			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				pixels.Set(value);
			});
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Dimensions()
		{
			using (MagickImage image = new MagickImage(Color.Red, 5, 10))
			{
				using (WritablePixelCollection pixels = image.GetWritablePixels())
				{
					Assert.AreEqual(5, pixels.Width);
					Assert.AreEqual(10, pixels.Height);
					Assert.AreEqual(5 * 10 * 5, pixels.GetValues().Length);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_GetValue()
		{
			using (MagickImage image = new MagickImage(Color.Red, 5, 10))
			{
				using (WritablePixelCollection pixels = image.GetWritablePixels())
				{
					Test_PixelColor(pixels, Color.Red);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Set()
		{
			using (MagickImage image = new MagickImage(Color.Red, 5, 10))
			{
				using (WritablePixelCollection pixels = image.GetWritablePixels())
				{
					ExceptionAssert.Throws<ArgumentNullException>(delegate()
					{
						pixels.Set((QuantumType[])null);
					});

					ExceptionAssert.Throws<ArgumentNullException>(delegate()
					{
						pixels.Set((Pixel)null);
					});

					ExceptionAssert.Throws<ArgumentNullException>(delegate()
					{
						pixels.Set((Pixel[])null);
					});

					Test_Set(pixels, new QuantumType[] { });
					Test_Set(pixels, new QuantumType[] { 0 });
					Test_Set(pixels, new QuantumType[] { 0, 0 });
					Test_Set(pixels, new QuantumType[] { 0, 0, 0 });

					pixels.Set(new QuantumType[] { 0, 0, 0, 0, 0 });
					Test_PixelColor(pixels, Color.Black);
					pixels.Write();
				}

				using (PixelCollection pixels = image.GetReadOnlyPixels())
				{
					Test_PixelColor(pixels, Color.Black);
				}

				using (WritablePixelCollection pixels = image.GetWritablePixels())
				{
					pixels.Set(new uint[] { 4294967295, 0, 0, 0, 0 });
					Test_PixelColor(pixels, Color.Red);
					pixels.Set(new ushort[] { 0, 0, 65535, 0, 0 });
					Test_PixelColor(pixels, Color.Blue);
					pixels.Set(new byte[] { 0, 255, 0, 0, 0 });
					Test_PixelColor(pixels, Color.Lime);
				}

				using (WritablePixelCollection pixels = image.GetWritablePixels())
				{
					for (int x = 0; x < pixels.Width; x++)
					{
						for (int y = 0; y < pixels.Height; y++)
						{
							pixels.Set(x, y, new QuantumType[] { 0, 0, 0, 0, 0 });
						}
					}
				}
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}
