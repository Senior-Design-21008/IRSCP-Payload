#  /////////////////////////////////////////////////////
#  // DO NOT EDIT.  This is a machine generated file. //
#  /////////////////////////////////////////////////////


from enum import IntEnum
# Garbage Variable to avoid ever having blank code

class FLR_ENABLE_E(IntEnum):
	FLR_DISABLE = 0
	FLR_ENABLE = 1
	FLR_ENABLE_END = 2


class FLR_ROIC_TEMP_MODE_E(IntEnum):
	FLR_ROIC_TEMP_NORMAL_MODE = 0
	FLR_ROIC_TEMP_OFFSET_MODE = 1
	FLR_ROIC_TEMP_STATIC_MODE = 2
	FLR_ROIC_TEMP_MODE_END = 3


class FLR_ROIC_EXT_SYNC_MODE_E(IntEnum):
	FLR_ROIC_EXT_SYNC_DISABLE_MODE = 0
	FLR_ROIC_EXT_SYNC_MASTER_MODE = 1
	FLR_ROIC_EXT_SYNC_SLAVE_MODE = 2
	FLR_ROIC_EXT_SYNC_END = 3


class FLR_TELEMETRY_LOC_E(IntEnum):
	FLR_TELEMETRY_LOC_TOP = 0
	FLR_TELEMETRY_LOC_BOTTOM = 1
	FLR_TELEMETRY_LOC_END = 2


class FLR_TELEMETRY_PACKING_E(IntEnum):
	FLR_TELEMETRY_PACKING_DEFAULT = 0
	FLR_TELEMETRY_PACKING_Y = 1
	FLR_TELEMETRY_PACKING_8BITS = 2
	FLR_TELEMETRY_PACKING_END = 3


class FLR_BOSON_GAINMODE_E(IntEnum):
	FLR_BOSON_HIGH_GAIN = 0
	FLR_BOSON_LOW_GAIN = 1
	FLR_BOSON_AUTO_GAIN = 2
	FLR_BOSON_DUAL_GAIN = 3
	FLR_BOSON_MANUAL_GAIN = 4
	FLR_BOSON_GAINMODE_END = 5


class FLR_BOSON_FFCMODE_E(IntEnum):
	FLR_BOSON_MANUAL_FFC = 0
	FLR_BOSON_AUTO_FFC = 1
	FLR_BOSON_EXTERNAL_FFC = 2
	FLR_BOSON_SHUTTER_TEST_FFC = 3
	FLR_BOSON_FFCMODE_END = 4


class FLR_BOSON_FFCSTATUS_E(IntEnum):
	FLR_BOSON_NO_FFC_PERFORMED = 0
	FLR_BOSON_FFC_IMMINENT = 1
	FLR_BOSON_FFC_IN_PROGRESS = 2
	FLR_BOSON_FFC_COMPLETE = 3
	FLR_BOSON_FFCSTATUS_END = 4


class FLR_BOSON_MYRIADTEMPMODE_E(IntEnum):
	FLR_BOSON_NORMAL_MYRIADTEMP_MODE = 0
	FLR_BOSON_STATIC_MYRIADTEMP_MODE = 1


class FLR_BOSON_EXT_SYNC_MODE_E(IntEnum):
	FLR_BOSON_EXT_SYNC_DISABLE_MODE = 0
	FLR_BOSON_EXT_SYNC_MASTER_MODE = 1
	FLR_BOSON_EXT_SYNC_SLAVE_MODE = 2
	FLR_BOSON_EXT_SYNC_END = 3


class FLR_DVO_OUTPUT_FORMAT_E(IntEnum):
	FLR_DVO_RGB = 0
	FLR_DVO_YCBCR = 1
	FLR_DVO_DEFAULT_FORMAT = 2
	FLR_DVO_OUTPUT_FORMAT_END = 3


class FLR_DVO_OUTPUT_RGB_FORMAT_E(IntEnum):
	FLR_DVO_RGB888 = 0
	FLR_DVO_MRGB888 = 1
	FLR_DVO_OUTPUT_RGB_FORMAT_END = 2


class FLR_DVO_OUTPUT_YCBCR_FORMAT_E(IntEnum):
	FLR_DVO_YCBCR422_8B = 0
	FLR_DVO_MYCBCR422_8B = 1
	FLR_DVO_OUTPUT_YCBCR_FORMAT_END = 2


