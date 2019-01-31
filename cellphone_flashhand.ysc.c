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
	int iLocal_29 = 0;
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

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	sLocal_21 = "NULL";
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_3956 = 145;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 8);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 14);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 3);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 10);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 9);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 26);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 23);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 24);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 27);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	Global_26AB01 = 0;
	iLocal_72 = 0;
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_388F = 0;
	iLocal_30 = 0;
	Global_3879 = 0;
	Global_38A1 = 0;
	Global_38A2 = 0;
	func_107();
	Global_386C = { Global_388C };
	Global_38B5 = 4;
	Global_38B6 = 0;
	Global_BAC = 1;
	Global_389D = Global_38B5;
	if (Global_389F == 0)
	{
		Global_38A0 = 0;
		if (Global_11625)
		{
			Global_389E = unk_0x9934FEFB3B8C6DB8("cellphone_ifruit");
			iLocal_41 = 1;
			if (iLocal_41 == 1)
			{
			}
		}
		else if (Global_3878)
		{
			Global_38A5 = 1;
			Global_389E = unk_0x9934FEFB3B8C6DB8("cellphone_prologue");
		}
		else
		{
			Global_389E = unk_0x9934FEFB3B8C6DB8(&(Global_19E56.f_36C7[Global_38B1 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E) && Global_38A0 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_38A0 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(AUDIO::_0x0626A247D2405330(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_38A0 = 1;
					}
				}
			}
			if (Global_38B0 == 1)
			{
				func_106();
			}
		}
		if (Global_38A0 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
			{
				func_105(Global_389E, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_389E);
			Global_3876 = 0;
			Global_389F = 0;
			Global_3957 = 0;
			if (Global_19E56.f_36C7.f_54 == 1)
			{
				Global_19E56.f_36C7.f_54 = 0;
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			Global_3879 = 1;
			Global_38B1.f_1 = 3;
			func_104();
			Global_38A5 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 9);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 27);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 21);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
			}
			if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
			}
			Global_3959 = 0;
			Global_41F2 = 0;
			Global_41F1 = 0;
			Global_3DDB = 0;
			func_102();
			func_100();
			Global_412201 = 0;
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
		Global_3865 = 0.1f;
		Global_3866 = 0.38f;
		Global_3867 = 0.195f;
		Global_3868 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
			HUD::GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
			HUD::GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
		}
		else
		{
			HUD::GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
			HUD::GET_HUD_COLOUR(126, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
			HUD::GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_99(Global_389E, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), 3212836864);
		}
		if (Global_38A0 == 0)
		{
		}
		func_98();
		if (Global_11625)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
		}
		Global_389F = 1;
	}
	Global_952 = 99;
	func_97();
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		iLocal_52 = ENTITY::GET_ENTITY_HEALTH(AUDIO::_0x0626A247D2405330());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_41C4 = 1;
	}
	else
	{
		Global_41C4 = 0;
	}
	func_99(Global_389E, "SET_SLEEP_MODE", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
	Global_3877 = 1;
	if (Global_11625)
	{
		Global_395B = 0;
		Global_4121FE = func_94(2028, 4294967295, 0);
		if (Global_4121FE < 1 || Global_4121FE > 7)
		{
			Global_4121FE = 1;
		}
		func_99(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_4121FE), 3212836864, 3212836864, 3212836864, 3212836864);
		func_93();
		Global_4121FF = func_94(2027, 4294967295, 0);
		if (Global_4121FF == 0)
		{
			Var1 = { func_92(CAM::_0xDC9DA9E8789F5246()) };
			iVar2 = 0;
			if (NETWORK::_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_412202 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::_0x72D918C99BCACC54(0)) && Global_412202 == 0)
			{
				if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					func_99(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
				}
			}
			else
			{
				func_99(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
			}
		}
		else
		{
			func_99(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4121FF), 3212836864, 3212836864, 3212836864, 3212836864);
		}
	}
	else
	{
		if (Global_3878)
		{
			Global_395B = 0;
		}
		else if (Global_19E56.f_36C7.f_58 == 1 || Global_19E56.f_36C7.f_59 == 1)
		{
			Global_395B = 0;
		}
		else
		{
			Global_395B = 0;
		}
		func_99(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
		if (Global_C73 == 0)
		{
			func_99(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_9), 3212836864, 3212836864, 3212836864, 3212836864);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_93();
	}
	iLocal_42 = func_91();
	if (Global_3878 == 0)
	{
		func_80();
	}
	Global_389B = 0;
	Global_395A = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 9);
	Global_25824A = 0;
	if (func_78(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_25824A = 1;
	}
	func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_77();
	func_75();
	func_74(1);
	unk_0x1190AB7024CBD8CB(4294967295, "Pull_Out", &Global_38A6, 1);
	SYSTEM::SETTIMERB(0);
	while (Global_38B1.f_1 < 6 && Global_38A0 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_38A0 = 1;
		}
		if (Global_38B1.f_1 < 4)
		{
			Global_38A0 = 1;
		}
	}
	if (Global_38B1.f_1 == 5 || Global_38B1.f_1 == 6)
	{
		if (func_73(14))
		{
			func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), 3212836864, 3212836864, 3212836864);
		}
		else
		{
			func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
		}
		if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
		{
			func_99(Global_389E, "SET_SLEEP_MODE", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		else
		{
			func_99(Global_389E, "SET_SLEEP_MODE", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		if (Global_38A5)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_38A5)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_395B == 0)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else if (Global_11625)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			if (Global_395A == 1)
			{
				if (Global_38A5)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_94F, 17);
		}
	}
	Global_38A3 = 1;
	func_71();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_58 = HUD::_0x13C4B962653A5280();
	}
	else
	{
		iLocal_53 = MISC::GET_GAME_TIMER();
	}
	if (Global_3957 == 1)
	{
		if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
		{
			if (Global_19E56.f_36C7.f_54 == 0)
			{
				Global_19E56.f_36C7.f_54 = 1;
				if (Global_387A == 0)
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
				func_70("CELL_7052", 10000);
			}
		}
	}
	if (Global_11625 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_69())
	{
		iLocal_35 = 1;
	}
	else
	{
		iLocal_35 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
		{
			iLocal_36 = 1;
			if (func_69())
			{
				func_68();
			}
		}
		else
		{
			iLocal_36 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_11625 == 0)
		{
			iLocal_55 = MISC::GET_GAME_TIMER();
			iLocal_57 = 0;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 24))
		{
			if (!Global_395A)
			{
				if (Global_38B1.f_1 == 6 || Global_38B1.f_1 > 6)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 24);
					func_77();
					func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_74(1);
					if (Global_38B1.f_1 == 6)
					{
						func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
					}
				}
			}
		}
		if (func_67())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_11625 == 0)
		{
			if (iLocal_32)
			{
				if (Global_38B1.f_1 == 6 || Global_38B1.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_38B1.f_1 > 4)
			{
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14) && Global_412201 == 0) && Global_3875 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (func_66())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_387B[Global_387A /*3*/].f_1 != Local_33.f_1)
							{
								func_64();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_3882[Global_387A /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_67())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_62();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
							{
								iLocal_36 = 1;
								func_62();
								func_68();
							}
						}
						else if (!PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
						{
							iLocal_36 = 0;
							func_64();
							if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
							{
								if (Global_3DCE != 2)
								{
									func_61();
								}
							}
						}
						if (iLocal_35 == 0)
						{
							if (func_69())
							{
								iLocal_35 = 1;
								if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
								{
									func_68();
								}
								func_64();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330()))
							{
								if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_69() == 0)
							{
								iLocal_35 = 0;
								func_62();
							}
						}
					}
				}
			}
		}
		if (Global_25824A == 1)
		{
			if (!func_78(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_38B1.f_1 > 3)
					{
						Global_38A2 = 1;
						func_60();
						func_56(0);
						Global_25824A = 0;
					}
				}
			}
		}
		if (Global_395C == 0)
		{
			if ((Global_8D15 != 15 || Global_954 == 1) || func_55(0))
			{
				if (!Global_395A)
				{
					if (Global_38B1.f_1 == 6)
					{
						Global_955 = 42;
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
					}
				}
				Global_395C = 1;
			}
		}
		else if ((Global_8D15 == 15 && func_55(0) == 0) && Global_954 == 0)
		{
			if (!Global_395A)
			{
				if (Global_38B1.f_1 == 6)
				{
					Global_955 = 255;
					func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
				}
			}
			Global_395C = 0;
		}
		if (Global_395D == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
			{
				if (!Global_395A)
				{
					if (Global_38B1.f_1 == 6)
					{
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
					}
				}
				Global_395D = 1;
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
		{
			if (!Global_395A)
			{
				if (Global_38B1.f_1 == 6)
				{
					func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
				}
			}
			Global_395D = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_3869.f_1 != Global_387B[Global_387A /*3*/].f_1 || func_69())
			{
				if (Global_38B1.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_11625)
						{
							if (Global_38B1.f_1 == 9)
							{
								if (Global_3E03 == 1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(2653760929) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_3894);
						}
					}
					if (!func_54() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(2653760929) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_3895);
					}
				}
			}
			if (Global_3869.f_1 == Global_387B[Global_387A /*3*/].f_1)
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
			if (!Global_10B8E)
			{
				if (!func_67())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_3897);
				if (!func_54())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_3898);
				}
				if (Global_38B1.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_389A);
				}
			}
		}
		if (func_53(2, Global_3891, 0))
		{
			iLocal_50 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_31 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_3892))
			{
				Global_953 = 1;
				iLocal_31 = 0;
			}
			if (!Global_38B1.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_50)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_3891))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_38B1.f_1 = 3;
					func_51();
				}
			}
			else
			{
				iLocal_50 = 0;
			}
		}
		Global_BAF = MISC::GET_GAME_TIMER();
		if (Global_38A4)
		{
			func_71();
			Global_38A3 = 1;
			Global_38A4 = 0;
		}
		if (Global_3959 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_45();
			func_44();
			unk_0xF14A31FD690DC3B0(iLocal_39);
			if (Global_38A3 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_3878)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_389E, Global_3861, Global_3862, Global_3863, Global_3864, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_389E, Global_3861, Global_3862, Global_3863, Global_3864, 255, 255, 255, 255, 0);
				}
				func_97();
			}
			if (Global_3875 == 1)
			{
				if (Global_38B1.f_1 > 3)
				{
					func_43();
				}
			}
			else if (Global_38B1.f_1 > 3)
			{
				if (Global_412201 == 1)
				{
					func_42();
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 25))
				{
					if (Global_11625 == 1)
					{
						func_41();
					}
				}
				else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 24))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 26))
					{
						if (func_53(2, Global_3890, 0))
						{
							MISC::SET_BIT(&Global_950, 25);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
						}
					}
				}
				else if (Global_11625 == 1)
				{
					func_40();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_38B1.f_1 == 6)
			{
				func_36();
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 23))
		{
			if (Global_38B1.f_1 == 5 || Global_38B1.f_1 == 6)
			{
				if (Global_3959 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_3878 == 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
							{
								if (!Global_11625)
								{
									if (iLocal_31 == 0)
									{
										if (!func_73(14))
										{
											func_35();
										}
										else if (Global_25824A)
										{
											func_34();
										}
									}
								}
								else
								{
									func_23();
								}
							}
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
						{
							func_20(0, 0, 1, 1);
						}
						else if (Global_41F1 == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 3))
							{
								if (Global_11625)
								{
									func_19();
								}
								func_18();
								func_16();
							}
						}
						else
						{
							if (Global_11625)
							{
								func_19();
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 3))
							{
								if (Global_41F1 == 1)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 1))
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
										{
											if (Global_11625)
											{
												func_20(7, 0, 1, 0);
											}
											else
											{
												Global_41F2 = 0;
											}
											Global_41F1 = 0;
											GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 1);
										}
									}
									else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
									{
										func_20(7, 0, 1, 0);
										Global_41F1 = 0;
									}
								}
								else
								{
									if (Global_41F1 == 3)
									{
										func_20(1, 0, 1, 0);
										Global_41F1 = 0;
									}
									if (Global_41F1 == 2)
									{
										func_20(14, 0, 1, 0);
										Global_41F1 = 0;
									}
									if (Global_41F1 == 4)
									{
										func_20(23, 0, 1, 0);
										Global_41F1 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_956[Global_38B4 /*15*/].f_5)))
		{
			if (Global_38B4 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[Global_38B4 /*15*/].f_9) == 0)
				{
					Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[Global_38B4 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_38B4 == 23)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 0 && Global_180416 == 0)
					{
					}
				}
				if (Global_38B4 == 2 || iVar5 == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[Global_38B4 /*15*/].f_9) == 0)
					{
						Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[Global_38B4 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[Global_38B4 /*15*/].f_9) == 0)
				{
					Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[Global_38B4 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_956[Global_38B4 /*15*/].f_5));
			Global_952 = 99;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 23);
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_38B1.f_1 == 1)
		{
			func_7();
		}
		if (Global_38B1.f_1 == 0)
		{
			func_7();
		}
		if (Global_38B1.f_1 == 3)
		{
			func_7();
		}
		else
		{
			if (Global_3DDB)
			{
				if (Global_38B1.f_1 == 9)
				{
					if (Global_11625)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 31))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 27))
							{
								if (func_6())
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
									{
										if (func_53(2, Global_3895, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_38B0 == 1)
												{
													if (Global_38B1.f_1 > 6)
													{
														MISC::SET_BIT(&Global_950, 24);
														MISC::SET_BIT(&Global_950, 27);
														GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
														GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
														MISC::SET_BIT(&(Global_26862F.f_6B9), 17);
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
			if (Global_38A0 == 1)
			{
				Global_38A2 = 1;
				func_56(0);
			}
			if (Global_38A1 == 1)
			{
				Global_38A2 = 1;
				func_56(0);
			}
			if (Global_11625)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_5())
					{
						if (Global_269E92.f_1 == 1)
						{
						}
						else
						{
							func_60();
							func_56(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(AUDIO::_0x0626A247D2405330()) > 0.3f)
					{
						MISC::SET_BIT(&Global_950, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(AUDIO::_0x0626A247D2405330()) == 1f)
					{
						Global_38A2 = 1;
						func_60();
						func_56(0);
					}
				}
				if (func_73(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
					{
						iLocal_73 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iLocal_73 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330()) || PLAYER::IS_PLAYER_RIDING_TRAIN(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_ON_MOUNT(AUDIO::_0x0626A247D2405330())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_JACKING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0)) || unk_0x6BA46D5172404F26(AUDIO::_0x0626A247D2405330())) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_1172A == 1) || func_3(AUDIO::_0x0626A247D2405330())) || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330())) || GRAPHICS::_IS_NIGHTVISION_ACTIVE()) || iLocal_73)
				{
					if (!Global_3878)
					{
						MISC::SET_BIT(&Global_950, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_11625 == 0)
					{
						if (iLocal_57 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
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
								MISC::SET_BIT(&Global_950, 4);
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
					if (Global_11625)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed") && Global_38B1.f_1 < 7)
						{
							MISC::SET_BIT(&Global_950, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iLocal_66 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("SUBMERSIBLE") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("SUBMERSIBLE2"))
					{
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("CUTTER")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("CHERNOBOG")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("KHANJALI")) || iLocal_69) || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_66, 0) == 0)
					{
						MISC::SET_BIT(&Global_950, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("VALKYRIE") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("INSURGENT")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TECHNICAL")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRASH")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRASH2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("LIMO2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("INSURGENT3")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("HALFTRACK")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("DUNE3")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRAILERSMALL2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TECHNICAL2")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("BOXVILLE5")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("MOGUL")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("BOMBUSHKA")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TULA")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("CHERNOBOG"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_66))
						{
							iVar6 = func_2(AUDIO::_0x0626A247D2405330(), iLocal_66);
							if (iVar6 != 4294967294)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("INSURGENT") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("LIMO2"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRASH") || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRASH2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TECHNICAL2"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("BOXVILLE5"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("INSURGENT3"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("HALFTRACK"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("DUNE3"))
								{
									if (iVar6 == 0)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("TRAILERSMALL2"))
								{
									if (iVar6 == 4294967295)
									{
										MISC::SET_BIT(&Global_950, 4);
									}
								}
								if (VEHICLE::_0xE33FFA906CE74880(iLocal_66, iVar6))
								{
									MISC::SET_BIT(&Global_950, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_11625 == 0)
						{
							if (Global_38B1.f_1 == 6 || Global_38B1.f_1 == 7)
							{
								bVar7 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("STROMBERG") && ENTITY::IS_ENTITY_IN_WATER(iLocal_66))
								{
									bVar7 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_66)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_66))) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iLocal_66) == joaat("SUBMERSIBLE2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_56(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_11625 == 0)
						{
							if (Global_38B1.f_1 == 6 || Global_38B1.f_1 == 7)
							{
								func_56(0);
							}
						}
					}
					iLocal_69 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
				{
					Global_38A2 = 1;
					func_60();
					func_56(0);
				}
				if (Global_11625 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(AUDIO::_0x0626A247D2405330()) < iLocal_52)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							Global_38A2 = 1;
							func_60();
							func_56(0);
						}
					}
					if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
						{
							Global_38A2 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				else if (func_67())
				{
					if (ENTITY::GET_ENTITY_HEALTH(AUDIO::_0x0626A247D2405330()) < iLocal_52)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							Global_38A2 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 1))
					{
						if (!func_67())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iLocal_65, 1);
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
									Global_38A2 = 1;
									func_60();
									func_56(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(AUDIO::_0x0626A247D2405330()))
				{
					Global_38A2 = 1;
					func_60();
					func_56(0);
				}
				if (PED::IS_PED_BEING_STUNNED(AUDIO::_0x0626A247D2405330(), 0))
				{
					Global_38A2 = 1;
					func_60();
					func_56(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1))
				{
					Global_38A2 = 1;
					func_60();
					func_56(0);
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					if (Global_11625 == 0)
					{
						Global_38A2 = 1;
						func_60();
						func_56(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_11625 && Global_269E92.f_1) && Global_269E92.f_25) && Global_38B1.f_1 == 9)
				{
					iVar8 = 1;
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 24))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 26))
						{
							MISC::SET_BIT(&Global_950, 25);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_38A2 = 1;
					func_60();
					func_56(0);
				}
			}
		}
		if (Global_389B == 1)
		{
			func_1();
		}
		if (Global_38B0 == 2)
		{
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
			}
		}
	}
}

