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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> Local_47 = { 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_14612 = 145;
	MISC::CLEAR_BIT(&Global_2324, 8);
	MISC::CLEAR_BIT(&Global_2323, 14);
	MISC::CLEAR_BIT(&Global_4267143, 3);
	MISC::CLEAR_BIT(&Global_2324, 10);
	MISC::CLEAR_BIT(&Global_2323, 17);
	MISC::CLEAR_BIT(&Global_2323, 9);
	MISC::CLEAR_BIT(&Global_2323, 26);
	MISC::CLEAR_BIT(&Global_2323, 23);
	MISC::CLEAR_BIT(&Global_2324, 24);
	MISC::CLEAR_BIT(&Global_2324, 25);
	MISC::CLEAR_BIT(&Global_2324, 27);
	MISC::CLEAR_BIT(&Global_2324, 26);
	MISC::CLEAR_BIT(&Global_2323, 30);
	Global_2521686 = 0;
	iLocal_72 = 0;
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_14419 = 0;
	iLocal_30 = 0;
	Global_14397 = 0;
	Global_14437 = 0;
	Global_14438 = 0;
	func_105();
	Global_14384 = { Global_14416 };
	Global_14457 = 4;
	Global_14458 = 0;
	Global_2928 = 1;
	Global_14433 = Global_14457;
	if (Global_14435 == 0)
	{
		Global_14436 = 0;
		if (Global_70856)
		{
			Global_14434 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			iLocal_41 = 1;
			if (iLocal_41 == 1)
			{
			}
		}
		else if (Global_14396)
		{
			Global_14441 = 1;
			Global_14434 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_14434 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_104555.f_14021[Global_14453 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434) && Global_14436 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_14436 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_14436 = 1;
					}
				}
			}
			if (Global_14452 == 1)
			{
				func_104();
			}
		}
		if (Global_14436 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
			{
				func_103(Global_14434, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14434);
			Global_14394 = 0;
			Global_14435 = 0;
			Global_14613 = 0;
			if (Global_104555.f_14021.f_84 == 1)
			{
				Global_104555.f_14021.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			Global_14397 = 1;
			Global_14453.f_1 = 3;
			func_102();
			Global_14441 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_2323, 9);
			MISC::CLEAR_BIT(&Global_2323, 27);
			MISC::CLEAR_BIT(&Global_2323, 30);
			MISC::CLEAR_BIT(&Global_2324, 5);
			MISC::CLEAR_BIT(&Global_2324, 21);
			MISC::CLEAR_BIT(&Global_2325, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_14615 = 0;
			Global_16816 = 0;
			Global_16815 = 0;
			Global_15769 = 0;
			func_100();
			func_98();
			Global_4267358 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_14377 = 0.1f;
		Global_14378 = 0.38f;
		Global_14379 = 0.195f;
		Global_14380 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
		}
		else
		{
			HUD::GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
			HUD::GET_HUD_COLOUR(126, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_97(Global_14434, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432);
		}
		if (Global_14436 == 0)
		{
		}
		func_96();
		if (Global_70856)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
		}
		Global_14435 = 1;
	}
	Global_2326 = 99;
	func_95();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_52 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_16770 = 1;
	}
	else
	{
		Global_16770 = 0;
	}
	func_97(Global_14434, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14395 = 1;
	if (Global_70856)
	{
		Global_14617 = 0;
		Global_4267355 = func_92(2025, -1, 0);
		if (Global_4267355 < 1 || Global_4267355 > 7)
		{
			Global_4267355 = 1;
		}
		func_97(Global_14434, "SET_THEME", SYSTEM::TO_FLOAT(Global_4267355), -1082130432, -1082130432, -1082130432, -1082130432);
		func_91();
		Global_4267356 = func_92(2024, -1, 0);
		if (Global_4267356 == 0)
		{
			Var1 = { func_90(PLAYER::PLAYER_ID()) };
			iVar2 = 0;
			if (NETWORK::_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_4267359 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::_0x72D918C99BCACC54(0)) && Global_4267359 == 0)
			{
				if (NETWORK::_0x5835D9CD92E83184(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					func_97(Global_14434, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_97(Global_14434, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_97(Global_14434, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4267356), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_14396)
		{
			Global_14617 = 0;
		}
		else if (Global_104555.f_14021.f_88 == 1 || Global_104555.f_14021.f_89 == 1)
		{
			Global_14617 = 0;
		}
		else
		{
			Global_14617 = 0;
		}
		func_97(Global_14434, "SET_THEME", SYSTEM::TO_FLOAT(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3127 == 0)
		{
			func_97(Global_14434, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_104555.f_14021[Global_14453 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_91();
	}
	iLocal_42 = func_89();
	if (Global_14396 == 0)
	{
		func_78();
	}
	Global_14431 = 0;
	Global_14616 = 0;
	MISC::CLEAR_BIT(&Global_2323, 9);
	Global_2456825 = 0;
	if (func_76(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2456825 = 1;
	}
	func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_75();
	func_73();
	func_72(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_14442, true);
	SYSTEM::SETTIMERB(0);
	while (Global_14453.f_1 < 6 && Global_14436 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_14436 = 1;
		}
		if (Global_14453.f_1 < 4)
		{
			Global_14436 = 1;
		}
	}
	if (Global_14453.f_1 == 5 || Global_14453.f_1 == 6)
	{
		if (func_71(14))
		{
			func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14457), -1082130432, -1082130432, -1082130432);
		}
		if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_97(Global_14434, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_97(Global_14434, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14441)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14441)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14617 == 0)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
		}
		else if (Global_70856)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
		}
		else
		{
			if (Global_14616 == 1)
			{
				if (Global_14441)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_2323, 17);
		}
	}
	Global_14439 = 1;
	func_69();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_58 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_53 = MISC::GET_GAME_TIMER();
	}
	if (Global_14613 == 1)
	{
		if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_104555.f_14021.f_84 == 0)
			{
				Global_104555.f_14021.f_84 = 1;
				if (Global_14398 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				func_68("CELL_7052", 10000);
			}
		}
	}
	if (Global_70856 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_67())
	{
		iLocal_35 = 1;
	}
	else
	{
		iLocal_35 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_36 = 1;
			if (func_67())
			{
				func_66();
			}
		}
		else
		{
			iLocal_36 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_70856 == 0)
		{
			iLocal_55 = MISC::GET_GAME_TIMER();
			iLocal_57 = 0;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_4267143, 24))
		{
			if (!Global_14616)
			{
				if (Global_14453.f_1 == 6 || Global_14453.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4267143, 24);
					func_75();
					func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_72(1);
					if (Global_14453.f_1 == 6)
					{
						func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_65())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_70856 == 0)
		{
			if (iLocal_32)
			{
				if (Global_14453.f_1 == 6 || Global_14453.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_14453.f_1 > 4)
			{
				if ((MISC::IS_BIT_SET(Global_2323, 14) && Global_4267358 == 0) && Global_14393 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_64())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_14399[Global_14398 /*3*/].f_1 != Local_33.f_1)
							{
								func_62();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_14406[Global_14398 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_65())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_60();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_36 = 1;
								func_60();
								func_66();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_36 = 0;
							func_62();
							if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
							{
								if (Global_15756 != 2)
								{
									func_59();
								}
							}
						}
						if (iLocal_35 == 0)
						{
							if (func_67())
							{
								iLocal_35 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_66();
								}
								func_62();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_67() == 0)
							{
								iLocal_35 = 0;
								func_60();
							}
						}
					}
				}
			}
		}
		if (Global_2456825 == 1)
		{
			if (!func_76(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_14453.f_1 > 3)
					{
						Global_14438 = 1;
						func_58();
						func_55(0);
						Global_2456825 = 0;
					}
				}
			}
		}
		if (Global_14618 == 0)
		{
			if ((Global_35861 != 15 || Global_2328 == 1) || func_54(0))
			{
				if (!Global_14616)
				{
					if (Global_14453.f_1 == 6)
					{
						Global_2329 = 42;
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14618 = 1;
			}
		}
		else if ((Global_35861 == 15 && func_54(0) == 0) && Global_2328 == 0)
		{
			if (!Global_14616)
			{
				if (Global_14453.f_1 == 6)
				{
					Global_2329 = 255;
					func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14618 = 0;
		}
		if (Global_14619 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2324, 3))
			{
				if (!Global_14616)
				{
					if (Global_14453.f_1 == 6)
					{
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14619 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2324, 3))
		{
			if (!Global_14616)
			{
				if (Global_14453.f_1 == 6)
				{
					func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14433), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14619 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_14381.f_1 != Global_14399[Global_14398 /*3*/].f_1 || func_67())
			{
				if (Global_14453.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_70856)
						{
							if (Global_14453.f_1 == 9)
							{
								if (Global_15809 == 1 || MISC::IS_BIT_SET(Global_2324, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
						if (MISC::IS_BIT_SET(Global_2323, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_14424);
						}
					}
					if (!func_53() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_14425);
					}
				}
			}
			if (Global_14381.f_1 == Global_14399[Global_14398 /*3*/].f_1)
			{
			}
		}
		if (!PAD::_IS_INPUT_DISABLED(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_68215)
			{
				if (!func_65())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14427);
				if (!func_53())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_14428);
				}
				if (Global_14453.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_14430);
				}
			}
		}
		if (func_52(2, Global_14421, 0))
		{
			iLocal_50 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_31 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_14422))
			{
				Global_2327 = 1;
				iLocal_31 = 0;
			}
			if (!Global_14453.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_50)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_14421))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_14453.f_1 = 3;
					func_50();
				}
			}
			else
			{
				iLocal_50 = 0;
			}
		}
		Global_2931 = MISC::GET_GAME_TIMER();
		if (Global_14440)
		{
			func_69();
			Global_14439 = 1;
			Global_14440 = 0;
		}
		if (Global_14615 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_44();
			func_43();
			HUD::SET_TEXT_RENDER_ID(iLocal_39);
			if (Global_14439 == 1)
			{
				GRAPHICS::_SET_2D_LAYER(4);
				if (Global_14396)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14434, Global_14373, Global_14374, Global_14375, Global_14376, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14434, Global_14373, Global_14374, Global_14375, Global_14376, 255, 255, 255, 255, 0);
				}
				func_95();
			}
			if (Global_14393 == 1)
			{
				if (Global_14453.f_1 > 3)
				{
					func_42();
				}
			}
			else if (Global_14453.f_1 > 3)
			{
				if (Global_4267358 == 1)
				{
					func_41();
				}
				if (MISC::IS_BIT_SET(Global_2324, 25))
				{
					if (Global_70856 == 1)
					{
						func_40();
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2324, 24))
				{
					if (MISC::IS_BIT_SET(Global_2324, 26))
					{
						if (func_52(2, Global_14420, 0))
						{
							MISC::SET_BIT(&Global_2324, 25);
							MISC::CLEAR_BIT(&Global_2324, 26);
							MISC::CLEAR_BIT(&Global_2325, 2);
						}
					}
				}
				else if (Global_70856 == 1)
				{
					func_39();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_14453.f_1 == 6)
			{
				func_35();
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2323, 23))
		{
			if (Global_14453.f_1 == 5 || Global_14453.f_1 == 6)
			{
				if (Global_14615 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_14396 == 0)
						{
							if (MISC::IS_BIT_SET(Global_2323, 14))
							{
								if (!Global_70856)
								{
									if (iLocal_31 == 0)
									{
										if (!func_71(14))
										{
											func_34();
										}
										else if (Global_2456825)
										{
											func_33();
										}
									}
								}
								else
								{
									func_22();
								}
							}
						}
						if (MISC::IS_BIT_SET(Global_2323, 9))
						{
							func_19(0, 0, 1, 1);
						}
						else if (Global_16815 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_4267143, 3))
							{
								if (Global_70856)
								{
									func_18();
								}
								func_17();
								func_15();
							}
						}
						else
						{
							if (Global_70856)
							{
								func_18();
							}
							if (!MISC::IS_BIT_SET(Global_4267143, 3))
							{
								if (Global_16815 == 1)
								{
									if (MISC::IS_BIT_SET(Global_4267143, 1))
									{
										if (MISC::IS_BIT_SET(Global_2323, 14))
										{
											if (Global_70856)
											{
												func_19(7, 0, 1, 0);
											}
											else
											{
												Global_16816 = 0;
											}
											Global_16815 = 0;
											MISC::CLEAR_BIT(&Global_4267143, 1);
										}
									}
									else if (MISC::IS_BIT_SET(Global_2323, 14))
									{
										func_19(7, 0, 1, 0);
										Global_16815 = 0;
									}
								}
								else
								{
									if (Global_16815 == 3)
									{
										func_19(1, 0, 1, 0);
										Global_16815 = 0;
									}
									if (Global_16815 == 2)
									{
										func_19(14, 0, 1, 0);
										Global_16815 = 0;
									}
									if (Global_16815 == 4)
									{
										func_19(23, 0, 1, 0);
										Global_16815 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_2330[Global_14456 /*15*/].f_5)))
		{
			if (Global_14456 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[Global_14456 /*15*/].f_9) == 0)
				{
					Global_14451 = SYSTEM::START_NEW_SCRIPT(&(Global_2330[Global_14456 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_14456 == 23)
				{
					if (MISC::IS_BIT_SET(Global_4267143, 4) == 0 && Global_1573866 == 0)
					{
					}
				}
				if (Global_14456 == 2 || iVar5 == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[Global_14456 /*15*/].f_9) == 0)
					{
						Global_14451 = SYSTEM::START_NEW_SCRIPT(&(Global_2330[Global_14456 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[Global_14456 /*15*/].f_9) == 0)
				{
					Global_14451 = SYSTEM::START_NEW_SCRIPT(&(Global_2330[Global_14456 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2330[Global_14456 /*15*/].f_5));
			Global_2326 = 99;
			MISC::CLEAR_BIT(&Global_2323, 23);
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_14453.f_1 == 1)
		{
			func_6();
		}
		if (Global_14453.f_1 == 0)
		{
			func_6();
		}
		if (Global_14453.f_1 == 3)
		{
			func_6();
		}
		else
		{
			if (Global_15769)
			{
				if (Global_14453.f_1 == 9)
				{
					if (Global_70856)
					{
						if (!MISC::IS_BIT_SET(Global_2324, 31))
						{
							if (!MISC::IS_BIT_SET(Global_2324, 27))
							{
								if (func_5())
								{
									if (!MISC::IS_BIT_SET(Global_2323, 9))
									{
										if (func_52(2, Global_14425, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_14452 == 1)
												{
													if (Global_14453.f_1 > 6)
													{
														MISC::SET_BIT(&Global_2324, 24);
														MISC::SET_BIT(&Global_2324, 27);
														MISC::CLEAR_BIT(&Global_2324, 26);
														MISC::CLEAR_BIT(&Global_2324, 25);
														MISC::SET_BIT(&(Global_2512808.f_1707), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_14436 == 1)
			{
				Global_14438 = 1;
				func_55(0);
			}
			if (Global_14437 == 1)
			{
				Global_14438 = 1;
				func_55(0);
			}
			if (Global_70856)
			{
				if (!MISC::IS_BIT_SET(Global_2325, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE())
					{
						if (Global_2518688.f_1 == 1)
						{
						}
						else
						{
							func_58();
							func_55(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_2324, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						Global_14438 = 1;
						func_58();
						func_55(0);
					}
				}
				if (func_71(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[2 /*29*/])
					{
						iLocal_73 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_73 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_71117 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::_IS_NIGHTVISION_ACTIVE()) || iLocal_73)
				{
					if (!Global_14396)
					{
						MISC::SET_BIT(&Global_2324, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_70856 == 0)
					{
						if (iLocal_57 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									iLocal_55 = MISC::GET_GAME_TIMER();
									iLocal_57 = 1;
								}
							}
						}
						else
						{
							iLocal_56 = MISC::GET_GAME_TIMER();
							iLocal_59 = (iLocal_56 - iLocal_55);
							if (iLocal_59 < 4000)
							{
								MISC::SET_BIT(&Global_2324, 4);
							}
							else
							{
								iLocal_57 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_70856)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed") && Global_14453.f_1 < 7)
						{
							MISC::SET_BIT(&Global_2324, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_66 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("submersible2"))
					{
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 0;
					}
					if ((((ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("chernobog")) || iLocal_69) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_66, 0) == 0)
					{
						MISC::SET_BIT(&Global_2324, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66))
						{
							iVar6 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_66);
							if (iVar6 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent3"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("halftrack"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("dune3"))
								{
									if (iVar6 == 0)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("trailersmall2"))
								{
									if (iVar6 == -1)
									{
										MISC::SET_BIT(&Global_2324, 4);
									}
								}
								if (VEHICLE::_0xE33FFA906CE74880(iLocal_66, iVar6))
								{
									MISC::SET_BIT(&Global_2324, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_70856 == 0)
						{
							if (Global_14453.f_1 == 6 || Global_14453.f_1 == 7)
							{
								bVar7 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_66))
								{
									bVar7 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_66)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_66))) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_55(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_70856 == 0)
						{
							if (Global_14453.f_1 == 6 || Global_14453.f_1 == 7)
							{
								func_55(0);
							}
						}
					}
					iLocal_69 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					Global_14438 = 1;
					func_58();
					func_55(0);
				}
				if (Global_70856 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_52)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14438 = 1;
							func_58();
							func_55(0);
						}
					}
					if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_14438 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				else if (func_65())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_52)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14438 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_65())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_65, 1);
							if ((iLocal_65 == joaat("weapon_sniperrifle") || iLocal_65 == joaat("weapon_heavysniper")) || iLocal_65 == joaat("weapon_remotesniper"))
							{
								bLocal_64 = true;
							}
							else
							{
								bLocal_64 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_64)
								{
									Global_14438 = 1;
									func_58();
									func_55(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_14438 = 1;
					func_58();
					func_55(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14438 = 1;
					func_58();
					func_55(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
				{
					Global_14438 = 1;
					func_58();
					func_55(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_70856 == 0)
					{
						Global_14438 = 1;
						func_58();
						func_55(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_70856 && Global_2518688.f_1) && Global_2518688.f_37) && Global_14453.f_1 == 9)
				{
					iVar8 = 1;
					if (!MISC::IS_BIT_SET(Global_2324, 24))
					{
						if (MISC::IS_BIT_SET(Global_2324, 26))
						{
							MISC::SET_BIT(&Global_2324, 25);
							MISC::CLEAR_BIT(&Global_2324, 26);
							MISC::CLEAR_BIT(&Global_2325, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_14438 = 1;
					func_58();
					func_55(0);
				}
			}
		}
		if (Global_14431 == 1)
		{
			func_1();
		}
		if (Global_14452 == 2)
		{
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_14422) && !PAD::IS_CONTROL_PRESSED(2, Global_14421))
	{
		Global_14431 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, 0) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_5()
{
	return Global_2518688.f_1;
}

void func_6()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_16815 = 0;
	Global_16816 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_14419 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_64())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_14419 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_104555.f_14021.f_84 == 1)
	{
		Global_104555.f_14021.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (MISC::IS_BIT_SET(Global_2323, 30) || MISC::IS_BIT_SET(Global_2325, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_14413 };
	if (Global_14438 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((MISC::IS_BIT_SET(Global_2324, 26) || MISC::IS_BIT_SET(Global_2323, 30)) || MISC::IS_BIT_SET(Global_2325, 2))
	{
		vLocal_71 = { Global_14399[Global_14398 /*3*/] };
	}
	else
	{
		vLocal_71 = { Global_14406[Global_14398 /*3*/] };
	}
	fVar2 = func_12(vLocal_71, Global_14399[Global_14398 /*3*/], Global_14413, vVar1, fVar0, 0);
	if (!iLocal_40 && fVar2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_40 = 1;
	}
	if (iLocal_40 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
		if (Global_14453.f_1 == 3)
		{
		}
		if (Global_14453.f_1 == 1)
		{
		}
		if (Global_14453.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_14394 = 0;
		Global_14435 = 0;
		Global_14613 = 0;
		if (Global_104555.f_14021.f_84 == 1)
		{
			Global_104555.f_14021.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, 1);
		}
		Global_14397 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_16770 == 0)
		{
		}
		Global_14615 = 0;
		if (func_9(0))
		{
			func_8();
		}
		MISC::CLEAR_BIT(&Global_2324, 8);
		MISC::CLEAR_BIT(&Global_2323, 14);
		MISC::CLEAR_BIT(&Global_2323, 9);
		MISC::CLEAR_BIT(&Global_2323, 27);
		MISC::CLEAR_BIT(&Global_2323, 30);
		MISC::CLEAR_BIT(&Global_2324, 5);
		MISC::CLEAR_BIT(&Global_2324, 19);
		MISC::CLEAR_BIT(&Global_2324, 21);
		MISC::CLEAR_BIT(&Global_2324, 24);
		MISC::CLEAR_BIT(&Global_2324, 25);
		MISC::CLEAR_BIT(&Global_2324, 27);
		MISC::CLEAR_BIT(&Global_2324, 26);
		MISC::CLEAR_BIT(&Global_2325, 2);
		Global_2521686 = 0;
		iLocal_72 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_7();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_14451))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_39);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14434, Global_14373, Global_14374, Global_14375, Global_14376, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_14451);
				}
			}
		}
		Global_14441 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
		{
			func_103(Global_14434, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14434);
		Global_14419 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Global_2518688.f_1)
			{
				if (Global_70856)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14442, true);
				}
			}
		}
		func_100();
		func_98();
		Global_15769 = 0;
		Global_4267358 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_7()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16767 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15756 = 6;
		return;
	}
}

void func_8()
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_2323, 25);
	MISC::SET_BIT(&Global_2324, 11);
}

int func_9(int iParam0)
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, Global_35861);
}

int func_11(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_12(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4267358 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2323, 14) && Global_14453.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267358 = 1;
			}
		}
	}
	if (func_64() && Global_4267358 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_14((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_14381 = { func_13(vParam0, vParam1, fVar2) };
		Global_14384 = { func_13(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14381 = { vParam1 };
		Global_14384 = { vParam3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14384, 0);
	return fVar1;
}

Vector3 func_13(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15()
{
	if (Global_14431 == 0)
	{
		if (func_52(2, Global_14425, 0))
		{
			if (Global_70856 == 0)
			{
				if (Global_14617)
				{
					if (Global_14616 == 0)
					{
						Global_14616 = 1;
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(2);
						func_16();
						func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14458), -1082130432, -1082130432, -1082130432);
						Global_14433 = Global_14458;
					}
					else
					{
						Global_14616 = 0;
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(1);
						func_16();
						func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14457), -1082130432, -1082130432, -1082130432);
						Global_14433 = Global_14457;
					}
				}
			}
		}
	}
}

void func_16()
{
	if (Global_14617 == 0)
	{
		func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2323, 17);
	}
	else if (Global_70856)
	{
		func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2323, 17);
	}
	else
	{
		if (Global_14616 == 1)
		{
			if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14441)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_2323, 17);
	}
}

