//
//  Constants.h
//  IntelliSchool
//
//  Created by macmini1 on 03/12/15.
//  Copyright © 2015 intellinet. All rights reserved.
//
// Teacher 9999906549
// driver - 9876512345
// Parent - 9876543210 (F) 9876543210 (M) & 8882341400 (F) 8882341401 (M) &
//Latest


#ifndef Constants_h
#define Constants_h

#define iPhone4 ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 480)
#define iPhone5  ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 568)
#define iPhone6 ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 667)
#define iPhone6Plus ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && MAX([UIScreen mainScreen].bounds.size.height,[UIScreen mainScreen].bounds.size.width) == 736)
#define iPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

#define k_GreenSelectedStudent [UIColor colorWithRed:0.349 green:0.592 blue:0.227 alpha:1.00];
#define k_BGColor [UIColor colorWithRed:239.0f/255.0f green:239.0f/255.0f blue:244.0f/255.0f alpha:1.00];

#define k_RedColor [UIColor colorWithRed:219.0f/255.0f green:81.0f/255.0f blue:93.0f/255.0f alpha:1.0f]
#define k_GreenColor [UIColor colorWithRed:66.0f/255.0f green:197.0f/255.0f blue:169.0f/255.0f alpha:1.0f]
#define k_PurpleColor [UIColor colorWithRed:130.0f/255.0f green:96.0f/255.0f blue:140.0f/255.0f alpha:1.0f]
#define k_RedNewColor [UIColor colorWithRed:228.0f/255.0f green:116.0f/255.0f blue:107.0f/255.0f alpha:1.0f]
#define k_BlueColor [UIColor colorWithRed:52.0f/255.0f green:73.0f/255.0f blue:94.0f/255.0f alpha:1.0f]

#define k_Side_YellowColor [UIColor colorWithRed:240.0f/255.0f green:181.0f/255.0f blue:27.0f/255.0f alpha:1.0f]
#define k_Side_GreenColor [UIColor colorWithRed:26.0f/255.0f green:181.0f/255.0f blue:27.0f/255.0f alpha:1.0f]

#define k_Green_Today_Calender_color [UIColor colorWithRed:0.404 green:0.663 blue:0.212 alpha:1.00]
#define iPhone6S_Ankit_SerialNumber @"355421075994151"
#define k_StudentColor [UIColor colorWithRed:219.0f/255.0f green:81.0f/255.0f blue:93.0f/255.0f alpha:1.0f]
#define k_SaveButtonColor [UIColor colorWithRed:240.0f/255.0f green:101.0f/255.0f blue:113.0f/255.0f alpha:1.0f]
#define k_TeacherColor [UIColor colorWithRed:219.0f/255.0f green:81.0f/255.0f blue:93.0f/255.0f alpha:1.0f]

#define k_TimeInColor [UIColor colorWithRed:255.0f/255.0f green:184.0f/255.0f blue:70.0f/255.0f alpha:1.0f]
#define k_TimeOutColor [UIColor colorWithRed:249.0f/255.0f green:101.0f/255.0f blue:116.0f/255.0f alpha:1.0f]

#define k_TimeInBorderColor [UIColor colorWithRed:255.0f/255.0f green:165.0f/255.0f blue:60.0f/255.0f alpha:0.7f]
#define k_TimeOutBorderColor [UIColor colorWithRed:212.0f/255.0f green:60.0f/255.0f blue:60.0f/255.0f alpha:0.7f]

#define k_TenThousand 10000
//[UIColor colorWithRed:25.0f/255.0f green:181.0f/255.0f blue:160.0f/255.0f alpha:1.0f]

typedef enum playerStateTypes
{
    Page_Timing,
    Page_Food,
    Page_Diaper,
    Page_Nap,
    Page_Meal
} PageValue;


/* NSUserDefaults */
#define k_HomeViewFirstVisit @"HomeViewFirstVisit"
/* User Locations */
#define k_UserLatitude @"UserLatitude"
#define k_UserLongitude @"UserLongitude"

/* MobileOTP */
#define k_RegisterMobileNo @"RegisterMobileNo"
#define k_RegisterMobileOTP @"RegisterMobileOTP"

/* "S" for as a perent "T" for as a Teacher */
#define k_RegisteredUserType @"RegisteredUserType"