void func_1()//Position - 0x1D60
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_3892) && !PAD::IS_CONTROL_PRESSED(2, Global_3891))
	{
		Global_389B = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1D86
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4294967295, 0) == iParam0)
			{
				return 4294967295;
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
	return 4294967294;
}

int func_3(int iParam0)//Position - 0x1E5F
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x1E80
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
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_5()//Position - 0x1EC9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

bool func_6()//Position - 0x1EDA
{
	return Global_269E92.f_1;
}

void func_7()//Position - 0x1EE8
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_41F1 = 0;
	Global_41F2 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_388F == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_66())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_388F = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(AUDIO::_0x0626A247D2405330()))
		{
			AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(AUDIO::_0x0626A247D2405330()))
		{
			AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
		}
	}
	if (Global_19E56.f_36C7.f_54 == 1)
	{
		Global_19E56.f_36C7.f_54 = 0;
		HUD::CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 30) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_3889 };
	if (Global_38A2 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 26) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 30)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 2))
	{
		vLocal_71 = { Global_387B[Global_387A /*3*/] };
	}
	else
	{
		vLocal_71 = { Global_3882[Global_387A /*3*/] };
	}
	fVar2 = func_13(vLocal_71, Global_387B[Global_387A /*3*/], Global_3889, vVar1, fVar0, 0);
	if (!iLocal_40 && fVar2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_40 = 1;
	}
	if (iLocal_40 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
		if (Global_38B1.f_1 == 3)
		{
		}
		if (Global_38B1.f_1 == 1)
		{
		}
		if (Global_38B1.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_3876 = 0;
		Global_389F = 0;
		Global_3957 = 0;
		if (Global_19E56.f_36C7.f_54 == 1)
		{
			Global_19E56.f_36C7.f_54 = 0;
			HUD::CLEAR_FLOATING_HELP(0, 1);
		}
		Global_3879 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
		}
		if (Global_41C4 == 0)
		{
		}
		Global_3959 = 0;
		if (func_10(0))
		{
			func_9();
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 8);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 14);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 9);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 27);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 5);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 19);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 21);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 24);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 27);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
		Global_26AB01 = 0;
		iLocal_72 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			func_8();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_38AF))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
				{
					unk_0xF14A31FD690DC3B0(iLocal_39);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_389E, Global_3861, Global_3862, Global_3863, Global_3864, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_38AF);
				}
			}
		}
		Global_38A5 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
		{
			func_105(Global_389E, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_389E);
		Global_388F = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
		if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (Global_269E92.f_1)
			{
				if (Global_11625)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", &Global_38A6, 1);
				}
			}
		}
		func_102();
		func_100();
		Global_3DDB = 0;
		Global_412201 = 0;
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
}