void func_17()
{
	if (MISC::IS_BIT_SET(Global_2324, 10) || iLocal_72 == 1)
	{
		Global_2930 = MISC::GET_GAME_TIMER();
		Global_2929 = 0;
		Global_14431 = 1;
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "GET_CURRENT_SELECTION");
		uLocal_29 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		iLocal_30 = 1;
	}
	else if (Global_14431 == 0)
	{
		if (func_52(2, Global_14422, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_2930 = MISC::GET_GAME_TIMER();
				Global_2929 = 0;
				Global_14431 = 1;
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "GET_CURRENT_SELECTION");
				uLocal_29 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
				iLocal_30 = 1;
			}
		}
	}
}

void func_18()
{
	if (Global_14431 == 0)
	{
		if (func_52(2, Global_14420, 1))
		{
			if (func_92(2087, -1, 0) == 1)
			{
				if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_2324, 3))
					{
						if (!Global_14396)
						{
							if (!MISC::IS_BIT_SET(Global_4267143, 3))
							{
								if (!MISC::IS_BIT_SET(Global_2323, 14))
								{
									Global_14431 = 1;
									MISC::SET_BIT(&Global_4267143, 3);
									func_19(3, 0, 1, 0);
									Global_16815 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_105();
	if (Global_70856 == 0)
	{
		if (func_71(14))
		{
			if (Global_16815 == 2 || Global_16815 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14453.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_21(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14419 == 1)
	{
		return 0;
	}
	if (Global_14453.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14450))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14453.f_1 < 4)
			{
				func_20("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14450 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14435)
	{
		SYSTEM::WAIT(0);
	}
	func_75();
	func_73();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[iParam0 /*15*/].f_9) == 0)
	{
		Global_2929 = 0;
		Global_14453.f_1 = 7;
		func_20(&(Global_2330[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[iParam0 /*15*/].f_9) == 0)
			{
				Global_14451 = SYSTEM::START_NEW_SCRIPT(&(Global_2330[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2330[iParam0 /*15*/].f_9) == 0)
		{
			Global_14451 = SYSTEM::START_NEW_SCRIPT(&(Global_2330[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2330[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_20(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2323, 14))
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
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (Global_14432)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14432 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[1])
					{
						func_31();
						Global_14433 = 1;
					}
					break;
				
				case 1:
					if (Global_2892[2])
					{
						func_31();
						Global_14433 = 2;
					}
					break;
				
				case 2:
					if (Global_2892[3])
					{
						func_31();
						func_29();
						Global_14433 = 3;
					}
					else
					{
						func_27();
						func_29();
						Global_14433 = 4;
					}
					break;
				
				case 3:
					if (Global_2892[4])
					{
						func_31();
						Global_14433 = 4;
					}
					break;
				
				case 4:
					if (Global_2892[5])
					{
						func_31();
						Global_14433 = 5;
					}
					break;
				
				case 5:
					if (Global_2892[6])
					{
						func_31();
						func_29();
						Global_14433 = 6;
					}
					break;
				
				case 6:
					if (Global_2892[7])
					{
						func_31();
						Global_14433 = 7;
					}
					break;
				
				case 7:
					if (Global_2892[8])
					{
						func_31();
						Global_14433 = 8;
					}
					else
					{
						func_27();
						func_29();
						Global_14433 = 0;
					}
					break;
				
				case 8:
					if (Global_2892[0])
					{
						func_31();
						func_29();
						Global_14433 = 0;
					}
					else
					{
						func_27();
						func_29();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[8])
					{
						func_27();
						func_24();
						Global_14433 = 8;
					}
					else
					{
						func_31();
						func_24();
						Global_14433 = 7;
					}
					break;
				
				case 1:
					if (Global_2892[0])
					{
						func_27();
						Global_14433 = 0;
					}
					else if (Global_2892[8])
					{
						func_24();
						func_31();
					}
					else
					{
						func_24();
					}
					break;
				
				case 2:
					if (Global_2892[1])
					{
						func_27();
						Global_14433 = 1;
					}
					break;
				
				case 3:
					if (Global_2892[2])
					{
						func_27();
						func_24();
						Global_14433 = 2;
					}
					break;
				
				case 4:
					if (Global_2892[3])
					{
						func_27();
						Global_14433 = 3;
					}
					else
					{
						func_24();
						func_31();
						Global_14620 = 1;
						Global_14433 = 2;
					}
					break;
				
				case 5:
					if (Global_2892[4])
					{
						func_27();
						Global_14433 = 4;
					}
					break;
				
				case 6:
					if (Global_2892[5])
					{
						func_24();
						func_27();
						Global_14433 = 5;
					}
					break;
				
				case 7:
					if (Global_2892[6])
					{
						func_27();
						Global_14433 = 6;
					}
					break;
				
				case 8:
					if (Global_2892[7])
					{
						func_27();
						Global_14433 = 7;
					}
					break;
				}
			}
	}
	if (Global_14432 == 0)
	{
		if (func_52(2, Global_14428, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 2:
					if (Global_2892[0] == 1)
					{
						Global_14433 = 0;
					}
					else
					{
						Global_14433 = 1;
						Global_14620 = 1;
					}
					break;
				
				case 5:
					Global_14433 = 3;
					break;
				
				case 6:
					Global_14433 = 7;
					break;
				
				case 7:
					if (Global_2892[Global_14433 + 1] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 6;
						Global_14620 = 1;
					}
					break;
				
				case 8:
					Global_14433 = 6;
					break;
				
				default:
					Global_14433++;
					break;
			}
			if (Global_14620 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14427, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					Global_14433 = 2;
					break;
				
				case 1:
					if (Global_2892[0] == 1)
					{
						Global_14433 = 0;
					}
					else
					{
						Global_14433 = 2;
						Global_14620 = 1;
					}
					break;
				
				case 3:
					Global_14433 = 5;
					break;
				
				case 6:
					if (Global_2892[8] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 7;
						Global_14620 = 1;
					}
					break;
				
				default:
					Global_14433 = (Global_14433 - 1);
					break;
			}
			if (Global_14620 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14429, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[6])
					{
						Global_14433 = 6;
					}
					break;
				
				case 1:
					if (Global_2892[7])
					{
						Global_14433 = 7;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 4;
					}
					break;
				
				case 2:
					if (Global_2892[8])
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 5;
					}
					break;
				
				case 3:
					if (Global_2892[0])
					{
						Global_14433 = 0;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 6;
					}
					break;
				
				case 4:
					if (Global_2892[1])
					{
						Global_14433 = 1;
					}
					break;
				
				case 5:
					if (Global_2892[2])
					{
						Global_14433 = 2;
					}
					break;
				
				case 6:
					if (Global_2892[3])
					{
						Global_14433 = 3;
					}
					break;
				
				case 7:
					if (Global_2892[4])
					{
						Global_14433 = 4;
					}
					break;
				
				case 8:
					if (Global_2892[5])
					{
						Global_14433 = 5;
					}
					break;
			}
			if (Global_14620 == 1)
			{
				func_29();
			}
			else
			{
				func_24();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14430, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[3])
					{
						Global_14433 = 3;
					}
					break;
				
				case 1:
					if (Global_2892[4])
					{
						Global_14433 = 4;
					}
					break;
				
				case 2:
					if (Global_2892[5])
					{
						Global_14433 = 5;
					}
					break;
				
				case 3:
					if (Global_2892[6])
					{
						Global_14433 = 6;
					}
					break;
				
				case 4:
					if (Global_2892[7])
					{
						Global_14433 = 7;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 1;
					}
					break;
				
				case 5:
					if (Global_2892[8])
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 2;
					}
					break;
				
				case 6:
					if (Global_2892[0])
					{
						Global_14433 = 0;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 3;
					}
					break;
				
				case 7:
					if (Global_2892[1])
					{
						Global_14433 = 1;
					}
					break;
				
				case 8:
					if (Global_2892[2])
					{
						Global_14433 = 2;
					}
					break;
			}
			if (Global_14620 == 1)
			{
				func_24();
			}
			else
			{
				func_29();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_2330[23 /*15*/].f_10 == 57)
	{
		if (Global_14432 == 1 && Global_14433 == 8)
		{
			if (iLocal_74 == 0)
			{
				iLocal_74 = 1;
				func_23(12);
			}
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_24()
{
	func_97(Global_14434, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14442, true);
	func_25();
}

void func_25()
{
	if (func_26())
	{
		if (Global_14620 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_27()
{
	func_97(Global_14434, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14442, true);
	func_28();
}

void func_28()
{
	if (func_26())
	{
		if (Global_14620 == 0)
		{
			MOBILE::_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_MOVE_FINGER(4);
		}
	}
}

void func_29()
{
	func_97(Global_14434, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14442, true);
	func_30();
}

void func_30()
{
	if (func_26())
	{
		if (Global_14620 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_31()
{
	func_97(Global_14434, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14442, true);
	func_32();
}

void func_32()
{
	if (func_26())
	{
		if (Global_14620 == 0)
		{
			MOBILE::_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_MOVE_FINGER(3);
		}
	}
}

void func_33()
{
	if (Global_14432)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14432 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14433)
			{
				case 6:
					if (Global_2892[7])
					{
						func_31();
						Global_14433 = 7;
					}
					break;
				
				case 7:
					if (Global_2892[6])
					{
						func_27();
						Global_14433 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14433)
			{
				case 6:
					if (Global_2892[7])
					{
						func_31();
						Global_14433 = 7;
					}
					break;
				
				case 7:
					if (Global_2892[6])
					{
						func_27();
						Global_14433 = 6;
					}
					break;
				}
			}
	}
	if (Global_14432 == 0)
	{
		if (func_52(2, Global_14428, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 2:
					Global_14433 = 0;
					break;
				
				case 5:
					Global_14433 = 3;
					break;
				
				case 7:
					if (Global_2892[Global_14433 + 1] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 6;
						Global_14620 = 1;
					}
					break;
				
				case 8:
					Global_14433 = 6;
					break;
				
				default:
					Global_14433++;
					break;
			}
			if (Global_14620 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14427, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					Global_14433 = 2;
					break;
				
				case 3:
					Global_14433 = 5;
					break;
				
				case 6:
					if (Global_2892[8] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 7;
						Global_14620 = 1;
					}
					break;
				
				default:
					Global_14433 = (Global_14433 - 1);
					break;
			}
			if (Global_14620 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_34()
{
	if (Global_14432)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14432 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[1])
					{
						func_31();
						Global_14433 = 1;
					}
					break;
				
				case 1:
					if (Global_2892[2])
					{
						func_31();
						Global_14433 = 2;
					}
					break;
				
				case 2:
					if (Global_2892[3])
					{
						func_31();
						func_29();
						Global_14433 = 3;
					}
					else
					{
						func_27();
						func_29();
						Global_14433 = 4;
					}
					break;
				
				case 3:
					if (Global_2892[4])
					{
						func_31();
						Global_14433 = 4;
					}
					break;
				
				case 4:
					if (Global_2892[5])
					{
						func_31();
						Global_14433 = 5;
					}
					break;
				
				case 5:
					if (Global_2892[6])
					{
						func_31();
						func_29();
						Global_14433 = 6;
					}
					break;
				
				case 6:
					if (Global_2892[7])
					{
						func_31();
						Global_14433 = 7;
					}
					break;
				
				case 7:
					if (Global_2892[8])
					{
						func_31();
						Global_14433 = 8;
					}
					else
					{
						func_27();
						func_29();
						Global_14433 = 0;
					}
					break;
				
				case 8:
					if (Global_2892[0])
					{
						func_31();
						func_29();
						Global_14433 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[8])
					{
						func_27();
						func_24();
						Global_14433 = 8;
					}
					else
					{
						func_31();
						func_24();
						Global_14433 = 7;
					}
					break;
				
				case 1:
					if (Global_2892[0])
					{
						func_27();
						Global_14433 = 0;
					}
					break;
				
				case 2:
					if (Global_2892[1])
					{
						func_27();
						Global_14433 = 1;
					}
					break;
				
				case 3:
					if (Global_2892[2])
					{
						func_27();
						func_24();
						Global_14433 = 2;
					}
					break;
				
				case 4:
					if (Global_2892[3])
					{
						func_27();
						Global_14433 = 3;
					}
					else
					{
						func_24();
						func_31();
						Global_14620 = 1;
						Global_14433 = 2;
					}
					break;
				
				case 5:
					if (Global_2892[4])
					{
						func_27();
						Global_14433 = 4;
					}
					break;
				
				case 6:
					if (Global_2892[5])
					{
						func_24();
						func_27();
						Global_14433 = 5;
					}
					break;
				
				case 7:
					if (Global_2892[6])
					{
						func_27();
						Global_14433 = 6;
					}
					break;
				
				case 8:
					if (Global_2892[7])
					{
						func_27();
						Global_14433 = 7;
					}
					break;
				}
			}
	}
	if (Global_14432 == 0)
	{
		if (func_52(2, Global_14428, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 2:
					Global_14433 = 0;
					break;
				
				case 5:
					Global_14433 = 3;
					break;
				
				case 7:
					if (Global_2892[Global_14433 + 1] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 6;
						Global_14620 = 1;
					}
					break;
				
				case 8:
					Global_14433 = 6;
					break;
				
				default:
					Global_14433++;
					break;
			}
			if (Global_14620 == 1)
			{
				func_27();
			}
			else
			{
				func_31();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14427, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					Global_14433 = 2;
					break;
				
				case 3:
					Global_14433 = 5;
					break;
				
				case 6:
					if (Global_2892[8] == 1)
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14433 = 7;
						Global_14620 = 1;
					}
					break;
				
				default:
					Global_14433 = (Global_14433 - 1);
					break;
			}
			if (Global_14620 == 1)
			{
				func_31();
			}
			else
			{
				func_27();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14429, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[6])
					{
						Global_14433 = 6;
					}
					break;
				
				case 1:
					if (Global_2892[7])
					{
						Global_14433 = 7;
					}
					break;
				
				case 2:
					if (Global_2892[8])
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 5;
					}
					break;
				
				case 3:
					if (Global_2892[0])
					{
						Global_14433 = 0;
					}
					break;
				
				case 4:
					if (Global_2892[1])
					{
						Global_14433 = 1;
					}
					break;
				
				case 5:
					if (Global_2892[2])
					{
						Global_14433 = 2;
					}
					break;
				
				case 6:
					if (Global_2892[3])
					{
						Global_14433 = 3;
					}
					break;
				
				case 7:
					if (Global_2892[4])
					{
						Global_14433 = 4;
					}
					break;
				
				case 8:
					if (Global_2892[5])
					{
						Global_14433 = 5;
					}
					break;
			}
			if (Global_14620 == 1)
			{
				func_29();
			}
			else
			{
				func_24();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_52(2, Global_14430, 0))
		{
			Global_14620 = 0;
			switch (Global_14433)
			{
				case 0:
					if (Global_2892[3])
					{
						Global_14433 = 3;
					}
					break;
				
				case 1:
					if (Global_2892[4])
					{
						Global_14433 = 4;
					}
					break;
				
				case 2:
					if (Global_2892[5])
					{
						Global_14433 = 5;
					}
					break;
				
				case 3:
					if (Global_2892[6])
					{
						Global_14433 = 6;
					}
					break;
				
				case 4:
					if (Global_2892[7])
					{
						Global_14433 = 7;
					}
					break;
				
				case 5:
					if (Global_2892[8])
					{
						Global_14433 = 8;
					}
					else
					{
						Global_14620 = 1;
						Global_14433 = 2;
					}
					break;
				
				case 6:
					if (Global_2892[0])
					{
						Global_14433 = 0;
					}
					break;
				
				case 7:
					if (Global_2892[1])
					{
						Global_14433 = 1;
					}
					break;
				
				case 8:
					if (Global_2892[2])
					{
						Global_14433 = 2;
					}
					break;
			}
			if (Global_14620 == 1)
			{
				func_24();
			}
			else
			{
				func_29();
			}
			Global_14432 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::_0x768FF8961BA904D6(uLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_29);
		if (Global_14616 == 0)
		{
			Global_14457 = iLocal_28;
		}
		else
		{
			Global_14458 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_14456 = Global_2856[iLocal_28];
		if (MISC::IS_BIT_SET(Global_2324, 10))
		{
			Global_14456 = 2;
			MISC::CLEAR_BIT(&Global_2324, 10);
		}
		if (iLocal_72 == 1)
		{
			Global_14457 = 1;
			Global_14456 = 0;
			Global_2521686 = 0;
			iLocal_72 = 0;
		}
		iVar0 = 0;
		if (SCRIPT::IS_THREAD_ACTIVE(Global_14451))
		{
			iVar0 = 1;
		}
		if (Global_14456 == 3)
		{
			if (MISC::IS_BIT_SET(Global_2324, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || GRAPHICS::_IS_NIGHTVISION_ACTIVE())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_70856)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14456 == 2)
		{
			if (MISC::IS_BIT_SET(Global_2324, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_14456 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2330[Global_14456 /*15*/]), "CELL_BENWEB"))
		{
			if (MISC::IS_BIT_SET(Global_2324, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_70856)
		{
			if (Global_14456 == 15 || Global_14456 == 5)
			{
			}
			else
			{
				if (Global_14456 == 23)
				{
					if (((MISC::IS_BIT_SET(Global_4267143, 4) == 0 && Global_1573866 == 0) && MISC::IS_BIT_SET(Global_4267143, 20) == 0) && MISC::IS_BIT_SET(Global_4267143, 22) == 0)
					{
					}
					if ((((MISC::IS_BIT_SET(Global_4267143, 20) == 1 && MISC::IS_BIT_SET(Global_4267143, 4) == 0) && Global_1573866 == 0) && MISC::IS_BIT_SET(Global_4267143, 22) == 0) && MISC::IS_BIT_SET(Global_4267143, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4267143, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_14456 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_2323, 17);
					Global_14453.f_1 = 7;
					if (MISC::IS_BIT_SET(Global_2323, 23))
					{
					}
					else
					{
						func_37();
						SCRIPT::REQUEST_SCRIPT(&(Global_2330[Global_14456 /*15*/].f_5));
						MISC::SET_BIT(&Global_2323, 23);
					}
				}
				else
				{
					if (Global_14456 == 2 || Global_14456 == 3)
					{
					}
					func_36();
				}
			}
		}
		else
		{
			switch (Global_14456)
			{
				case 3:
					if (Global_103608 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_2323, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_14618 == 0)
					{
						if ((Global_2327 == 0 && iLocal_31 == 0) && Global_35861 == 15)
						{
							iLocal_31 = 1;
							func_37();
							if (!Global_104555.f_14021.f_85)
							{
							}
						}
					}
					else
					{
						func_36();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_14456 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_71(14))
			{
				if (Global_14456 != 3 && Global_14456 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_37();
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2323, 17);
				Global_14453.f_1 = 7;
				if (MISC::IS_BIT_SET(Global_2323, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_2330[Global_14456 /*15*/].f_5));
					MISC::SET_BIT(&Global_2323, 23);
				}
			}
			else if (Global_14456 != 20)
			{
				if (Global_104555.f_14021.f_86 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_14456 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_68("CELL_38", -1);
									Global_104555.f_14021.f_86 = 1;
								}
							}
						}
					}
				}
				func_36();
			}
		}
	}
}

void func_36()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14442, true);
	}
}

void func_37()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14442, true);
		func_38();
	}
}

void func_38()
{
	if (func_26())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_39()
{
	if (Global_14419 == 0)
	{
		if (func_12(Global_14406[Global_14398 /*3*/], Global_14399[Global_14398 /*3*/], Global_14413, Global_14413, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_2324, 24);
			MISC::SET_BIT(&Global_2324, 26);
		}
	}
}

void func_40()
{
	if (Global_14419 == 0)
	{
		if (func_12(Global_14399[Global_14398 /*3*/], Global_14406[Global_14398 /*3*/], Global_14413, Global_14413, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_2324, 25);
			if (Global_15769)
			{
				MISC::CLEAR_BIT(&Global_2324, 27);
			}
		}
	}
}

void func_41()
{
	if (Global_14419 == 0 && Global_14393 == 0)
	{
		if (func_12(Global_14406[Global_14398 /*3*/], Global_14399[Global_14398 /*3*/], Global_14413, Global_14413, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4267358 = 0;
		}
	}
}

void func_42()
{
	float fVar0;
	float fVar1;
	
	if (MISC::IS_BIT_SET(Global_2325, 2))
	{
		MISC::SET_BIT(&Global_2324, 8);
		MISC::SET_BIT(&Global_2323, 14);
		Global_14393 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14413, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_12(Global_14399[Global_14398 /*3*/], Global_14406[Global_14398 /*3*/], Global_14416, Global_14413, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_2324, 8);
			MISC::SET_BIT(&Global_2323, 14);
			Global_14393 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_2325, 2);
			iLocal_37 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_2324, 8);
		}
	}
	else
	{
		if (iLocal_37 == 0)
		{
			vLocal_38 = { Global_14406[Global_14398 /*3*/] };
			vLocal_38.x = (vLocal_38.x - 10f);
			vLocal_38.y = (vLocal_38.y + 20f);
			iLocal_37 = 1;
		}
		fVar1 = func_12(Global_14399[Global_14398 /*3*/], vLocal_38, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_2324, 8);
			MISC::SET_BIT(&Global_2323, 14);
			Global_14393 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_2325, 2);
			iLocal_37 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_2324, 8);
		}
	}
}

void func_43()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_59 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_58);
	}
	else
	{
		iLocal_54 = MISC::GET_GAME_TIMER();
		iLocal_59 = (iLocal_54 - iLocal_53);
	}
	if (iLocal_59 > 4000)
	{
		iLocal_42 = func_89();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_58 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_53 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_44()
{
	if (Global_14452 == 1)
	{
		func_104();
		if (Global_14431 == 0)
		{
			if (func_52(2, Global_14423, 0))
			{
				if (MISC::IS_BIT_SET(Global_2324, 8))
				{
					if (Global_15803 == 0)
					{
						func_36();
						Global_14431 = 1;
						Global_14452 = 3;
						Global_15805 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_14431 == 0)
		{
			if (func_52(2, Global_14422, 0))
			{
				if (MISC::IS_BIT_SET(Global_2324, 8))
				{
					func_37();
					Global_14431 = 1;
					Global_14452 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_49();
					func_48();
				}
			}
		}
	}
	else
	{
		if (iLocal_51 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2323, 27))
			{
				iLocal_51 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_14453.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_14396)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
							else if (!MISC::IS_BIT_SET(Global_2325, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_2323, 27))
			{
				iLocal_51 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_14452 == 0)
		{
			if (Global_14431 == 0)
			{
				if (func_52(2, Global_14421, 0) || Global_2521686 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_BIT_SET(Global_2324, 8))
							{
								switch (Global_14453.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_14615 == 0)
										{
											if (Global_14616 == 1)
											{
												func_36();
												Global_14616 = 0;
												func_97(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_75();
												func_73();
												func_72(1);
												func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14457), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_14442, true);
												}
												iLocal_18 = 0;
												Global_14453.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_14453.f_1 = 3;
										break;
									
									case 7:
										if (MISC::IS_BIT_SET(Global_2323, 23) == 1)
										{
										}
										if ((Global_2931 - Global_2930) > Global_2932 && MISC::IS_BIT_SET(Global_2323, 23) == 0)
										{
											if (MISC::IS_BIT_SET(Global_2324, 0))
											{
											}
											else
											{
												func_36();
												Global_2929 = 1;
												Global_14453.f_1 = 6;
												if (Global_70856)
												{
													func_97(Global_14434, "SET_THEME", SYSTEM::TO_FLOAT(Global_4267355), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_2326 = 99;
												if (Global_2521686 == 0)
												{
													func_45();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_1638 == 132)
										{
											if (Global_2518688.f_1 || MISC::IS_BIT_SET(Global_2324, 20))
											{
												func_36();
												func_66();
											}
										}
										else
										{
											func_36();
											func_66();
											Global_15805 = 1;
										}
										break;
									
									case 9:
										if (Global_15756 == 0)
										{
											Global_14453.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2521686 == 1)
								{
									iLocal_72 = 1;
									Global_2521686 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_45()
{
	vector3 vVar0[24];
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_72(Global_2928);
			if (Global_2928 == 1)
			{
				func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2323, 17);
			}
			else if (Global_70856)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_97(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_70(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
			if (MISC::IS_BIT_SET(Global_2323, 20))
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_91();
				func_97(Global_14434, "SET_THEME", SYSTEM::TO_FLOAT(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15771);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_47("CELL_300");
					func_47("CELL_217");
					func_47("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_97(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_97(Global_14434, "SET_THEME", SYSTEM::TO_FLOAT(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_91();
				if (Global_15769)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15771);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_47("CELL_300");
					func_47("CELL_219");
					func_47("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_97(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &cVar0, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_97(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_46();
			break;
		
		default:
			break;
	}
}

void func_46()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2323, 20))
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
		}
		else
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
			if (MISC::IS_BIT_SET(Global_2323, 20))
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_47(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_48()
{
	if (Global_15769)
	{
		if (Global_70856)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2512808.f_1707), 15);
				}
			}
		}
	}
}

void func_49()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14434))
	{
		if (!Global_15764)
		{
			func_70(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2323, 17);
			if (MISC::IS_BIT_SET(Global_2323, 20))
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_70(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15769)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15771);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_47("CELL_300");
				func_47("CELL_219");
				func_47("CELL_219");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
			{
				func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_219", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
			}
		}
		func_97(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	Global_14622 = 0;
	func_51();
}

void func_51()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14452 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16767 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15756 = 6;
		Global_14453.f_1 = Global_14455;
		return;
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71104, 0);
}

void func_55(int iParam0)
{
	if (Global_14615)
	{
		func_57(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2324, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2323, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2323, 30);
	}
	if (!func_56())
	{
		Global_14453.f_1 = 3;
	}
}

int func_56()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14390);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14381);
		}
	}
}

void func_58()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_67() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70856)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_70856)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14396)
			{
				if (Global_1638 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_70856)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_2323, 11);
								BRAIN::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_60()
{
	if ((MISC::IS_BIT_SET(Global_2323, 14) && Global_4267358 == 0) && Global_14393 == 0)
	{
		if (func_65())
		{
		}
		else
		{
			func_61();
		}
		if (Global_14453.f_1 == 9)
		{
			if (Global_15769 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_61()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14406[Global_14398 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14393 = 1;
	}
}

void func_62()
{
	if ((MISC::IS_BIT_SET(Global_2323, 14) && Global_4267358 == 0) && Global_14393 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2324, 26))
			{
				MISC::CLEAR_BIT(&Global_2324, 24);
				MISC::CLEAR_BIT(&Global_2324, 25);
				MISC::CLEAR_BIT(&Global_2324, 27);
				MISC::CLEAR_BIT(&Global_2324, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_61();
					}
					else if (func_64() == 0)
					{
						func_61();
					}
				}
			}
		}
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (func_64())
			{
				func_63();
			}
		}
		else if (func_65())
		{
		}
		else if (func_64())
		{
			func_63();
		}
		if (Global_14453.f_1 == 9)
		{
			if (Global_15769 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_63()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14399[Global_14398 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4267358 = 1;
	}
}

int func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_71(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_103603)
		{
			return 0;
		}
	}
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_104555.f_14021.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (!Global_70856)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_2323, 11))
			{
				if (!Global_14396)
				{
					BRAIN::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_70856)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_2323, 11);
			}
		}
	}
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_68(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_69()
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_39);
	if (iLocal_39 == -1)
	{
	}
}

