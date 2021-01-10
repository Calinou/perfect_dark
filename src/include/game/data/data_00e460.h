#ifndef IN_GAME_DATA_00E460_H
#define IN_GAME_DATA_00E460_H
#include <ultra64.h>
#include "types.h"

extern u32 var80068440;
extern u32 var8006844c;
extern u32 var8006845c;
extern u8 g_ChrTeamIds[MAX_TEAMS];
extern u32 var8006846c;
extern struct coord var80068fe0;
extern s16 g_GuardQuipBank[][4];
extern s16 g_SpecialQuipBank[][4];
extern s16 g_QuipTexts[][4];
extern s16 g_SkedarQuipBank[][4];
extern s16 g_MaianQuipBank[][4];
extern s16 g_CiGreetingQuips[][3];
extern s16 g_CiMainQuips[][3];
extern s16 g_CiAnnoyedQuips[][3];
extern s16 g_CiThanksQuips[];
extern u16 g_InvestigationPadMap[40];
extern u32 var80069780;
extern u32 var8006978c;
extern u16 g_PresetAnimations[15];
extern u8 var80069860[8];
extern struct coord var80069868;
extern struct coord var80069874;
extern u32 var800698c0;
extern struct audiohandle *g_AlarmAudioHandle;
extern f32 g_AlarmSpeakerWeight;
extern f32 g_AlarmSpeakerDirection;
extern f32 var800698e4;
extern s32 var800698e8;
extern f32 var800698ec[3];
extern u32 var800698f8;
extern f32 var800698fc;
extern struct audiohandle *var80069900;
extern u32 var80069910;
extern u32 var80069918;
extern struct linkliftdoorobj *g_LiftDoors;
extern struct padlockeddoorobj *g_PadlockedDoors;
extern struct safeitemobj *g_SafeItems;
extern struct linksceneryobj *g_LinkedScenery;
extern struct blockedpathobj *g_BlockedPaths;
extern u32 var8006993c;
extern f32 g_AmmoMultiplier;
extern struct padeffectobj *var80069960;
extern s32 var80069964;
extern struct autogunobj *g_ThrownLaptops;
extern s32 g_MaxThrownLaptops;
extern u32 var80069974;
extern u32 var80069978;
extern u32 var8006997c;
extern u32 var80069980;
extern u32 var800699dc;
extern u32 var800699e8;
extern u32 var800699f4;
extern u32 var800699fc;
extern u32 var80069a08;
extern struct prop *g_Lifts[MAX_LIFTS];
extern u32 var80069a70;
extern u32 var80069b74;
extern u32 var80069b80;
extern u32 var80069b8c;
extern u32 var80069b98;
extern u32 var80069ba4;
extern u32 var80069bb0;
extern u32 var80069bbc;
extern u32 var80069bc8;
extern u32 var80069bcc;
extern u32 var80069bd0;
extern u32 g_DebugDoor;
extern u32 var80069bd8;
extern u32 var80069c48;
extern u32 var80069cc4;
extern u32 var80069d04;
extern u32 var80069d44;
extern u32 var80069d84;
extern u32 var80069d90;
extern u32 var80069e0c;
extern u32 var80069ee0;
extern u32 var80069f3c;
extern u32 var80069fb8;
extern u32 var8006a034;
extern u32 var8006a0d0;
extern u32 var8006a160;
extern u32 var8006a18c;
extern u32 var8006a1b8;
extern u32 var8006a1e4;
extern u32 var8006a230;
extern u32 var8006a27c;
extern u32 var8006a2b4;
extern u32 var8006a2ec;
extern u32 var8006a324;
extern u32 var8006a344;
extern u32 var8006a364;
extern u32 var8006a384;
extern u32 var8006a3a4;
extern u32 var8006a3c4;
extern u32 var8006a3e4;
extern u32 var8006a404;
extern u32 var8006a4bc;
extern u32 var8006a6bc;
extern u32 var8006a6dc;
extern u32 var8006a6fc;
extern u32 var8006a728;
extern u32 var8006a754;
extern u32 var8006a774;
extern u32 var8006a7a0;
extern u32 var8006a7cc;
extern u32 var8006a7f8;
extern u32 var8006a818;
extern u32 var8006a894;
extern u32 var8006a910;
extern u32 var8006a930;
extern u32 var8006a950;
extern u32 var8006a970;
extern u32 var8006aa28;
extern u32 var8006aa48;
extern u32 var8006aa68;
extern u32 var8006aa88;
extern u32 var8006aaa0;
extern u32 var8006aae4;
extern u32 var8006ab70;
extern u32 var8006abb0;
extern u32 var8006abc0;
extern u32 var8006abcc;
extern u32 var8006abd8;
extern u32 var8006abe4;
extern u32 var8006abf0;
extern u32 var8006abfc;
extern u32 var8006ac08;
extern u8 g_CiTaggedTerminals[8];
extern u32 var8006ac6c;
extern u32 var8006acc8;
extern u32 var8006ad24;
extern u32 var8006ad8c;
extern u32 var8006ad90;
extern u32 var8006adf8;
extern struct audiochannel *g_AudioChannels;
extern u32 g_AudioPrevUuid;
extern s8 var8006ae18;
extern s8 var8006ae1c;
extern s8 var8006ae20;
extern s8 var8006ae24;
extern s8 var8006ae28;
extern u32 var8006ae3c;
extern u32 var8006ae5c;
extern s32 g_ObjectiveLastIndex;
extern bool g_ObjectiveChecksDisabled;
extern u32 var8006ae80;
extern u16 var8006ae90[];
extern u16 var8006af0c[];
extern u16 var8006af8c[];
extern u32 var8006afa0;

#endif
