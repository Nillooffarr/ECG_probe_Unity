#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 963, 0,  7 } /*tableIndex: 0 */,
	{ 964, 1,  9 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"tileData",
	"tileAnimationData",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[35] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x06000003 UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 1 } /* 0x06000014 UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 1, 1 } /* 0x06000016 UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[184] = 
{
	{ 28777, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 28777, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 28777, 1, 11, 11, 9, 28, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 28777, 1, 12, 12, 9, 10, 7, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 28777, 1, 13, 13, 9, 10, 8, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 28777, 1, 11, 11, 9, 28, 1, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 28778, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 28778, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 28778, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 28778, 1, 60, 60, 13, 45, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 28778, 1, 61, 61, 9, 10, 14, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 28778, 1, 60, 60, 13, 45, 8, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 28779, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 28779, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 28779, 1, 70, 70, 9, 10, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 28779, 1, 71, 71, 13, 41, 1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 28779, 1, 72, 72, 13, 31, 11, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 28779, 1, 73, 73, 9, 10, 19, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 28779, 1, 71, 71, 13, 41, 1, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 28780, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 28780, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 28780, 2, 15, 15, 36, 37, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 28780, 2, 15, 15, 38, 54, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 28780, 2, 15, 15, 55, 56, 10, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 28781, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 28781, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 28781, 2, 15, 15, 61, 62, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 28781, 2, 15, 15, 63, 80, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 28781, 2, 15, 15, 81, 82, 8, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 28782, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 28782, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 28782, 2, 16, 16, 34, 35, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 28782, 2, 16, 16, 36, 51, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 28782, 2, 16, 16, 52, 53, 10, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 28783, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 28783, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 28783, 2, 16, 16, 58, 59, 0, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 28783, 2, 16, 16, 60, 76, 1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 28783, 2, 16, 16, 77, 78, 8, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 28784, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 28784, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 28784, 2, 17, 17, 42, 43, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 28784, 2, 17, 17, 44, 63, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 28784, 2, 17, 17, 64, 65, 10, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 28785, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 28785, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 28785, 2, 17, 17, 70, 71, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 28785, 2, 17, 17, 72, 92, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 28785, 2, 17, 17, 93, 94, 8, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 28786, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 28786, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 28786, 2, 18, 18, 44, 45, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 28786, 2, 18, 18, 46, 75, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 28786, 2, 18, 18, 76, 77, 10, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 28787, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 28787, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 28787, 2, 18, 18, 82, 83, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 28787, 2, 18, 18, 84, 114, 1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 28787, 2, 18, 18, 115, 116, 8, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 28788, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 28788, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 28788, 2, 19, 19, 38, 39, 0, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 28788, 2, 19, 19, 40, 55, 1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 28788, 2, 19, 19, 56, 57, 10, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 28789, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 28789, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 28789, 2, 19, 19, 62, 63, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 28789, 2, 19, 19, 64, 80, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 28789, 2, 19, 19, 81, 82, 8, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 28790, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 28790, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 28790, 2, 20, 20, 48, 49, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 28790, 2, 20, 20, 50, 72, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 28790, 2, 20, 20, 73, 74, 10, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 28791, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 28791, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 28791, 2, 20, 20, 79, 80, 0, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 28791, 2, 20, 20, 81, 104, 1, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 28791, 2, 20, 20, 105, 106, 8, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 28792, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 28792, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 28792, 2, 36, 36, 9, 10, 0, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 28792, 2, 37, 37, 13, 40, 1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 28792, 2, 38, 38, 13, 38, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 28792, 2, 39, 39, 13, 46, 27, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 28792, 2, 40, 40, 13, 57, 40, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 28792, 2, 41, 41, 13, 38, 53, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 28792, 2, 42, 42, 13, 52, 66, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 28792, 2, 43, 43, 9, 10, 79, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 28792, 2, 37, 37, 13, 40, 8, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 28792, 2, 38, 38, 13, 38, 21, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 28792, 2, 39, 39, 13, 46, 34, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 28792, 2, 40, 40, 13, 57, 47, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 28792, 2, 41, 41, 13, 38, 60, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 28792, 2, 42, 42, 13, 52, 73, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 28793, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 28793, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 28793, 2, 25, 25, 9, 45, 0, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 28793, 2, 27, 27, 9, 60, 11, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 28793, 2, 31, 31, 9, 57, 22, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 28793, 2, 33, 33, 9, 67, 29, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 28793, 2, 25, 25, 9, 45, 1, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 28793, 2, 27, 27, 9, 60, 12, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 28793, 2, 33, 33, 9, 67, 37, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 28794, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 28794, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 28794, 3, 10, 10, 80, 81, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 28794, 3, 10, 10, 82, 112, 1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 28794, 3, 10, 10, 113, 114, 9, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 28794, 3, 10, 10, 82, 112, 3, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 28795, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 28795, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 28795, 3, 13, 13, 103, 104, 0, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 28795, 3, 13, 13, 104, 105, 1, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 28796, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 28796, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 28796, 3, 15, 15, 9, 10, 0, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 28796, 3, 16, 16, 13, 48, 1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 28796, 3, 17, 17, 13, 58, 9, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 28796, 3, 18, 18, 13, 29, 20, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 28796, 3, 19, 19, 9, 10, 24, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 28796, 3, 17, 17, 13, 58, 14, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 28797, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 28797, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 28797, 3, 22, 22, 130, 131, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 28797, 3, 22, 22, 132, 145, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 28797, 3, 22, 22, 146, 147, 5, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 28798, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 28798, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 28798, 3, 24, 24, 9, 10, 0, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 28798, 3, 25, 25, 13, 75, 1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 28798, 3, 26, 26, 13, 76, 9, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 28798, 3, 27, 27, 13, 38, 20, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 28798, 3, 28, 28, 9, 10, 24, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 28798, 3, 26, 26, 13, 76, 14, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 28799, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 28799, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 28799, 3, 31, 31, 91, 92, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 28799, 3, 31, 31, 93, 106, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 28799, 3, 31, 31, 107, 108, 5, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 28803, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 28803, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 28803, 4, 390, 390, 9, 10, 0, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 28803, 4, 391, 391, 13, 75, 1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 28803, 4, 392, 392, 9, 10, 19, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 28803, 4, 391, 391, 13, 75, 8, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 28803, 4, 391, 391, 13, 75, 13, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 28804, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 28804, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 28804, 4, 396, 396, 9, 10, 0, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 28804, 4, 397, 397, 13, 75, 1, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 28804, 4, 398, 398, 9, 10, 19, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 28804, 4, 397, 397, 13, 75, 8, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 28804, 4, 397, 397, 13, 75, 13, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 28806, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 28806, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 28806, 4, 408, 408, 61, 62, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 28806, 4, 408, 408, 63, 80, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 28806, 4, 408, 408, 81, 82, 8, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 28807, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 28807, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 28807, 4, 409, 409, 58, 59, 0, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 28807, 4, 409, 409, 60, 76, 1, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 28807, 4, 409, 409, 77, 78, 8, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 28808, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 28808, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 28808, 4, 410, 410, 70, 71, 0, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 28808, 4, 410, 410, 72, 92, 1, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 28808, 4, 410, 410, 93, 94, 8, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 28809, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 28809, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 28809, 4, 411, 411, 73, 74, 0, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 28809, 4, 411, 411, 75, 96, 1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 28809, 4, 411, 411, 97, 98, 8, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 28810, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 28810, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 28810, 4, 412, 412, 62, 63, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 28810, 4, 412, 412, 64, 80, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 28810, 4, 412, 412, 81, 82, 8, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 28811, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 28811, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 28811, 4, 413, 413, 84, 85, 0, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 28811, 4, 413, 413, 86, 109, 1, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 28811, 4, 413, 413, 110, 111, 8, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\ITilemap.cs", { 125, 220, 89, 195, 185, 32, 42, 180, 27, 122, 231, 170, 98, 201, 223, 180} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\Tile.cs", { 184, 106, 228, 74, 189, 218, 125, 11, 50, 36, 108, 79, 162, 143, 61, 203} }, //2 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\TileBase.cs", { 17, 109, 104, 6, 15, 235, 72, 118, 98, 234, 224, 26, 128, 5, 42, 181} }, //3 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\ScriptBindings\\Tilemap.bindings.cs", { 28, 93, 163, 65, 106, 223, 49, 2, 185, 201, 62, 231, 198, 175, 211, 219} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 4537, 1 },
	{ 4538, 2 },
	{ 4540, 3 },
	{ 4543, 4 },
	{ 4544, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 21 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 26 },
	{ 0, 7 },
	{ 0, 26 },
	{ 0, 7 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[35] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 21, 0, 1 } /* UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 12, 1, 1 } /* UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 12, 2, 1 } /* UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 12, 3, 1 } /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 12, 4, 1 } /* UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 12, 5, 1 } /* UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 12, 6, 1 } /* UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 26, 7, 1 } /* UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 8, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 26, 9, 1 } /* UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 10, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	184,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_TilemapModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
