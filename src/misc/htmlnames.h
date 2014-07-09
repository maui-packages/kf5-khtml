/* This file is automatically generated from htmltags.in and htmlattrs.in by gennames.py, do not edit */
/* Copyright 2008 Vyacheslav Tokarev */

#ifndef HTMLNames_h
#define HTMLNames_h

#include "misc/idstring.h"

#define XML_NAMESPACE "http://www.w3.org/XML/1998/namespace"
#define XMLNS_NAMESPACE "http://www.w3.org/2000/xmlns/"
#define SVG_NAMESPACE "http://www.w3.org/2000/svg"
#define XLINK_NAMESPACE "http://www.w3.org/1999/xlink"
#define XHTML_NAMESPACE "http://www.w3.org/1999/xhtml"
namespace DOM
{

#define NodeImpl_IdNSMask    0xffff0000
#define NodeImpl_IdLocalMask 0x0000ffff

const quint32 xmlNamespace = 5;
const quint32 xmlnsNamespace = 4;
const quint32 svgNamespace = 2;
const quint32 xlinkNamespace = 3;
const quint32 xhtmlNamespace = 0;
const quint32 emptyNamespace = 1;
const quint16 anyNamespace = 0xffff;
const quint16 anyLocalName = 0xffff;
const quint16 emptyPrefix = 0;
const quint16 xmlPrefix = 1;
const quint16 xmlnsPrefix = 2;

inline quint16 localNamePart(quint32 id)
{
    return id & NodeImpl_IdLocalMask;
}
inline quint16 namespacePart(quint32 id)
{
    return (((unsigned int)id) & NodeImpl_IdNSMask) >> 16;
}
inline quint32 makeId(quint16 n, quint16 l)
{
    return (n << 16) | l;
}

const quint32 anyQName = makeId(anyNamespace, anyLocalName);

}