/* "True" for as a perent "False" for as a Teacher */
#define k_BoolRegisteredUserType @"BoolRegisteredUserType"

/*Check already registered Bool value */
#define k_DeviceAlreadyRegistered @"DeviceAlreadyRegistered"

/* User Information */
/*Device Information */
#define k_DevicePushToken @"DevicePushToken"
/*School Information*/
#define k_SchoolID @"SelectedSchoolID"
#define k_BranchID @"SelectedBranchID"
#define k_SchoolName @"SelectedSchoolName"
#define k_BranchName @"SelectedBranchName"

#define k_SelectedClassId @"SelectedClassId"

/*Selected Student Information*/
#define k_SelectedStudent @"SelectedStudent"

/*Selected Teacher Information*/
#define k_SelectedTeacher @"SelectedTeacher"
#define k_ModuleRigtData @"ModuleRigtData"

/*Selected Teacher Information*/
#define k_SelectedDriverImage @"SelectedDriverImage"

#define k_IsThisFromLaunching @"IsThisFromLaunching"

/* Notifications Information */
#define k_NotificationArray @"NotificationArray"
#define k_CommuniqueArray @"CommuniqueArray"
#define k_BoolIntelliSchoolNotification @"IntelliSchoolNotification"
//#define k_TeacherBranchID @"TeacherBranchID"
/* Test Mode */
#define k_All_LD @"All Leave"
#define k_Pending_LD @"Pending Leave"
#define k_Approved_LD @"Approved Leave"
#define k_Rejected_LD @"Rejected Leave"





//#define k_NasikServer @"Nasik"
#define k_AmazonUSServer @"Amazon"
//http://192.168.0.82/IntelliSchool/Service1.svc/"

#if kEnv == 0
/*Demo Server*/
//#define k_URL_CommonURLString @"http://115.124.109.82/intellischooldemoservice/service1.svc/"
//#define k_URL_CommonMultipartURLString @"http://115.124.109.82/intellischooldemoservice/"

//For Testing
//#define k_URL_CommonURLString @"http://192.168.0.82/IntelliSchool/Service1.svc/"
//#define k_URL_CommonMultipartURLString @"http://192.168.0.82/IntelliSchool/"
//#define k_ServerType @""

//For Multiple Branch Demo
#define k_URL_CommonURLString @"http://115.124.109.82/DemoMultipleBranch/service1.svc/"
#define k_URL_CommonMultipartURLString @"http://115.124.109.82/DemoMultipleBranch/"
#define k_ServerType @""

#define k_AppIdString @"1085044936"
#define k_ParentMobileNumber @"7530922371"//@"9643398389"
#define k_TeacherMobileNumber @"9643398389"
#define k_logo_Image @"bg_logo_tab"
#define k_URL_ModuleRight @"ModuleRightAndroid"
#define k_BoolTestMode YES
#define k_GoogleMapAPIKey @"AIzaSyDe8kyk-z2NMtewm2iHOrgD65la7ESfE3A"

#elif kEnv == 1
/*NewWings Server*/
#define k_URL_CommonURLString @"http://115.124.109.82/NewWingsService/Service1.svc/"
#define k_URL_CommonMultipartURLString @"http://115.124.109.82/NewWingsService/"
#define k_AppIdString @"1115681706"
#define k_ParentMobileNumber @"9999906549"
#define k_TeacherMobileNumber @"9999906549"
#define k_logo_Image @"bg_logo_tab"
#define k_URL_ModuleRight @"ModuleRight"
#define k_BoolTestMode NO
#define k_ServerType @""
#define k_GoogleMapAPIKey @"AIzaSyDDJdR1SjrOYpkT69G4Vu2--6xiL_BG12Y"

#elif kEnv == 2
/*ChalkTree Server*/
#define k_URL_CommonURLString @"http://115.124.109.82/ChalkTreeServiceNew/Service1.svc/"
//@"http://115.124.109.82/ChalkTreeService/service1.svc/"
#define k_URL_CommonMultipartURLString @"http://115.124.109.82/ChalkTreeServiceNew/"
//@"http://115.124.109.82/ChalkTreeService/"
#define k_AppIdString @"1133419230"
#define k_ParentMobileNumber @"9643398389"
#define k_TeacherMobileNumber @"9643398389"
#define k_logo_Image @"logo_ChalkTree"
#define k_URL_ModuleRight @"ModuleRightAndroid"
#define k_BoolTestMode YES
#define k_ServerType @""
#define k_GoogleMapAPIKey @"AIzaSyDDJdR1SjrOYpkT69G4Vu2--6xiL_BG12Y"//9580

