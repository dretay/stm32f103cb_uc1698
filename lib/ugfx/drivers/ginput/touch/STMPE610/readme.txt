This driver has a number of optional settings which can be specified in gfxconf.h:

#define GMOUSE_STMPE610_READ_PRESSURE       GFXON
	Returns pressure values when the touch is down. On tested boards this ranges from 90 to 150. 255 is touch off.
	
#define GMOUSE_STMPE610_SELF_CALIBRATE      GFXON
	Scale the touch readings to avoid calibration. This is not as accurate as real calibration.
	
#define GMOUSE_STMPE610_TEST_MODE           GFXON
	Return raw readings for diagnostic use with the "touch_raw_readings" tool.