void func_8()//Position - 0x2270
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

void func_9()//Position - 0x22C7
{
	if (Global_C74[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 25);
	MISC::SET_BIT(&Global_950, 11);
}

int func_10(int iParam0)//Position - 0x2344
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)//Position - 0x2366
{
	return func_12(iParam0, Global_8D15);
}

int func_12(int iParam0, int iParam1)//Position - 0x2377
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

float func_13(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x2558
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_412201 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14) && Global_38B1.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_3882[Global_387A /*3*/].f_1 == Var0.f_1)
			{
				Global_412201 = 1;
			}
		}
	}
	if (func_66() && Global_412201 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_15((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_3869 = { func_14(vParam0, vParam1, fVar2) };
		Global_386C = { func_14(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_3869 = { vParam1 };
		Global_386C = { vParam3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_386C, 0);
	return fVar1;
}

Vector3 func_14(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x266A
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_15(float fParam0, float fParam1, float fParam2)//Position - 0x2684
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

void func_16()//Position - 0x26AB
{
	if (Global_389B == 0)
	{
		if (func_53(2, Global_3895, 0))
		{
			if (Global_11625 == 0)
			{
				if (Global_395B)
				{
					if (Global_395A == 0)
					{
						Global_395A = 1;
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_74(2);
						func_17();
						func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B6), 3212836864, 3212836864, 3212836864);
						Global_389D = Global_38B6;
					}
					else
					{
						Global_395A = 0;
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_74(1);
						func_17();
						func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
						Global_389D = Global_38B5;
					}
				}
			}
		}
	}
}

void func_17()//Position - 0x2784
{
	if (Global_395B == 0)
	{
		func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
	}
	else if (Global_11625)
	{
		func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
	}
	else
	{
		if (Global_395A == 1)
		{
			if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_38A5)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_94F, 17);
	}
}

void func_18()//Position - 0x285D
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 10) || iLocal_72 == 1)
	{
		Global_BAE = MISC::GET_GAME_TIMER();
		Global_BAD = 0;
		Global_389B = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
		iLocal_29 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
		iLocal_30 = 1;
	}
	else if (Global_389B == 0)
	{
		if (func_53(2, Global_3892, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_BAE = MISC::GET_GAME_TIMER();
				Global_BAD = 0;
				Global_389B = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
				iLocal_29 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
				iLocal_30 = 1;
			}
		}
	}
}

