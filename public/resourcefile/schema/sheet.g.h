//-----------------------------------------------------------------------------
// Autogenerated by schema compiler, compiled May 25 2009 11:22:37
// Do not hand-edit or check in this file!!
//-----------------------------------------------------------------------------

#ifndef SHEET_G_H
#define SHEET_G_H

#ifdef COMPILER_MSVC
#pragma once
#endif

#include "resourcefile/schema.h"
#include "rendersystem/schema/texture.g.h"

//-----------------------------------------------------------------------------
// Forward declarations
//-----------------------------------------------------------------------------
struct Sheet_t;
struct SheetSequence_t;
struct SheetSequenceFrame_t;
struct SheetFrameImage_t;


//-----------------------------------------------------------------------------
// Structure definitions
//-----------------------------------------------------------------------------
schema struct Sheet_t
{
	CResourceReference< TextureBits_t > m_hTexture;
	CResourceArray< SheetSequence_t > m_Sequences;
};

class CSheet;	// Forward declaration of associated runtime class
DEFINE_RESOURCE_CLASS_TYPE( Sheet_t, CSheet, RESOURCE_TYPE_SHEET );
typedef const ResourceBinding_t< CSheet > *HSheet;
typedef CStrongHandle< CSheet > HSheetStrong;
#define SHEET_HANDLE_INVALID ( (HSheet)0 )

valveschema struct SheetSequence_t
{
	uint32           m_nId;
	bool             m_bClamp;
	CResourceArray< SheetSequenceFrame_t > m_Frames;
	float32          m_flTotalTime;
};

valveschema struct SheetSequenceFrame_t
{
	float32          m_flDisplayTime;
	CResourceArray< SheetFrameImage_t > m_Images;
};

valveschema struct SheetFrameImage_t
{
	Vector2D         uv[2];
};


#endif // SHEET_G_H
