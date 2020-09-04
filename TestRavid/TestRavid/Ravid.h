#pragma once

// RavidFramework DLLs

#include "RavidCore/LibTags.h"

//////////////////////////////////////////////////////////////////////////


// Definitions

#include "RavidCore/Definitions.h"
#include "RavidFramework/Definitions.h"

//////////////////////////////////////////////////////////////////////////




// Algorithms

#include "RavidCore/BarcodeEncoder.h"
#include "RavidCore/BarcodeDecoder.h"
#include "RavidCore/CircleGauge.h"
#include "RavidCore/ColorSpace.h"
#include "RavidCore/ConvolutionPreset.h"
#include "RavidCore/ConnectedComponent.h"
#include "RavidCore/CoordinateMapper.h"
#include "RavidCore/DataMatrixEncoder.h"
#include "RavidCore/DataMatrixDecoder.h"
#include "RavidCore/EllipseGauge.h"
#include "RavidCore/HoughTransformLine.h"
#include "RavidCore/HoughTransformCircle.h"
#include "RavidCore/LineGauge.h"
#include "RavidCore/ObjectFinder.h"
#include "RavidCore/PerspectiveProjection.h"
#include "RavidCore/PointGauge.h"
#include "RavidCore/QRCodeDecoder.h"
#include "RavidCore/RectangleGauge.h"
#include "RavidCore/RavidImage3DProfile.h"
#include "RavidCore/OpticalCharacterRecognizer.h"
#include "RavidCore/ShapeFinder.h"

//////////////////////////////////////////////////////////////////////////



// Database

#include "RavidCore/RavidDatabase.h"
#include "RavidCore/RavidRecordset.h"
#include "RavidCore/RavidRecordsetFieldInformation.h"

//////////////////////////////////////////////////////////////////////////



// Device

#include "RavidFramework/DeviceAlliedGigE.h"
#include "RavidFramework/DeviceAdvantechDIO.h"
#include "RavidFramework/DeviceAxlDIO.h"
#include "RavidFramework/DeviceAxlMotion.h"
#include "RavidFramework/DeviceAxlTriggerSIOCN2CH.h"
#include "RavidFramework/DeviceAxtDIO.h"
#include "RavidFramework/DeviceAxtMotionFS10.h"
#include "RavidFramework/DeviceAxtMotionFS20.h"
#include "RavidFramework/DeviceBaslerGigE.h"
#include "RavidFramework/DeviceBaslerTOFGigE.h"
#include "RavidFramework/DeviceBaslerUSB.h"
#include "RavidFramework/DeviceBaumerGigE.h"
#include "RavidFramework/DeviceCrevisGigE.h"
#include "RavidFramework/DeviceDahuaGigE.h"
#include "RavidFramework/DeviceDalsaGenieNanoGigE.h"
#include "RavidFramework/DeviceEuresysDominoHarmony.h"
#include "RavidFramework/DeviceEuresysDominoMelody.h"
#include "RavidFramework/DeviceEuresysDominoSymphony.h"
#include "RavidFramework/DeviceEuresysEGrabber.h"
#include "RavidFramework/DeviceEuresysGrablinkBase.h"
#include "RavidFramework/DeviceEuresysGrablinkValue.h"
#include "RavidFramework/DeviceEuresysGrablinkDualBase.h"
#include "RavidFramework/DeviceEuresysGrablinkFull.h"
#include "RavidFramework/DeviceEziPlusEDio.h"
#include "RavidFramework/DeviceEziServo2PlusE.h"
#include "RavidFramework/DeviceGoogolGts.h"
#include "RavidFramework/DeviceHIKVisionGigE.h"
#include "RavidFramework/DeviceMatroxSolios.h"
#include "RavidFramework/DeviceMeereTOFGigE.h"
#include "RavidFramework/DeviceMVTechMSPDio.h"
#include "RavidFramework/DeviceMVTechMSPTrigger.h"
#include "RavidFramework/DeviceMVTechDio.h"
#include "RavidFramework/DeviceMVTechTrigger.h"
#include "RavidFramework/DevicePointGrey.h"
#include "RavidFramework/DeviceRS232C.h"
#include "RavidFramework/DeviceSensovationGigE.h"
#include "RavidFramework/DeviceSocketMNETG.h"
#include "RavidFramework/DeviceSoftservoWMX2.h"
#include "RavidFramework/DeviceSoftservoWMX3.h"
#include "RavidFramework/DeviceTcpClient.h"
#include "RavidFramework/DeviceTcpServer.h"
#include "RavidFramework/DeviceUmac.h"
#include "RavidFramework/DevicePhotonfocus3D.h"
#include "RavidFramework/RavidImage3DProfilePhotonFocus.h"