class FLR_DVO_OUTPUT_CBCR_ORDER_E(IntEnum):
	FLR_DVO_CRCB = 0
	FLR_DVO_CBCR = 1
	FLR_DVO_OUTPUT_CBCR_ORDER_END = 2


class FLR_DVO_OUTPUT_Y_ORDER_E(IntEnum):
	FLR_DVO_YFIRST = 0
	FLR_DVO_YLAST = 1
	FLR_DVO_OUTPUT_Y_ORDER_END = 2


class FLR_DVO_OUTPUT_RGB_ORDER_E(IntEnum):
	FLR_DVO_ORDER_RGB = 0
	FLR_DVO_ORDER_BGR = 1
	FLR_DVO_OUTPUT_RGB_ORDER_END = 2


class FLR_DVO_TYPE_E(IntEnum):
	FLR_DVO_TYPE_MONO16 = 0
	FLR_DVO_TYPE_MONO8 = 1
	FLR_DVO_TYPE_COLOR = 2
	FLR_DVO_TYPE_ANALOG = 3
	FLR_DVO_TYPE_END = 4


class FLR_DVO_DISPLAY_MODE_E(IntEnum):
	FLR_DVO_CONTINUOUS = 0
	FLR_DVO_ONE_SHOT = 1
	FLR_DVO_DISPLAY_MODE_END = 2


class FLR_DVO_VIDEO_STANDARD_E(IntEnum):
	FLR_DVO_NTSC = 0
	FLR_DVO_PAL = 1
	FLR_DVO_VIDEO_STANDARD_END = 2


class FLR_CAPTURE_SRC_E(IntEnum):
	FLR_CAPTURE_SRC_NUC = 1
	FLR_CAPTURE_SRC_RESERVED = 2
	FLR_CAPTURE_SRC_TNF = 3
	FLR_CAPTURE_SRC_BLEND = 4
	FLR_CAPTURE_SRC_END = 5


class FLR_CAPTURE_FILE_TYPE_E(IntEnum):
	FLR_CAPTURE_NONE = 0
	FLR_CAPTURE_JPEG = 1
	FLR_CAPTURE_PNG = 2


class FLR_TF_MOTION_MODE_E(IntEnum):
	FLR_TF_MOTION_MODE_FRAME_BASED = 0
	FLR_TF_MOTION_MODE_MOTION_BASED = 1
	FLR_TF_MOTION_MODE_END = 2


class FLR_MEM_LOCATION_E(IntEnum):
	FLR_MEM_INVALID = 0
	FLR_MEM_BOOTLOADER = 1
	FLR_MEM_UPGRADE_APP = 2
	FLR_MEM_LENS_NVFFC = 3
	FLR_MEM_LENS_SFFC = 4
	FLR_MEM_LENS_GAIN = 5
	FLR_MEM_LENS_DISTORTION = 6
	FLR_MEM_USER_SPACE = 7
	FLR_MEM_RUN_CMDS = 8
	FLR_MEM_JFFS2 = 9
	FLR_MEM_LAST = 10


class FLR_COLORLUT_ID_E(IntEnum):
	FLR_COLORLUT_WHITEHOT = 0
	FLR_COLORLUT_DEFAULT = 0
	FLR_COLORLUT_0 = 0
	FLR_COLORLUT_BLACKHOT = 1
	FLR_COLORLUT_1 = 1
	FLR_COLORLUT_RAINBOW = 2
	FLR_COLORLUT_2 = 2
	FLR_COLORLUT_RAINBOW_HC = 3
	FLR_COLORLUT_3 = 3
	FLR_COLORLUT_IRONBOW = 4
	FLR_COLORLUT_4 = 4
	FLR_COLORLUT_LAVA = 5
	FLR_COLORLUT_5 = 5
	FLR_COLORLUT_ARCTIC = 6
	FLR_COLORLUT_6 = 6
	FLR_COLORLUT_GLOBOW = 7
	FLR_COLORLUT_7 = 7
	FLR_COLORLUT_GRADEDFIRE = 8
	FLR_COLORLUT_8 = 8
	FLR_COLORLUT_HOTTEST = 9
	FLR_COLORLUT_9 = 9
	FLR_COLORLUT_ID_END = 10


class FLR_SPNR_STATE_E(IntEnum):
	FLR_SPNR_READY = 0
	FLR_SPNR_DESIRED = 1
	FLR_SPNR_IN_PROGRESS = 2
	FLR_SPNR_COMPLETE = 3


