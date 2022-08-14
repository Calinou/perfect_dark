//
// Ravine (MP)
//

#include "stagesetup.h"

s32 intro[];
u32 props[];
struct path paths[];
struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	tag(0x00, 1)
	lift(0x0100, MODEL_RAVINELIFT, PAD_AREC_00BC, OBJFLAG_00000008 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_INVINCIBLE | OBJFLAG_UNCOLLECTABLE | OBJFLAG_00400000 | OBJFLAG_01000000 | OBJFLAG_CANNOT_ACTIVATE, OBJFLAG2_00000100 | OBJFLAG2_00000200 | OBJFLAG2_IMMUNETOGUNFIRE | OBJFLAG2_BULLETPROOF | OBJFLAG2_00200000, 0, 1000, 0x00bc, 0x00bb, 0x00ba, -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000071c, 0x0010aaaa, 0x00000000)
	weapon(0x0200, MODEL_ROOFGUN, PAD_AREC_00BD, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00C7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00C8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0200, 0x0000, PAD_AREC_00BE, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00C9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CA, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0200, 0x0000, PAD_AREC_00BF, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CB, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CC, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, PAD_AREC_00C0, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CD, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CE, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, PAD_AREC_00C1, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00CF, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D0, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0133, 0x0000, PAD_AREC_00C2, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D1, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_AREC_00C3, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D3, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D4, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_AREC_00C4, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D5, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D6, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_AREC_00C5, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_AREC_00C6, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00D9, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0099, MODEL_MULTI_AMMO_CRATE, PAD_AREC_00DA, OBJFLAG_00000001, 0, 0, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00DB, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00DC, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00DD, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00DE, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00DF, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E0, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E1, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E2, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E3, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E4, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E5, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E6, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E7, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E8, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00E9, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00EA, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00EB, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00EC, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00ED, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	stdobject(0x0100, MODEL_A51_CRATE2, PAD_AREC_00EE, OBJFLAG_00000001 | OBJFLAG_00000020 | OBJFLAG_00000040 | OBJFLAG_00000080 | OBJFLAG_00000100 | OBJFLAG_INVINCIBLE, 0, OBJFLAG3_PUSHABLE, 1000)
	endprops
};

s32 intro[] = {
	spawn(PAD_AREC_00B0)
	spawn(PAD_AREC_00B1)
	spawn(PAD_AREC_00B2)
	spawn(PAD_AREC_00B3)
	spawn(PAD_AREC_00B4)
	spawn(PAD_AREC_00B5)
	spawn(PAD_AREC_00B6)
	spawn(PAD_AREC_00B7)
	spawn(PAD_AREC_00B8)
	spawn(PAD_AREC_00B9)
	hill(0x0066)
	hill(0x008d)
	hill(0x0071)
	hill(0x007c)
	hill(0x005c)
	case(0, 0x009a)
	case_respawn(0, 0x0094)
	case_respawn(0, 0x0096)
	case_respawn(0, 0x0097)
	case_respawn(0, 0x0099)
	case_respawn(0, 0x0098)
	case_respawn(0, 0x0095)
	case(1, 0x00a1)
	case_respawn(1, 0x009b)
	case_respawn(1, 0x009c)
	case_respawn(1, 0x009d)
	case_respawn(1, 0x009e)
	case_respawn(1, 0x009f)
	case_respawn(1, 0x00a0)
	case(2, 0x00a8)
	case_respawn(2, 0x00a2)
	case_respawn(2, 0x00a3)
	case_respawn(2, 0x00a4)
	case_respawn(2, 0x00a5)
	case_respawn(2, 0x00a6)
	case_respawn(2, 0x00a7)
	case(3, 0x00af)
	case_respawn(3, 0x00a9)
	case_respawn(3, 0x00aa)
	case_respawn(3, 0x00ab)
	case_respawn(3, 0x00ac)
	case_respawn(3, 0x00ad)
	case_respawn(3, 0x00ae)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 func1001_start_lift[] = {
	activate_lift(1, 0x00)
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

u8 func1000_1b30[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_1b30,       0x1000 },
	{ func1001_start_lift, 0x1001 },
	{ NULL, 0 },
};





