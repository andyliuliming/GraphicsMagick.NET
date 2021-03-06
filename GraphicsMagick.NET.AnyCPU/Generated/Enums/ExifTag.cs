//=================================================================================================
// Copyright 2016 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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

namespace GraphicsMagick
{
	public enum ExifTag
	{
		GPSVersionID = 0,
		GPSLatitudeRef = 1,
		GPSLatitude = 2,
		GPSLongitudeRef = 3,
		GPSLongitude = 4,
		GPSAltitudeRef = 5,
		GPSAltitude = 6,
		GPSTimestamp = 7,
		GPSSatellites = 8,
		GPSStatus = 9,
		GPSMeasureMode = 10,
		GPSDOP = 11,
		GPSSpeedRef = 12,
		GPSSpeed = 13,
		GPSTrackRef = 14,
		GPSTrack = 15,
		GPSImgDirectionRef = 16,
		GPSImgDirection = 17,
		GPSMapDatum = 18,
		GPSDestLatitudeRef = 19,
		GPSDestLatitude = 20,
		GPSDestLongitudeRef = 21,
		GPSDestLongitude = 22,
		GPSDestBearingRef = 23,
		GPSDestBearing = 24,
		GPSDestDistanceRef = 25,
		GPSDestDistance = 26,
		GPSProcessingMethod = 27,
		GPSAreaInformation = 28,
		GPSDateStamp = 29,
		GPSDifferential = 30,
		ImageWidth = 256,
		ImageLength = 257,
		BitsPerSample = 258,
		Compression = 259,
		PhotometricInterpretation = 262,
		Threshholding = 263,
		CellWidth = 264,
		CellLength = 265,
		FillOrder = 266,
		DocumentName = 269,
		ImageDescription = 270,
		Make = 271,
		Model = 272,
		StripOffsets = 273,
		Orientation = 274,
		SamplesPerPixel = 277,
		RowsPerStrip = 278,
		StripByteCounts = 279,
		MinSampleValue = 280,
		MaxSampleValue = 281,
		XResolution = 282,
		YResolution = 283,
		PlanarConfiguration = 284,
		PageName = 285,
		XPosition = 286,
		YPosition = 287,
		FreeOffsets = 288,
		FreeByteCounts = 289,
		GrayResponseUnit = 290,
		GrayResponseCurve = 291,
		T4Options = 292,
		T6Options = 293,
		ResolutionUnit = 296,
		PageNumber = 297,
		TransferFunction = 301,
		Software = 305,
		DateTime = 306,
		Artist = 315,
		HostComputer = 316,
		Predictor = 317,
		WhitePoint = 318,
		PrimaryChromaticities = 319,
		ColorMap = 320,
		HalftoneHints = 321,
		TileWidth = 322,
		TileLength = 323,
		TileOffsets = 324,
		TileByteCounts = 325,
		BadFaxLines = 326,
		CleanFaxData = 327,
		ConsecutiveBadFaxLines = 328,
		InkSet = 332,
		InkNames = 333,
		NumberOfInks = 334,
		DotRange = 336,
		TargetPrinter = 337,
		ExtraSamples = 338,
		SampleFormat = 339,
		SMinSampleValue = 340,
		SMaxSampleValue = 341,
		TransferRange = 342,
		ClipPath = 343,
		XClipPathUnits = 344,
		YClipPathUnits = 345,
		Indexed = 346,
		JPEGTables = 347,
		OPIProxy = 351,
		ProfileType = 401,
		FaxProfile = 402,
		CodingMethods = 403,
		VersionYear = 404,
		ModeNumber = 405,
		Decode = 433,
		DefaultImageColor = 434,
		JPEGProc = 512,
		JPEGInterchangeFormat = 513,
		JPEGInterchangeFormatLength = 514,
		JPEGRestartInterval = 515,
		JPEGLosslessPredictors = 517,
		JPEGPointTransforms = 518,
		JPEGQTables = 519,
		JPEGDCTables = 520,
		JPEGACTables = 521,
		YCbCrCoefficients = 529,
		YCbCrSubsampling = 530,
		YCbCrPositioning = 531,
		ReferenceBlackWhite = 532,
		StripRowCounts = 559,
		XMP = 700,
		ImageID = 32781,
		Copyright = 33432,
		ExposureTime = 33434,
		FNumber = 33437,
		SubIFDOffset = 34665,
		ImageLayer = 34732,
		ExposureProgram = 34850,
		SpectralSensitivity = 34852,
		GPSIFDOffset = 34853,
		ISOSpeedRatings = 34855,
		OECF = 34856,
		ExifVersion = 36864,
		DateTimeOriginal = 36867,
		DateTimeDigitized = 36868,
		ComponentsConfiguration = 37121,
		CompressedBitsPerPixel = 37122,
		ShutterSpeedValue = 37377,
		ApertureValue = 37378,
		BrightnessValue = 37379,
		ExposureBiasValue = 37380,
		MaxApertureValue = 37381,
		SubjectDistance = 37382,
		MeteringMode = 37383,
		LightSource = 37384,
		Flash = 37385,
		FocalLength = 37386,
		SubjectArea = 37396,
		MakerNote = 37500,
		UserComment = 37510,
		SubsecTime = 37520,
		SubsecTimeOriginal = 37521,
		SubsecTimeDigitized = 37522,
		FlashpixVersion = 40960,
		ColorSpace = 40961,
		PixelXDimension = 40962,
		PixelYDimension = 40963,
		RelatedSoundFile = 40964,
		FlashEnergy = 41483,
		SpatialFrequencyResponse = 41484,
		FocalPlaneXResolution = 41486,
		FocalPlaneYResolution = 41487,
		FocalPlaneResolutionUnit = 41488,
		SubjectLocation = 41492,
		ExposureIndex = 41493,
		SensingMethod = 41495,
		FileSource = 41728,
		SceneType = 41729,
		CFAPattern = 41730,
		CustomRendered = 41985,
		ExposureMode = 41986,
		WhiteBalance = 41987,
		DigitalZoomRatio = 41988,
		FocalLengthIn35mmFilm = 41989,
		SceneCaptureType = 41990,
		GainControl = 41991,
		Contrast = 41992,
		Saturation = 41993,
		Sharpness = 41994,
		DeviceSettingDescription = 41995,
		SubjectDistanceRange = 41996,
		ImageUniqueID = 42016,
		Unknown = 65535,
	}
}
