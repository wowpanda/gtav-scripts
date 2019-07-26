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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_67();
	}
	if (DOES_ENTITY_EXIST(uScriptParam_0))
	{
		iLocal_37 = uScriptParam_0;
		uLocal_40 = uScriptParam_0;
	}
	while (true)
	{
		WAIT(0);
		func_66();
		if (DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_65() && !func_64())) && !func_63(iLocal_43))
			{
				func_67();
			}
			if ((IS_PLAYER_SWITCH_IN_PROGRESS() && GET_PLAYER_SWITCH_TYPE() != 3) && GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_67();
			}
			if (func_62(13) || func_62(14))
			{
				func_67();
			}
			if (HAS_OBJECT_BEEN_BROKEN(uScriptParam_0, 0))
			{
				func_67();
			}
			if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				if (IS_PLAYER_PLAYING(PLAYER_ID()))
				{
					func_61();
					if (GET_ENTITY_HEALTH(uScriptParam_0) < 950)
					{
						func_67();
					}
					switch (iLocal_29)
					{
						case 0:
							func_58();
							if (iLocal_43 == 5)
							{
								if (func_57(18) == 1 && func_57(20) == 0)
								{
									uLocal_41 = _GET_DES_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (_DOES_DES_OBJECT_EXIST(uLocal_41))
									{
										_SET_DES_OBJECT_STATE(uLocal_41, 9);
									}
									TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_43 == -1)
							{
								func_67();
							}
							else
							{
								func_56();
								HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_25825[iLocal_43 /*11*/].f_2 = 0;
								Global_25825[iLocal_43 /*11*/].f_6 = 1;
								Global_25825[iLocal_43 /*11*/] = GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_25825[iLocal_43 /*11*/].f_1 = 0;
								Global_25825[iLocal_43 /*11*/].f_4 = 0;
								Global_25825[iLocal_43 /*11*/].f_7 = 0;
								Global_25825[iLocal_43 /*11*/].f_8 = 0;
								Global_25825[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_54(&uLocal_26);
								func_52();
								func_51();
								WAIT(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
							{
								WAIT(0);
							}
							else if (IS_ENTITY_STATIC(iLocal_37) && IS_ENTITY_UPRIGHT(iLocal_37, 1119092736))
							{
								if (func_43() || Global_25825[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_42(&iLocal_42);
							}
							break;
						
						case 2:
							func_52();
							if (!func_63(iLocal_43))
							{
								func_42(&iLocal_42);
								if (func_41("TV_HLP1"))
								{
									CLEAR_HELP(1);
								}
							}
							if (DOES_ENTITY_EXIST(iLocal_37))
							{
								if (!IS_ENTITY_VISIBLE(iLocal_37))
								{
									SET_ENTITY_VISIBLE(iLocal_37, 1, 0);
								}
							}
							if (DOES_ENTITY_EXIST(iLocal_39))
							{
								if (!IS_ENTITY_VISIBLE(iLocal_39))
								{
									SET_ENTITY_VISIBLE(iLocal_39, 1, 0);
								}
							}
							if (DOES_ENTITY_EXIST(uLocal_38))
							{
								if (IS_ENTITY_VISIBLE(uLocal_38))
								{
									SET_ENTITY_VISIBLE(uLocal_38, 0, 0);
								}
							}
							if (!ARE_STRINGS_EQUAL(&cLocal_46, "NULL"))
							{
								SET_STATIC_EMITTER_ENABLED(&cLocal_46, 0);
							}
							unk_0x6805D58CAA427B72(0);
							WAIT(0);
							if (DOES_ENTITY_EXIST(uLocal_40))
							{
								SET_TV_AUDIO_FRONTEND(uLocal_40);
							}
							if (!func_63(iLocal_43))
							{
								if ((Global_25825[iLocal_43 /*11*/] == 3 || Global_25825[iLocal_43 /*11*/] == 2) || Global_25825[iLocal_43 /*11*/] == -1)
								{
									Global_25825[iLocal_43 /*11*/] = GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								SET_TV_CHANNEL(Global_25825[iLocal_43 /*11*/]);
								SET_TV_VOLUME(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25825[iLocal_43 /*11*/];
								iLocal_45 = Global_25825[iLocal_43 /*11*/].f_1;
								_LOAD_TV_CHANNEL_SEQUENCE(iLocal_44, func_40(iLocal_45), Global_25825[iLocal_43 /*11*/].f_9);
								SET_TV_CHANNEL(iLocal_44);
								if (Global_25825[iLocal_43 /*11*/].f_7)
								{
									Global_25825[iLocal_43 /*11*/].f_5 = 0;
									Global_25825[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25825[iLocal_43 /*11*/].f_2 = 1;
							func_39(133, 1);
							func_39(131, 1);
							func_39(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25825[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25825[iLocal_43 /*11*/].f_7 && func_63(iLocal_43))
							{
								Global_25825[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_37(iLocal_43))
							{
								func_36();
								iLocal_29 = 5;
							}
							else
							{
								func_34();
								if (GET_TV_CHANNEL() == -1)
								{
									SET_TV_CHANNEL(Global_25825[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_37(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25825[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_42(&iLocal_42);
							}
							Global_25825[iLocal_43 /*11*/].f_5 = 0;
							Global_25825[iLocal_43 /*11*/].f_4 = 0;
							Global_25825[iLocal_43 /*11*/].f_1 = 0;
							Global_25825[iLocal_43 /*11*/].f_2 = 0;
							Global_25825[iLocal_43 /*11*/].f_7 = 0;
							Global_25825[iLocal_43 /*11*/].f_8 = 0;
							Global_25825[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_67();
			TERMINATE_THIS_THREAD();
		}
	}
	func_67();
	TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25825[iLocal_43 /*11*/] = GET_TV_CHANNEL();
	}
	fLocal_30 = GET_TV_VOLUME();
	SET_TV_CHANNEL(-1);
	func_4();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family5")) == 0)
	{
		if (!ARE_STRINGS_EQUAL(&cLocal_46, "NULL"))
		{
			SET_STATIC_EMITTER_ENABLED(&cLocal_46, 1);
		}
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		CLEAR_HELP(1);
	}
	func_3();
	func_51();
	if (DOES_ENTITY_EXIST(uLocal_38))
	{
		if (!IS_ENTITY_VISIBLE(uLocal_38))
		{
			SET_ENTITY_VISIBLE(uLocal_38, 1, 0);
		}
	}
	ENABLE_MOVIE_SUBTITLES(0);
	func_2();
}

void func_2()
{
	if (IS_PC_VERSION())
	{
		if (iLocal_87 == 1)
		{
			_0x643ED62D5EA3BEBD();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		SET_TEXT_RENDER_ID(iLocal_35);
		if (DOES_ENTITY_EXIST(iLocal_37))
		{
			if (GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_screen2") || GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				SET_ENTITY_VISIBLE(iLocal_37, 0, 0);
				if (GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_39))
	{
		SET_ENTITY_VISIBLE(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (IS_CAM_ACTIVE(uLocal_78))
		{
			SET_CAM_ACTIVE(uLocal_78, 0);
		}
		DESTROY_CAM(uLocal_78, 0);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
			CLEAR_PED_TASKS(PLAYER_PED_ID());
			TASK_LOOK_AT_COORD(PLAYER_PED_ID(), vLocal_31, 1, 0, 2);
			if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				}
			}
			SET_ENTITY_VISIBLE(PLAYER_PED_ID(), 1, 0);
		}
		if (!ARE_STRINGS_EQUAL(&cLocal_62, "NULL"))
		{
			if (IS_AUDIO_SCENE_ACTIVE(&cLocal_62))
			{
				STOP_AUDIO_SCENE(&cLocal_62);
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_39))
		{
			SET_ENTITY_VISIBLE(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		ENABLE_MOVIE_SUBTITLES(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_14(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_13())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_14(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_10(PLAYER_ID())) && !func_7(PLAYER_ID(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_10(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_6()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == PLAYER_ID())
		{
			return 1;
		}
	}
	if (IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 13);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 13);
	}
}

int func_15()
{
	if (!func_63(iLocal_43))
	{
		if (((((((func_30(&uLocal_26) >= 1f && IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_88, 1f, 1f, 1.5f, 0, 1, 0)) && GET_INTERIOR_FROM_ENTITY(iLocal_37) == GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID())) && !func_29(8, -1)) && !IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)) && _0xFCF37A457CB96DC0(PLAYER_PED_ID(), vLocal_31, 90f)) && !IS_PED_RAGDOLL(PLAYER_PED_ID())) && !IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_42 == -1)
			{
				func_28();
				func_27(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_25(iLocal_42, 1))
			{
				func_42(&iLocal_42);
				func_54(&uLocal_26);
				Global_25825[iLocal_43 /*11*/].f_7 = 0;
				if (REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_41("TV_HLP5"))
			{
				CLEAR_HELP(1);
			}
			func_2();
			func_42(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		SET_INPUT_EXCLUSIVE(2, 222);
		if (IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_42(&iLocal_42);
			func_27(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_24();
		}
	}
	else
	{
		DISABLE_CONTROL_ACTION(2, 200, 1);
		if (IS_ENTITY_VISIBLE(PLAYER_PED_ID()))
		{
			SET_ENTITY_VISIBLE(PLAYER_PED_ID(), 0, 0);
		}
		if (bLocal_36)
		{
			if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
			{
				SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
			}
		}
		HIDE_HUD_AND_RADAR_THIS_FRAME();
		_0xD1C55B110E4DF534(PLAYER_PED_ID());
		func_22(1, 1);
		SET_INPUT_EXCLUSIVE(2, 222);
		func_17(0);
		if (IS_CONTROL_JUST_PRESSED(2, 222) || (_IS_INPUT_DISABLED(2) && IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			func_42(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_18(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (Global_14725)
	{
		func_19(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_23(0))
		{
			if (!iLocal_22)
			{
				if (REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GET_TV_CHANNEL() == 0)
				{
					SET_TV_CHANNEL(1);
				}
				else
				{
					SET_TV_CHANNEL(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				SET_TV_VOLUME(fVar2);
				iLocal_24 = GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				SET_TV_VOLUME(fVar2);
				iLocal_24 = GET_GAME_TIMER();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || GET_GAME_TIMER() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_24()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vLocal_79, vLocal_82, fVar0, 0, 2);
		SET_CAM_FAR_CLIP(uLocal_78, 100f);
		SET_CAM_ACTIVE(uLocal_78, 1);
		RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (DOES_ENTITY_EXIST(iLocal_39))
		{
			SET_ENTITY_VISIBLE(iLocal_39, 0, 0);
		}
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 1);
			CLEAR_PED_TASKS(PLAYER_PED_ID());
			if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
			{
				SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				bLocal_36 = true;
			}
			TASK_LOOK_AT_COORD(PLAYER_PED_ID(), vLocal_31, -1, 0, 2);
			SET_ENTITY_VISIBLE(PLAYER_PED_ID(), 0, 0);
		}
		if (!ARE_STRINGS_EQUAL(&cLocal_62, "NULL"))
		{
			if (!IS_AUDIO_SCENE_ACTIVE(&cLocal_62))
			{
				START_AUDIO_SCENE(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		ENABLE_MOVIE_SUBTITLES(1);
		iLocal_85 = 1;
	}
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!IS_PLAYER_PLAYING(GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_42(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = GET_ID_OF_THIS_THREAD();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_28()
{
	if (IS_PC_VERSION())
	{
		if (iLocal_87 == 0)
		{
			_0x3D42B92563939375("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

float func_30(var uParam0)
{
	if (func_33(uParam0))
	{
		if (func_32(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_31(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_31(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = TO_FLOAT(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = GET_NETWORK_TIME();
		fVar3 = TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (TO_FLOAT(GET_GAME_TIMER()) / 1000f);
}

bool func_32(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_33(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_34()
{
	float fVar0;
	
	fVar0 = 1f;
	func_35(&fVar0);
	SET_TEXT_RENDER_ID(iLocal_35);
	SET_SCRIPT_GFX_DRAW_ORDER(4);
	SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	SET_TEXT_RENDER_ID(GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_35(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = _GET_ASPECT_RATIO(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_36()
{
	Global_25825[iLocal_43 /*11*/].f_7 = 0;
	Global_25825[iLocal_43 /*11*/] = GET_TV_CHANNEL();
	fLocal_30 = GET_TV_VOLUME();
	if (IS_AUDIO_SCENE_ACTIVE(&cLocal_62))
	{
		STOP_AUDIO_SCENE(&cLocal_62);
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		CLEAR_HELP(1);
	}
	func_42(&iLocal_42);
	SET_TV_CHANNEL(-1);
	WAIT(0);
	func_3();
	func_51();
}

int func_37(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_38(PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_38(var uParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(uParam0), 0);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_41(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_42(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_26(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_43()
{
	if (func_30(&uLocal_26) < 1f)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if ((!IS_ENTITY_AT_COORD(PLAYER_PED_ID(), vLocal_88, 1f, 1f, 1.5f, 0, 1, 0) || !_0xFCF37A457CB96DC0(PLAYER_PED_ID(), vLocal_31, 90f)) || IS_PED_RAGDOLL(PLAYER_PED_ID()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (GET_INTERIOR_FROM_ENTITY(iLocal_37) != GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (func_29(8, -1))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_90640)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_25825[iLocal_43 /*11*/].f_8)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_27(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_25(iLocal_42, 1))
	{
		func_42(&iLocal_42);
		func_54(&uLocal_26);
		Global_25825[iLocal_43 /*11*/].f_7 = 1;
		if (REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_44(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_50((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_106288, 0);
					SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STAT_SET_INT(joaat("num_missions_completed"), Global_106301, 1);
	STAT_SET_INT(joaat("num_missions_available"), Global_106284, 1);
	STAT_SET_INT(joaat("num_minigames_completed"), Global_106302, 1);
	STAT_SET_INT(joaat("num_minigames_available"), Global_106285, 1);
	STAT_SET_INT(joaat("num_oddjobs_completed"), Global_106303, 1);
	STAT_SET_INT(joaat("num_oddjobs_available"), Global_106286, 1);
	STAT_SET_INT(joaat("num_rndpeople_completed"), Global_106304, 1);
	STAT_SET_INT(joaat("num_rndpeople_available"), Global_106287, 1);
	STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STAT_SET_INT(joaat("num_rndevents_available"), Global_106291, 1);
	STAT_SET_INT(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	STAT_SET_INT(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STAT_SET_FLOAT(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	STAT_SET_INT(joaat("percent_story_missions"), Global_106308, 1);
	STAT_SET_INT(joaat("percent_ambient_missions"), Global_106309, 1);
	STAT_SET_INT(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && FLOOR(fVar8) < FLOOR(Global_106565.f_10188.f_3853))
	{
		func_49(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_48() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()
{
	if (func_47(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

int func_47(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

int func_48()
{
	return Global_25765;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return _SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_51()
{
	WAIT(0);
	if (IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_35 = -1;
		SET_TEXT_RENDER_ID(GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_52()
{
	var uVar0;
	
	if (iLocal_43 == 4)
	{
		func_53();
	}
	if (IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	WAIT(0);
	if (!DOES_ENTITY_EXIST(iLocal_37))
	{
		func_67();
	}
	uVar0 = GET_ENTITY_MODEL(iLocal_37);
	REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	LINK_NAMED_RENDERTARGET(uVar0);
	WAIT(0);
	if (iLocal_43 != 4)
	{
		while (!IS_NAMED_RENDERTARGET_LINKED(uVar0))
		{
			if (!DOES_ENTITY_EXIST(iLocal_37))
			{
				func_67();
			}
			if (!IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_37))
			{
				func_67();
			}
			if (!IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
			}
			if (!IS_NAMED_RENDERTARGET_LINKED(uVar0))
			{
				LINK_NAMED_RENDERTARGET(uVar0);
			}
			WAIT(0);
		}
	}
	iLocal_35 = GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_53()
{
	if (DOES_ENTITY_EXIST(iLocal_37))
	{
		if (GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), vLocal_31, 1, 1, 0);
	SET_ENTITY_HEADING(iLocal_37, uLocal_34);
	FREEZE_ENTITY_POSITION(iLocal_37, 1);
	SET_ENTITY_VISIBLE(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), vLocal_31, 1, 1, 0);
	SET_ENTITY_HEADING(iLocal_39, uLocal_34);
	FREEZE_ENTITY_POSITION(iLocal_39, 1);
	SET_ENTITY_VISIBLE(iLocal_39, 0, 0);
}

void func_54(var uParam0)
{
	func_55(uParam0, 0f);
}

void func_55(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_31(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_56()
{
}

int func_57(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_58()
{
	vLocal_31 = { GET_ENTITY_COORDS(iLocal_37, 1) };
	uLocal_34 = GET_ENTITY_HEADING(iLocal_37);
	func_60();
	if (GET_ENTITY_MODEL(iLocal_37) == -897601557)
	{
		if (VDIST(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			vLocal_79 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_82 = { 0f, 0f, -134.3211f };
			vLocal_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (GET_ENTITY_MODEL(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (VDIST(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			vLocal_79 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_82 = { 0f, 0f, -105.15f };
			vLocal_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_59();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (GET_ENTITY_MODEL(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (VDIST(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			vLocal_79 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_82 = { 0f, 0f, -29.9488f };
			vLocal_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (GET_ENTITY_MODEL(iLocal_37) == 1340914825)
	{
		if (VDIST(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			vLocal_79 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_82 = { 0f, 0f, 60.061f };
			vLocal_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_screen2") || GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (VDIST(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			vLocal_79 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_82 = { 0f, 0f, -69.0273f };
			vLocal_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (GET_ENTITY_MODEL(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (VDIST(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			vLocal_79 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_82 = { 1.8886f, 0f, 110.9232f };
			vLocal_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_59()
{
	uLocal_38 = CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), vLocal_31, 1, 1, 0);
	SET_ENTITY_HEADING(uLocal_38, uLocal_34);
	SET_ENTITY_VISIBLE(uLocal_38, 1, 0);
	FREEZE_ENTITY_POSITION(uLocal_38, 1);
}

void func_60()
{
	_LOAD_TV_CHANNEL_SEQUENCE(0, func_40(1), 0);
	if (func_57(22))
	{
		_LOAD_TV_CHANNEL_SEQUENCE(1, func_40(12), 0);
	}
	else
	{
		_LOAD_TV_CHANNEL_SEQUENCE(1, func_40(2), 0);
	}
}

void func_61()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25825[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (DOES_ENTITY_EXIST(uLocal_40))
			{
				SET_ENTITY_INVINCIBLE(uLocal_40, 0);
			}
			if (DOES_ENTITY_EXIST(iLocal_37))
			{
				SET_ENTITY_INVINCIBLE(iLocal_37, 0);
			}
			if (DOES_ENTITY_EXIST(iLocal_39))
			{
				SET_ENTITY_INVINCIBLE(iLocal_39, 0);
			}
			if (DOES_ENTITY_EXIST(uLocal_38))
			{
				SET_ENTITY_INVINCIBLE(uLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (DOES_ENTITY_EXIST(uLocal_40))
		{
			SET_ENTITY_INVINCIBLE(uLocal_40, 1);
		}
		if (DOES_ENTITY_EXIST(iLocal_37))
		{
			SET_ENTITY_INVINCIBLE(iLocal_37, 1);
		}
		if (DOES_ENTITY_EXIST(iLocal_39))
		{
			SET_ENTITY_INVINCIBLE(iLocal_39, 1);
		}
		if (DOES_ENTITY_EXIST(uLocal_38))
		{
			SET_ENTITY_INVINCIBLE(uLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_62(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_63(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25825[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (Global_90634 != -1)
	{
		return IS_BIT_SET(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

void func_66()
{
}

void func_67()
{
	if (iLocal_43 == -1)
	{
		TERMINATE_THIS_THREAD();
	}
	func_42(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25825[iLocal_43 /*11*/].f_6 = 0;
		Global_25825[iLocal_43 /*11*/].f_7 = 0;
		Global_25825[iLocal_43 /*11*/].f_8 = 0;
		Global_25825[iLocal_43 /*11*/].f_4 = 0;
		Global_25825[iLocal_43 /*11*/].f_5 = 0;
		Global_25825[iLocal_43 /*11*/].f_2 = 0;
		Global_25825[iLocal_43 /*11*/] = -1;
		Global_25825[iLocal_43 /*11*/].f_1 = 0;
		Global_25825[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_41("TV_HLP1") || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		CLEAR_HELP(1);
	}
	WAIT(0);
	func_68();
	if (IS_AUDIO_SCENE_ACTIVE(&cLocal_62))
	{
		STOP_AUDIO_SCENE(&cLocal_62);
	}
	_0x19AF7ED9B9D23058();
	func_2();
	TERMINATE_THIS_THREAD();
}

void func_68()
{
	func_51();
	if (DOES_ENTITY_EXIST(iLocal_37))
	{
		if (GET_ENTITY_MODEL(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			DELETE_OBJECT(&iLocal_37);
			SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_39))
	{
		DELETE_OBJECT(&iLocal_39);
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (DOES_ENTITY_EXIST(uLocal_38))
	{
		DELETE_OBJECT(&uLocal_38);
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

