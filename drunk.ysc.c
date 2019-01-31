#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = 4294967295;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = 4294967295;
	iLocal_45 = 4294967295;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = 4294967295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_157();
	}
	Local_43 = { ScriptParam_55 };
	func_156();
	func_155();
	func_150(iLocal_44, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_149();
	func_145();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_144(iLocal_44);
		func_143();
		func_141();
		func_134();
		func_150(iLocal_44, 0, 0);
		func_156();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()//Position - 0x127
{
	if ((!func_4() && !func_3()) && Global_255F10)
	{
		Global_440000.f_1FEDE = 0;
	}
}

bool func_3()//Position - 0x155
{
	return Global_255C02.f_244;
}

bool func_4()//Position - 0x164
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

void func_5()//Position - 0x17B
{
	Global_255C02.f_285 = 1;
}

var func_6()//Position - 0x18B
{
	return Global_255C02.f_270;
}

bool func_7()//Position - 0x19A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

bool func_8()//Position - 0x1AE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255F11.f_1.f_AFA, 3);
}

void func_9()//Position - 0x1C4
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		func_157();
	}
	if (bLocal_46)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			func_157();
		}
	}
	func_133();
	bVar0 = true;
	switch (vLocal_52.x)
	{
		case 4:
			func_132();
			return;
		
		case 5:
			func_129();
			return;
		
		case 6:
			func_127();
			return;
		
		case 7:
			func_126();
			return;
		
		case 8:
			func_125();
			return;
		
		case 9:
			func_123();
			return;
		
		case 10:
			func_122();
			func_119();
			func_118();
			return;
		
		case 11:
			func_117();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 12)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 1:
			if (!func_116())
			{
				func_111();
				func_119();
			}
			break;
		
		case 2:
			func_109();
			break;
		
		case 12:
			func_96();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()//Position - 0x2DF
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_197632.f_CF2, 27))
	{
		PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1962EB = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_95(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(AUDIO::_0x0626A247D2405330(), 0, 1);
		}
		while ((ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0)) && NETWORK::_0x422F32CC7E56ABAD(AUDIO::_0x0626A247D2405330()))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_197632.f_CF2), 27);
		func_85(CAM::_0xDC9DA9E8789F5246(), 0, 57344);
		Global_24B2CE.f_A67 = 1;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			Global_24B2CE.f_A68 = 1;
		}
		else
		{
			Global_24B2CE.f_A68 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
		}
		if (func_81(1))
		{
			func_68(0);
		}
		func_66(1);
		func_157();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_1E = 1148829696;
	Var2.f_1F = 1148829696;
	Var2.f_34 = 1148829696;
	iVar3 = 7;
	switch (func_61())
	{
		case 0:
			if (func_59() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_58(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_57(4))
			{
				if (func_58(58))
				{
					iVar3 = 4;
				}
				if (func_58(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_56())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = 2423432979;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 2423432979;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = 2423432979;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = 2423432979;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 2423432979;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = 2423432979;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = 2423432979;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var2.f_B), "", 16);
	Var2.f_F = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_157();
}

void func_11(int iParam0, int iParam1)//Position - 0x71A
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_CAD3[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_CAD3[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)//Position - 0x777
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, false);
	ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_10);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_51(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_21 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_10);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_10))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_48();
	if (!func_47(uParam1->f_16, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 0, 0, 0, 0, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 1, 0, 0, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
		WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
	}
	unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, false);
	unk_0xDA1FC589059DA9F2();
	PED::_0x4759CC730F947C81();
	func_45();
	while (func_44())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iVar4, 0);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != 2423432979)
		{
			iVar6 |= 2;
		}
		func_42(AUDIO::_0x0626A247D2405330(), uParam1->f_12);
		BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::_0x129466ED55140F8D(AUDIO::_0x0626A247D2405330(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(CAM::_0xDC9DA9E8789F5246(), 1);
		bVar3 = PED::GET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 77);
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_11))
		{
			BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), uParam1->f_10, uParam1->f_11, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = 4294967295;
	}
	if (!uParam1->f_19)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_41(sParam2, 4294967295);
			uParam1->f_19 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_B)))
	{
		iVar10 = func_61();
		iVar11 = 4294967295;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_40(&uVar9, iVar11, AUDIO::_0x0626A247D2405330(), sVar12, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1A))
					{
						GRAPHICS::_START_SCREEN_EFFECT(uParam1->f_1A, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1B))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1C))
						{
							unk_0x1190AB7024CBD8CB(4294967295, uParam1->f_1C, uParam1->f_1B, 0);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_1D))
						{
							unk_0x1190AB7024CBD8CB(4294967295, uParam1->f_1D, uParam1->f_1B, 0);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_35(0);
			iVar15 = MISC::GET_GAME_TIMER();
			if (iVar15 >= (Global_8F3C - 500))
			{
				func_34(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_B)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_F)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_B), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), MISC::GET_HASH_KEY(sVar13)))
			{
				iVar19 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar20 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > 4294967232) && iVar20 < 64) && iVar20 > 4294967232)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_34 > 0f)
			{
				if (fVar0 >= uParam1->f_34)
				{
					if (!uParam1->f_20)
					{
						fVar21 = 1.5f;
						vVar22 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar23 = { PED::GET_PED_BONE_COORDS(AUDIO::_0x0626A247D2405330(), 31086, 0f, 0f, 0f) };
						fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar22, vVar23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_22), AUDIO::_0x0626A247D2405330(), func_61(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_22), uParam1->f_35);
						if (!uParam1->f_21)
						{
							uParam1->f_22 = 1;
							uParam1->f_22.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_22.f_8 = 0;
							uParam1->f_21 = 1;
						}
						if (uParam1->f_39 == 999f)
						{
							uParam1->f_38 = 0f;
						}
						if (uParam1->f_39 == 999f)
						{
							vVar27 = { CAM::_GET_GAMEPLAY_CAM_ROT_2(2) };
							fVar28 = ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_39 = (fVar29 - fVar30);
							if (uParam1->f_39 < 360f)
							{
								uParam1->f_39 = (uParam1->f_39 + 360f);
							}
							if (uParam1->f_39 > 360f)
							{
								uParam1->f_39 = (uParam1->f_39 - 360f);
							}
						}
						fVar25 = uParam1->f_38;
						fVar26 = uParam1->f_39;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar25);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar26);
						vVar31 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar32 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar31, vVar32, true);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_20 = 1;
					}
					if (uParam1->f_20)
					{
						CAM::_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_22), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(AUDIO::_0x0626A247D2405330(), MISC::GET_HASH_KEY(sVar14)) || iVar18)
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					switch (uParam1->f_4)
					{
						case 2423432979:
							PED::FORCE_PED_MOTION_STATE(AUDIO::_0x0626A247D2405330(), 2423432979, 1, 0, 0);
							CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							break;
						
						case 3626484699:
							PED::FORCE_PED_MOTION_STATE(AUDIO::_0x0626A247D2405330(), 3626484699, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(CAM::_0xDC9DA9E8789F5246(), 1f, 500, 0, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_1F == 999f)
								{
									uParam1->f_1E = 0f;
								}
								if (uParam1->f_1F == 999f)
								{
									vVar37 = { CAM::_GET_GAMEPLAY_CAM_ROT_2(2) };
									fVar38 = ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_1F = (fVar39 - fVar40);
									if (uParam1->f_1F < 360f)
									{
										uParam1->f_1F = (uParam1->f_1F + 360f);
									}
									if (uParam1->f_1F > 360f)
									{
										uParam1->f_1F = (uParam1->f_1F - 360f);
									}
								}
								fVar35 = uParam1->f_1E;
								fVar36 = uParam1->f_1F;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								vVar41 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
								vVar42 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar43 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar41, vVar42, true);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = 4294967295;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_47(uParam1->f_16, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
	}
	bVar45 = CAM::_0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_20)
	{
		CAM::_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = CAM::_0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_20)
			{
				CAM::_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_10))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_10);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, 0);
	func_13(&(uParam1->f_22));
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 77, bVar3);
		ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)//Position - 0x11B2
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)//Position - 0x11CD
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x1225
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x123E
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
				if (bParam1)
				{
					vVar0 = { vVar0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar2 = { CAM::_GET_GAMEPLAY_CAM_ROT_2(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar5 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar6 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
				fVar7 = CAM::_0x80EC114669DAEFF4();
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, vVar2, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar7);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, vVar2, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar7);
				if (uParam0->f_11 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, vVar2, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar7);
				}
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_11, 2);
					}
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_E - uParam0->f_11), 2);
					CAM::_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_E, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_10))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
						}
						unk_0x1190AB7024CBD8CB(4294967295, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_F))
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0x15E1
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()//Position - 0x15F1
{
	Global_434C.f_86 = 1;
}

