[Rainmeter]
SkinWidth=208
Blur=1
DragMargins=4,4,4,4

[Variables]
fontName=Trebuchet MS
textSize=8
colorText=255,255,255,205
colorTextDark=127,127,127,205
colorTextRed=255,255,255,205
colorTextGreen=159,159,255,205
colorTextBlue=63,63,63,205
colorTextYellow=63,63,159,205
;colorTextRed=255,0,0,205
;colorTextGreen=0,255,0,205
;colorTextBlue=0,0,255,205
;colorTextYellow=255,255,0,205
colorBackground=26,26,26,127
colorBar=255,255,255,255
colorBarDark=127,127,127,255
colorBarDarker=0,0,0,255
colorBarRed=255,255,255,255
colorBarGreen=159,159,255,255
colorBarBlue=63,63,63,255
colorBarYellow=63,63,159,255
;colorBarRed=191,0,0,255
;colorBarGreen=0,191,0,255
;colorBarBlue=0,0,191,255
;colorBarYellow=191,191,0,255
colorHelperLine=63,63,63,255

; ----------------------------------
; STYLES
; ----------------------------------

[styleTitle]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=10
AntiAlias=1
ClipString=1

[styleCenterBigText]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=#colorText#
FontFace=#fontName#
FontSize=14
AntiAlias=1

[styleCenterText]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleDiskLabelText]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=255,255,255,50
FontColor=0,0,0,205
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleDiskSubLabelText]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=255,255,255,50
FontColor=0,0,0,205
FontFace=#fontName#
AntiAlias=1
ClipString=1
FontSize=8

[styleLeftText]
StringAlign=LEFT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightText]
StringAlign=RIGHT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleSeparator]
SolidColor=255,255,255,15

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15

[styleRoundLine]
StartAngle=4.712
RotationAngle=6.283
LineColor=#colorBar#
Solid=1
AntiAlias=1

[styleRoundLineCCW]
StartAngle=4.712
RotationAngle=-6.283
LineColor=#colorBar#
Solid=1
AntiAlias=1

[styleLine]
LineColor=#colorBar#
LineColor2=#colorBarDark#
LineColor3=#colorBarDarker#
AutoScale=1
AntiAlias=0
HorizontalLines=0
HorizontalLineColor=#colorHelperLine#

[styleLineColor]
LineColor=#colorBarRed#
LineColor2=#colorBarGreen#
LineColor3=#colorBarBlue#
LineColor4=#colorBarYellow#
AutoScale=1
AntiAlias=1
HorizontalLines=0
HorizontalLineColor=#colorHelperLine#

[styleButton]
BevelType=1