#elif kEnv == 3
/*Little Planet Server*/
//#define k_URL_CommonURLString @"http://115.124.109.82/LittlePlanetService/service1.svc/" //"http://115.124.109.82/LittlePlanetServiceNew/service1.svc/"
//#define k_URL_CommonMultipartURLString @"http://115.124.109.82/LittlePlanetService/" //"http://115.124.109.82/LittlePlanetServiceNew/"

// This URL Last Updated on 05-07-2017 and Updated by Gaurav....
#define k_URL_CommonURLString @"http://115.124.109.82/LittlePlanetServiceNew/service1.svc/"
#define k_URL_CommonMultipartURLString @"http://115.124.109.82/LittlePlanetServiceNew/"

#define k_AppIdString @"1160709609"
#define k_ParentMobileNumber @"9643398389" //8743845205
#define k_TeacherMobileNumber @"9643398389"
#define k_logo_Image @"logo_littleplanet"
#define k_URL_ModuleRight @"ModuleRightAndroid"
#define k_BoolTestMode YES
#define k_ServerType @""
#define k_GoogleMapAPIKey @"AIzaSyDDJdR1SjrOYpkT69G4Vu2--6xiL_BG12Y"

#elif kEnv == 4
/*Medhaam Server*/
#define k_URL_CommonURLString @"http://115.124.109.82/MedhaamServiceNew/Service1.svc/" //"http://115.124.109.82/MedhaamService/Service1.svc/"
#define k_URL_CommonMultipartURLString @"http://115.124.109.82/MedhaamServiceNew/" //"http://115.124.109.82/MedhaamService/"
#define k_AppIdString @"1180538823"
#define k_ParentMobileNumber @"9643398389"
#define k_TeacherMobileNumber @"9643398389"
#define k_logo_Image @"logo-Medhaam"
#define k_URL_ModuleRight @"ModuleRightAndroid"
#define k_BoolTestMode NO
#define k_ServerType @""
#define k_GoogleMapAPIKey @"AIzaSyDDJdR1SjrOYpkT69G4Vu2--6xiL_BG12Y"

#endif



#define k_URL_NotificationList @"NotificationList"
#define k_URL_Homework @"HomeWorkInformation"
#define k_URL_PlannerInfo @"PlannerInfo"
#define k_URL_Circular @"GetCircular"
#define k_URL_TeacherHomework @"EmpHomeworkList"
#define k_URL_TeacherNotificationList @"TeacherNotificationList"
#define k_URL_EmpSubjectList @"EmpSubjectList"
#define k_URL_TeacherStudList @"TeacherStudList"
//#define k_URL_StudentMessage @"StuMessageSave"
#define k_URL_StuMessageSaveAndroidNew @"StuMessageSaveAndroidNew"
#define k_URL_GetStudentData @"GetStudentData"
#define k_URL_SaveMultipleGalleryImage @"SaveMultipleGalleryImage"


/*Common*/
#define k_URL_GetAllStates @"GetState"
#define k_URL_GetAllCities @"GetCity"
#define k_URL_GetAllBranchStates @"GetBranchState"
#define k_URL_GetAllBranchCities @"GetBranchCity"
#define k_URL_GetAllSchools @"SchoolDetails"
//#define k_URL_ClassDetail @"ClassDetail"
#define k_URL_ClassSectionDetail @"ClassSectionDetail"
#define k_URL_ClassEmpDetail @"ClassEmpDetail"
#define k_URL_UserVerification @"UserVerification"
#define k_URL_Confirmation @"IOSConfirmation"
#define k_URL_StuClassList @"StuClassList"
#define k_URL_ConfirmationSplash @"IOSConfirmationSplash"
#define k_URL_UpdateMobileNo @"UpdateMobileNo"
#define k_URL_Gallery @"Gallery"
#define k_URL_ImageUpload @"ImageUpload"
#define k_URL_SaveGalleryImage @"SaveGalleryImage"
#define k_URL_SaveDeviceInformation @"SaveDeviceInformation"
#define k_URL_BlockDevice @"BlockDevice"
#define k_URL_Settings @"Settings"