void func_19(var uParam0, vector3 vParam1)//Position - 0x15FF
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1611
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_C = fParam3;
	uParam0->f_E = iParam4;
	uParam0->f_F = iParam5;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = iParam7;
	uParam0->f_D = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x1649
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1670
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x16BE
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_30();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_28();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_24();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x198A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_25()//Position - 0x19BA
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_26()//Position - 0x1A4F
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1A76
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()//Position - 0x1B0F
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_61();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

bool func_29(int iParam0)//Position - 0x1BB1
{
	return Global_8D15 == iParam0;
}

void func_30()//Position - 0x1BBF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x1C15
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

void func_32()//Position - 0x1C50
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1CA7
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

void func_34(int iParam0)//Position - 0x1CFD
{
	Global_8F3C = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_35(int iParam0)//Position - 0x1D0F
{
	if (func_39())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_36(int iParam0)//Position - 0x1D42
{
	if (func_39())
	{
		return;
	}
	if (Global_3959)
	{
		func_37(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_26())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x1DBC
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

int func_38(int iParam0)//Position - 0x1E30
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()//Position - 0x1E8A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1E9C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_41(char* sParam0, int iParam1)//Position - 0x1F37
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_42(int iParam0, var uParam1)//Position - 0x1F4E
{
	if (func_43(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_43(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_43(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_43(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_43(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_43(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_43(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_43(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_43(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_43(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_43(uParam1, 0))
	{
	}
}

bool func_43(var uParam0, int iParam1)//Position - 0x2045
{
	return (uParam0 && iParam1) != 0;
}

int func_44()//Position - 0x2054
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

void func_45()//Position - 0x2092
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_16094[iVar0 /*17*/] && !Global_16094[iVar0 /*17*/].f_1)
		{
			if (Global_16094[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_16094[iVar0 /*17*/].f_5 != 88 && Global_16094[iVar0 /*17*/].f_5 != 89) && Global_16094[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_16094[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)//Position - 0x2119
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_15510[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_15510[iParam0 /*2*/] = 0;
	}
}

bool func_47(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2157
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_48()//Position - 0x219E
{
	func_49();
	func_66(1);
}

void func_49()//Position - 0x21AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		if (!iVar1 == 4294967295)
		{
			func_150(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_90A8[iVar2 /*5*/] == 0)
		{
			func_50(iVar2);
		}
		iVar2++;
	}
}

void func_50(int iParam0)//Position - 0x220F
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

int func_51(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x2292
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		func_55(0);
		MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vParam0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fParam1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, 1, 0, 0, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_54();
		func_53();
		SYSTEM::SETTIMERA(0);
		func_55(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				unk_0xDA1FC589059DA9F2();
				if (iParam3 == 1)
				{
					PED::_0x4759CC730F947C81();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_0x91D6DD290888CBAB() && !func_52()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), 0, 0);
			MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vParam0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), fParam1);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_55(0);
		return 1;
	}
	func_55(0);
	return 0;
}

bool func_52()//Position - 0x24B1
{
	return !Global_11188.f_229;
}

void func_53()//Position - 0x24C1
{
	Global_11188.f_229 = 1;
	Global_11188.f_22A = 0;
}

void func_54()//Position - 0x24D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_11188[iVar0] = 0;
		iVar0++;
	}
}

void func_55(int iParam0)//Position - 0x24FD
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 2))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&(Global_16C30.f_14), 2);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 2))
		{
			MISC::SET_GAME_PAUSED(0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_16C30.f_14), 2);
		}
	}
}

int func_56()//Position - 0x2554
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0)//Position - 0x2575
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0);
}