class FLR_SPNR_ONESHOT_STATE_E(IntEnum):
	FLR_SPNR_ONE_SHOT_READY = 0
	FLR_SPNR_ONE_SHOT_EXECUTE = 1
	FLR_SPNR_ONE_SHOT_RESET = 2
	FLR_SPNR_ONE_SHOT_INIT = 3


class FLR_TESTRAMP_TYPE_E(IntEnum):
	FLR_TESTRAMP_ZERO = 0
	FLR_TESTRAMP_INCREMENTING = 1
	FLR_TESTRAMP_VERT_SHADE = 2
	FLR_TESTRAMP_HORIZ_SHADE = 3
	FLR_TESTRAMP_BIG_VERT_SHADE = 4
	FLR_TESTRAMP_SIMPLE_VERTICAL = 5
	FLR_TESTRAMP_VTST_CHECKERBOARD = 6
	FLR_TESTRAMP_VTST_DIAGONAL_STRIPE = 7
	FLR_TESTRAMP_VTST_MOVING_LINE_BLACK = 8
	FLR_TESTRAMP_VTST_DIAGONAL_LR = 9
	FLR_TESTRAMP_VTST_DIAGONAL_RL = 10
	FLR_TESTRAMP_TYPE_LAST = 11


class FLR_SYMBOLOGY_TEXT_ALIGNMENT_E(IntEnum):
	FLR_SYMBOLOGY_LEFT_TOP = 17
	FLR_SYMBOLOGY_CENTER_TOP = 18
	FLR_SYMBOLOGY_RIGHT_TOP = 19
	FLR_SYMBOLOGY_LEFT_MIDDLE = 33
	FLR_SYMBOLOGY_CENTER_MIDDLE = 34
	FLR_SYMBOLOGY_RIGHT_MIDDLE = 35
	FLR_SYMBOLOGY_LEFT_BOTTOM = 49
	FLR_SYMBOLOGY_CENTER_BOTTOM = 50
	FLR_SYMBOLOGY_RIGHT_BOTTOM = 51
	FLR_SYMBOLOGY_ALIGNMENT_LAST = 64


class FLR_JFFS2_STATE_E(IntEnum):
	FLR_JFFS2_INITIAL = 0
	FLR_JFFS2_CONFIGURED = 1
	FLR_JFFS2_MOUNTING = 2
	FLR_JFFS2_MOUNTED = 3
	FLR_JFFS2_UNMOUNTING = 4
	FLR_JFFS2_UNMOUNTED = 5
	FLR_JFFS2_FAILED_MOUNT = 6
	FLR_JFFS2_FAILED_UNMOUNT = 7
	FLR_JFFS2_FAILED_CONFIG = 8
	FLR_JFFS2_DISABLED = 9
	FLR_JFFS2_STATE_END = 10


class FLR_SPLASHSCREEN_FILETYPE_E(IntEnum):
	FLR_SPLASHSCREEN_PNG = 0
	FLR_SPLASHSCREEN_BMP = 1
	FLR_SPLASHSCREEN_RAW = 2
	FLR_SPLASHSCREEN_NONE = 3
	FLR_SPLASHSCREEN_FILE_END = 4


class FLR_SYSTEMSYMBOLS_SYMBOL_E(IntEnum):
	FLR_SYSTEMSYMBOLS_FFC_IMMINENT = 0
	FLR_SYSTEMSYMBOLS_FFC_DESIRED = 1
	FLR_SYSTEMSYMBOLS_TABLE_SWITCH_DESIRED = 2
	FLR_SYSTEMSYMBOLS_LOW_GAIN = 3
	FLR_SYSTEMSYMBOLS_OVERTEMP = 4
	FLR_SYSTEMSYMBOLS_SYMBOL_LAST = 5


class FLR_SYSTEMSYMBOLS_ID_TYPE_E(IntEnum):
	FLR_SYSTEMSYMBOLS_ELEMENT = 0
	FLR_SYSTEMSYMBOLS_GROUP = 1
	FLR_SYSTEMSYMBOLS_ID_LAST = 2


class FLR_SYSTEMSYMBOLS_STATE_E(IntEnum):
	FLR_SYSTEMSYMBOLS_ENTERED = 0
	FLR_SYSTEMSYMBOLS_EXITED = 1
	FLR_SYSTEMSYMBOLS_STATE_LAST = 2