/* Student Profile from teacher */
#define k_URL_StudentProfile @"StudentProfile"

/*Student*/
#define k_URL_StudentInformation @"StudentInformation"
#define k_URL_SaveFeedbackIphone @"SaveFeedbackIphone"
#define k_URL_StudentFeedbackReplyIphone @"StudentFeedbackReplyIphone"
#define k_URL_FeedbackDetails @"FeedbackDetails"
#define k_URL_StudentFeedbackInbox @"StudentFeedbackInbox"
#define k_URL_StudentFeedbackOutbox @"StudentFeedbackOutbox"
#define k_URL_HomeworkInfo @"HomeworkInfo"
//#define k_URL_StudentInfo @"StudentInfo" Not Being Used
#define k_URL_MessageList @"MessageList"
#define k_URL_TransportDetails @"TransportDetails"
#define k_URL_VerifyMobile @"VerifyMobile"
#define k_URL_AuthroizedImage @"AuthroisedImage"
#define k_URL_AuthorizedImageUpload @"AuthorisedImageUpload"
#define k_URL_IOSAuthorised @"IOSAuthorised.aspx"
#define k_URL_SaveAuthorisedImage @"SaveAuthorisedImage"
#define k_URL_DeleteAuthorizedImage @"DeleteAuthorisedImage"
#define k_URL_StuLeaveInfoSave @"StuLeaveInfoSave"
#define k_URL_UpdateAllergiesInfo @"UpdateAllergiesInfo"
#define k_URL_GalleryIOSUpload @"IOSUpload.aspx"
#define k_URL_CircularIOSUpload @"IPhoneCircularImage.aspx"
#define k_URL_NotififcationIOSUpload @"IphoneNotificationImage.aspx"
#define k_URL_LeaveReason @"LeaveReason"
#define k_URL_DeleteFeedback @"DeleteFeedback"
#define k_URL_DeleteFeedbackAgain @"DeleteFeedbackAgain"
#define k_URL_ChildAttandence @"childattandence"


/*Teacher*/
#define k_URL_SaveFeedbackIphoneTeacher @"SaveFeedbackIphoneTeacher"
#define k_URL_TeacherFeedbackReplyIphone @"TeacherFeedbackReplyIphone"
#define k_URL_EmployeeFeedbackDetails @"EmployeeFeedbackDetails"
#define k_URL_TeacherFeedbackInbox @"TeacherFeedbackInbox"
#define k_URL_TeacherFeedbackOutBox @"TeacherFeedbackOutBox"
#define k_URL_TeacherMessageList @"TeacherMessageList"
#define k_URL_TeacherInfo @"TeacherInfo"
#define k_URL_SaveHomeWork @"SaveHomeWork"

#define k_URL_AuthroisedImageByEmpId @"AuthroisedImageByEmpId"
#define k_URL_DriverRoute @"DriverRoute"
#define k_URL_GetRouteList @"GetRouteList"
#define k_URL_GetStopsCoordinates @"GetStopsCoordinates"
#define k_URL_SaveStopCoordinates @"SaveStopCoordinates"
#define k_URL_ParentsCoordinates @"ParentsCoordinates"
#define k_URL_GetEventCalenderData @"GetEventCalenderData"

/* Attendance */
#define k_URL_ClassList @"ClassList"
#define k_URL_TeacherStudentList @"TeacherStudentList"
#define k_URL_SaveAttandence @"SaveAttandence"

/*Leave */
#define k_URL_StudentLeaveInfo @"StudentLeaveInfo"
#define k_URL_LeaveListByEmp @"LeaveListByEmp"
#define k_URL_LeaveStatusUpdate @"LeaveStatusUpdate"
#define k_URL_LeaveReason @"LeaveReason"

/* Profile image */
#define k_URL_IphoneStudentImage @"IphoneStudentImage.aspx"
#define k_URL_IphoneTeacherImage @"IphoneTeacherImage.aspx"
#define k_URL_SaveStudentImage @"SaveStudentImage"
#define k_URL_SaveTeacherImage @"SaveTeacherImage"
#define k_URL_SaveStudentRelationImage @"SaveStudentRelationImage"

