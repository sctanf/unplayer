[Variables]
;                === Settings ===

Height = 64
WidthMultiplier = 6
; How tall you want UnPlayer to be.
; Width is Height multiplied by the WidthMultiplier. Decimals allowed.

ControlStyle = B
AutoHide     = 1
HideOnPause  = 0
; -
TextAlign    = L
AbmArtAlign  = L
ControlAlign = L
; -
PrgBarHeight = 4
Transparency = 184
; -
EnableBlur   = 1
EnableCntrls = 1
EnableAbmArt = 1
; Bar settings. Enabling HideOnPause also hides when everything is paused.
; ControlStyles: A, B, C, D, E
; TextAlign:     L, C, R
; AbmArtAlign:   L, R
; ControlAlign:  L, C, R (only affects ControlStyle E)
; Reminder that text offsets X do not affect center-aligned text.
; Set Transparency to 255 to hide the bar.

PlayerInfoTop    = [A1]
PlayerInfoBottom = [B0][DividerBottom][C0]
; What Info to display. Valid are:
; A) Title
; B) Artist
; C) Album
; Add a 0 or 1, with 1 enabling whether
; or not to remove anything in () and [].
; Example: [A1][DividerTop][B0]

DividerTop    = " - "
DividerBottom = " - "
; If there are two measures in PlayerInfo,
; dividers can be set to separate the two measures.

FontT = Segoe UI
FontB = Segoe UI
; Font. Default Segoe UI both.
; Font settings may have to be adjusted for different fonts.

ColorTop    = 255,255,255,235
ColorBottom = 255,255,255,235
; Font Color. Default 255,255,255,235 both.

FontOffsetTX = 12
FontOffsetTY = 6
FontOffsetBX = 13
FontOffsetBY = 36
; Text Offset. Default 12, 6, 13, 36.

FontSizeT = 18
FontSizeB = 11
; Font Size. Default 18, 11.

FontWeightT = 350
FontWeightB = 400
; Font weight. Default 350, 400