void func_19()//Position - 0x28DF
{
	if (Global_389B == 0)
	{
		if (func_53(2, Global_3890, 1))
		{
			if (func_94(2090, 4294967295, 0) == 1)
			{
				if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 == 0)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
					{
						if (!Global_3878)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 3))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
								{
									Global_389B = 1;
									MISC::SET_BIT(&Global_41212A, 3);
									func_20(3, 0, 1, 0);
									Global_41F1 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2960
{
	func_107();
	if (Global_11625 == 0)
	{
		if (func_73(14))
		{
			if (Global_41F1 == 2 || Global_41F1 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_38B1.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_22(0) == 1)
		{
			return 0;
		}
	}
	if (Global_388F == 1)
	{
		return 0;
	}
	if (Global_38B1.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_38AE))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_38B1.f_1 < 4)
			{
				func_21("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_38AE = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_389F)
	{
		SYSTEM::WAIT(0);
	}
	func_77();
	func_75();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
	{
		Global_BAD = 0;
		Global_38B1.f_1 = 7;
		func_21(&(Global_956[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
			{
				Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_956[iParam0 /*15*/].f_9) == 0)
		{
			Global_38AF = SYSTEM::START_NEW_SCRIPT(&(Global_956[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_956[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_21(char* sParam0)//Position - 0x2AC6
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_22(int iParam0)//Position - 0x2AE6
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

void func_23()//Position - 0x2B40
{
	if (Global_389C)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_389C = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[1])
					{
						func_32();
						Global_389D = 1;
					}
					break;
				
				case 1:
					if (Global_B88[2])
					{
						func_32();
						Global_389D = 2;
					}
					break;
				
				case 2:
					if (Global_B88[3])
					{
						func_32();
						func_30();
						Global_389D = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_389D = 4;
					}
					break;
				
				case 3:
					if (Global_B88[4])
					{
						func_32();
						Global_389D = 4;
					}
					break;
				
				case 4:
					if (Global_B88[5])
					{
						func_32();
						Global_389D = 5;
					}
					break;
				
				case 5:
					if (Global_B88[6])
					{
						func_32();
						func_30();
						Global_389D = 6;
					}
					break;
				
				case 6:
					if (Global_B88[7])
					{
						func_32();
						Global_389D = 7;
					}
					break;
				
				case 7:
					if (Global_B88[8])
					{
						func_32();
						Global_389D = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_389D = 0;
					}
					break;
				
				case 8:
					if (Global_B88[0])
					{
						func_32();
						func_30();
						Global_389D = 0;
					}
					else
					{
						func_28();
						func_30();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[8])
					{
						func_28();
						func_25();
						Global_389D = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_389D = 7;
					}
					break;
				
				case 1:
					if (Global_B88[0])
					{
						func_28();
						Global_389D = 0;
					}
					else if (Global_B88[8])
					{
						func_25();
						func_32();
					}
					else
					{
						func_25();
					}
					break;
				
				case 2:
					if (Global_B88[1])
					{
						func_28();
						Global_389D = 1;
					}
					break;
				
				case 3:
					if (Global_B88[2])
					{
						func_28();
						func_25();
						Global_389D = 2;
					}
					break;
				
				case 4:
					if (Global_B88[3])
					{
						func_28();
						Global_389D = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_395E = 1;
						Global_389D = 2;
					}
					break;
				
				case 5:
					if (Global_B88[4])
					{
						func_28();
						Global_389D = 4;
					}
					break;
				
				case 6:
					if (Global_B88[5])
					{
						func_25();
						func_28();
						Global_389D = 5;
					}
					break;
				
				case 7:
					if (Global_B88[6])
					{
						func_28();
						Global_389D = 6;
					}
					break;
				
				case 8:
					if (Global_B88[7])
					{
						func_28();
						Global_389D = 7;
					}
					break;
				}
			}
	}
	if (Global_389C == 0)
	{
		if (func_53(2, Global_3898, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 2:
					if (Global_B88[0] == 1)
					{
						Global_389D = 0;
					}
					else
					{
						Global_389D = 1;
						Global_395E = 1;
					}
					break;
				
				case 5:
					Global_389D = 3;
					break;
				
				case 6:
					Global_389D = 7;
					break;
				
				case 7:
					if (Global_B88[Global_389D + 1] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 6;
						Global_395E = 1;
					}
					break;
				
				case 8:
					Global_389D = 6;
					break;
				
				default:
					Global_389D++;
					break;
			}
			if (Global_395E == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_3897, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					Global_389D = 2;
					break;
				
				case 1:
					if (Global_B88[0] == 1)
					{
						Global_389D = 0;
					}
					else
					{
						Global_389D = 2;
						Global_395E = 1;
					}
					break;
				
				case 3:
					Global_389D = 5;
					break;
				
				case 6:
					if (Global_B88[8] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 7;
						Global_395E = 1;
					}
					break;
				
				default:
					Global_389D = (Global_389D - 1);
					break;
			}
			if (Global_395E == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_3899, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[6])
					{
						Global_389D = 6;
					}
					break;
				
				case 1:
					if (Global_B88[7])
					{
						Global_389D = 7;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 4;
					}
					break;
				
				case 2:
					if (Global_B88[8])
					{
						Global_389D = 8;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 5;
					}
					break;
				
				case 3:
					if (Global_B88[0])
					{
						Global_389D = 0;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 6;
					}
					break;
				
				case 4:
					if (Global_B88[1])
					{
						Global_389D = 1;
					}
					break;
				
				case 5:
					if (Global_B88[2])
					{
						Global_389D = 2;
					}
					break;
				
				case 6:
					if (Global_B88[3])
					{
						Global_389D = 3;
					}
					break;
				
				case 7:
					if (Global_B88[4])
					{
						Global_389D = 4;
					}
					break;
				
				case 8:
					if (Global_B88[5])
					{
						Global_389D = 5;
					}
					break;
			}
			if (Global_395E == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_389A, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[3])
					{
						Global_389D = 3;
					}
					break;
				
				case 1:
					if (Global_B88[4])
					{
						Global_389D = 4;
					}
					break;
				
				case 2:
					if (Global_B88[5])
					{
						Global_389D = 5;
					}
					break;
				
				case 3:
					if (Global_B88[6])
					{
						Global_389D = 6;
					}
					break;
				
				case 4:
					if (Global_B88[7])
					{
						Global_389D = 7;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 1;
					}
					break;
				
				case 5:
					if (Global_B88[8])
					{
						Global_389D = 8;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 2;
					}
					break;
				
				case 6:
					if (Global_B88[0])
					{
						Global_389D = 0;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 3;
					}
					break;
				
				case 7:
					if (Global_B88[1])
					{
						Global_389D = 1;
					}
					break;
				
				case 8:
					if (Global_B88[2])
					{
						Global_389D = 2;
					}
					break;
			}
			if (Global_395E == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_956[23 /*15*/].f_A == 57)
	{
		if (Global_389C == 1 && Global_389D == 8)
		{
			if (iLocal_74 == 0)
			{
				iLocal_74 = 1;
				func_24(12);
			}
		}
	}
}

void func_24(int iParam0)//Position - 0x3199
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

void func_25()//Position - 0x31C2
{
	func_99(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_26();
}

void func_26()//Position - 0x31FF
{
	if (func_27())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_27()//Position - 0x3222
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
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
	if (Global_412200 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_28()//Position - 0x3269
{
	func_99(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_29();
}

void func_29()//Position - 0x32A6
{
	if (func_27())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_MOVE_FINGER(4);
		}
	}
}

void func_30()//Position - 0x32C9
{
	func_99(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_31();
}

void func_31()//Position - 0x3306
{
	if (func_27())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_32()//Position - 0x3329
{
	func_99(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_33();
}

void func_33()//Position - 0x3366
{
	if (func_27())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_MOVE_FINGER(3);
		}
	}
}

void func_34()//Position - 0x3389
{
	if (Global_389C)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_389C = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_389D)
			{
				case 6:
					if (Global_B88[7])
					{
						func_32();
						Global_389D = 7;
					}
					break;
				
				case 7:
					if (Global_B88[6])
					{
						func_28();
						Global_389D = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_389D)
			{
				case 6:
					if (Global_B88[7])
					{
						func_32();
						Global_389D = 7;
					}
					break;
				
				case 7:
					if (Global_B88[6])
					{
						func_28();
						Global_389D = 6;
					}
					break;
				}
			}
	}
	if (Global_389C == 0)
	{
		if (func_53(2, Global_3898, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 2:
					Global_389D = 0;
					break;
				
				case 5:
					Global_389D = 3;
					break;
				
				case 7:
					if (Global_B88[Global_389D + 1] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 6;
						Global_395E = 1;
					}
					break;
				
				case 8:
					Global_389D = 6;
					break;
				
				default:
					Global_389D++;
					break;
			}
			if (Global_395E == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_3897, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					Global_389D = 2;
					break;
				
				case 3:
					Global_389D = 5;
					break;
				
				case 6:
					if (Global_B88[8] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 7;
						Global_395E = 1;
					}
					break;
				
				default:
					Global_389D = (Global_389D - 1);
					break;
			}
			if (Global_395E == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_35()//Position - 0x3547
{
	if (Global_389C)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_389C = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[1])
					{
						func_32();
						Global_389D = 1;
					}
					break;
				
				case 1:
					if (Global_B88[2])
					{
						func_32();
						Global_389D = 2;
					}
					break;
				
				case 2:
					if (Global_B88[3])
					{
						func_32();
						func_30();
						Global_389D = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_389D = 4;
					}
					break;
				
				case 3:
					if (Global_B88[4])
					{
						func_32();
						Global_389D = 4;
					}
					break;
				
				case 4:
					if (Global_B88[5])
					{
						func_32();
						Global_389D = 5;
					}
					break;
				
				case 5:
					if (Global_B88[6])
					{
						func_32();
						func_30();
						Global_389D = 6;
					}
					break;
				
				case 6:
					if (Global_B88[7])
					{
						func_32();
						Global_389D = 7;
					}
					break;
				
				case 7:
					if (Global_B88[8])
					{
						func_32();
						Global_389D = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_389D = 0;
					}
					break;
				
				case 8:
					if (Global_B88[0])
					{
						func_32();
						func_30();
						Global_389D = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[8])
					{
						func_28();
						func_25();
						Global_389D = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_389D = 7;
					}
					break;
				
				case 1:
					if (Global_B88[0])
					{
						func_28();
						Global_389D = 0;
					}
					break;
				
				case 2:
					if (Global_B88[1])
					{
						func_28();
						Global_389D = 1;
					}
					break;
				
				case 3:
					if (Global_B88[2])
					{
						func_28();
						func_25();
						Global_389D = 2;
					}
					break;
				
				case 4:
					if (Global_B88[3])
					{
						func_28();
						Global_389D = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_395E = 1;
						Global_389D = 2;
					}
					break;
				
				case 5:
					if (Global_B88[4])
					{
						func_28();
						Global_389D = 4;
					}
					break;
				
				case 6:
					if (Global_B88[5])
					{
						func_25();
						func_28();
						Global_389D = 5;
					}
					break;
				
				case 7:
					if (Global_B88[6])
					{
						func_28();
						Global_389D = 6;
					}
					break;
				
				case 8:
					if (Global_B88[7])
					{
						func_28();
						Global_389D = 7;
					}
					break;
				}
			}
	}
	if (Global_389C == 0)
	{
		if (func_53(2, Global_3898, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 2:
					Global_389D = 0;
					break;
				
				case 5:
					Global_389D = 3;
					break;
				
				case 7:
					if (Global_B88[Global_389D + 1] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 6;
						Global_395E = 1;
					}
					break;
				
				case 8:
					Global_389D = 6;
					break;
				
				default:
					Global_389D++;
					break;
			}
			if (Global_395E == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_3897, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					Global_389D = 2;
					break;
				
				case 3:
					Global_389D = 5;
					break;
				
				case 6:
					if (Global_B88[8] == 1)
					{
						Global_389D = 8;
					}
					else
					{
						Global_389D = 7;
						Global_395E = 1;
					}
					break;
				
				default:
					Global_389D = (Global_389D - 1);
					break;
			}
			if (Global_395E == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_3899, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[6])
					{
						Global_389D = 6;
					}
					break;
				
				case 1:
					if (Global_B88[7])
					{
						Global_389D = 7;
					}
					break;
				
				case 2:
					if (Global_B88[8])
					{
						Global_389D = 8;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 5;
					}
					break;
				
				case 3:
					if (Global_B88[0])
					{
						Global_389D = 0;
					}
					break;
				
				case 4:
					if (Global_B88[1])
					{
						Global_389D = 1;
					}
					break;
				
				case 5:
					if (Global_B88[2])
					{
						Global_389D = 2;
					}
					break;
				
				case 6:
					if (Global_B88[3])
					{
						Global_389D = 3;
					}
					break;
				
				case 7:
					if (Global_B88[4])
					{
						Global_389D = 4;
					}
					break;
				
				case 8:
					if (Global_B88[5])
					{
						Global_389D = 5;
					}
					break;
			}
			if (Global_395E == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_53(2, Global_389A, 0))
		{
			Global_395E = 0;
			switch (Global_389D)
			{
				case 0:
					if (Global_B88[3])
					{
						Global_389D = 3;
					}
					break;
				
				case 1:
					if (Global_B88[4])
					{
						Global_389D = 4;
					}
					break;
				
				case 2:
					if (Global_B88[5])
					{
						Global_389D = 5;
					}
					break;
				
				case 3:
					if (Global_B88[6])
					{
						Global_389D = 6;
					}
					break;
				
				case 4:
					if (Global_B88[7])
					{
						Global_389D = 7;
					}
					break;
				
				case 5:
					if (Global_B88[8])
					{
						Global_389D = 8;
					}
					else
					{
						Global_395E = 1;
						Global_389D = 2;
					}
					break;
				
				case 6:
					if (Global_B88[0])
					{
						Global_389D = 0;
					}
					break;
				
				case 7:
					if (Global_B88[1])
					{
						Global_389D = 1;
					}
					break;
				
				case 8:
					if (Global_B88[2])
					{
						Global_389D = 2;
					}
					break;
			}
			if (Global_395E == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_36()//Position - 0x3AD9
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_29);
		if (Global_395A == 0)
		{
			Global_38B5 = iLocal_28;
		}
		else
		{
			Global_38B6 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_38B4 = Global_B64[iLocal_28];
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 10))
		{
			Global_38B4 = 2;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 10);
		}
		if (iLocal_72 == 1)
		{
			Global_38B5 = 1;
			Global_38B4 = 0;
			Global_26AB01 = 0;
			iLocal_72 = 0;
		}
		iVar0 = 0;
		if (SCRIPT::IS_THREAD_ACTIVE(Global_38AF))
		{
			iVar0 = 1;
		}
		if (Global_38B4 == 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (((((((PED::IS_PED_ON_MOUNT(AUDIO::_0x0626A247D2405330()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_JACKING(AUDIO::_0x0626A247D2405330())) || unk_0x6BA46D5172404F26(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330())) || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330()), 0)) || GRAPHICS::_IS_NIGHTVISION_ACTIVE())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()))
				{
					iVar0 = 1;
				}
				if (Global_11625)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_38B4 == 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_38B4 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[Global_38B4 /*15*/]), "CELL_BENWEB"))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_11625)
		{
			if (Global_38B4 == 15 || Global_38B4 == 5)
			{
			}
			else
			{
				if (Global_38B4 == 23)
				{
					if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 0 && Global_180416 == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 0)
					{
					}
					if ((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 1 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 0) && Global_180416 == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_41212A, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(CAM::_0xDC9DA9E8789F5246()))
					{
						if (Global_38B4 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
					Global_38B1.f_1 = 7;
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_956[Global_38B4 /*15*/].f_5));
						MISC::SET_BIT(&Global_94F, 23);
					}
				}
				else
				{
					if (Global_38B4 == 2 || Global_38B4 == 3)
					{
					}
					func_37();
				}
			}
		}
		else
		{
			switch (Global_38B4)
			{
				case 3:
					if (Global_19AA3 == 1)
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
					MISC::SET_BIT(&Global_94F, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_395C == 0)
					{
						if ((Global_953 == 0 && iLocal_31 == 0) && Global_8D15 == 15)
						{
							iLocal_31 = 1;
							func_38();
							if (!Global_19E56.f_36C7.f_55)
							{
							}
						}
					}
					else
					{
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_38B4 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_73(14))
			{
				if (Global_38B4 != 3 && Global_38B4 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
				Global_38B1.f_1 = 7;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_956[Global_38B4 /*15*/].f_5));
					MISC::SET_BIT(&Global_94F, 23);
				}
			}
			else if (Global_38B4 != 20)
			{
				if (Global_19E56.f_36C7.f_56 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_38B4 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
							{
								if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
								{
									func_70("CELL_38", 4294967295);
									Global_19E56.f_36C7.f_56 = 1;
								}
							}
						}
					}
				}
				func_37();
			}
		}
	}
}

void func_37()//Position - 0x3F83
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

void func_38()//Position - 0x3FA5
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_39();
	}
}