/*Notification */
#define k_URL_NotificationUpdate @"NotificationUpdate"
#define k_URL_SaveTiming @"SaveTiming"
#define k_URL_FoodInfoList @"FoodInfoList"
#define K_URL_MealInfoList @"MealInfoList"
#define k_URL_SaveFood @"SaveFood"
#define K_URL_SaveMeal @"SaveMeal"
#define k_URL_StudentNapList @"StudentNapList"
#define k_URL_SaveNap @"SaveNap"
#define k_URL_StudentDiaperDetails @"StudentDiaperDetails"
#define k_URL_SaveClothStore @"SaveClothStore"
#define k_URL_SaveCloths @"SaveCloths"
#define k_URL_StudentTimingList @"StudentTimingList"
#define k_URL_StudentTiming @"StudentTiming"
#define k_URL_StudentFood @"StudentFood"
#define k_URL_StudentCloth @"StudentCloth"
#define k_URL_StudentNap @"StudentNap"
#define K_URL_StudentMeal @"StudentMeal"
#define k_URL_StudentTimingHistory @"StudentTimingHistory"
#define k_URL_StudentFoodHistory @"StudentFoodHistory"
#define k_URL_StudentMealHistory @"StudentMealHistory"
#define k_URL_StudentNapHistory @"StudentNapHistory"
#define k_URL_StudentClothHistory @"StudentClothHistory"
#define k_URL_NotificationStatus @"NotificationStatus"
#define k_URL_UpdateNotification @"UpdateNotification"
#define k_URL_Approval @"Approval"
#define k_URL_SaveFeedbackApproval @"SaveFeedbackApproval"
#define k_URL_StuMessageApproval @"StuMessageApproval"
#define k_URL_SaveHomeWorkApproval @"SaveHomeWorkApproval"
#define k_URL_NotificationTypeList @"NotificationTypeList"
#define k_URL_NotificationSave @"NotificationSave"
#define k_URL_CircularSave @"CircularSave"
#define k_URL_MultipleCircularSave @"MultipleCircularSave"
#define k_URL_MultipleNotificationSave @"MultipleNotificationSave"
#define k_URL_SaveMultiGalleryImage @"SaveMultiGalleryImage"
#define k_URL_DynamicTeacherInfo @"DynamicTeacherInfo"
#define k_URL_DynamicStudentInfo @"DynamicStudentInfo"
#define k_URL_TeacherSubjectList @"TeacherSubjectList"
#define k_URL_ModuleStats @"ModuleStats"
#define k_URL_GETSTUDENTFEESDETAIL @"GETSTUDENTFEESDETAIL"
#define k_URL_GetFeeDetailMonthly @"GetFeeDetailMonthly"
#define k_URL_ClassEmpDetail @"ClassEmpDetail"
#define k_URL_TeacherImage @"TeacherImage"
#define k_URL_GetInvoice @"GetInvoice"



/*Storyboard Name*/
#define k_SB_DayCareStoryboard @"DayCareStoryboard"
#define k_SB_DayCareStoryboard_iPad @"DayCareStoryboard_iPad"
#define k_SB_Main @"Main"
#define k_SB_MainiPad @"iPad"
#define k_SB_Leave_iPad @"iPadLeaves"
#define k_SB_Leave_iPhone @"iPhoneLeaves"
#define k_SB_CustomView_iPhone @"CustomView_iPhone"
#define k_SB_CustomView_iPad @"CustomView_iPad"
#define k_SB_Planner_iPad @"PlanneriPad"
#define k_SB_Planner_iPhone @"Planner"
#define k_SB_Homework_Communique_Circular_iPhone @"Homework_iPhone"
#define k_SB_Homework_Communique_Circular_iPad @"Homework_iPad"
#define k_SB_Notification_Gallery_ContactUs_iPhone @"Notification_Gallery_iPhone"
#define k_SB_Notification_Gallery_ContactUs_iPad @"Notification_Gallery_iPad"

#define k_SB_Feedback_Meal_Approval_Authrise_EventCalendar_ChangeBranch_iPad @"Feedback_Voice_Meal_iPad"
#define k_SB_Feedback_Meal_Approval_Authrise_EventCalendar_ChangeBranch_iPhone @"Feedback_Voice_Meal_iPhone"