//////////////////////////////////////////////////////////////////////////



// Framework

#include "RavidFramework/RavidObjectEx.h"
#include "RavidFramework/EventHandlerBase.h"
#include "RavidFramework/MeasurementObject.h"
#include "RavidFramework/MeasurementObjectElement.h"
#include "RavidFramework/ModelConfigurationInfo.h"
#include "RavidFramework/ModelInfo.h"
#include "RavidCore/MultipleCondition.h"
#include "RavidCore/MultipleVariable.h"
#include "RavidFramework/Packet.h"
#include "RavidFramework/SequenceInfo.h"
#include "RavidFramework/TeachingObject.h"
#include "RavidFramework/TeachingObjectElement.h"
#include "RavidFramework/ViewObject.h"
#include "RavidFramework/ViewObjectElement.h"
#include "RavidCore/ThreadHelper.h"
#include "RavidFramework/MessageBase.h"

//////////////////////////////////////////////////////////////////////////



// Geometries

#include "RavidCore/RavidCircle.h"
#include "RavidCore/RavidEllipse.h"
#include "RavidCore/RavidGeometry.h"
#include "RavidCore/RavidGeometryArray.h"
#include "RavidCore/RavidLine.h"
#include "RavidCore/RavidPoint.h"
#include "RavidCore/RavidPolygon.h"
#include "RavidCore/RavidQuadrangle.h"
#include "RavidCore/RavidRect.h"

//////////////////////////////////////////////////////////////////////////



// Image

#include "RavidCore/RavidImage.h"
#include "RavidCore/ImageOperationInfo.h"

//////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////
// Mathematics

#include "RavidCore/Equation.h"
#include "RavidCore/FiniteField.h"
#include "RavidCore/Matrix.h"
#include "RavidCore/ReedSolomon.h"
#include "RavidCore/Statistics.h"
#include "RavidCore/LeastSquares.h"
#include "RavidCore/Classifier.h"

//////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////
// Miscellaneous

#include "RavidCore/CyclicRedundancyCheck.h"
#include "RavidCore/DxfReader.h"
#include "RavidCore/FileUtility.h"
#include "RavidCore/HardwareInfo.h"
#include "RavidCore/NumberFormat.h"
#include "RavidCore/PerformanceCounter.h"
#include "RavidCore/OperatingSystemInfo.h"

//////////////////////////////////////////////////////////////////////////


// Managers

#include "RavidFramework/AuthorityManager.h"
#include "RavidFramework/DeviceManager.h"
#include "RavidFramework/EventHandlerManager.h"
#include "RavidFramework/FrameworkManager.h"
#include "RavidFramework/LogManager.h"
#include "RavidFramework/ModelManager.h"
#include "RavidFramework/UIManager.h"
#include "RavidFramework/SequenceManager.h"
#include "RavidFramework/MessageManager.h"
#include "RavidFramework/MultiLanguageManager.h"

//////////////////////////////////////////////////////////////////////////





//////////////////////////////////////////////////////////////////////////
// UI