void func_39()//Position - 0x3FCB
{
	if (func_27())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_40()//Position - 0x3FDF
{
	if (Global_388F == 0)
	{
		if (func_13(Global_3882[Global_387A /*3*/], Global_387B[Global_387A /*3*/], Global_3889, Global_3889, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 24);
			MISC::SET_BIT(&Global_950, 26);
		}
	}
}

void func_41()//Position - 0x4031
{
	if (Global_388F == 0)
	{
		if (func_13(Global_387B[Global_387A /*3*/], Global_3882[Global_387A /*3*/], Global_3889, Global_3889, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
			if (Global_3DDB)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 27);
			}
		}
	}
}

void func_42()//Position - 0x4088
{
	if (Global_388F == 0 && Global_3875 == 0)
	{
		if (func_13(Global_3882[Global_387A /*3*/], Global_387B[Global_387A /*3*/], Global_3889, Global_3889, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_412201 = 0;
		}
	}
}

void func_43()//Position - 0x40D7
{
	float fVar0;
	float fVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 2))
	{
		MISC::SET_BIT(&Global_950, 8);
		MISC::SET_BIT(&Global_94F, 14);
		Global_3875 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_3889, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_13(Global_387B[Global_387A /*3*/], Global_3882[Global_387A /*3*/], Global_388C, Global_3889, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_950, 8);
			MISC::SET_BIT(&Global_94F, 14);
			Global_3875 = 0;
			iLocal_18 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
			iLocal_37 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_950, 8);
		}
	}
	else
	{
		if (iLocal_37 == 0)
		{
			vLocal_38 = { Global_3882[Global_387A /*3*/] };
			vLocal_38.x = (vLocal_38.x - 10f);
			vLocal_38.y = (vLocal_38.y + 20f);
			iLocal_37 = 1;
		}
		fVar1 = func_13(Global_387B[Global_387A /*3*/], vLocal_38, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_950, 8);
			MISC::SET_BIT(&Global_94F, 14);
			Global_3875 = 0;
			iLocal_18 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 2);
			iLocal_37 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_950, 8);
		}
	}
}