int func_58(int iParam0)//Position - 0x258D
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

int func_59()//Position - 0x25BA
{
	if (Global_82CA[11] == 1)
	{
		return 4;
	}
	if (!func_60(21))
	{
		return 0;
	}
	if (!func_58(130))
	{
		return 1;
	}
	if (!func_58(131))
	{
		return 2;
	}
	if (!func_60(22))
	{
		return 1;
	}
	if (!func_60(49))
	{
		return 3;
	}
	if (!func_60(28))
	{
		return 1;
	}
	return 3;
}

int func_60(int iParam0)//Position - 0x2638
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

int func_61()//Position - 0x2664
{
	func_62();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_62()//Position - 0x267D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_65(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_64(AUDIO::_0x0626A247D2405330());
			if (func_63(iVar0) && (!func_29(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_63(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_63(int iParam0)//Position - 0x277A
{
	return iParam0 < 3;
}

int func_64(int iParam0)//Position - 0x2786
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)//Position - 0x27C3
{
	if (func_63(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(bool bParam0)//Position - 0x27ED
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	unk_0x3B35C0FF76598EE9(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_9181))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_9181))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_9181);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_9176))
	{
		if (CAM::IS_CAM_SHAKING(Global_9176))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_9176, 0f);
			CAM::STOP_CAM_SHAKING(Global_9176, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295 || GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
	StringCopy(&Global_9181, "", 64);
	StringCopy(&Global_9191, "", 16);
	func_67();
}

void func_67()//Position - 0x28C6
{
	Global_9175 = 0;
	Global_9176 = 0;
	Global_9177 = 0;
	Global_9178 = 30000;
	Global_9179 = 0f;
	Global_917B = 0f;
	Global_917A = 0f;
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
}

void func_68(int iParam0)//Position - 0x28F7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_40001.f_449A;
			break;
		
		case 1:
			iVar0 = Global_40001.f_4490;
			break;
		
		case 2:
			iVar0 = Global_40001.f_449B;
			break;
		
		case 3:
			iVar0 = Global_40001.f_4493;
			break;
		
		case 4:
			iVar0 = Global_40001.f_448F;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_40001.f_449E;
			break;
		
		case 8:
			iVar0 = Global_40001.f_449F;
			break;
		
		case 9:
			iVar0 = Global_40001.f_44A2;
			break;
		
		case 22:
			iVar0 = Global_40001.f_44A3;
			break;
		
		case 23:
			iVar0 = Global_40001.f_449C;
			break;
		
		case 25:
			iVar0 = Global_40001.f_4814;
			break;
		
		case 26:
			iVar0 = Global_40001.f_4813;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_79(func_80()), func_77(func_80()), func_76(), func_75(), iParam0, iVar0);
	}
	func_74(iVar0);
	func_69(iVar0);
}