#define ID_A 1
#define ID_ABBR 2
#define ATTR_ABBR ((DOM::emptyNamespace << 16) | 2)
#define ID_ACRONYM 3
#define ID_ADDRESS 4
#define ID_APPLET 5
#define ID_AREA 6
#define ID_AUDIO 7
#define ID_B 8
#define ID_BASE 9
#define ATTR_XML_BASE ((DOM::xmlNamespace << 16) | 9)
#define ID_BASEFONT 10
#define ID_BDO 11
#define ID_BIG 12
#define ID_BLOCKQUOTE 13
#define ID_BODY 14
#define ID_BR 15
#define ID_BUTTON 16
#define ID_CANVAS 17
#define ID_CAPTION 18
#define ID_CENTER 19
#define ID_CITE 20
#define ATTR_CITE ((DOM::emptyNamespace << 16) | 20)
#define ID_CODE 21
#define ATTR_CODE ((DOM::emptyNamespace << 16) | 21)
#define ID_COL 22
#define ID_COLGROUP 23
#define ID_DD 24
#define ID_DEL 25
#define ID_DFN 26
#define ID_DIR 27
#define ATTR_DIR ((DOM::emptyNamespace << 16) | 27)
#define ID_DIV 28
#define ID_DL 29
#define ID_DT 30
#define ID_EM 31
#define ID_EMBED 32
#define ID_FIELDSET 33
#define ID_FONT 34
#define ID_FORM 35
#define ID_FRAME 36
#define ATTR_FRAME ((DOM::emptyNamespace << 16) | 36)
#define ID_FRAMESET 37
#define ID_H1 38
#define ID_H2 39
#define ID_H3 40
#define ID_H4 41
#define ID_H5 42
#define ID_H6 43
#define ID_HEAD 44
#define ID_HR 45
#define ID_HTML 46
#define ATTR_HTML ((DOM::emptyNamespace << 16) | 46)
#define ID_I 47
#define ID_IFRAME 48
#define ID_ILAYER 49
#define ID_IMAGE 50
#define ID_IMG 51
#define ID_INPUT 52
#define ID_INS 53
#define ID_ISINDEX 54
#define ID_KBD 55
#define ID_KEYGEN 56
#define ID_LABEL 57
#define ATTR_LABEL ((DOM::emptyNamespace << 16) | 57)
#define ID_LAYER 58
#define ID_LEGEND 59
#define ID_LI 60
#define ID_LINK 61
#define ATTR_LINK ((DOM::emptyNamespace << 16) | 61)
#define ID_LISTING 62
#define ID_MAP 63
#define ID_MARQUEE 64
#define ID_MENU 65
#define ID_META 66
#define ID_NOBR 67
#define ID_NOEMBED 68
#define ID_NOFRAMES 69
#define ID_NOSCRIPT 70
#define ID_NOLAYER 71
#define ID_OBJECT 72
#define ATTR_OBJECT ((DOM::emptyNamespace << 16) | 72)
#define ID_OL 73
#define ID_OPTGROUP 74
#define ID_OPTION 75
#define ID_P 76
#define ID_PARAM 77
#define ID_PLAINTEXT 78
#define ID_PRE 79
#define ID_Q 80
#define ID_S 81
#define ID_SAMP 82
#define ID_SCRIPT 83
#define ID_SELECT 84
#define ID_SMALL 85
#define ID_SOURCE 86
#define ID_SPAN 87
#define ATTR_SPAN ((DOM::emptyNamespace << 16) | 87)
#define ID_STRIKE 88
#define ID_STRONG 89
#define ID_STYLE 90
#define ATTR_STYLE ((DOM::emptyNamespace << 16) | 90)
#define ID_SUB 91
#define ID_SUP 92
#define ID_TABLE 93
#define ID_TBODY 94
#define ID_TD 95
#define ID_TEXTAREA 96
#define ID_TFOOT 97
#define ID_TH 98
#define ID_THEAD 99
#define ID_TITLE 100
#define ATTR_XLINK_TITLE ((DOM::xlinkNamespace << 16) | 100)
#define ATTR_TITLE ((DOM::emptyNamespace << 16) | 100)
#define ID_TR 101
#define ID_TT 102
#define ID_U 103
#define ID_UL 104
#define ID_VAR 105
#define ID_VIDEO 106
#define ID_WBR 107
#define ID_XMP 108
#define ID_TEXT 109
#define ID_COMMENT 110
#define ATTR_ACCEPT_CHARSET ((DOM::emptyNamespace << 16) | 111)
#define ATTR_ACCEPT ((DOM::emptyNamespace << 16) | 112)
#define ATTR_ACCESSKEY ((DOM::emptyNamespace << 16) | 113)
#define ATTR_ALIGN ((DOM::emptyNamespace << 16) | 114)
#define ATTR_ALINK ((DOM::emptyNamespace << 16) | 115)
#define ATTR_AUTOCOMPLETE ((DOM::emptyNamespace << 16) | 116)
#define ATTR_AUTOPLAY ((DOM::emptyNamespace << 16) | 117)
#define ATTR_AXIS ((DOM::emptyNamespace << 16) | 118)
#define ATTR_BEHAVIOR ((DOM::emptyNamespace << 16) | 119)
#define ATTR_BGCOLOR ((DOM::emptyNamespace << 16) | 120)
#define ATTR_BGPROPERTIES ((DOM::emptyNamespace << 16) | 121)
#define ATTR_BORDER ((DOM::emptyNamespace << 16) | 122)
#define ATTR_BORDERCOLOR ((DOM::emptyNamespace << 16) | 123)
#define ATTR_CELLPADDING ((DOM::emptyNamespace << 16) | 124)
#define ATTR_CELLSPACING ((DOM::emptyNamespace << 16) | 125)
#define ATTR_CHAR ((DOM::emptyNamespace << 16) | 126)
#define ATTR_CHALLENGE ((DOM::emptyNamespace << 16) | 127)
#define ATTR_CHAROFF ((DOM::emptyNamespace << 16) | 128)
#define ATTR_CHARSET ((DOM::emptyNamespace << 16) | 129)
#define ATTR_CHECKED ((DOM::emptyNamespace << 16) | 130)
#define ATTR_CLEAR ((DOM::emptyNamespace << 16) | 131)
#define ATTR_CODETYPE ((DOM::emptyNamespace << 16) | 132)
#define ATTR_COLOR ((DOM::emptyNamespace << 16) | 133)
#define ATTR_COLS ((DOM::emptyNamespace << 16) | 134)
#define ATTR_COLSPAN ((DOM::emptyNamespace << 16) | 135)
#define ATTR_COMPACT ((DOM::emptyNamespace << 16) | 136)
#define ATTR_CONTENTEDITABLE ((DOM::emptyNamespace << 16) | 137)
#define ATTR_CONTROLS ((DOM::emptyNamespace << 16) | 138)
#define ATTR_COORDS ((DOM::emptyNamespace << 16) | 139)
#define ATTR_DECLARE ((DOM::emptyNamespace << 16) | 140)
#define ATTR_DEFER ((DOM::emptyNamespace << 16) | 141)
#define ATTR_DIRECTION ((DOM::emptyNamespace << 16) | 142)
#define ATTR_DISABLED ((DOM::emptyNamespace << 16) | 143)
#define ATTR_ENCTYPE ((DOM::emptyNamespace << 16) | 144)
#define ATTR_FACE ((DOM::emptyNamespace << 16) | 145)
#define ATTR_FRAMEBORDER ((DOM::emptyNamespace << 16) | 146)
#define ATTR_HEIGHT ((DOM::emptyNamespace << 16) | 147)
#define ATTR_HIDDEN ((DOM::emptyNamespace << 16) | 148)
#define ATTR_HREFLANG ((DOM::emptyNamespace << 16) | 149)
#define ATTR_HSPACE ((DOM::emptyNamespace << 16) | 150)
#define ATTR_HTTP_EQUIV ((DOM::emptyNamespace << 16) | 151)
#define ATTR_ISMAP ((DOM::emptyNamespace << 16) | 152)
#define ATTR_XML_LANG ((DOM::xmlNamespace << 16) | 153)
#define ATTR_LANG ((DOM::emptyNamespace << 16) | 153)
#define ATTR_LANGUAGE ((DOM::emptyNamespace << 16) | 154)
#define ATTR_LEFT ((DOM::emptyNamespace << 16) | 155)
#define ATTR_LEFTMARGIN ((DOM::emptyNamespace << 16) | 156)
#define ATTR_LOOP ((DOM::emptyNamespace << 16) | 157)
#define ATTR_MARGINHEIGHT ((DOM::emptyNamespace << 16) | 158)
#define ATTR_MARGINWIDTH ((DOM::emptyNamespace << 16) | 159)
#define ATTR_MAXLENGTH ((DOM::emptyNamespace << 16) | 160)
#define ATTR_MEDIA ((DOM::emptyNamespace << 16) | 161)
#define ATTR_METHOD ((DOM::emptyNamespace << 16) | 162)
#define ATTR_MULTIPLE ((DOM::emptyNamespace << 16) | 163)
#define ATTR_NOHREF ((DOM::emptyNamespace << 16) | 164)
#define ATTR_NORESIZE ((DOM::emptyNamespace << 16) | 165)
#define ATTR_NOSAVE ((DOM::emptyNamespace << 16) | 166)
#define ATTR_NOSHADE ((DOM::emptyNamespace << 16) | 167)
#define ATTR_NOWRAP ((DOM::emptyNamespace << 16) | 168)
#define ATTR_ONABORT ((DOM::emptyNamespace << 16) | 169)
#define ATTR_ONERROR ((DOM::emptyNamespace << 16) | 170)
#define ATTR_ONRESIZE ((DOM::emptyNamespace << 16) | 171)
#define ATTR_OVERSRC ((DOM::emptyNamespace << 16) | 172)
#define ATTR_PAGEX ((DOM::emptyNamespace << 16) | 173)
#define ATTR_PAGEY ((DOM::emptyNamespace << 16) | 174)
#define ATTR_PLACEHOLDER ((DOM::emptyNamespace << 16) | 175)
#define ATTR_PLAIN ((DOM::emptyNamespace << 16) | 176)
#define ATTR_PLUGINPAGE ((DOM::emptyNamespace << 16) | 177)
#define ATTR_PLUGINSPAGE ((DOM::emptyNamespace << 16) | 178)
#define ATTR_PLUGINURL ((DOM::emptyNamespace << 16) | 179)
#define ATTR_POSTER ((DOM::emptyNamespace << 16) | 180)
#define ATTR_READONLY ((DOM::emptyNamespace << 16) | 181)
#define ATTR_REL ((DOM::emptyNamespace << 16) | 182)
#define ATTR_REV ((DOM::emptyNamespace << 16) | 183)
#define ATTR_ROWS ((DOM::emptyNamespace << 16) | 184)
#define ATTR_ROWSPAN ((DOM::emptyNamespace << 16) | 185)
#define ATTR_RULES ((DOM::emptyNamespace << 16) | 186)
#define ATTR_SCOPE ((DOM::emptyNamespace << 16) | 187)
#define ATTR_SCROLLAMOUNT ((DOM::emptyNamespace << 16) | 188)
#define ATTR_SCROLLDELAY ((DOM::emptyNamespace << 16) | 189)
#define ATTR_SCROLLING ((DOM::emptyNamespace << 16) | 190)
#define ATTR_SELECTED ((DOM::emptyNamespace << 16) | 191)
#define ATTR_SHAPE ((DOM::emptyNamespace << 16) | 192)
#define ATTR_SIZE ((DOM::emptyNamespace << 16) | 193)
#define ATTR_START ((DOM::emptyNamespace << 16) | 194)
#define ATTR_TABINDEX ((DOM::emptyNamespace << 16) | 195)
#define ATTR_TARGET ((DOM::emptyNamespace << 16) | 196)
#define ATTR_TEXT ((DOM::emptyNamespace << 16) | 197)
#define ATTR_TOP ((DOM::emptyNamespace << 16) | 198)
#define ATTR_TOPMARGIN ((DOM::emptyNamespace << 16) | 199)
#define ATTR_TRUESPEED ((DOM::emptyNamespace << 16) | 200)
#define ATTR_XLINK_TYPE ((DOM::xlinkNamespace << 16) | 201)
#define ATTR_TYPE ((DOM::emptyNamespace << 16) | 201)
#define ATTR_UNKNOWN ((DOM::emptyNamespace << 16) | 202)
#define ATTR_VALIGN ((DOM::emptyNamespace << 16) | 203)
#define ATTR_VALUETYPE ((DOM::emptyNamespace << 16) | 204)
#define ATTR_VERSION ((DOM::emptyNamespace << 16) | 205)
#define ATTR_VISIBILITY ((DOM::emptyNamespace << 16) | 206)
#define ATTR_VLINK ((DOM::emptyNamespace << 16) | 207)
#define ATTR_VSPACE ((DOM::emptyNamespace << 16) | 208)
#define ATTR_WIDTH ((DOM::emptyNamespace << 16) | 209)
#define ATTR_WRAP ((DOM::emptyNamespace << 16) | 210)
#define ATTR_Z_INDEX ((DOM::emptyNamespace << 16) | 211)
#define ATTR_ACTION ((DOM::emptyNamespace << 16) | 212)
#define ATTR_ALT ((DOM::emptyNamespace << 16) | 213)
#define ATTR_ARCHIVE ((DOM::emptyNamespace << 16) | 214)
#define ATTR_BACKGROUND ((DOM::emptyNamespace << 16) | 215)
#define ATTR_CLASS ((DOM::emptyNamespace << 16) | 216)
#define ATTR_CLASSID ((DOM::emptyNamespace << 16) | 217)
#define ATTR_CODEBASE ((DOM::emptyNamespace << 16) | 218)
#define ATTR_CONTENT ((DOM::emptyNamespace << 16) | 219)
#define ATTR_DATA ((DOM::emptyNamespace << 16) | 220)
#define ATTR_DATETIME ((DOM::emptyNamespace << 16) | 221)
#define ATTR_FOR ((DOM::emptyNamespace << 16) | 222)
#define ATTR_HEADERS ((DOM::emptyNamespace << 16) | 223)
#define ATTR_XLINK_HREF ((DOM::xlinkNamespace << 16) | 224)
#define ATTR_HREF ((DOM::emptyNamespace << 16) | 224)
#define ATTR_ID ((DOM::emptyNamespace << 16) | 225)
#define ATTR_LONGDESC ((DOM::emptyNamespace << 16) | 226)
#define ATTR_NAME ((DOM::emptyNamespace << 16) | 227)
#define ATTR_ONBLUR ((DOM::emptyNamespace << 16) | 228)
#define ATTR_ONCHANGE ((DOM::emptyNamespace << 16) | 229)
#define ATTR_ONCLICK ((DOM::emptyNamespace << 16) | 230)
#define ATTR_ONDBLCLICK ((DOM::emptyNamespace << 16) | 231)
#define ATTR_ONFOCUS ((DOM::emptyNamespace << 16) | 232)
#define ATTR_ONHASHCHANGE ((DOM::emptyNamespace << 16) | 233)
#define ATTR_ONKEYDOWN ((DOM::emptyNamespace << 16) | 234)
#define ATTR_ONKEYPRESS ((DOM::emptyNamespace << 16) | 235)
#define ATTR_ONKEYUP ((DOM::emptyNamespace << 16) | 236)
#define ATTR_ONLOAD ((DOM::emptyNamespace << 16) | 237)
#define ATTR_ONMESSAGE ((DOM::emptyNamespace << 16) | 238)
#define ATTR_ONMOUSEDOWN ((DOM::emptyNamespace << 16) | 239)
#define ATTR_ONMOUSEMOVE ((DOM::emptyNamespace << 16) | 240)
#define ATTR_ONMOUSEOUT ((DOM::emptyNamespace << 16) | 241)
#define ATTR_ONMOUSEOVER ((DOM::emptyNamespace << 16) | 242)
#define ATTR_ONMOUSEUP ((DOM::emptyNamespace << 16) | 243)
#define ATTR_ONRESET ((DOM::emptyNamespace << 16) | 244)
#define ATTR_ONSELECT ((DOM::emptyNamespace << 16) | 245)
#define ATTR_ONSCROLL ((DOM::emptyNamespace << 16) | 246)
#define ATTR_ONSUBMIT ((DOM::emptyNamespace << 16) | 247)
#define ATTR_ONUNLOAD ((DOM::emptyNamespace << 16) | 248)
#define ATTR_PROFILE ((DOM::emptyNamespace << 16) | 249)
#define ATTR_PROMPT ((DOM::emptyNamespace << 16) | 250)
#define ATTR_SCHEME ((DOM::emptyNamespace << 16) | 251)
#define ATTR_SRC ((DOM::emptyNamespace << 16) | 252)
#define ATTR_STANDBY ((DOM::emptyNamespace << 16) | 253)
#define ATTR_SUMMARY ((DOM::emptyNamespace << 16) | 254)
#define ATTR_USEMAP ((DOM::emptyNamespace << 16) | 255)
#define ATTR_VALUE ((DOM::emptyNamespace << 16) | 256)
#define ATTR_XMLNS ((DOM::emptyNamespace << 16) | 257)
#define ID_ALTGLYPH 258
#define ID_ALTGLYPHDEF 259
#define ID_ALTGLYPHITEM 260
#define ID_ANIMATE 261
#define ATTR_ANIMATE ((DOM::emptyNamespace << 16) | 261)
#define ID_ANIMATECOLOR 262
#define ID_ANIMATEMOTION 263
#define ID_ANIMATETRANSFORM 264
#define ID_SET 265
#define ID_CIRCLE 266
#define ID_CLIPPATH 267
#define ID_COLOR_PROFILE 268
#define ID_CURSOR 269
#define ATTR_CURSOR ((DOM::emptyNamespace << 16) | 269)
#define ID_DEFINITION_SRC 270
#define ID_DEFS 271
#define ID_DESC 272
#define ID_ELLIPSE 273
#define ID_FEBLEND 274
#define ID_FECOLORMATRIX 275
#define ATTR_FECOLORMATRIX ((DOM::emptyNamespace << 16) | 275)
#define ID_FECOMPONENTTRANSFER 276
#define ID_FECOMPOSITE 277
#define ATTR_FECOMPOSITE ((DOM::emptyNamespace << 16) | 277)
#define ID_FECONVOLVEMATRIX 278
#define ID_FEDIFFUSELIGHTING 279
#define ID_FEDISPLACEMENTMAP 280
#define ID_FEDISTANTLIGHT 281
#define ID_FEFLOOD 282
#define ID_FEFUNCA 283
#define ID_FEFUNCB 284
#define ID_FEFUNCG 285
#define ID_FEFUNCR 286
#define ID_FEGAUSSIANBLUR 287
#define ATTR_FEGAUSSIANBLUR ((DOM::emptyNamespace << 16) | 287)
#define ID_FEIMAGE 288
#define ID_FEMERGE 289
#define ID_FEMERGENODE 290
#define ID_FEMORPHOLOGY 291
#define ATTR_FEMORPHOLOGY ((DOM::emptyNamespace << 16) | 291)
#define ID_FEOFFSET 292
#define ID_FEPOINTLIGHT 293
#define ID_FESPECULARLIGHTING 294
#define ID_FESPOTLIGHT 295
#define ID_FETILE 296
#define ATTR_FETILE ((DOM::emptyNamespace << 16) | 296)
#define ID_FETURBULENCE 297
#define ID_FILTER 298
#define ATTR_FILTER ((DOM::emptyNamespace << 16) | 298)
#define ID_FONT_FACE 299
#define ID_FONT_FACE_FORMAT 300
#define ID_FONT_FACE_NAME 301
#define ID_FONT_FACE_SRC 302
#define ID_FONT_FACE_URI 303
#define ID_FOREIGNOBJECT 304
#define ID_G 305
#define ID_GLYPH 306
#define ID_GLYPHREF 307
#define ATTR_GLYPHREF ((DOM::emptyNamespace << 16) | 307)
#define ID_HKERN 308
#define ID_LINE 309
#define ID_LINEARGRADIENT 310
#define ID_MARKER 311
#define ID_MASK 312
#define ATTR_MASK ((DOM::emptyNamespace << 16) | 312)
#define ID_METADATA 313
#define ID_MISSING_GLYPH 314
#define ID_MPATH 315
#define ID_PATH 316
#define ATTR_PATH ((DOM::emptyNamespace << 16) | 316)
#define ID_PATTERN 317
#define ID_POLYGON 318
#define ID_POLYLINE 319
#define ID_RADIALGRADIENT 320
#define ID_RECT 321
#define ID_STOP 322
#define ID_SVG 323
#define ID_SWITCH 324
#define ID_SYMBOL 325
#define ID_TEXTPATH 326
#define ID_TREF 327
#define ID_TSPAN 328
#define ID_USE 329
#define ID_VIEW 330
#define ID_VKERN 331
#define ATTR_ACCENT_HEIGHT ((DOM::emptyNamespace << 16) | 332)
#define ATTR_ACCUMULATE ((DOM::emptyNamespace << 16) | 333)
#define ATTR_ADDITIVE ((DOM::emptyNamespace << 16) | 334)
#define ATTR_ALIGNMENT_BASELINE ((DOM::emptyNamespace << 16) | 335)
#define ATTR_ALPHABETIC ((DOM::emptyNamespace << 16) | 336)
#define ATTR_AMPLITUDE ((DOM::emptyNamespace << 16) | 337)
#define ATTR_ARABIC_FORM ((DOM::emptyNamespace << 16) | 338)
#define ATTR_ASCENT ((DOM::emptyNamespace << 16) | 339)
#define ATTR_ATTRIBUTENAME ((DOM::emptyNamespace << 16) | 340)
#define ATTR_ATTRIBUTETYPE ((DOM::emptyNamespace << 16) | 341)
#define ATTR_AZIMUTH ((DOM::emptyNamespace << 16) | 342)
#define ATTR_BASEFREQUENCY ((DOM::emptyNamespace << 16) | 343)
#define ATTR_BASELINE_SHIFT ((DOM::emptyNamespace << 16) | 344)
#define ATTR_BASEPROFILE ((DOM::emptyNamespace << 16) | 345)
#define ATTR_BBOX ((DOM::emptyNamespace << 16) | 346)
#define ATTR_BEGIN ((DOM::emptyNamespace << 16) | 347)
#define ATTR_BIAS ((DOM::emptyNamespace << 16) | 348)
#define ATTR_BY ((DOM::emptyNamespace << 16) | 349)
#define ATTR_CALCMODE ((DOM::emptyNamespace << 16) | 350)
#define ATTR_CAP_HEIGHT ((DOM::emptyNamespace << 16) | 351)
#define ATTR_CLIP ((DOM::emptyNamespace << 16) | 352)
#define ATTR_CLIP_PATH ((DOM::emptyNamespace << 16) | 353)
#define ATTR_CLIP_RULE ((DOM::emptyNamespace << 16) | 354)
#define ATTR_CLIPPATHUNITS ((DOM::emptyNamespace << 16) | 355)
#define ATTR_COLOR_INTERPOLATION ((DOM::emptyNamespace << 16) | 356)
#define ATTR_COLOR_INTERPOLATION_FILTERS ((DOM::emptyNamespace << 16) | 357)
#define ATTR_COLOR_PROFILE ((DOM::emptyNamespace << 16) | 358)
#define ATTR_COLOR_RENDERING ((DOM::emptyNamespace << 16) | 359)
#define ATTR_CONTENTSCRIPTTYPE ((DOM::emptyNamespace << 16) | 360)
#define ATTR_CONTENTSTYLETYPE ((DOM::emptyNamespace << 16) | 361)
#define ATTR_CX ((DOM::emptyNamespace << 16) | 362)
#define ATTR_CY ((DOM::emptyNamespace << 16) | 363)
#define ATTR_D ((DOM::emptyNamespace << 16) | 364)
#define ATTR_DESCENT ((DOM::emptyNamespace << 16) | 365)
#define ATTR_DIFFUSECONSTANT ((DOM::emptyNamespace << 16) | 366)
#define ATTR_DISPLAY ((DOM::emptyNamespace << 16) | 367)
#define ATTR_DIVISOR ((DOM::emptyNamespace << 16) | 368)
#define ATTR_DOMINANT_BASELINE ((DOM::emptyNamespace << 16) | 369)
#define ATTR_DUR ((DOM::emptyNamespace << 16) | 370)
#define ATTR_DX ((DOM::emptyNamespace << 16) | 371)
#define ATTR_DY ((DOM::emptyNamespace << 16) | 372)
#define ATTR_EDGEMODE ((DOM::emptyNamespace << 16) | 373)
#define ATTR_ELEVATION ((DOM::emptyNamespace << 16) | 374)
#define ATTR_ENABLE_BACKGROUND ((DOM::emptyNamespace << 16) | 375)
#define ATTR_END ((DOM::emptyNamespace << 16) | 376)
#define ATTR_EXPONENT ((DOM::emptyNamespace << 16) | 377)
#define ATTR_EXTERNALRESOURCESREQUIRED ((DOM::emptyNamespace << 16) | 378)
#define ATTR_FILL ((DOM::emptyNamespace << 16) | 379)
#define ATTR_FILL_OPACITY ((DOM::emptyNamespace << 16) | 380)
#define ATTR_FILL_RULE ((DOM::emptyNamespace << 16) | 381)
#define ATTR_FILTERRES ((DOM::emptyNamespace << 16) | 382)
#define ATTR_FILTERUNITS ((DOM::emptyNamespace << 16) | 383)
#define ATTR_FLOOD_COLOR ((DOM::emptyNamespace << 16) | 384)
#define ATTR_FLOOD_OPACITY ((DOM::emptyNamespace << 16) | 385)
#define ATTR_FONT_FAMILY ((DOM::emptyNamespace << 16) | 386)
#define ATTR_FONT_SIZE ((DOM::emptyNamespace << 16) | 387)
#define ATTR_FONT_SIZE_ADJUST ((DOM::emptyNamespace << 16) | 388)
#define ATTR_FONT_STRETCH ((DOM::emptyNamespace << 16) | 389)
#define ATTR_FONT_STYLE ((DOM::emptyNamespace << 16) | 390)
#define ATTR_FONT_VARIANT ((DOM::emptyNamespace << 16) | 391)
#define ATTR_FONT_WEIGHT ((DOM::emptyNamespace << 16) | 392)
#define ATTR_FORMAT ((DOM::emptyNamespace << 16) | 393)
#define ATTR_FROM ((DOM::emptyNamespace << 16) | 394)
#define ATTR_FX ((DOM::emptyNamespace << 16) | 395)
#define ATTR_FY ((DOM::emptyNamespace << 16) | 396)
#define ATTR_G1 ((DOM::emptyNamespace << 16) | 397)
#define ATTR_G2 ((DOM::emptyNamespace << 16) | 398)
#define ATTR_GLYPH_NAME ((DOM::emptyNamespace << 16) | 399)
#define ATTR_GLYPH_ORIENTATION_HORIZONTAL ((DOM::emptyNamespace << 16) | 400)
#define ATTR_GLYPH_ORIENTATION_VERTICAL ((DOM::emptyNamespace << 16) | 401)
#define ATTR_GRADIENTTRANSFORM ((DOM::emptyNamespace << 16) | 402)
#define ATTR_GRADIENTUNITS ((DOM::emptyNamespace << 16) | 403)
#define ATTR_HANGING ((DOM::emptyNamespace << 16) | 404)
#define ATTR_HORIZ_ADV_X ((DOM::emptyNamespace << 16) | 405)
#define ATTR_HORIZ_ORIGIN_X ((DOM::emptyNamespace << 16) | 406)
#define ATTR_HORIZ_ORIGIN_Y ((DOM::emptyNamespace << 16) | 407)
#define ATTR_IDEOGRAPHIC ((DOM::emptyNamespace << 16) | 408)
#define ATTR_IMAGE_RENDERING ((DOM::emptyNamespace << 16) | 409)
#define ATTR_IN ((DOM::emptyNamespace << 16) | 410)
#define ATTR_IN2 ((DOM::emptyNamespace << 16) | 411)
#define ATTR_INTERCEPT ((DOM::emptyNamespace << 16) | 412)
#define ATTR_K ((DOM::emptyNamespace << 16) | 413)
#define ATTR_K1 ((DOM::emptyNamespace << 16) | 414)
#define ATTR_K2 ((DOM::emptyNamespace << 16) | 415)
#define ATTR_K3 ((DOM::emptyNamespace << 16) | 416)
#define ATTR_K4 ((DOM::emptyNamespace << 16) | 417)
#define ATTR_KERNELMATRIX ((DOM::emptyNamespace << 16) | 418)
#define ATTR_KERNELUNITLENGTH ((DOM::emptyNamespace << 16) | 419)
#define ATTR_KERNING ((DOM::emptyNamespace << 16) | 420)
#define ATTR_KEYPOINTS ((DOM::emptyNamespace << 16) | 421)
#define ATTR_KEYSPLINES ((DOM::emptyNamespace << 16) | 422)
#define ATTR_KEYTIMES ((DOM::emptyNamespace << 16) | 423)
#define ATTR_LENGTHADJUST ((DOM::emptyNamespace << 16) | 424)
#define ATTR_LETTER_SPACING ((DOM::emptyNamespace << 16) | 425)
#define ATTR_LIGHTING_COLOR ((DOM::emptyNamespace << 16) | 426)
#define ATTR_LIMITINGCONEANGLE ((DOM::emptyNamespace << 16) | 427)
#define ATTR_LOCAL ((DOM::emptyNamespace << 16) | 428)
#define ATTR_MARKER_END ((DOM::emptyNamespace << 16) | 429)
#define ATTR_MARKER_MID ((DOM::emptyNamespace << 16) | 430)
#define ATTR_MARKER_START ((DOM::emptyNamespace << 16) | 431)
#define ATTR_MARKERHEIGHT ((DOM::emptyNamespace << 16) | 432)
#define ATTR_MARKERUNITS ((DOM::emptyNamespace << 16) | 433)
#define ATTR_MARKERWIDTH ((DOM::emptyNamespace << 16) | 434)
#define ATTR_MASKCONTENTUNITS ((DOM::emptyNamespace << 16) | 435)
#define ATTR_MASKUNITS ((DOM::emptyNamespace << 16) | 436)
#define ATTR_MATHEMATICAL ((DOM::emptyNamespace << 16) | 437)
#define ATTR_MAX ((DOM::emptyNamespace << 16) | 438)
#define ATTR_MIN ((DOM::emptyNamespace << 16) | 439)
#define ATTR_MODE ((DOM::emptyNamespace << 16) | 440)
#define ATTR_NUMOCTAVES ((DOM::emptyNamespace << 16) | 441)
#define ATTR_OFFSET ((DOM::emptyNamespace << 16) | 442)
#define ATTR_ONACTIVATE ((DOM::emptyNamespace << 16) | 443)
#define ATTR_ONBEGIN ((DOM::emptyNamespace << 16) | 444)
#define ATTR_ONEND ((DOM::emptyNamespace << 16) | 445)
#define ATTR_ONFOCUSIN ((DOM::emptyNamespace << 16) | 446)
#define ATTR_ONFOCUSOUT ((DOM::emptyNamespace << 16) | 447)
#define ATTR_ONREPEAT ((DOM::emptyNamespace << 16) | 448)
#define ATTR_ONZOOM ((DOM::emptyNamespace << 16) | 449)
#define ATTR_OPACITY ((DOM::emptyNamespace << 16) | 450)
#define ATTR_OPERATOR ((DOM::emptyNamespace << 16) | 451)
#define ATTR_ORDER ((DOM::emptyNamespace << 16) | 452)
#define ATTR_ORIENT ((DOM::emptyNamespace << 16) | 453)
#define ATTR_ORIENTATION ((DOM::emptyNamespace << 16) | 454)
#define ATTR_ORIGIN ((DOM::emptyNamespace << 16) | 455)
#define ATTR_OVERFLOW ((DOM::emptyNamespace << 16) | 456)
#define ATTR_OVERLINE_POSITION ((DOM::emptyNamespace << 16) | 457)
#define ATTR_OVERLINE_THICKNESS ((DOM::emptyNamespace << 16) | 458)
#define ATTR_PANOSE_1 ((DOM::emptyNamespace << 16) | 459)
#define ATTR_PATHLENGTH ((DOM::emptyNamespace << 16) | 460)
#define ATTR_PATTERNCONTENTUNITS ((DOM::emptyNamespace << 16) | 461)
#define ATTR_PATTERNTRANSFORM ((DOM::emptyNamespace << 16) | 462)
#define ATTR_PATTERNUNITS ((DOM::emptyNamespace << 16) | 463)
#define ATTR_POINTER_EVENTS ((DOM::emptyNamespace << 16) | 464)
#define ATTR_POINTS ((DOM::emptyNamespace << 16) | 465)
#define ATTR_POINTSATX ((DOM::emptyNamespace << 16) | 466)
#define ATTR_POINTSATY ((DOM::emptyNamespace << 16) | 467)
#define ATTR_POINTSATZ ((DOM::emptyNamespace << 16) | 468)
#define ATTR_PRESERVEALPHA ((DOM::emptyNamespace << 16) | 469)
#define ATTR_PRESERVEASPECTRATIO ((DOM::emptyNamespace << 16) | 470)
#define ATTR_PRIMITIVEUNITS ((DOM::emptyNamespace << 16) | 471)
#define ATTR_R ((DOM::emptyNamespace << 16) | 472)
#define ATTR_RADIUS ((DOM::emptyNamespace << 16) | 473)
#define ATTR_REFX ((DOM::emptyNamespace << 16) | 474)
#define ATTR_REFY ((DOM::emptyNamespace << 16) | 475)
#define ATTR_RENDERING_INTENT ((DOM::emptyNamespace << 16) | 476)
#define ATTR_REPEATCOUNT ((DOM::emptyNamespace << 16) | 477)
#define ATTR_REPEATDUR ((DOM::emptyNamespace << 16) | 478)
#define ATTR_REQUIREDEXTENSIONS ((DOM::emptyNamespace << 16) | 479)
#define ATTR_REQUIREDFEATURES ((DOM::emptyNamespace << 16) | 480)
#define ATTR_RESTART ((DOM::emptyNamespace << 16) | 481)
#define ATTR_RESULT ((DOM::emptyNamespace << 16) | 482)
#define ATTR_ROTATE ((DOM::emptyNamespace << 16) | 483)
#define ATTR_RX ((DOM::emptyNamespace << 16) | 484)
#define ATTR_RY ((DOM::emptyNamespace << 16) | 485)
#define ATTR_SCALE ((DOM::emptyNamespace << 16) | 486)
#define ATTR_SEED ((DOM::emptyNamespace << 16) | 487)
#define ATTR_SHAPE_RENDERING ((DOM::emptyNamespace << 16) | 488)
#define ATTR_SLOPE ((DOM::emptyNamespace << 16) | 489)
#define ATTR_SPACING ((DOM::emptyNamespace << 16) | 490)
#define ATTR_SPECULARCONSTANT ((DOM::emptyNamespace << 16) | 491)
#define ATTR_SPECULAREXPONENT ((DOM::emptyNamespace << 16) | 492)
#define ATTR_SPREADMETHOD ((DOM::emptyNamespace << 16) | 493)
#define ATTR_STARTOFFSET ((DOM::emptyNamespace << 16) | 494)
#define ATTR_STDDEVIATION ((DOM::emptyNamespace << 16) | 495)
#define ATTR_STEMH ((DOM::emptyNamespace << 16) | 496)
#define ATTR_STEMV ((DOM::emptyNamespace << 16) | 497)
#define ATTR_STITCHTILES ((DOM::emptyNamespace << 16) | 498)
#define ATTR_STOP_COLOR ((DOM::emptyNamespace << 16) | 499)
#define ATTR_STOP_OPACITY ((DOM::emptyNamespace << 16) | 500)
#define ATTR_STRIKETHROUGH_POSITION ((DOM::emptyNamespace << 16) | 501)
#define ATTR_STRIKETHROUGH_THICKNESS ((DOM::emptyNamespace << 16) | 502)
#define ATTR_STROKE ((DOM::emptyNamespace << 16) | 503)
#define ATTR_STROKE_DASHARRAY ((DOM::emptyNamespace << 16) | 504)
#define ATTR_STROKE_DASHOFFSET ((DOM::emptyNamespace << 16) | 505)
#define ATTR_STROKE_LINECAP ((DOM::emptyNamespace << 16) | 506)
#define ATTR_STROKE_LINEJOIN ((DOM::emptyNamespace << 16) | 507)
#define ATTR_STROKE_MITERLIMIT ((DOM::emptyNamespace << 16) | 508)
#define ATTR_STROKE_OPACITY ((DOM::emptyNamespace << 16) | 509)
#define ATTR_STROKE_WIDTH ((DOM::emptyNamespace << 16) | 510)
#define ATTR_SURFACESCALE ((DOM::emptyNamespace << 16) | 511)
#define ATTR_SYSTEMLANGUAGE ((DOM::emptyNamespace << 16) | 512)
#define ATTR_TABLEVALUES ((DOM::emptyNamespace << 16) | 513)
#define ATTR_TARGETX ((DOM::emptyNamespace << 16) | 514)
#define ATTR_TARGETY ((DOM::emptyNamespace << 16) | 515)
#define ATTR_TEXT_ANCHOR ((DOM::emptyNamespace << 16) | 516)
#define ATTR_TEXT_DECORATION ((DOM::emptyNamespace << 16) | 517)
#define ATTR_TEXT_RENDERING ((DOM::emptyNamespace << 16) | 518)
#define ATTR_TEXTLENGTH ((DOM::emptyNamespace << 16) | 519)
#define ATTR_TO ((DOM::emptyNamespace << 16) | 520)
#define ATTR_TRANSFORM ((DOM::emptyNamespace << 16) | 521)
#define ATTR_U1 ((DOM::emptyNamespace << 16) | 522)
#define ATTR_U2 ((DOM::emptyNamespace << 16) | 523)
#define ATTR_UNDERLINE_POSITION ((DOM::emptyNamespace << 16) | 524)
#define ATTR_UNDERLINE_THICKNESS ((DOM::emptyNamespace << 16) | 525)
#define ATTR_UNICODE ((DOM::emptyNamespace << 16) | 526)
#define ATTR_UNICODE_BIDI ((DOM::emptyNamespace << 16) | 527)
#define ATTR_UNICODE_RANGE ((DOM::emptyNamespace << 16) | 528)
#define ATTR_UNITS_PER_EM ((DOM::emptyNamespace << 16) | 529)
#define ATTR_V_ALPHABETIC ((DOM::emptyNamespace << 16) | 530)
#define ATTR_V_HANGING ((DOM::emptyNamespace << 16) | 531)
#define ATTR_V_IDEOGRAPHIC ((DOM::emptyNamespace << 16) | 532)
#define ATTR_V_MATHEMATICAL ((DOM::emptyNamespace << 16) | 533)
#define ATTR_VALUES ((DOM::emptyNamespace << 16) | 534)
#define ATTR_VERT_ADV_Y ((DOM::emptyNamespace << 16) | 535)
#define ATTR_VERT_ORIGIN_X ((DOM::emptyNamespace << 16) | 536)
#define ATTR_VERT_ORIGIN_Y ((DOM::emptyNamespace << 16) | 537)
#define ATTR_VIEWBOX ((DOM::emptyNamespace << 16) | 538)
#define ATTR_VIEWTARGET ((DOM::emptyNamespace << 16) | 539)
#define ATTR_WIDTHS ((DOM::emptyNamespace << 16) | 540)
#define ATTR_WORD_SPACING ((DOM::emptyNamespace << 16) | 541)
#define ATTR_WRITING_MODE ((DOM::emptyNamespace << 16) | 542)
#define ATTR_X ((DOM::emptyNamespace << 16) | 543)
#define ATTR_X_HEIGHT ((DOM::emptyNamespace << 16) | 544)
#define ATTR_X1 ((DOM::emptyNamespace << 16) | 545)
#define ATTR_X2 ((DOM::emptyNamespace << 16) | 546)
#define ATTR_XCHANNELSELECTOR ((DOM::emptyNamespace << 16) | 547)
#define ATTR_Y ((DOM::emptyNamespace << 16) | 548)
#define ATTR_Y1 ((DOM::emptyNamespace << 16) | 549)
#define ATTR_Y2 ((DOM::emptyNamespace << 16) | 550)
#define ATTR_YCHANNELSELECTOR ((DOM::emptyNamespace << 16) | 551)
#define ATTR_Z ((DOM::emptyNamespace << 16) | 552)
#define ATTR_ZOOMANDPAN ((DOM::emptyNamespace << 16) | 553)
#define ATTR_XLINK_ACTUATE ((DOM::xlinkNamespace << 16) | 554)
#define ATTR_XLINK_ARCROLE ((DOM::xlinkNamespace << 16) | 555)
#define ATTR_XLINK_ROLE ((DOM::xlinkNamespace << 16) | 556)
#define ATTR_XLINK_SHOW ((DOM::xlinkNamespace << 16) | 557)
#define ATTR_XML_SPACE ((DOM::xmlNamespace << 16) | 558)
#define ID_LAST_TAG 110
#define ID_CLOSE_TAG 16384
#define ATTR_LAST_ATTR 257
#define ATTR_LAST_CI_ATTR 211