/*Others*/
#define k_DC_Name @"DCName"
#define k_DC_ImageName @"DCImageName"
#define k_DC_TopColor @"TopColor"
#define k_DC_BottomColor @"BottomColor"
#define k_UploadImageID @"UploadImageID"
#define k_UploadImageImage @"UploadImageImage"
#define k_UploadImageStatus @"UploadImageStatus"
#define k_Date @"Date"



/*Alert Messages*/
/*Basic For All*/
#define k_AM_NoInternetConnectionError @"Your internet connection appears to be offline."
#define k_AM_Error @"Error!"
#define k_AM_Success @"Success"
#define k_AM_Somethingwrong @"Something went wrong, Please contact system administrator."
#define k_AM_DataNotFound @"Data not found on server, Please contact system administrator."
#define k_AM_Warning @"Warning!"
#define k_AM_FileUploadFail @"File upload failed"
#define k_AM_ServerBusy @"Server seems to be busy, Please try again after sometime."
#define k_AM_Bug @"Bug!"
#define k_AM_ThereMustBeBug @"There must be a Bug."
#define k_AM_Fail @"Fail!"
#define k_AM_NoRecordsFound @"No records found, Please try again later."
#define k_AM_AccessDenied @"Access Denied"

/*Circular*/
#define k_AM_ValidDateCircular @"Please select a valid date for circular."
#define k_AM_ChooseImage @"Please choose your image."
#define k_AM_ChooseName @"Please enter name."
#define k_AM_ChooseRelation @"Please enter relation."

/*Gallery*/
#define k_AM_PleaseEnterEventName @"Please enter event name."
#define k_AM_PleaseEnterEventDesc @"Please enter event description."
#define k_AM_PleaseSelectImage @"Please select images to upload."


/*Notification*/
#define k_AM_ValidDateNotification @"Please select a valid date for notification."
#define k_AM_UnableToUpdateNotification @"Unable to update notification status on server."
#define k_AM_NoTeachersFound @"No teachers found."
#define k_AM_NoSubjectFound @"No subjects found."
#define k_AM_PleaseEnterMessage @"Please enter message to submit."

/*Home work & updates*/
#define k_AM_PleaseEnterUpdatesToSubmit @"Please enter updates to submit."
#define k_AM_PleaseEnterHomeworkToSubmit @"Please enter homework to submit."
#define k_AM_PleaseSelectClass @"Please select class."

/*Attendance*/
#define k_AM_SureToSaveAttendence @"Are you sure, you want to save attendance?"
#define k_AM_SelectedDateMustBeLessThanToday @"You can not mark attendance for a future date."

/*Change Branch*/
#define k_AM_NoStudentsFound @"No students found for this branch."
#define k_AM_NoStatsFound @"No states found. Please try again."
#define k_AM_NoCityFound @"No city found in this state. Please try again."
#define k_AM_PleaseSelectStateFirst @"Please select state first and try again."
#define k_AM_PleaseSelectAtelasetOnestudent @"Please select at least one student to save food information."

/*Menu*/
#define k_AM_FacebookNotFound @"Facebook not added, Please contact administrator."

/*Daycare*/
#define k_AM_PleaseSelectStudentToProceed @"Please select a student to proceed."
#define k_AM_PleaseSelectFoodType @"Please select food type."

/*Profile*/
#define k_AM_DeviceUnableToCall @"Device can not make call or send message."
#define k_AM_SelectPendingOrDiscard @"You must select Pending/Discard in status to edit."
#define k_AM_ImageNotFound @"Image not found."
#define k_AM_EventNotFound @"No events found, Please try again later."

/*Feedback*/
#define k_AM_AllFieldsMandatory @"All fields are Mandatory."
#define k_AM_PleaseEnterFeedback @"Please enter feedback and try again."
#define k_AM_Message @"Message!"
#define k_AM_FeedbackSentSuccessfully @"Feedback sent successfully."
#define k_AM_MailNotSent @"Unable to send email at this time, Please try again later."
#define k_AM_RecordingDeleted @"Recording deleted successfully."

/*Leave*/
#define k_AM_PleaseSelectADateToApplyLeave @"Please select a date to apply leave."
#define  k_AM_ConfigureMailID @"Please configure a mail id from Settings."

#define k_UserStats @"UserStats"


#endif /* Constants_h */