void func_44()//Position - 0x422D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_59 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_58);
	}
	else
	{
		iLocal_54 = MISC::GET_GAME_TIMER();
		iLocal_59 = (iLocal_54 - iLocal_53);
	}
	if (iLocal_59 > 4000)
	{
		iLocal_42 = func_91();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_58 = HUD::_0x13C4B962653A5280();
		}
		else
		{
			iLocal_53 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_45()//Position - 0x4283
{
	if (Global_38B0 == 1)
	{
		func_106();
		if (Global_389B == 0)
		{
			if (func_53(2, Global_3893, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 8))
				{
					if (Global_3DFD == 0)
					{
						func_37();
						Global_389B = 1;
						Global_38B0 = 3;
						Global_3DFF = 1;
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
						}
					}
				}
			}
		}
		if (Global_389B == 0)
		{
			if (func_53(2, Global_3892, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 8))
				{
					func_38();
					Global_389B = 1;
					Global_38B0 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
					}
					func_50();
					func_49();
				}
			}
		}
	}
	else
	{
		if (iLocal_51 == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 27))
			{
				iLocal_51 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_38B1.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(AUDIO::_0x0626A247D2405330()))
						{
							if (Global_3878)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", AUDIO::_0x0626A247D2405330(), 1);
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", AUDIO::_0x0626A247D2405330(), 1);
							}
						}
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 27))
			{
				iLocal_51 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
				}
			}
		}
		if (Global_38B0 == 0)
		{
			if (Global_389B == 0)
			{
				if (func_53(2, Global_3891, 0) || Global_26AB01 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 8))
							{
								switch (Global_38B1.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_3959 == 0)
										{
											if (Global_395A == 1)
											{
												func_37();
												Global_395A = 0;
												func_99(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
												func_77();
												func_75();
												func_74(1);
												func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
												{
													unk_0x1190AB7024CBD8CB(4294967295, "Put_Away", &Global_38A6, 1);
												}
												iLocal_18 = 0;
												Global_38B1.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_38B1.f_1 = 3;
										break;
									
									case 7:
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 23) == 1)
										{
										}
										if ((Global_BAF - Global_BAE) > Global_BB0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 23) == 0)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 0))
											{
											}
											else
											{
												func_37();
												Global_BAD = 1;
												Global_38B1.f_1 = 6;
												if (Global_11625)
												{
													func_99(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_4121FE), 3212836864, 3212836864, 3212836864, 3212836864);
												}
												Global_952 = 99;
												if (Global_26AB01 == 0)
												{
													func_46();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_6A2 == 132)
										{
											if (Global_269E92.f_1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 20))
											{
												func_37();
												func_68();
											}
										}
										else
										{
											func_37();
											func_68();
											Global_3DFF = 1;
										}
										break;
									
									case 9:
										if (Global_3DCE == 0)
										{
											Global_38B1.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_26AB01 == 1)
								{
									iLocal_72 = 1;
									Global_26AB01 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_46()//Position - 0x45CE
{
	vector3 vVar0[24];
	
	if (Global_38A0 == 1)
	{
		return;
	}
	if (Global_38B1.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_38B1.f_1)
	{
		case 6:
			func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_74(Global_BAC);
			if (Global_BAC == 1)
			{
				func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B5;
			}
			else
			{
				func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B6), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B6;
			}
			if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_395B == 0)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else if (Global_11625)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else
			{
				if (Global_395A == 1)
				{
					if (Global_38A5)
					{
						func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_38A5)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_94F, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_99(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_72(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_38B0 == 1)
			{
				func_93();
				func_99(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_48("CELL_300");
					func_48("CELL_217");
					func_48("CELL_217");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
				{
					func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_217", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
				}
				func_99(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_3DCE == 4 || Global_3DCE == 3)
			{
				func_99(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_93();
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_48("CELL_300");
					func_48("CELL_219");
					func_48("CELL_219");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					if (Global_3ED0)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
					{
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_99(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &cVar0, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
					}
				}
				func_99(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_47();
			break;
		
		default:
			break;
	}
}

void func_47()//Position - 0x4B8D
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (Global_38B0 == 1)
		{
			if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DFD)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_48(char* sParam0)//Position - 0x4D10
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_49()//Position - 0x4D22
{
	if (Global_3DDB)
	{
		if (Global_11625)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_26862F.f_6B9), 15);
				}
			}
		}
	}
}

void func_50()//Position - 0x4D71
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (!Global_3DD6)
		{
			func_72(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DDB)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				func_48("CELL_300");
				func_48("CELL_219");
				func_48("CELL_219");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
			{
				func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_219", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
			}
		}
		func_99(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
	}
}

void func_51()//Position - 0x4F36
{
	Global_3960 = 0;
	func_52();
}

void func_52()//Position - 0x4F46
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B0 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_41C1 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = Global_38B3;
		return;
	}
}

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x4F7D
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && NETWORK::_0x5C497525F803486B(iParam0, iParam1)))
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

