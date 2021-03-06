//
//  AppiumModel.h
//  Appium
//
//  Created by Dan Cuellar on 3/12/13.
//  Copyright (c) 2013 Appium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SocketIO.h"

typedef enum platformTypes
{
	Platform_iOS,
	Platform_Android
} Platform;

typedef enum iOSAutomationDeviceTypes
{
	iOSAutomationDevice_iPhone,
	iOSAutomationDevice_iPad
} iOSAutomationDevice;

typedef enum iOSOrientationTypes
{
	iOSOrientation_Portrait,
	iOSOrientation_Landscape
} iOSOrientation;

@class SocketIO;

@interface AppiumModel : NSObject<SocketIODelegate>

@property NSTask *serverTask;

@property (readonly) NSArray *allCalendarFormats;
@property NSString *androidActivity;
@property NSNumber *androidDeviceReadyTimeout;
@property BOOL androidFullReset;
@property NSString *androidKeyAlias;
@property NSString *androidKeyPassword;
@property NSString *androidKeystorePath;
@property NSString *androidKeystorePassword;
@property NSString *androidPackage;
@property NSString *androidWaitActivity;
@property NSString *appPath;
@property BOOL authorizediOS;
@property NSArray *availableAVDs;
@property NSArray *availableActivities;
@property NSString *avd;
@property BOOL breakOnNodeApplicationStart;
@property NSString *bundleID;
@property NSString *calendarToForce;
@property BOOL checkForUpdates;
@property NSString *customAndroidSDKPath;
@property BOOL developerMode;
@property iOSAutomationDevice deviceToForce;
@property NSString *deviceToForceString;
@property SocketIO *doctorSocket;
@property BOOL doctorSocketIsConnected;
@property BOOL enableAppiumInspectorWindowSupport;
@property NSString *externalAppiumPackagePath;
@property NSString *externalNodeJSBinaryPath;
@property BOOL forceCalendar;
@property BOOL forceDevice;
@property BOOL forceLanguage;
@property BOOL forceLocale;
@property BOOL forceOrientation;
@property (readonly) BOOL isAndroid;
@property (readonly) BOOL isIOS;
@property BOOL isServerRunning;
@property BOOL isServerListening;
@property NSString *ipAddress;
@property BOOL keepArtifacts;
@property BOOL killProcessesUsingPort;
@property NSString *languageToForce;
@property NSString *localeToForce;
@property NSString *logFile;
@property NSString *logWebHook;
@property NSNumber *nodeDebugPort;
@property iOSOrientation orientationToForce;
@property NSString* orientationToForceString;
@property BOOL overrideExistingSessions;
@property Platform platform;
@property NSNumber *port;
@property BOOL prelaunchApp;
@property BOOL resetApplicationState;
@property NSString *robotAddress;
@property NSNumber *robotPort;
@property NSNumber *selendroidPort;
@property NSString *seleniumGridConfigFile;
@property NSString *udid;
@property BOOL useAndroidActivity;
@property BOOL useAndroidDeviceReadyTimeout;
@property BOOL useAndroidKeystore;
@property BOOL useAndroidPackage;
@property BOOL useAndroidWaitActivity;
@property BOOL useAppPath;
@property BOOL useAVD;
@property BOOL useBundleID;
@property BOOL useCustomAndroidSDKPath;
@property BOOL useExternalAppiumPackage;
@property BOOL useExternalNodeJSBinary;
@property BOOL useLogFile;
@property BOOL useLogWebHook;
@property BOOL useMobileSafari;
@property BOOL useNativeInstrumentsLib;
@property BOOL useNodeDebugging;
@property BOOL useQuietLogging;
@property BOOL useRemoteServer;
@property BOOL useRobot;
@property BOOL useSelendroidPort;
@property BOOL useSeleniumGridConfigFile;
@property BOOL useUDID;
@property NSString *xcodePath;

-(BOOL) killServer;
-(BOOL) startServer;
-(BOOL) startDoctor;
-(void) refreshAvailableActivities;

@end