void func_69(int iParam0)//Position - 0x2A1C
{
	int iVar0;
	
	iVar0 = func_73(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_1C1 = iVar0;
	func_70(3968, iVar0, 4294967295, 1, 0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A6A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)//Position - 0x2A9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_72();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_72()//Position - 0x2ACE
{
	return Global_1407E0;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x2ADA
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x2B0C
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 + iParam0);
	if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 < 4294957297)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 > 9999)
	{
		Global_18CD5B[iVar0 /*560*/].f_B.f_1C0 = 9999;
	}
}

int func_75()//Position - 0x2B86
{
	if (Global_196EF6.f_3 != 0)
	{
		return Global_196EF6.f_3;
	}
	return 4294967295;
}

int func_76()//Position - 0x2BA2
{
	if (Global_196EF6.f_2 != 0)
	{
		return Global_196EF6.f_2;
	}
	return 4294967295;
}

int func_77(int iParam0)//Position - 0x2BBE
{
	if (iParam0 == func_78())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[1];
}

int func_78()//Position - 0x2BE3
{
	return 4294967295;
}

int func_79(int iParam0)//Position - 0x2BEC
{
	if (iParam0 == func_78())
	{
		return 4294967295;
	}
	return Global_18CD5B[iParam0 /*560*/].f_B.f_8[0];
}