int func_54()//Position - 0x4FEF
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_55(bool bParam0)//Position - 0x500C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_56(int iParam0)//Position - 0x5037
{
	if (func_59())
	{
		return;
	}
	if (Global_3959)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_57()//Position - 0x50B1
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)//Position - 0x50D8
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_59()//Position - 0x514C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_60()//Position - 0x515E
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

void func_61()//Position - 0x5187
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (func_69() && PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(AUDIO::_0x0626A247D2405330(), 0);
			if (Global_11625)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = 1;
			}
			if (!Global_3878)
			{
				if (Global_6A2 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
							{
							}
							else
							{
								if (Global_11625)
								{
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 244, false);
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 243, false);
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 242, false);
								}
								MISC::SET_BIT(&Global_94F, 11);
								BRAIN::TASK_USE_MOBILE_PHONE(AUDIO::_0x0626A247D2405330(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_62()//Position - 0x52AA
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14) && Global_412201 == 0) && Global_3875 == 0)
	{
		if (func_67())
		{
		}
		else
		{
			func_63();
		}
		if (Global_38B1.f_1 == 9)
		{
			if (Global_3DDB == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_63()//Position - 0x52F5
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_3882[Global_387A /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_3875 = 1;
	}
}

void func_64()//Position - 0x531C
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14) && Global_412201 == 0) && Global_3875 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 26))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 24);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 27);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						func_63();
					}
					else if (func_66() == 0)
					{
						func_63();
					}
				}
			}
		}
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			if (func_66())
			{
				func_65();
			}
		}
		else if (func_67())
		{
		}
		else if (func_66())
		{
			func_65();
		}
		if (Global_38B1.f_1 == 9)
		{
			if (Global_3DDB == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_65()//Position - 0x53F8
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_387B[Global_387A /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_412201 = 1;
	}
}

int func_66()//Position - 0x5420
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			if (Global_3878 == 0)
			{
				if (Global_6A2 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (Global_3DCE != 2)
						{
						}
					}
				}
			}
		}
		if (func_73(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || unk_0x6BA46D5172404F26(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
		if (Global_19A9E)
		{
			return 0;
		}
	}
	if (Global_11625)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("RHINO")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("TORO"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_412200 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_19E56.f_36C7.f_59)
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

int func_67()//Position - 0x5647
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_68()//Position - 0x5664
{
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
			{
				if (!Global_3878)
				{
					BRAIN::TASK_USE_MOBILE_PHONE(AUDIO::_0x0626A247D2405330(), 0, 1);
				}
				if (Global_11625)
				{
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 244, true);
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 243, true);
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 242, true);
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 11);
			}
		}
	}
}

int func_69()//Position - 0x56CE
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

void func_70(char* sParam0, int iParam1)//Position - 0x56F2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_71()//Position - 0x5709
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_39);
	if (iLocal_39 == 4294967295)
	{
	}
}

