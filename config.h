/* User configurable stuff. */

/*
 * Move this many pixels when moving or resizing with keyboard unless
 * the window has hints saying otherwise.
 */
#define MOVE_STEP 32

#define MODKEY XCB_MOD_MASK_1

/* Extra modifier for resizing. Default is Shift. */
#define SHIFTMOD XCB_MOD_MASK_SHIFT

/*
 * Modifier key to use with mouse buttons. Default Mod1, Meta on my
 * keyboard.
 */
#define MOUSEMODKEY XCB_MOD_MASK_1

//#define DEBUG

#define BORDERWIDTH 2

#define FOCUSCOL 0x4A90D9

#define UNFOCUSCOL 0x011234

#define FIXEDCOL 0x011278

#define LAUNCHER "dmenu_run"

/*
 * Keysym codes for window operations. Look in X11/keysymdefs.h for
 * actual symbols. Use XK_VoidSymbol to disable a function.
 */
#define USERKEY_FIX 		XK_F
#define USERKEY_RAISE 		XK_R
#define USERKEY_TERMINAL 	XK_N
#define USERKEY_MAX 		XK_Z
#define USERKEY_CHANGE 		XK_Tab
#define USERKEY_BACKCHANGE	XK_VoidSymbol
#define USERKEY_WS1		XK_1
#define USERKEY_WS2		XK_2
#define USERKEY_WS3		XK_3
#define USERKEY_WS4		XK_4
#define USERKEY_WS5		XK_5
#define USERKEY_WS6		XK_6
#define USERKEY_WS7		XK_7
#define USERKEY_WS8		XK_8
#define USERKEY_WS9		XK_9
#define USERKEY_WS10		XK_0
#define USERKEY_PREVWS          XK_C
#define USERKEY_NEXTWS          XK_V
#define USERKEY_DELETE          XK_X
#define USERKEY_PREVSCREEN      XK_comma
#define USERKEY_NEXTSCREEN      XK_period
#define USERKEY_ICONIFY         XK_I
