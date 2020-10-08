//  /////////////////////////////////////////////////////
//  // DO NOT EDIT.  This is a machine generated file. //
//  /////////////////////////////////////////////////////
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2016, FLIR Systems                                          */
/*  All rights reserved.                                                      */
/*                                                                            */
/*  This document is controlled to FLIR Technology Level 2. The information   */
/*  contained in this document pertains to a dual use product controlled for  */
/*  export by the Export Administration Regulations (EAR). Diversion contrary */
/*  to US law is prohibited. US Department of Commerce authorization is not   */
/*  required prior to export or transfer to foreign persons or parties unless */
/*  otherwise prohibited.                                                     */
/*                                                                            */
/******************************************************************************/

#ifndef FUNCTION_CODES_H
#define FUNCTION_CODES_H

enum _functionCodes {
	MAXFUNCCODE = 0xFFFFFFFF,
	// Module gao
	GAO_SETGAINSTATE                   =      1, // 0x00000001
	GAO_GETGAINSTATE                   =      2, // 0x00000002
	GAO_SETFFCSTATE                    =      3, // 0x00000003
	GAO_GETFFCSTATE                    =      4, // 0x00000004
	GAO_SETTEMPCORRECTIONSTATE         =      5, // 0x00000005
	GAO_GETTEMPCORRECTIONSTATE         =      6, // 0x00000006
	GAO_SETICONSTL                     =      7, // 0x00000007
	GAO_GETICONSTL                     =      8, // 0x00000008
	GAO_SETICONSTM                     =      9, // 0x00000009
	GAO_GETICONSTM                     =     10, // 0x0000000A
	GAO_SETAVERAGERSTATE               =     11, // 0x0000000B
	GAO_GETAVERAGERSTATE               =     12, // 0x0000000C
	GAO_SETNUMFFCFRAMES                =     13, // 0x0000000D
	GAO_GETNUMFFCFRAMES                =     14, // 0x0000000E
	GAO_GETAVERAGERTHRESHOLD           =     16, // 0x00000010
	GAO_GETRNSSTATE                    =     18, // 0x00000012
	GAO_SETTESTRAMPSTATE               =     19, // 0x00000013
	GAO_GETTESTRAMPSTATE               =     20, // 0x00000014
	GAO_SETSFFCSTATE                   =     23, // 0x00000017
	GAO_GETSFFCSTATE                   =     24, // 0x00000018
	GAO_SETRPMSTATE                    =     25, // 0x00000019
	GAO_GETRPMSTATE                    =     26, // 0x0000001A
	GAO_GETRPMTHRESHOLD                =     28, // 0x0000001C
	GAO_SETFFCZEROMEANSTATE            =     37, // 0x00000025
	GAO_GETFFCZEROMEANSTATE            =     38, // 0x00000026
	// Module lagrange
	// Module roic
	ROIC_GETFPATEMP                    = 131073, // 0x00020001
	ROIC_GETFRAMECOUNT                 = 131074, // 0x00020002
	ROIC_GETACTIVENORMALIZATIONTARGET  = 131078, // 0x00020006
	ROIC_SETFPARAMPSTATE               = 131092, // 0x00020014
	ROIC_GETFPARAMPSTATE               = 131093, // 0x00020015
	ROIC_GETSENSORADC1                 = 131097, // 0x00020019
	ROIC_GETSENSORADC2                 = 131098, // 0x0002001A
	ROIC_SETFPATEMPOFFSET              = 131099, // 0x0002001B
	ROIC_GETFPATEMPOFFSET              = 131100, // 0x0002001C
	ROIC_SETFPATEMPMODE                = 131101, // 0x0002001D
	ROIC_GETFPATEMPMODE                = 131102, // 0x0002001E
	ROIC_GETFPATEMPTABLE               = 131104, // 0x00020020
	ROIC_SETFPATEMPVALUE               = 131106, // 0x00020022
	ROIC_GETFPATEMPVALUE               = 131107, // 0x00020023
	// Module bpr
	BPR_SETSTATE                       = 196610, // 0x00030002
	BPR_GETSTATE                       = 196609, // 0x00030001
	// Module telemetry
	TELEMETRY_SETSTATE                 = 262145, // 0x00040001
	TELEMETRY_GETSTATE                 = 262146, // 0x00040002
	TELEMETRY_SETLOCATION              = 262147, // 0x00040003
	TELEMETRY_GETLOCATION              = 262148, // 0x00040004
	TELEMETRY_SETPACKING               = 262149, // 0x00040005
	TELEMETRY_GETPACKING               = 262150, // 0x00040006
	// Module boson
	BOSON_GETCAMERASN                  = 327682, // 0x00050002
	BOSON_GETCAMERAPN                  = 327684, // 0x00050004
	BOSON_GETSENSORSN                  = 327686, // 0x00050006
	BOSON_RUNFFC                       = 327687, // 0x00050007
	BOSON_SETFFCTEMPTHRESHOLD          = 327688, // 0x00050008
	BOSON_GETFFCTEMPTHRESHOLD          = 327689, // 0x00050009
	BOSON_SETFFCFRAMETHRESHOLD         = 327690, // 0x0005000A
	BOSON_GETFFCFRAMETHRESHOLD         = 327691, // 0x0005000B
	BOSON_GETFFCINPROGRESS             = 327692, // 0x0005000C
	BOSON_REBOOT                       = 327696, // 0x00050010
	BOSON_SETFFCMODE                   = 327698, // 0x00050012
	BOSON_GETFFCMODE                   = 327699, // 0x00050013
	BOSON_SETGAINMODE                  = 327700, // 0x00050014
	BOSON_GETGAINMODE                  = 327701, // 0x00050015
	BOSON_WRITEDYNAMICHEADERTOFLASH    = 327704, // 0x00050018
	BOSON_READDYNAMICHEADERFROMFLASH   = 327705, // 0x00050019
	BOSON_RESTOREFACTORYDEFAULTSFROMFLASH = 327707, // 0x0005001B
	BOSON_RESTOREFACTORYBADPIXELSFROMFLASH = 327712, // 0x00050020
	BOSON_WRITEBADPIXELSTOFLASH        = 327713, // 0x00050021
	BOSON_GETSOFTWAREREV               = 327714, // 0x00050022
	BOSON_SETBADPIXELLOCATION          = 327725, // 0x0005002D
	BOSON_LOOKUPFPATEMPDEGCX10         = 327728, // 0x00050030
	BOSON_LOOKUPFPATEMPDEGKX10         = 327729, // 0x00050031
	BOSON_WRITELENSNVFFCTOFLASH        = 327731, // 0x00050033
	BOSON_WRITELENSGAINTOFLASH         = 327733, // 0x00050035
	BOSON_SETLENSNUMBER                = 327736, // 0x00050038
	BOSON_GETLENSNUMBER                = 327737, // 0x00050039
	BOSON_SETTABLENUMBER               = 327738, // 0x0005003A
	BOSON_GETTABLENUMBER               = 327739, // 0x0005003B
	BOSON_GETSENSORPN                  = 327743, // 0x0005003F
	BOSON_SETGAINSWITCHPARAMS          = 327744, // 0x00050040
	BOSON_GETGAINSWITCHPARAMS          = 327745, // 0x00050041
	BOSON_GETSWITCHTOHIGHGAINFLAG      = 327746, // 0x00050042
	BOSON_GETSWITCHTOLOWGAINFLAG       = 327747, // 0x00050043
	BOSON_GETCLOWTOHIGHPERCENT         = 327748, // 0x00050044
	BOSON_GETMAXNUCTABLES              = 327749, // 0x00050045
	BOSON_GETMAXLENSTABLES             = 327750, // 0x00050046
	BOSON_GETFFCWAITCLOSEFRAMES        = 327758, // 0x0005004E
	BOSON_SETFFCWAITCLOSEFRAMES        = 327759, // 0x0005004F
	BOSON_CHECKFORTABLESWITCH          = 327760, // 0x00050050
	BOSON_GETDESIREDTABLENUMBER        = 327762, // 0x00050052
	BOSON_GETFFCSTATUS                 = 327764, // 0x00050054
	BOSON_GETFFCDESIRED                = 327765, // 0x00050055
	BOSON_GETSWREVINHEADER             = 327766, // 0x00050056
	BOSON_GETLASTFFCFRAMECOUNT         = 327773, // 0x0005005D
	BOSON_GETLASTFFCTEMPDEGKX10        = 327774, // 0x0005005E
	BOSON_GETTABLESWITCHDESIRED        = 327775, // 0x0005005F
	BOSON_GETOVERTEMPTHRESHOLD         = 327777, // 0x00050061
	BOSON_GETLOWPOWERMODE              = 327778, // 0x00050062
	BOSON_GETOVERTEMPEVENTOCCURRED     = 327779, // 0x00050063
	BOSON_SETPERMITTHERMALSHUTDOWNOVERRIDE = 327780, // 0x00050064
	BOSON_GETPERMITTHERMALSHUTDOWNOVERRIDE = 327781, // 0x00050065
	BOSON_GETMYRIADTEMP                = 327784, // 0x00050068
	BOSON_GETNVFFCNUCTABLENUMBERLENS0  = 327789, // 0x0005006D
	BOSON_GETNVFFCNUCTABLENUMBERLENS1  = 327791, // 0x0005006F
	BOSON_GETNVFFCFPATEMPDEGKX10LENS0  = 327793, // 0x00050071
	BOSON_GETNVFFCFPATEMPDEGKX10LENS1  = 327795, // 0x00050073
	BOSON_SETFFCWARNTIMEINSECX10       = 327796, // 0x00050074
	BOSON_GETFFCWARNTIMEINSECX10       = 327797, // 0x00050075
	BOSON_GETOVERTEMPEVENTCOUNTER      = 327798, // 0x00050076
	BOSON_SETOVERTEMPTIMERINSEC        = 327799, // 0x00050077
	BOSON_GETOVERTEMPTIMERINSEC        = 327800, // 0x00050078
	BOSON_UNLOADCURRENTLENSCORRECTIONS = 327801, // 0x00050079
	BOSON_SETTIMEFORQUICKFFCSINSECS    = 327802, // 0x0005007A
	BOSON_GETTIMEFORQUICKFFCSINSECS    = 327803, // 0x0005007B
	BOSON_RELOADCURRENTLENSCORRECTIONS = 327804, // 0x0005007C
	BOSON_GETBOOTTIMESTAMPS            = 327807, // 0x0005007F
	BOSON_SETEXTSYNCMODE               = 327832, // 0x00050098
	BOSON_GETEXTSYNCMODE               = 327833, // 0x00050099
	// Module dvo
	DVO_SETANALOGVIDEOSTATE            = 393220, // 0x00060004
	DVO_GETANALOGVIDEOSTATE            = 393221, // 0x00060005
	DVO_SETOUTPUTFORMAT                = 393222, // 0x00060006
	DVO_GETOUTPUTFORMAT                = 393223, // 0x00060007
	DVO_SETOUTPUTYCBCRSETTINGS         = 393224, // 0x00060008
	DVO_GETOUTPUTYCBCRSETTINGS         = 393225, // 0x00060009
	DVO_SETOUTPUTRGBSETTINGS           = 393226, // 0x0006000A
	DVO_GETOUTPUTRGBSETTINGS           = 393227, // 0x0006000B
	DVO_APPLYCUSTOMSETTINGS            = 393228, // 0x0006000C
	DVO_SETDISPLAYMODE                 = 393229, // 0x0006000D
	DVO_GETDISPLAYMODE                 = 393230, // 0x0006000E
	DVO_SETTYPE                        = 393231, // 0x0006000F
	DVO_GETTYPE                        = 393232, // 0x00060010
	DVO_SETVIDEOSTANDARD               = 393233, // 0x00060011
	DVO_GETVIDEOSTANDARD               = 393234, // 0x00060012
	DVO_SETCHECKVIDEODACPRESENT        = 393235, // 0x00060013
	DVO_GETCHECKVIDEODACPRESENT        = 393236, // 0x00060014
	// Module capture
	CAPTURE_SINGLEFRAME                = 458753, // 0x00070001
	CAPTURE_FRAMES                     = 458754, // 0x00070002
	CAPTURE_SINGLEFRAMEWITHSRC         = 458755, // 0x00070003
	CAPTURE_SINGLEFRAMETOFILE          = 458756, // 0x00070004
	// Module scnr
	SCNR_SETENABLESTATE                = 524289, // 0x00080001
	SCNR_GETENABLESTATE                = 524290, // 0x00080002
	SCNR_SETTHCOLSUM                   = 524291, // 0x00080003
	SCNR_GETTHCOLSUM                   = 524292, // 0x00080004
	SCNR_SETTHPIXEL                    = 524293, // 0x00080005
	SCNR_GETTHPIXEL                    = 524294, // 0x00080006
	SCNR_SETMAXCORR                    = 524295, // 0x00080007
	SCNR_GETMAXCORR                    = 524296, // 0x00080008
	SCNR_GETTHPIXELAPPLIED             = 524298, // 0x0008000A
	SCNR_GETMAXCORRAPPLIED             = 524299, // 0x0008000B
	SCNR_SETTHCOLSUMSAFE               = 524300, // 0x0008000C
	SCNR_GETTHCOLSUMSAFE               = 524301, // 0x0008000D
	SCNR_SETTHPIXELSAFE                = 524302, // 0x0008000E
	SCNR_GETTHPIXELSAFE                = 524303, // 0x0008000F
	SCNR_SETMAXCORRSAFE                = 524304, // 0x00080010
	SCNR_GETMAXCORRSAFE                = 524305, // 0x00080011
	// Module agc
	AGC_SETPERCENTPERBIN               = 589825, // 0x00090001
	AGC_GETPERCENTPERBIN               = 589826, // 0x00090002
	AGC_SETLINEARPERCENT               = 589827, // 0x00090003
	AGC_GETLINEARPERCENT               = 589828, // 0x00090004
	AGC_SETOUTLIERCUT                  = 589829, // 0x00090005
	AGC_GETOUTLIERCUT                  = 589830, // 0x00090006
	AGC_GETDROUT                       = 589832, // 0x00090008
	AGC_SETMAXGAIN                     = 589833, // 0x00090009
	AGC_GETMAXGAIN                     = 589834, // 0x0009000A
	AGC_SETDF                          = 589835, // 0x0009000B
	AGC_GETDF                          = 589836, // 0x0009000C
	AGC_SETGAMMA                       = 589837, // 0x0009000D
	AGC_GETGAMMA                       = 589838, // 0x0009000E
	AGC_GETFIRSTBIN                    = 589840, // 0x00090010
	AGC_GETLASTBIN                     = 589842, // 0x00090012
	AGC_SETDETAILHEADROOM              = 589843, // 0x00090013
	AGC_GETDETAILHEADROOM              = 589844, // 0x00090014
	AGC_SETD2BR                        = 589845, // 0x00090015
	AGC_GETD2BR                        = 589846, // 0x00090016
	AGC_SETSIGMAR                      = 589847, // 0x00090017
	AGC_GETSIGMAR                      = 589848, // 0x00090018
	AGC_SETUSEENTROPY                  = 589854, // 0x0009001E
	AGC_GETUSEENTROPY                  = 589855, // 0x0009001F
	AGC_SETROI                         = 589856, // 0x00090020
	AGC_GETROI                         = 589857, // 0x00090021
	AGC_GETMAXGAINAPPLIED              = 589861, // 0x00090025
	AGC_GETSIGMARAPPLIED               = 589862, // 0x00090026
	AGC_SETOUTLIERCUTBALANCE           = 589863, // 0x00090027
	AGC_GETOUTLIERCUTBALANCE           = 589864, // 0x00090028
	AGC_GETOUTLIERCUTAPPLIED           = 589865, // 0x00090029
	// Module tf
	TF_SETENABLESTATE                  = 655361, // 0x000A0001
	TF_GETENABLESTATE                  = 655362, // 0x000A0002
	TF_SETDELTA_NF                     = 655363, // 0x000A0003
	TF_GETDELTA_NF                     = 655364, // 0x000A0004
	TF_SETTHDELTAMOTION                = 655365, // 0x000A0005
	TF_GETTHDELTAMOTION                = 655366, // 0x000A0006
	TF_SETWLUT                         = 655367, // 0x000A0007
	TF_GETWLUT                         = 655368, // 0x000A0008
	TF_GETMOTIONCOUNT                  = 655369, // 0x000A0009
	TF_SETMOTIONTHRESHOLD              = 655374, // 0x000A000E
	TF_GETMOTIONTHRESHOLD              = 655375, // 0x000A000F
	TF_GETDELTA_NFAPPLIED              = 655382, // 0x000A0016
	TF_GETTHDELTAMOTIONAPPLIED         = 655383, // 0x000A0017
	// Module mem
	MEM_READCAPTURE                    = 4294901763, // 0xFFFF0003
	MEM_GETCAPTURESIZE                 = 4294901764, // 0xFFFF0004
	MEM_WRITEFLASH                     = 4294901765, // 0xFFFF0005
	MEM_READFLASH                      = 4294901766, // 0xFFFF0006
	MEM_GETFLASHSIZE                   = 4294901767, // 0xFFFF0007
	MEM_ERASEFLASH                     = 4294901768, // 0xFFFF0008
	MEM_ERASEFLASHPARTIAL              = 4294901769, // 0xFFFF0009
	MEM_READCURRENTGAIN                = 4294901770, // 0xFFFF000A
	MEM_GETGAINSIZE                    = 4294901771, // 0xFFFF000B
	// Module colorLut
	COLORLUT_SETCONTROL                = 720897, // 0x000B0001
	COLORLUT_GETCONTROL                = 720898, // 0x000B0002
	COLORLUT_SETID                     = 720899, // 0x000B0003
	COLORLUT_GETID                     = 720900, // 0x000B0004
	// Module spnr
	SPNR_SETENABLESTATE                = 786433, // 0x000C0001
	SPNR_GETENABLESTATE                = 786434, // 0x000C0002
	SPNR_GETSTATE                      = 786436, // 0x000C0004
	SPNR_SETFRAMEDELAY                 = 786437, // 0x000C0005
	SPNR_GETFRAMEDELAY                 = 786438, // 0x000C0006
	SPNR_GETSFAPPLIED                  = 786453, // 0x000C0015
	SPNR_SETPSDKERNEL                  = 786458, // 0x000C001A
	SPNR_GETPSDKERNEL                  = 786459, // 0x000C001B
	SPNR_SETSFMIN                      = 786460, // 0x000C001C
	SPNR_GETSFMIN                      = 786461, // 0x000C001D
	SPNR_SETSFMAX                      = 786462, // 0x000C001E
	SPNR_GETSFMAX                      = 786463, // 0x000C001F
	SPNR_SETDFMIN                      = 786464, // 0x000C0020
	SPNR_GETDFMIN                      = 786465, // 0x000C0021
	SPNR_SETDFMAX                      = 786466, // 0x000C0022
	SPNR_GETDFMAX                      = 786467, // 0x000C0023
	SPNR_SETNORMTARGET                 = 786468, // 0x000C0024
	SPNR_GETNORMTARGET                 = 786469, // 0x000C0025
	SPNR_GETNORMTARGETAPPLIED          = 786470, // 0x000C0026
	// Module scaler
	SCALER_GETMAXZOOM                  = 851969, // 0x000D0001
	SCALER_SETZOOM                     = 851970, // 0x000D0002
	SCALER_GETZOOM                     = 851971, // 0x000D0003
	SCALER_SETFRACTIONALZOOM           = 851975, // 0x000D0007
	SCALER_SETINDEXZOOM                = 851976, // 0x000D0008
	// Module sysctrl
	SYSCTRL_SETFREEZESTATE             = 917505, // 0x000E0001
	SYSCTRL_GETFREEZESTATE             = 917506, // 0x000E0002
	SYSCTRL_GETCAMERAFRAMERATE         = 917511, // 0x000E0007
	// Module testRamp
	TESTRAMP_SETTYPE                   = 1048576, // 0x00100000
	TESTRAMP_GETTYPE                   = 1048577, // 0x00100001
	TESTRAMP_SETSETTINGS               = 1048578, // 0x00100002
	TESTRAMP_GETSETTINGS               = 1048579, // 0x00100003
	TESTRAMP_SETMOTIONSTATE            = 1048580, // 0x00100004
	TESTRAMP_GETMOTIONSTATE            = 1048581, // 0x00100005
	TESTRAMP_SETINDEX                  = 1048582, // 0x00100006
	TESTRAMP_GETINDEX                  = 1048583, // 0x00100007
	TESTRAMP_GETMAXINDEX               = 1048584, // 0x00100008
	// Module symbology
	SYMBOLOGY_SETENABLE                = 1310720, // 0x00140000
	SYMBOLOGY_CREATEBITMAP             = 1310721, // 0x00140001
	SYMBOLOGY_SENDDATA                 = 1310723, // 0x00140003
	SYMBOLOGY_CREATEARC                = 1310724, // 0x00140004
	SYMBOLOGY_CREATETEXT               = 1310726, // 0x00140006
	SYMBOLOGY_MOVESPRITE               = 1310727, // 0x00140007
	SYMBOLOGY_ADDTOGROUP               = 1310728, // 0x00140008
	SYMBOLOGY_REMOVEFROMGROUP          = 1310729, // 0x00140009
	SYMBOLOGY_UPDATEANDSHOW            = 1310730, // 0x0014000A
	SYMBOLOGY_UPDATEANDSHOWGROUP       = 1310731, // 0x0014000B
	SYMBOLOGY_DELETE                   = 1310732, // 0x0014000C
	SYMBOLOGY_DELETEGROUP              = 1310733, // 0x0014000D
	SYMBOLOGY_CREATEFILLEDRECTANGLE    = 1310734, // 0x0014000E
	SYMBOLOGY_CREATEOUTLINEDRECTANGLE  = 1310736, // 0x00140010
	SYMBOLOGY_CREATEBITMAPFROMPNG      = 1310738, // 0x00140012
	SYMBOLOGY_CREATECOMPRESSEDBITMAP   = 1310740, // 0x00140014
	SYMBOLOGY_CREATEBITMAPFROMPNGFILE  = 1310742, // 0x00140016
	SYMBOLOGY_RESETWRITEPOSITION       = 1310744, // 0x00140018
	SYMBOLOGY_MOVEBYOFFSET             = 1310745, // 0x00140019
	SYMBOLOGY_MOVEGROUPBYOFFSET        = 1310746, // 0x0014001A
	SYMBOLOGY_CREATEFILLEDELLIPSE      = 1310747, // 0x0014001B
	SYMBOLOGY_CREATELINE               = 1310748, // 0x0014001C
	SYMBOLOGY_SETZORDER                = 1310749, // 0x0014001D
	SYMBOLOGY_SAVECONFIGURATION        = 1310750, // 0x0014001E
	SYMBOLOGY_RELOADCONFIGURATION      = 1310751, // 0x0014001F
	SYMBOLOGY_GETENABLE                = 1310752, // 0x00140020
	SYMBOLOGY_SETCLONESNUMBER          = 1310753, // 0x00140021
	SYMBOLOGY_MOVECLONEBYOFFSET        = 1310754, // 0x00140022
	SYMBOLOGY_MOVECLONESPRITE          = 1310755, // 0x00140023
	// Module fileOps
	FILEOPS_DIR                        = 1441792, // 0x00160000
	FILEOPS_CD                         = 1441793, // 0x00160001
	FILEOPS_MD                         = 1441794, // 0x00160002
	FILEOPS_FOPEN                      = 1441795, // 0x00160003
	FILEOPS_FCLOSE                     = 1441796, // 0x00160004
	FILEOPS_FREAD                      = 1441797, // 0x00160005
	FILEOPS_FWRITE                     = 1441798, // 0x00160006
	FILEOPS_FTELL                      = 1441799, // 0x00160007
	FILEOPS_FSEEK                      = 1441800, // 0x00160008
	FILEOPS_FTRUNCATE                  = 1441801, // 0x00160009
	FILEOPS_RMDIR                      = 1441802, // 0x0016000A
	FILEOPS_RM                         = 1441803, // 0x0016000B
	FILEOPS_RENAME                     = 1441804, // 0x0016000C
	FILEOPS_GETFILESIZE                = 1441805, // 0x0016000D
	// Module jffs2
	JFFS2_MOUNT                        = 1507329, // 0x00170001
	JFFS2_UNMOUNT                      = 1507330, // 0x00170002
	JFFS2_GETSTATE                     = 1507335, // 0x00170007
	// Module splashScreen
	SPLASHSCREEN_SETDURATION           = 1703936, // 0x001A0000
	SPLASHSCREEN_SETDATATYPE           = 1703937, // 0x001A0001
	SPLASHSCREEN_SETBACKGROUND         = 1703938, // 0x001A0002
	SPLASHSCREEN_GETDURATION           = 1703939, // 0x001A0003
	SPLASHSCREEN_GETDATATYPE           = 1703940, // 0x001A0004
	SPLASHSCREEN_GETBACKGROUND         = 1703941, // 0x001A0005
	// Module systemSymbols
	SYSTEMSYMBOLS_GETID                = 1769474, // 0x001B0002
	SYSTEMSYMBOLS_SETID                = 1769475, // 0x001B0003
	SYSTEMSYMBOLS_GETENABLE            = 1769476, // 0x001B0004
	SYSTEMSYMBOLS_SETENABLE            = 1769477, // 0x001B0005
	// Module sffc
	SFFC_GETSCALEFACTOR                = 1835008, // 0x001C0000
	SFFC_GETDELTATEMPLINEARCOEFF       = 1835009, // 0x001C0001
	SFFC_SETDELTATEMPLINEARCOEFF       = 1835010, // 0x001C0002
	SFFC_GETDELTATEMPOFFSETCOEFF       = 1835011, // 0x001C0003
	SFFC_SETDELTATEMPOFFSETCOEFF       = 1835012, // 0x001C0004
	SFFC_GETFPATEMPLINEARCOEFF         = 1835013, // 0x001C0005
	SFFC_SETFPATEMPLINEARCOEFF         = 1835014, // 0x001C0006
	SFFC_GETFPATEMPOFFSETCOEFF         = 1835015, // 0x001C0007
	SFFC_SETFPATEMPOFFSETCOEFF         = 1835016, // 0x001C0008
	SFFC_GETDELTATEMPTIMELIMITINSECS   = 1835017, // 0x001C0009
	SFFC_SETDELTATEMPTIMELIMITINSECS   = 1835018, // 0x001C000A
	// Module imageStats
	IMAGESTATS_GETTOTALHISTPIXELSINROI = 1900544, // 0x001D0000
	IMAGESTATS_GETPOPBELOWLOWTOHIGHTHRESH = 1900545, // 0x001D0001
	IMAGESTATS_GETPOPABOVEHIGHTOLOWTHRESH = 1900546, // 0x001D0002
	IMAGESTATS_SETROI                  = 1900547, // 0x001D0003
	IMAGESTATS_GETROI                  = 1900548, // 0x001D0004
	IMAGESTATS_GETFIRSTBIN             = 1900549, // 0x001D0005
	IMAGESTATS_GETLASTBIN              = 1900550, // 0x001D0006
	IMAGESTATS_GETMEAN                 = 1900551, // 0x001D0007
	IMAGESTATS_GETFIRSTBININROI        = 1900552, // 0x001D0008
	IMAGESTATS_GETLASTBININROI         = 1900553, // 0x001D0009
	IMAGESTATS_GETMEANINROI            = 1900554, // 0x001D000A
	// Module dummy
	DUMMY_BADCOMMAND                   = 3735928559, // 0xDEADBEEF
};
typedef enum _functionCodes FLR_FUNCTION;

#endif // FUNCTION_CODES_H