int func_80()//Position - 0x2C11
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_81(bool bParam0)//Position - 0x2C26
{
	return func_82(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_82(int iParam0, bool bParam1)//Position - 0x2C38
{
	return func_83(iParam0, bParam1, 1);
}

int func_83(int iParam0, bool bParam1, int iParam2)//Position - 0x2C49
{
	int iVar0;
	
	if (iParam0 == func_78())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_84(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_78() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)//Position - 0x2CA5
{
	if (iParam0 != func_78())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_78())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2)//Position - 0x2CF4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_93())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_91(CAM::_0xDC9DA9E8789F5246(), 0) && !func_90()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_24FBF9[iParam0 /*413*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x86195BFC9E6E3412(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()) == 0)
				{
					func_88();
					func_87();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_24FBF9[iParam0 /*413*/].f_F5 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_24B2CE.f_A67)
				{
					Global_24B2CE.f_A67 = 0;
				}
			}
			else
			{
				if (!func_89(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, 1);
						}
					}
					if (func_86(Global_440000.f_2559E))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_140842)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)//Position - 0x310D
{
	return iParam0 == 17;
}

void func_87()//Position - 0x311A
{
	vector3 vVar0;
	
	Global_252F9E.f_4CC = 0;
	Global_252F9E.f_4CD = 0;
	Global_252F9E.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252F9E.f_4D3 = 4294967295;
	Global_252F9E.f_4D4 = 0;
	Global_24B2CE.f_A72 = { vVar0 };
}

void func_88()//Position - 0x3167
{
	Global_24B2CE.f_2B3 = 0;
	Global_24B2CE.f_A9D = 0;
	Global_24B2CE.f_1FD = 0;
	Global_24B2CE.f_255 = 0;
	Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_CF = 0;
	Global_24B2CE.f_A70 = 0;
}