void func_70(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_47(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_47(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_47(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_47(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_47(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_71(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_71(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2329);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2324, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14434, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2330[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_47(&(Global_2330[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_70(Global_14434, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2330[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_73()
{
	if (Global_70856 == 0)
	{
		Global_2330[14 /*15*/].f_4 = -99;
		Global_2330[4 /*15*/].f_4 = -99;
		if (Global_2456825)
		{
			if (func_71(14))
			{
				func_74(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_74(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_74(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_74(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2330[iParam0 /*15*/]), sParam1, 16);
	Global_2330[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2330[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2330[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_2330[iParam0 /*15*/].f_10 = iParam4;
	Global_2330[iParam0 /*15*/].f_11 = iParam5;
	Global_2330[iParam0 /*15*/].f_12 = iParam6;
	Global_2330[iParam0 /*15*/].f_13 = iParam7;
	Global_2330[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2330[iParam0 /*15*/].f_12 == 0)
	{
		Global_2330[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2330[iParam0 /*15*/].f_13 == 0)
	{
		Global_2330[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2330[iParam0 /*15*/].f_14 == 0)
	{
		Global_2330[iParam0 /*15*/].f_14 = 0;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2330[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_70856 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 151)
		{
			if (Global_104555.f_28020[iVar2 /*29*/].f_19[Global_14453] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_74(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35861 == 15 && func_54(0) == 0) && Global_2328 == 0)
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14618 = 0;
			Global_2329 = 255;
		}
		else
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14618 = 1;
			Global_2329 = 42;
		}
		if (iVar1 == 1)
		{
			func_74(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_74(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_104555.f_14021.f_89 == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_104555.f_14021.f_88 == 1)
		{
			func_74(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_74(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_74(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_74(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_74(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_74(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_74(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4267143, 4) == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_74(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_74(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_74(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_74(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_74(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_74(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_74(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_74(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_74(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4267143, 4) == 1)
		{
			if (Global_1573866)
			{
				func_74(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4267143, 20) == 1)
			{
				func_74(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4267143, 22) == 1)
			{
				func_74(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4267143, 26) == 1)
			{
				func_74(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4267143, 4) == 0 && Global_1573866 == 0) && MISC::IS_BIT_SET(Global_4267143, 20) == 0) && MISC::IS_BIT_SET(Global_4267143, 22) == 0) && MISC::IS_BIT_SET(Global_4267143, 26) == 0)
		{
			func_74(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_77() == 0)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_78()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_67 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
	}
	switch (iLocal_67)
	{
		case 0:
			iLocal_43 = 5;
			break;
		
		case 1:
			iLocal_43 = 5;
			break;
		
		case 2:
			iLocal_43 = 4;
			break;
		
		case 3:
			iLocal_43 = 4;
			break;
		
		case 4:
			iLocal_43 = 3;
			break;
		
		case 5:
			iLocal_43 = 2;
			break;
		
		default:
			iLocal_43 = 3;
			break;
	}
	iLocal_68 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_68 < 2)
	{
		if (iLocal_43 > 2)
		{
			iLocal_43 = (iLocal_43 - 1);
		}
	}
	if (iLocal_69 == 1 || func_79())
	{
		iLocal_43 = 0;
	}
	func_97(Global_14434, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_42), SYSTEM::TO_FLOAT(iLocal_43), -1082130432, -1082130432, -1082130432);
}

int func_79()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = func_85();
		if (func_84(iVar0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_136)
			{
				if (MISC::IS_BIT_SET(Global_104555.f_7658[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_83(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_764)
			{
				if (MISC::IS_BIT_SET(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_81(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_866)
			{
				if (MISC::IS_BIT_SET(Global_104555.f_7658.f_765[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_82(vVar1, func_80(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	return Global_104555.f_7658.f_765[iParam0 /*10*/].f_7;
}

int func_81(int iParam0)
{
	return Global_104555.f_7658.f_651[iParam0 /*14*/].f_7;
}

int func_82(vector3 vParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_35862)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(vParam0, Global_35862[iParam1 /*5*/]) <= (Global_35862[iParam1 /*5*/].f_3 * Global_35862[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_35862[iParam1 /*5*/].f_4 != -1)
		{
			return func_82(vParam0, Global_35862[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	return Global_104555.f_7658[iParam0 /*15*/].f_7;
}

bool func_84(int iParam0)
{
	return iParam0 < 3;
}

var func_85()
{
	func_86();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_86()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_104555.f_2353.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_84(iVar0) && (!func_71(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_84(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)
{
	if (func_84(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_89()
{
	func_105();
	return Global_104555.f_14021[Global_14453 /*20*/].f_8;
}

struct<13> func_90(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_91()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_93(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

var func_94()
{
	return Global_1312736;
}

void func_95()
{
	if (func_71(14))
	{
		if (Global_2456825)
		{
			if (Global_14453.f_1 == 6)
			{
				if (Global_14433 == 7)
				{
					func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_14433 = 6;
					func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_14453.f_1 == 6)
		{
			func_97(Global_14434, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_45 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_45 != Global_2326)
	{
		Global_2326 = iLocal_45;
		iLocal_44 = CLOCK::GET_CLOCK_HOURS();
		iLocal_46 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_46)
		{
			case 0:
				StringCopy(&Local_47, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_47, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_47, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_47, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_47, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_47, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_47, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_47, "CELL_206", 16);
				break;
		}
		func_70(Global_14434, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(iLocal_45), -1f, -1f, -1f, &Local_47, 0, 0, 0, 0);
		if (Global_14396 == 0)
		{
			func_78();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_52 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_96()
{
	if (Global_70856)
	{
		StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_14396)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_14453)
		{
			case 0:
				StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_14416 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_14398 = 0;
		Global_14399[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_14406[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_14398 = 0;
		Global_14399[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_14406[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_14381 = { Global_14399[Global_14398 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14399[Global_14398 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14416, 0);
	Global_14393 = 1;
}

void func_97(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_98()
{
	Global_2518688.f_1 = 0;
	Global_2518688 = 0;
	Global_2518688.f_2 = 0;
	Global_2518688.f_33 = -1;
	Global_2518688.f_34 = -1;
	StringCopy(&(Global_2518688.f_4), "", 64);
	StringCopy(&(Global_2518688.f_39[0 /*16*/]), "", 64);
	Global_2518688.f_38 = 0;
	Global_2518688.f_56 = 0;
	Global_2518688.f_57 = 0;
	Global_2518688.f_58 = -2;
	Global_2518688.f_3 = 0;
	func_99(&(Global_2518688.f_20));
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_100()
{
	Global_2518688.f_2 = 1;
	Global_2518688.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2518688 = 0;
			Global_2518688.f_2 = 0;
		}
		else if (func_101(Global_2518688.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2518688.f_20)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_2518688.f_20)))
				{
					func_98();
				}
			}
		}
		else
		{
			func_98();
		}
	}
	else
	{
		func_98();
	}
	if (Global_2518688.f_37)
	{
		func_55(0);
	}
	Global_2518688.f_37 = 0;
	Global_2518688.f_3 = 0;
}

bool func_101(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_102()
{
	Global_14622 = 0;
	func_7();
}

void func_103(int iParam0, char* sParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_104()
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14422);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14423);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_70856)
	{
		Global_104555.f_14021[3 /*20*/].f_10 = func_92(1194, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_104555.f_14021[Global_14453 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_70856)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_3128[3 /*2811*/][1 /*281*/].f_144[func_92(1195, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_3128[3 /*2811*/][1 /*281*/].f_144[func_92(1195, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_104555.f_14021[Global_14453 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_104555.f_14021[Global_14453 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_104555.f_14021[Global_14453 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
					}
				}
			}
		}
	}
}

void func_105()
{
	if (func_71(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_85();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