#include "RavidFramework/RavidChildFrameBase.h"
#include "RavidFramework/RavidChildFrameImageView.h"
#include "RavidFramework/RavidChildFrameLogViewer.h"
#include "RavidFramework/RavidCustomizeButton.h"
#include "RavidFramework/RavidDialogBase.h"
#include "RavidFramework/RavidDlgAuthorityAddUser.h"
#include "RavidFramework/RavidDlgAuthorityManager.h"
#include "RavidFramework/RavidDlgInputBox.h"
#include "RavidFramework/RavidDlgModelConfiguration.h"
#include "RavidFramework/RavidDlgModelConfigurationProperty.h"
#include "RavidFramework/RavidDlgModelConfigurationSetting.h"
#include "RavidFramework/RavidDlgModelManager.h"
#include "RavidFramework/RavidDlgModelParameterShowStruct.h"
#include "RavidFramework/RavidDoc.h"
#include "RavidFramework/RavidEventHandlerLog.h"
#include "RavidFramework/RavidFileDialogEx.h"
#include "RavidFramework/RavidFormViewBase.h"
#include "RavidFramework/RavidImageView.h"
#include "RavidFramework/RavidImageViewLayer.h"
#include "RavidFramework/RavidImageViewLayerElement.h"
#include "RavidFramework/RavidInputBoxInfo.h"
#include "RavidFramework/RavidLedCtrl.h"
#include "RavidFramework/RavidPopupMenu.h"
#include "RavidFramework/RavidPopupMenuBar.h"
#include "RavidFramework/RavidSheet.h"
#include "RavidFramework/RavidSheetCell.h"
#include "RavidFramework/RavidSheetCellBase.h"
#include "RavidFramework/RavidSheetCellCheck.h"
#include "RavidFramework/RavidSheetCellCombo.h"
#include "RavidFramework/RavidSheetCellDateTime.h"
#include "RavidFramework/RavidSheetCellID.h"
#include "RavidFramework/RavidSheetCellNumeric.h"
#include "RavidFramework/RavidSheetCellRange.h"
#include "RavidFramework/RavidSheetCellURL.h"
#include "RavidFramework/RavidSheetDropTarget.h"
#include "RavidFramework/RavidSheetInPlaceEdit.h"
#include "RavidFramework/RavidSheetMemoryDC.h"
#include "RavidFramework/RavidSheetTitleTip.h"
#include "RavidFramework/RavidSlider.h"
#include "RavidFramework/RavidToolBar.h"
#include "RavidFramework/RavidToolBarMenuButton.h"
#include "RavidFramework/RavidToolCmdUI.h"
#include "RavidFramework/UIConfig.h"
#include "RavidFramework/UIConfigElement.h"
#include "RavidFramework/UIConfigElementEx.h"
#include "RavidFramework/RavidGraphView.h"
#include "RavidFramework/RavidGraphViewPlotInfomation.h"
#include "RavidFramework/RavidMainFrameToolBarHandler.h"
#include "RavidFramework/RavidMenu.h"
#include "RavidFramework/RavidChildFrameGraphView.h"
#include "RavidFramework/RavidThumbnailView.h"
#include "RavidFramework/RavidThumbnailViewLayer.h"
#include "RavidFramework/RavidChildFrameThumbnailView.h"
#include "RavidFramework/Ravid3DView.h"
#include "RavidFramework/RavidGraphCtrl.h"
#include "RavidFramework/RavidBehavior.h"
#include "RavidFramework/RavidObjectBehavior.h"
#include "RavidFramework/RavidDialogBehavior.h"
#include "RavidFramework/RavidBitmapButton.h"
//////////////////////////////////////////////////////////////////////////






//////////////////////////////////////////////////////////////////////////
// Ravid core module import

#ifndef RAVID_LIBRARY_IMPORTED
	#define RAVID_LIBRARY_IMPORTED
	#pragma comment(lib,  "RavidSecurity" LIB_DEBUG_POSTFIX)
	#pragma comment(lib,  "RavidFramework" LIB_DEBUG_POSTFIX)
	#pragma comment(lib,  "RavidCore" LIB_DEBUG_POSTFIX)
#endif

//////////////////////////////////////////////////////////////////////////