int func_89(int iParam0)//Position - 0x31A5
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()//Position - 0x31D6
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_91(int iParam0, int iParam1)//Position - 0x31E7
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_92(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_92(int iParam0, bool bParam1)//Position - 0x3232
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_72();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_93()//Position - 0x3273
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x3288
{
	return Global_1406D2.f_12;
}

void func_95(var uParam0, bool bParam1, bool bParam2)//Position - 0x3296
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_96()//Position - 0x32DB
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_97(Global_90C2[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_52.x = 5;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_97(int iParam0)//Position - 0x331E
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_108();
	if (iVar0 == 4294967294)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_104(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_90C2[iLocal_54 /*5*/].f_3 < 3 && Global_90C2[iLocal_54 /*5*/].f_3 != 0) && Global_90C2[iLocal_54 /*5*/].f_3 > Global_90C2[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_90C2[iLocal_54 /*5*/].f_4 < 9 && Global_90C2[iLocal_54 /*5*/].f_4 != 0) && Global_90C2[iLocal_54 /*5*/].f_4 > Global_90C2[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_103(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_104(Local_43.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_100(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				BRAIN::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, 4294967295, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_52.z = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_64(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_98())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 1);
	return 1;
}

bool func_98()//Position - 0x35E0
{
	return func_99(CAM::_0xDC9DA9E8789F5246());
}

int func_99(int iParam0)//Position - 0x35F0
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x360F
{
	vector3 vVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 2277090178) != 7)
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (iParam0 == AUDIO::_0x0626A247D2405330())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(CAM::_0xDC9DA9E8789F5246()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
		if (func_101())
		{
			return 0;
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_101()//Position - 0x3710
{
	return Global_16C64.f_148 > 0;
}

bool func_102()//Position - 0x3721
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

char* func_103(int iParam0)//Position - 0x3736
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_104(int iParam0)//Position - 0x3777
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_105(iParam0);
	sVar1 = func_103(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(vLocal_52.z))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(vLocal_52.z, sVar1);
}

int func_105(int iParam0)//Position - 0x37B8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 4294967295;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_106(iVar0);
	if (iVar1 == 4294967295)
	{
		return 4294967295;
	}
	return Global_90C2[iVar1 /*5*/].f_2;
}

int func_106(int iParam0)//Position - 0x37FB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_90C2[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_107(int iParam0)//Position - 0x382B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
		{
			return Global_90C2[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 4294967295;
}

int func_108()//Position - 0x386C
{
	int iVar0;
	
	if (Local_51 == 4294967294)
	{
		return 4294967294;
	}
	if (Local_51 == 4294967295)
	{
		return 4294967295;
	}
	iVar0 = (Local_51 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return 4294967294;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_109()//Position - 0x38B2
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_110())
	{
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_52.x = 6;
}

bool func_110()//Position - 0x38DE
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { unk_0x8000C77B5F336760(Local_43.f_1, true) };
	vVar1 = { unk_0x8000C77B5F336760(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	return fVar2 < 7f;
}

void func_111()//Position - 0x392F
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == AUDIO::_0x0626A247D2405330())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_90C2[iLocal_54 /*5*/].f_2 == 0 || Global_90C2[iLocal_54 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, 0, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, 0);
		}
	}
	if (Local_51 != 4294967294)
	{
		if (Local_51 == 4294967295)
		{
			if (Global_90C2[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_90C2[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_90C2[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_90C2[iLocal_54 /*5*/].f_2 = 2;
					if (!func_97(2))
					{
						Global_90C2[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_90C2[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_90C2[iLocal_54 /*5*/].f_2 = 1;
					if (!func_97(2))
					{
						Global_90C2[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_90C2[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_50))
	{
		if (!func_100(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				BRAIN::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10 || Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_197632.f_CF2, 27))
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 1))
		{
			if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_90C2[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_90C2[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == AUDIO::_0x0626A247D2405330()) && func_113(CAM::_0xDC9DA9E8789F5246())) && Global_40001.f_5C96)
		{
			if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_90C2[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_90C2[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == AUDIO::_0x0626A247D2405330()) && func_112())
		{
			if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_90C2[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_90C2[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_52.y = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_104(Local_43.f_1))
	{
		return;
	}
}

var func_112()//Position - 0x3C06
{
	return Global_263563;
}

int func_113(int iParam0)//Position - 0x3C12
{
	if (iParam0 != func_78())
	{
		if (func_115(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_114(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x3C59
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

int func_115(int iParam0, bool bParam1, bool bParam2)//Position - 0x3FB3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_116()//Position - 0x3FFD
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 7;
	return 1;
}

void func_117()//Position - 0x4054
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
}

void func_118()//Position - 0x406F
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar3, vVar4) && !PED::IS_COP_PED_IN_AREA_3D(vVar3, vVar4))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 1, 0);
	HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
	func_11(73, 1);
}

void func_119()//Position - 0x413E
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!AUDIO::_0x0626A247D2405330() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_49 = 0f;
		func_121(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_121(iVar0, fLocal_49);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_121(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == 4294967295)
	{
		fLocal_49 = func_120(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_120(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_120(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_120(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_120(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_120(iVar0, 0.13f, 0.06f);
		}
	}
	func_121(iVar0, fLocal_49);
}

float func_120(int iParam0, float fParam1, float fParam2)//Position - 0x42E0
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (BRAIN::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_121(int iParam0, float fParam1)//Position - 0x4374
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_122()//Position - 0x43BF
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10 || Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_90C2[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_90C2[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_90C2[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_90C2[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
	{
		BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_52.x = 11;
		return;
	}
}

void func_123()//Position - 0x4463
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(AUDIO::_0x0626A247D2405330(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		Local_51.f_3 = 4294967294;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_124();
		Local_51.f_3 = 4294967294;
		return;
	}
	BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, 0);
	vLocal_52.x = 9;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_124()//Position - 0x44FE
{
	if (vLocal_52.x == 10)
	{
		return;
	}
	vLocal_52.x = 10;
	if (iLocal_44 == 4294967295)
	{
		return;
	}
	func_150(iLocal_44, 2, 5);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_125()//Position - 0x4530
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_52.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 4;
	Local_51.f_3 = 4294967294;
}

void func_126()//Position - 0x4562
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_124();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_124();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, 4294967295, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_124();
			return;
		}
		BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_52.x = 9;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_110())
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(Local_43.f_1);
		vLocal_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, 2500551826);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(Local_43.f_1);
				vLocal_52.x = 4;
				return;
			}
		}
	}
}

void func_127()//Position - 0x467E
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_52.x = 4;
		return;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_52.x = 4;
		return;
	}
	vVar0 = { unk_0x8000C77B5F336760(Local_43.f_1, true) };
	vVar1 = { unk_0x8000C77B5F336760(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	if (fVar2 > 3f)
	{
		if (!func_97(Global_90C2[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 12;
			return;
		}
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = 4294967295;
		}
	}
	if (iVar4 == 4294967295)
	{
		if (iVar4 == 4294967295)
		{
			vLocal_52.x = 4;
			return;
		}
	}
	func_128();
	BRAIN::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, 4294967295, iVar4, 2f, 1, 0);
	vLocal_52.x = 7;
}

void func_128()//Position - 0x4781
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		vLocal_52.z = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_129()//Position - 0x4816
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_111();
		return;
	}
	func_130();
	Local_51.f_2 = 4294967294;
	vLocal_52.x = 12;
}

int func_130()//Position - 0x4840
{
	if (!func_104(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_131(Local_43.f_1);
	vLocal_52.z = "";
	Global_26862F.f_11AF = 1;
	return 1;
}

void func_131(int iParam0)//Position - 0x4879
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, 0);
}

void func_132()//Position - 0x48BA
{
	int iVar0;
	
	if (Local_51 == 4294967295)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_90C2[iLocal_54 /*5*/].f_3 < 3 && Global_90C2[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 4294967295;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 10;
		return;
	}
	if (func_104(Local_43.f_1))
	{
		vLocal_52.x = 12;
		return;
	}
	if (Local_51 == 4294967294)
	{
		return;
	}
	if (!func_97(Global_90C2[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 12;
}

void func_133()//Position - 0x4990
{
}

void func_134()//Position - 0x4998
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_9113[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_9113[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_136(iVar1);
				func_135(iVar1);
			}
			else if (Global_9113[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == 4294967295)
				{
					if (iLocal_45 == Global_9113[iVar1 /*6*/])
					{
						func_136(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_135(int iParam0)//Position - 0x4A10
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_9113[iParam0 /*6*/] = 4294967295;
	Global_9113[iParam0 /*6*/].f_1 = 4294967295;
	Global_9113[iParam0 /*6*/].f_2 = 6;
	Global_9113[iParam0 /*6*/].f_3 = 0;
	Global_9113[iParam0 /*6*/].f_4 = 0;
}

void func_136(int iParam0)//Position - 0x4A5D
{
	int iVar0;
	
	iVar0 = Global_9113[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_157();
			break;
		
		case 2:
			func_140(Global_9113[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_139(Global_9113[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_138();
			break;
		
		case 5:
			func_137();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_137()//Position - 0x4ADF
{
	vLocal_52.y = 2;
}

void func_138()//Position - 0x4AEC
{
	int iVar0;
	
	Global_90C2[iLocal_54 /*5*/].f_4++;
	if (Local_51 == 4294967295)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_90C2[iLocal_54 /*5*/].f_4 < 9 && Global_90C2[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 4294967295;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_104(Local_43.f_1))
		{
			func_97(Global_90C2[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_139(int iParam0)//Position - 0x4BAC
{
	int iVar0;
	
	Global_90C2[iLocal_54 /*5*/].f_3 = (Global_90C2[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == 4294967295)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_90C2[iLocal_54 /*5*/].f_3 < 3 && Global_90C2[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 4294967295;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_104(Local_43.f_1))
		{
			func_97(Global_90C2[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_140(int iParam0)//Position - 0x4C6C
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_141()//Position - 0x4C9C
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = 4294967295;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_142();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_142()//Position - 0x4CE6
{
}

void func_143()//Position - 0x4CEE
{
	if (!Local_51 == 4294967295)
	{
		if (!Local_51 == 4294967294)
		{
			if (SYSTEM::TIMERA() >= Local_51)
			{
				func_128();
				Local_51 = 4294967294;
				vLocal_52.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_157();
		}
	}
}

void func_144(int iParam0)//Position - 0x4D2D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_9113[iVar0 /*6*/])
		{
			func_135(iVar0);
		}
		iVar0++;
	}
}

void func_145()//Position - 0x4D5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_148();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_73(2057, 4294967295, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_146(iVar1);
			}
			func_70(2057, iVar0 + 1, 4294967295, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, 4294967295);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, 4294967295);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, 4294967295);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_146(iVar6);
			}
			switch (func_61())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_52.y = 1;
		return;
	}
	vLocal_52.y = 12;
	if (Local_51 == 4294967295)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_90C2[iLocal_54 /*5*/].f_3 < 3 && Global_90C2[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_90C2[iLocal_54 /*5*/].f_2 = 4294967295;
	}
	else
	{
		iVar7 = (Local_51 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_90C2[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_90C2[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_146(int iParam0)//Position - 0x4F0A
{
	int iVar0;
	
	iVar0 = func_147(81);
	Global_24D678[iVar0 /*83*/] = 81;
	Global_24D678[iVar0 /*83*/].f_11 = iParam0;
	StringCopy(&(Global_24D678[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

int func_147(int iParam0)//Position - 0x4F41
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D678[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D678[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_148()//Position - 0x4F8E
{
}

void func_149()//Position - 0x4F96
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = 4294967294;
	Local_51.f_3 = 4294967294;
}

void func_150(int iParam0, int iParam1, int iParam2)//Position - 0x4FBA
{
	func_151(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4FCF
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_153(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_152();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_152()//Position - 0x5051
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_153(int iParam0, int iParam1, int iParam2)//Position - 0x5082
{
	if (func_154(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0, int iParam1, int iParam2)//Position - 0x509D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_155()//Position - 0x50E9
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == AUDIO::_0x0626A247D2405330())
	{
		bLocal_46 = true;
		Global_9196 = 1;
		Global_9198++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		iVar0 = func_64(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_156()//Position - 0x5156
{
	if (!iLocal_44 == 4294967295)
	{
		return;
	}
	iLocal_44 = func_107(Local_43.f_1);
	if (iLocal_44 == 4294967295)
	{
		return;
	}
	iLocal_54 = func_106(iLocal_44);
}

void func_157()//Position - 0x5184
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
		{
			iVar0 = func_64(Local_43.f_1);
			if (Global_90C2[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_128();
	if (bLocal_46)
	{
		Global_9196 = 0;
	}
	func_158();
	STREAMING::REMOVE_ANIM_DICT(func_103(0));
	STREAMING::REMOVE_ANIM_DICT(func_103(2));
	STREAMING::REMOVE_ANIM_DICT(func_103(1));
	Global_1962EB = 0;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_158()//Position - 0x5288
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !AUDIO::_0x0626A247D2405330() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_121(iVar0, 0f);
}

void func_159(int iParam0, char* sParam1, int iParam2)//Position - 0x5302
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_160(iParam2), 1);
}

int func_160(int iParam0)//Position - 0x5319
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