void func_72(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x571D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_48(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_48(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_48(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_48(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_48(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_73(int iParam0)//Position - 0x57D0
{
	return Global_8D15 == iParam0;
}

void func_74(int iParam0)//Position - 0x57DE
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
	
	Global_41FA = 0;
	Global_BAC = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B88[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_73(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar2 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar2 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B88[iVar0] = 1;
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
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19E56.f_3721[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19E56.f_3721[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19E56.f_3721[iVar3 /*104*/].f_63[Global_38B1] == 1)
											{
												Global_41FA++;
											}
										}
									}
									iVar3++;
								}
								func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11625)
								{
									iVar4 = 0;
									iVar4 = Global_411C38;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_411C39[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_411C39[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_411C39[iVar5 /*104*/].f_63[Global_38B1] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_38B1)
									{
										case 0:
											iVar6 = Global_919C;
											break;
										
										case 1:
											iVar6 = Global_919D;
											break;
										
										case 2:
											iVar6 = Global_919E;
											break;
										
										default:
											break;
									}
									func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_955);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 2)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar8 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar8 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar8);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[iVar1 /*15*/]), "CELL_BENWEB")) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_48(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_72(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_75()//Position - 0x5D84
{
	if (Global_11625 == 0)
	{
		Global_956[14 /*15*/].f_4 = 4294967197;
		Global_956[4 /*15*/].f_4 = 4294967197;
		if (Global_25824A)
		{
			if (func_73(14))
			{
				func_76(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_76(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_76(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_76(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5E12
{
	StringCopy(&(Global_956[iParam0 /*15*/]), sParam1, 16);
	Global_956[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_956[iParam0 /*15*/].f_5), sParam3, 16);
	Global_956[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_956[iParam0 /*15*/].f_A = iParam4;
	Global_956[iParam0 /*15*/].f_B = iParam5;
	Global_956[iParam0 /*15*/].f_C = iParam6;
	Global_956[iParam0 /*15*/].f_D = iParam7;
	Global_956[iParam0 /*15*/].f_E = iParam8;
	if (Global_956[iParam0 /*15*/].f_C == 0)
	{
		Global_956[iParam0 /*15*/].f_C = 0;
	}
	if (Global_956[iParam0 /*15*/].f_D == 0)
	{
		Global_956[iParam0 /*15*/].f_D = 0;
	}
	if (Global_956[iParam0 /*15*/].f_E == 0)
	{
		Global_956[iParam0 /*15*/].f_E = 0;
	}
}

void func_77()//Position - 0x5EC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_956[iVar0 /*15*/].f_4 = 4294967197;
		iVar0++;
	}
	if (Global_11625 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 157)
		{
			if (Global_19E56.f_6D76[iVar2 /*29*/].f_13[Global_38B1] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_76(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_76(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_76(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8D15 == 15 && func_55(0) == 0) && Global_954 == 0)
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_395C = 0;
			Global_955 = 255;
		}
		else
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_395C = 1;
			Global_955 = 42;
		}
		if (iVar1 == 1)
		{
			func_76(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_76(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_76(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_76(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_76(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_19E56.f_36C7.f_59 == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_19E56.f_36C7.f_58 == 1)
		{
			func_76(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_76(25, "CELL_14", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_76(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_76(11, "CELL_14", 4294967197, "appContacts", 8, 2, 1, 0, 0);
		func_76(27, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_76(28, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_76(29, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
		func_76(30, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_76(31, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_76(32, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_76(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_76(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_76(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_76(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_76(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_76(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_76(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_76(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_76(13, "CELL_35", 4294967197, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_76(13, "CELL_20", 4294967197, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_76(15, "CELL_18", 4294967197, "appContacts", 8, 1, 1, 0, 0);
		func_76(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_76(5, "CELL_4", 4294967197, "appContacts", 12, 2, 1, 0, 0);
		func_76(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_76(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_76(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_76(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_76(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_76(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_76(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_76(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_76(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_76(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_76(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 1)
		{
			if (Global_180416)
			{
				func_76(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 1)
			{
				func_76(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 1)
			{
				func_76(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 26) == 1)
			{
				func_76(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 4) == 0 && Global_180416 == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 20) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 22) == 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 26) == 0)
		{
			func_76(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_78(int iParam0)//Position - 0x645C
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_79() == 0)
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

int func_79()//Position - 0x64FF
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

void func_80()//Position - 0x6547
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		iLocal_67 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)));
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
	if (iLocal_69 == 1 || func_81())
	{
		iLocal_43 = 0;
	}
	func_99(Global_389E, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_42), SYSTEM::TO_FLOAT(iLocal_43), 3212836864, 3212836864, 3212836864);
}

int func_81()//Position - 0x6617
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = func_87();
		if (func_86(iVar0))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			iVar2 = 0;
			while (iVar2 < Global_19E56.f_1DEC.f_88)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_85(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_19E56.f_1DEC.f_2FC)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC.f_28B[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_83(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_19E56.f_1DEC.f_362)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1DEC.f_2FD[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_82(iVar2)))
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

int func_82(int iParam0)//Position - 0x6720
{
	return Global_19E56.f_1DEC.f_2FD[iParam0 /*10*/].f_7;
}

int func_83(int iParam0)//Position - 0x6738
{
	return Global_19E56.f_1DEC.f_28B[iParam0 /*14*/].f_7;
}

int func_84(vector3 vParam0, int iParam1)//Position - 0x6750
{
	if (iParam1 != 4294967295)
	{
		if (iParam1 >= Global_8D16)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(vParam0, Global_8D16[iParam1 /*5*/]) <= (Global_8D16[iParam1 /*5*/].f_3 * Global_8D16[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_8D16[iParam1 /*5*/].f_4 != 4294967295)
		{
			return func_84(vParam0, Global_8D16[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x67BB
{
	return Global_19E56.f_1DEC[iParam0 /*15*/].f_7;
}

bool func_86(int iParam0)//Position - 0x67D0
{
	return iParam0 < 3;
}

var func_87()//Position - 0x67DC
{
	func_88();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_88()//Position - 0x67F5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_90(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_89(AUDIO::_0x0626A247D2405330());
			if (func_86(iVar0) && (!func_73(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_86(Global_19E56.f_933.f_21B.f_10CD))
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

int func_89(int iParam0)//Position - 0x68F2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_90(int iParam0)//Position - 0x692F
{
	if (func_86(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_91()//Position - 0x6959
{
	func_107();
	return Global_19E56.f_36C7[Global_38B1 /*20*/].f_8;
}

struct<13> func_92(int iParam0)//Position - 0x6973
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_93()//Position - 0x698A
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (Global_38B1 == 0)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 1)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 2)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 3)
		{
			switch (Global_4121FE)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0x6C01
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_95(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_95(var uParam0)//Position - 0x6C33
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_96();
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

var func_96()//Position - 0x6C67
{
	return Global_1407E0;
}

void func_97()//Position - 0x6C73
{
	if (func_73(14))
	{
		if (Global_25824A)
		{
			if (Global_38B1.f_1 == 6)
			{
				if (Global_389D == 7)
				{
					func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), 3212836864, 3212836864, 3212836864);
				}
				else
				{
					Global_389D = 6;
					func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), 3212836864, 3212836864, 3212836864);
				}
			}
		}
		else if (Global_38B1.f_1 == 6)
		{
			func_99(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), 3212836864, 3212836864, 3212836864);
		}
	}
	iLocal_45 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_45 != Global_952)
	{
		Global_952 = iLocal_45;
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
		func_72(Global_389E, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(iLocal_45), -1f, -1f, -1f, &Local_47, 0, 0, 0, 0);
		if (Global_3878 == 0)
		{
			func_80();
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			iLocal_52 = ENTITY::GET_ENTITY_HEALTH(AUDIO::_0x0626A247D2405330());
		}
	}
}

void func_98()//Position - 0x6DF2
{
	if (Global_11625)
	{
		StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_3878)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_38B1)
		{
			case 0:
				StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_388C = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_387A = 0;
		Global_387B[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_3882[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_387A = 0;
		Global_387B[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_3882[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_3869 = { Global_387B[Global_387A /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_387B[Global_387A /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_388C, 0);
	Global_3875 = 1;
}

void func_99(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6F57
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_100()//Position - 0x6FBA
{
	Global_269E92.f_1 = 0;
	Global_269E92 = 0;
	Global_269E92.f_2 = 0;
	Global_269E92.f_21 = 4294967295;
	Global_269E92.f_22 = 4294967295;
	StringCopy(&(Global_269E92.f_4), "", 64);
	StringCopy(&(Global_269E92.f_27[0 /*16*/]), "", 64);
	Global_269E92.f_26 = 0;
	Global_269E92.f_38 = 0;
	Global_269E92.f_39 = 0;
	Global_269E92.f_3A = 4294967294;
	Global_269E92.f_3 = 0;
	func_101(&(Global_269E92.f_14));
}

void func_101(var uParam0)//Position - 0x702D
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
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

void func_102()//Position - 0x7075
{
	Global_269E92.f_2 = 1;
	Global_269E92.f_26 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_269E92 = 0;
			Global_269E92.f_2 = 0;
		}
		else if (func_103(Global_269E92.f_14))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_269E92.f_14)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_269E92.f_14)))
				{
					func_100();
				}
			}
		}
		else
		{
			func_100();
		}
	}
	else
	{
		func_100();
	}
	if (Global_269E92.f_25)
	{
		func_56(0);
	}
	Global_269E92.f_25 = 0;
	Global_269E92.f_3 = 0;
}

bool func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x7115
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_104()//Position - 0x7125
{
	Global_3960 = 0;
	func_8();
}

void func_105(int iParam0, char* sParam1)//Position - 0x7135
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_106()//Position - 0x714A
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_11625)
	{
		Global_19E56.f_36C7[3 /*20*/].f_A = func_94(1197, 4294967295, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(AUDIO::_0x0626A247D2405330(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_A == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(AUDIO::_0x0626A247D2405330()))
		{
			if (Global_11625)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_C74[3 /*2811*/][1 /*281*/].f_90[func_94(1198, 4294967295, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_C74[3 /*2811*/][1 /*281*/].f_90[func_94(1198, 4294967295, 0) /*6*/]), AUDIO::_0x0626A247D2405330(), 1);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_36C7[Global_38B1 /*20*/].f_B), "Silent Ringtone Dummy"))
			{
				if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(AUDIO::_0x0626A247D2405330(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_19E56.f_36C7[Global_38B1 /*20*/].f_B), AUDIO::_0x0626A247D2405330(), 1);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_19E56.f_36C7[Global_38B1 /*20*/].f_B), AUDIO::_0x0626A247D2405330(), 1);
					}
				}
			}
		}
	}
}

void func_107()//Position - 0x7323
{
	if (func_73(14))
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
		Global_38B1 = func_87();
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