#define caseSensitiveAttr(id) (((localNamePart(id)) > ATTR_LAST_CI_ATTR || (id) == ATTR_ABBR || (id) == ATTR_CITE || (id) == ATTR_CODE || (id) == ATTR_LABEL || (id) == ATTR_OBJECT || (id) == ATTR_TITLE))

namespace khtml
{

class NamespaceFactory
{
public:
    static IDTable<NamespaceFactory> *idTable()
    {
        return s_idTable;
    }
    static IDTable<NamespaceFactory> *initIdTable();
protected:
    static IDTable<NamespaceFactory> *s_idTable;
};

class LocalNameFactory
{
public:
    static IDTable<LocalNameFactory> *idTable()
    {
        return s_idTable;
    }
    static IDTable<LocalNameFactory> *initIdTable();
protected:
    static IDTable<LocalNameFactory> *s_idTable;
};

class PrefixFactory
{
public:
    static IDTable<PrefixFactory> *idTable()
    {
        return s_idTable;
    }
    static IDTable<PrefixFactory> *initIdTable();
protected:
    static IDTable<PrefixFactory> *s_idTable;
};

}

namespace DOM
{

typedef khtml::IDString<khtml::NamespaceFactory> NamespaceName;
typedef khtml::IDString<khtml::LocalNameFactory> LocalName;
typedef khtml::IDString<khtml::PrefixFactory> PrefixName;
extern PrefixName emptyPrefixName;
extern LocalName emptyLocalName;
extern NamespaceName emptyNamespaceName;

QString getPrintableName(int id);

}

#endif