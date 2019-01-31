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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 1))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_38A5)
					{
						func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_3878)
						{
							func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 1);
				}
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_3960, 0))
		{
			if (!func_107())
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_3960, 1))
				{
					MISC::SET_BIT(&Global_3960, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_89 = HUD::_0x13C4B962653A5280();
					}
					else
					{
						iLocal_85 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_89);
				}
				else
				{
					iLocal_86 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_105(&Global_3BAC, &Global_3E14, &Global_3DC4, Global_3DD1, Global_41A7, Global_41A8, 0))
					{
						Global_3960 = 0;
					}
				}
				else
				{
					Global_3960 = 0;
				}
			}
		}
		if ((!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_11, 4)) && !func_104())
		{
			if (Global_3DCE != 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_103();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_99();
		}
		switch (Global_3DCE)
		{
			case 0:
				break;
			
			case 1:
				if (Global_3DD4)
				{
					if (Global_3DCA == 0)
					{
						func_97();
					}
					else
					{
						func_96();
						func_97();
					}
				}
				else if (Global_3DCA == 0)
				{
					func_86();
				}
				else
				{
					func_96();
					func_68();
				}
				break;
			
			case 2:
				func_62();
				break;
			
			case 3:
				func_58();
				break;
			
			case 4:
				if (Global_3DD4)
				{
					if (Global_3DD6)
					{
						func_57();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x258
{
	Global_3DD8 = 0;
	Global_38B0 = 0;
	func_2();
}

void func_2()//Position - 0x26C
{
	Global_280001 = 0;
	Global_280002 = 0;
	Global_3DD9 = 0;
	Global_3DDA = 0;
	Global_3DDB = 0;
	Global_3DDC = 0;
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
	Global_3DD2 = 0;
	Global_3DD3 = 0;
	Global_3DFD = 0;
	Global_3DFE = 0;
	Global_3E01 = 0;
	Global_3E03 = 0;
	Global_3E02 = 0;
	Global_3E05 = 0;
	Global_3E04 = 0;
	Global_41C7 = 0;
	Global_3E07 = 0;
	if (Global_38B1.f_1 == 10)
	{
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
	{
		func_3();
	}
	Global_3DD4 = 0;
	Global_3DD5 = 0;
	Global_3DD6 = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AC = 0;
	Global_41B3 = 0;
	Global_41B2 = 0;
	Global_41AF = 0;
	Global_41AE = 0;
	Global_41B0 = 0;
	Global_41B1 = 0;
	Global_3DCA = 0;
	Global_3DCB = 0;
	Global_3DCC = 0;
	Global_3DCD = 0;
	Global_3ED0 = 0;
	Global_41CB = 5000;
	Global_38A0 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 24);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 23);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 9);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 31);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 5);
	Global_41A6 = 0;
	Global_41A5 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_3DCE = 4;
	}
	else
	{
		Global_3DCE = 0;
		Global_41C1 = 0;
		Global_41CC = MISC::GET_GAME_TIMER();
	}
}

void func_3()//Position - 0x3A2
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

void func_4()//Position - 0x40C
{
	Global_3DD8 = 0;
	Global_38B0 = 0;
	func_2();
}

void func_5()//Position - 0x420
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
		{
			if (Global_3E06 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_41AE == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_41C1 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_41C1 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_41B0 > 0)
	{
		iLocal_37 = MISC::GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_41B0)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_41AE = 0;
		}
	}
	if (Global_41C1 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_3DCE = 6;
		}
	}
}

void func_6()//Position - 0x4BA
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_7()//Position - 0x4DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (Global_11625 == 0)
					{
						func_55();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
			{
				if (Global_11625 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_11625 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_41C1 == 1)
		{
			if (Global_41C2 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
				Global_41C2 = 0;
			}
		}
	}
	else if (Global_41C1 == 0)
	{
		if (Global_41C2 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_41C2 = 0;
		}
	}
	if (Global_3E03 == 0)
	{
		if (!Global_3DDB)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 31))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 27))
				{
					if (func_49())
					{
						if (Global_38B1.f_1 > 6)
						{
							MISC::SET_BIT(&Global_950, 24);
							MISC::SET_BIT(&Global_950, 27);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 26);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_3DDB == 0)
	{
		if (Global_3E03 == 1)
		{
			MISC::SET_BIT(&Global_950, 23);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 23);
		}
		if (Global_3E07)
		{
			if (Global_3E03 == 0)
			{
				Global_3C51 = { Global_3E08 };
				Global_3E1A = { Global_3E0E };
				Global_3DD8 = 0;
				Global_41C7 = 6;
				func_48();
				return;
			}
		}
		if (!Global_3E05)
		{
			while (Global_3E03 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_38B1.f_1 < 6)
				{
					Global_3E03 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_3E05)
						{
							iLocal_30 = 1;
							Global_41C5 = 1;
							func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E5C, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
							func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							if (Global_38A5)
							{
								func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_94F, 17);
								func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_94F, 17);
								func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_41C3 = 1;
							if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
							{
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E5C, "CELL_300", &(Global_75[Global_6A2 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
							else
							{
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E5C, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
								func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
							if (Global_38A5)
							{
								func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
						}
					}
					if (func_45(2, Global_3892, 0))
					{
						func_43();
						Global_3867 = 0.19f;
						Global_3E03 = 0;
						func_41();
						if (Global_3E05)
						{
							Global_3C51 = { Global_3E56 };
							Global_41C7 = 5;
						}
						else if (Global_3DCC > 0)
						{
							Global_3ED0 = 1;
							Global_3DCE = 0;
							Global_41CB = 0;
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_41A6 + 1)
								{
									uLocal_94[iVar0] = func_40(&(Global_3ED1[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_40(&(Global_403B[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_41A6, &Global_3B07, Global_6A2, &Global_3E1A, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_3DCC == 2)
							{
								func_22(&Global_3B07, Global_6A2, &Global_3E1A, &(Global_3E68[0 /*6*/]), &(Global_3E9C[0 /*6*/]), &(Global_3E68[1 /*6*/]), &(Global_3E9C[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_41C7 = 1;
							Global_41C3 = 0;
							Global_41C5 = 0;
							Global_3DD8 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3C51 = { Global_3E2C };
							Global_41C7 = 1;
						}
						Global_41C3 = 0;
						Global_41C5 = 0;
						Global_3DD8 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_3893, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 24))
					{
						func_43();
						Global_3867 = 0.19f;
						Global_3E03 = 0;
						func_41();
						if (Global_3E05)
						{
							Global_3C51 = { Global_3E50 };
							Global_41C7 = 4;
						}
						else if (Global_3DCC > 0)
						{
							Global_3ED0 = 1;
							Global_3DCE = 0;
							Global_41CB = 0;
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_41A5 + 1)
								{
									uLocal_96[iVar1] = func_40(&(Global_3F86[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_40(&(Global_40F0[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_41A5, &Global_3B07, Global_6A2, &Global_3E1A, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_3DCC == 2)
							{
								func_22(&Global_3B07, Global_6A2, &Global_3E1A, &(Global_3E75[0 /*6*/]), &(Global_3EA9[0 /*6*/]), &(Global_3E75[1 /*6*/]), &(Global_3EA9[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_41C7 = 2;
							Global_41C3 = 0;
							Global_41C5 = 0;
							Global_3DD8 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3C51 = { Global_3E32 };
							Global_41C7 = 2;
						}
						Global_41C3 = 0;
						Global_41C5 = 0;
						Global_3DD8 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_3895, 0))
					{
						if (Global_3E05)
						{
							Global_3867 = 0.19f;
							Global_3E03 = 0;
							func_41();
							func_43();
							Global_3C51 = { Global_3E4A };
							Global_41C7 = 3;
							Global_41C3 = 0;
							Global_41C5 = 0;
							Global_3DD8 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_3E03)
			{
				SYSTEM::WAIT(0);
				if (Global_38B1.f_1 < 6)
				{
					Global_3E03 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_389E, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_389E, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_20(Global_389E, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_38A5)
						{
							func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_3892, 0))
					{
						func_43();
						Global_3E03 = 0;
						func_41();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
						iLocal_99 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_99))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_3C51 = { Global_3E50 };
								Global_41C7 = 4;
								break;
							
							case 1:
								Global_3C51 = { Global_3E4A };
								Global_41C7 = 3;
								break;
							
							case 2:
								Global_3C51 = { Global_3E56 };
								Global_41C7 = 5;
								break;
						}
						Global_41C3 = 0;
						Global_41C5 = 0;
						Global_3DD8 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_3893, 0))
					{
						Global_3E03 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_3DCF == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_38B1.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_3DCE = 6;
		}
		unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", &Global_38A6, 1);
		func_13();
		Global_38B1.f_1 = Global_38B3;
		func_8();
	}
	else if (Global_3959 == 0)
	{
		if (func_45(2, Global_3891, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
					{
					}
					else
					{
						Global_389B = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_3DFF = 1;
						Global_3E00 = 1;
						Global_3DCE = 6;
						func_13();
						Global_38B1.f_1 = Global_38B3;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE4A
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
			func_46(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_11(Global_BAC);
			if (Global_BAC == 1)
			{
				func_46(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B5;
			}
			else
			{
				func_46(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B6), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B6;
			}
			if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_395B == 0)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else if (Global_11625)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else
			{
				if (Global_395A == 1)
				{
					if (Global_38A5)
					{
						func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_38A5)
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_94F, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_108(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_38B0 == 1)
			{
				func_10();
				func_46(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
				{
					func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_217", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
				}
				func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_3DCE == 4 || Global_3DCE == 3)
			{
				func_46(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_10();
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_46(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &cVar0, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
					}
				}
				func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13E1
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_10()//Position - 0x13F3
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

void func_11(int iParam0)//Position - 0x166A
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
		if (func_12(14))
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
								func_9(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_9(&(Global_956[iVar1 /*15*/]));
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
								func_9(&(Global_956[iVar1 /*15*/]));
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
								func_9(&(Global_956[iVar1 /*15*/]));
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
								func_9(&(Global_956[iVar1 /*15*/]));
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
								func_9(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x1C03
{
	return Global_8D15 == iParam0;
}

void func_13()//Position - 0x1C11
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return;
	}
	switch (Global_38B3)
	{
		case 5:
			Global_38B3 = 6;
			break;
		
		case 6:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 5))
			{
				Global_38B3 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 5);
			}
			else
			{
				Global_38B3 = 3;
			}
			break;
		
		case 7:
			Global_38B3 = 3;
			break;
		
		case 3:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 5))
			{
				Global_38B3 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 5);
			}
			else
			{
				Global_38B3 = 3;
			}
			break;
		
		default:
			Global_38B3 = 3;
			break;
	}
}

void func_14()//Position - 0x1CAA
{
	if (iLocal_98)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_45(2, Global_3899, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_45(2, Global_389A, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x1D13
{
	func_46(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_16();
}

void func_16()//Position - 0x1D50
{
	if (func_17())
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

int func_17()//Position - 0x1D73
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

void func_18()//Position - 0x1DBA
{
	func_46(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_19();
}

void func_19()//Position - 0x1DF7
{
	if (func_17())
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

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1E1A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_21()//Position - 0x1E75
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (Global_38B0 == 1)
		{
			if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DFD)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			func_108(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1FEA
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_3DDA = 1;
	}
	else
	{
		Global_3DDA = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2049
{
	int iVar0;
	
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam2 > Global_3DD0)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
				}
				else
				{
					func_103();
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
		if (func_34(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_33();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41B2 = Global_41B3;
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3C51.f_172 = Global_41AB;
		Global_3DCA = Global_3DCB;
		Global_3DCC = Global_3DCD;
		if (Global_3ED0 == 0)
		{
			Global_3E68[0 /*6*/] = { Global_3E82[0 /*6*/] };
			Global_3E68[1 /*6*/] = { Global_3E82[1 /*6*/] };
			Global_3E9C[0 /*6*/] = { Global_3EB6[0 /*6*/] };
			Global_3E9C[1 /*6*/] = { Global_3EB6[1 /*6*/] };
			Global_3E75[0 /*6*/] = { Global_3E8F[0 /*6*/] };
			Global_3E75[1 /*6*/] = { Global_3E8F[1 /*6*/] };
			Global_3EA9[0 /*6*/] = { Global_3EC3[0 /*6*/] };
			Global_3EA9[1 /*6*/] = { Global_3EC3[1 /*6*/] };
		}
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam3)
			{
				func_27();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
				if (func_26())
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
					if (Global_3ED0 == 0)
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
			}
			if (func_25())
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
			}
			func_24();
			Global_3DD8 = bParam3;
		}
		Global_3DD0 = iParam2;
		if (Global_3DCA > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_3DCA)
			{
				StringCopy(&(Global_3C51.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_3C51.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_3960 = 0;
		func_48();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam2 < Global_3DD0 || iParam2 == Global_3DD0)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_103();
	}
	return 0;
}

void func_24()//Position - 0x23B3
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

int func_25()//Position - 0x2448
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x246F
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

void func_27()//Position - 0x2508
{
	if (func_12(14))
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
		Global_38B1 = func_28();
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

var func_28()//Position - 0x25AA
{
	func_29();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_29()//Position - 0x25C3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_32(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_31(AUDIO::_0x0626A247D2405330());
			if (func_30(iVar0) && (!func_12(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_30(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_30(int iParam0)//Position - 0x26C0
{
	return iParam0 < 3;
}

int func_31(int iParam0)//Position - 0x26CC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)//Position - 0x2709
{
	if (func_30(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()//Position - 0x2733
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

bool func_34(int iParam0, int iParam1)//Position - 0x278B
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x27C6
{
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_36(var uParam0)//Position - 0x2836
{
	Global_3DCB = uParam0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
}

void func_37()//Position - 0x285C
{
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_3DDC = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2895
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = iParam5;
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

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x28EB
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_3DDA = 1;
	}
	else
	{
		Global_3DDA = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)//Position - 0x2929
{
	return uParam0;
}

void func_41()//Position - 0x2933
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_42();
	}
}

void func_42()//Position - 0x2959
{
	if (func_17())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_43()//Position - 0x296D
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (!Global_3878)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
					{
						func_55();
					}
				}
			}
		}
	}
}

int func_44()//Position - 0x29AD
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
		if (func_12(14))
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2BD4
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2C46
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

void func_47()//Position - 0x2CA9
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (!Global_3878)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()//Position - 0x2CE8
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

int func_49()//Position - 0x2D1A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_90);
	}
	else
	{
		iLocal_88 = MISC::GET_GAME_TIMER();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2D46
{
	if (func_53())
	{
		return;
	}
	if (Global_3959)
	{
		func_51(0, 0);
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
	if (!func_25())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)//Position - 0x2DC0
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)//Position - 0x2E34
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

bool func_53()//Position - 0x2E8E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_54()//Position - 0x2EA0
{
	if (func_45(2, Global_389A, 0))
	{
		if (Global_41C1 == 0)
		{
			if (Global_3DD4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_55()//Position - 0x2ED4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (func_56() && PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
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

int func_56()//Position - 0x2FF7
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

void func_57()//Position - 0x301B
{
	if (Global_11625 == 0)
	{
		func_54();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_41C3 = 1;
		if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
		{
			func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E5C, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		else
		{
			func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E5C, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
			func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		Global_3867 = 0.2f;
		if (Global_38A5)
		{
			func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_108(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
	}
	if (Global_3E03 == 1)
	{
		if (Global_38B1.f_1 < 6)
		{
			Global_3E03 = 0;
		}
		else
		{
			if (Global_3875 == 0)
			{
				if (func_45(2, Global_3892, 0))
				{
					Global_3867 = 0.19f;
					Global_3E03 = 0;
					func_41();
					Global_41C8 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_3893, 0))
			{
				Global_3867 = 0.19f;
				Global_3E03 = 0;
				func_41();
				Global_41C8 = 2;
			}
		}
	}
	else if (Global_41C8 == 2)
	{
		if (Global_3DCF == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_3DCE = 6;
		}
		func_13();
		Global_38B1.f_1 = Global_38B3;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		unk_0x1190AB7024CBD8CB(4294967295, "Hang_Up", &Global_38A6, 1);
		func_13();
		Global_38B1.f_1 = Global_38B3;
		func_8();
	}
}

void func_58()//Position - 0x325D
{
	if (Global_3961 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::_0xE73364DB90778FFA())
			{
				Global_3961 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_3961 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_3DCE = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_3961 == 1)
		{
			Global_3961 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_41CB || Global_3961 == 1)
	{
		if (func_45(2, Global_3891, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
					{
					}
					else
					{
						Global_389B = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_3DFF = 1;
						Global_3DCE = 6;
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 27);
						if (!Global_3DD9)
						{
							MISC::SET_BIT(&Global_950, 5);
						}
						func_13();
						Global_38B1.f_1 = Global_38B3;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 27);
		Global_3DCE = 4;
		Global_3E07 = 0;
		func_61();
		func_60();
		if (!Global_3DDB)
		{
			if (Global_41C7 == 0)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171);
			}
		}
		func_59();
	}
}

void func_59()//Position - 0x338A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_90 = HUD::_0x13C4B962653A5280();
	}
	else
	{
		iLocal_87 = MISC::GET_GAME_TIMER();
	}
}

void func_60()//Position - 0x33A8
{
	if (Global_3DDB)
	{
		if (Global_11625)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_26862F.f_6B9), 15);
				}
			}
		}
	}
}

void func_61()//Position - 0x33F6
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (!Global_3DD6)
		{
			func_108(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_108(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_108(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
			{
				func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_108(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_219", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
			}
		}
		func_46(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
	}
}

void func_62()//Position - 0x35A9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_92 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_78);
		iLocal_93 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_81);
	}
	else
	{
		iLocal_77 = MISC::GET_GAME_TIMER();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = MISC::GET_GAME_TIMER();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_3DFD == 1)
	{
		if (func_44())
		{
			if (iLocal_92 > 4000)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
					{
						func_41();
						Global_38B0 = 2;
						func_61();
						func_60();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
				{
					func_41();
					Global_38B0 = 2;
					func_61();
					func_60();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_38B0 = 3;
	}
	if (Global_38B0 == 2)
	{
		iLocal_30 = 0;
		Global_3DCE = 4;
		func_55();
		Global_3E07 = 0;
		func_61();
		func_60();
		if (!Global_3DDB)
		{
			if (Global_41C7 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171);
			}
		}
		func_59();
		Global_41C6 = 0;
	}
	if (Global_3DFD == 0)
	{
		if (Global_38B0 == 3)
		{
			if (Global_3DDB)
			{
				func_64();
				func_50(0);
			}
			else
			{
				func_63();
				Global_41C6 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_3DCE = 6;
				func_13();
				Global_38B1.f_1 = Global_38B3;
				func_8();
			}
		}
	}
	else if (Global_38B0 == 3)
	{
	}
}

void func_63()//Position - 0x36FD
{
}

void func_64()//Position - 0x3705
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
		else if (func_67(Global_269E92.f_14))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_269E92.f_14)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_269E92.f_14)))
				{
					func_65();
				}
			}
		}
		else
		{
			func_65();
		}
	}
	else
	{
		func_65();
	}
	if (Global_269E92.f_25)
	{
		func_50(0);
	}
	Global_269E92.f_25 = 0;
	Global_269E92.f_3 = 0;
}

void func_65()//Position - 0x37A5
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
	func_66(&(Global_269E92.f_14));
}

void func_66(var uParam0)//Position - 0x3818
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

bool func_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3860
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_68()//Position - 0x3870
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_3DCA)
	{
		func_85();
		func_84();
		func_83();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_3C51.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_3962[iVar2 /*6*/] = { Global_3C51.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_3962[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_3962[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_3962[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_82(iVar13);
				iVar4 = func_81(iVar13);
				uVar5 = func_79(iVar13);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(iVar13);
				uVar7 = func_74(iVar13);
				uVar8 = func_73(iVar13);
				uVar12 = func_72(iVar13);
				uVar9 = func_71(iVar13);
				uVar10 = func_70(iVar13);
				uVar11 = func_69(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_3962[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_3962[iVar2 /*6*/]), &(Global_3C51.f_BB[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_3962[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_42), 64);
				iVar3 = func_82(0);
				iVar4 = func_81(0);
				uVar5 = func_79(0);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(0);
				uVar7 = func_74(0);
				uVar8 = func_73(0);
				uVar12 = func_72(0);
				uVar9 = func_71(0);
				uVar10 = func_70(0);
				uVar11 = func_69(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_3C51.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_3962[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_3962[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_3DD4 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(uLocal_68);
		AUDIO::_0x61631F5DF50D1C34(uLocal_69);
		AUDIO::START_SCRIPT_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171, Global_3C51.f_172, uLocal_67);
		Global_3DCE = 4;
	}
}

int func_69(int iParam0)//Position - 0x3AEF
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x3B24
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3B59
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)//Position - 0x3B8E
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x3C04
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x3C39
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)//Position - 0x3C6E
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()//Position - 0x3CA1
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()//Position - 0x3CCC
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78()//Position - 0x3CF7
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x3D22
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_80(sVar0);
}

int func_80(char* sParam0)//Position - 0x3D48
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_81(int iParam0)//Position - 0x3FE5
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_80(sVar0);
}

int func_82(int iParam0)//Position - 0x400F
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_80(sVar0);
}

void func_83()//Position - 0x4033
{
	cLocal_70 = { Global_3C51.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::_GET_LABEL_TEXT(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_84()//Position - 0x406C
{
	cLocal_60 = { Global_3C51.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_85()//Position - 0x40D9
{
	cLocal_55 = { Global_3C51.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::_GET_LABEL_TEXT(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

void func_86()//Position - 0x4112
{
	func_87();
	AUDIO::_0x0B568201DD99F0EB(uLocal_68);
	AUDIO::_0x61631F5DF50D1C34(uLocal_69);
	if (Global_41AE)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171, Global_3C51.f_172, uLocal_67);
		iLocal_36 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171, Global_3C51.f_172, uLocal_67);
	}
	Global_3DCE = 4;
}

void func_87()//Position - 0x416D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_3E1A))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_3E1A, "CT_AUD"))
		{
			Global_280002 = 1;
		}
		iVar13 = 0;
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (Global_1801E2 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_11625 || func_95())
		{
			if (Global_1801E2 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_93())
		{
			iVar14 = 1;
		}
		if (func_92(MISC::GET_HASH_KEY(&Global_3E1A)))
		{
			iVar14 = 0;
			Global_280002 = 0;
			iVar13 = 1;
		}
		if (((Global_3DD0 < 5 || Global_3DD0 == 10) || Global_3DD0 == 12) || Global_3DD0 == 13)
		{
			if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_3E1A, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_3E1A, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_3E1A, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_3E1A, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_91();
	func_90();
	func_89();
	func_88();
	Global_41C0 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_3C51 };
		StringConCat(&cLocal_42, "A", 24);
		Global_3962[iVar2 /*6*/] = { Global_3C51 };
		StringConCat(&(Global_3962[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_3962[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_3962[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_82(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4121E6 == 0)
				{
				}
			}
			iVar4 = func_81(iVar2);
			uVar5 = func_79(iVar2);
			uLocal_67 = func_78();
			uLocal_68 = func_77();
			uLocal_69 = func_76();
			uVar6 = func_75(iVar2);
			uVar7 = func_74(iVar2);
			uVar8 = func_73(iVar2);
			uVar12 = func_72(iVar2);
			uVar9 = func_71(iVar2);
			uVar10 = func_70(iVar2);
			uVar11 = func_69(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_3962[iVar2 /*6*/])))
			{
				if (Global_41AC == 0 && Global_41B2 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_3962[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_3962[iVar2 /*6*/]), &Global_41B4))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_3962[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_41C0 = iVar2;
					if (Global_41B2 == 1)
					{
						Global_41B2 = 0;
					}
				}
			}
			else if (Global_41B2 == 0 && Global_41AC == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_42), 64);
				iVar3 = func_82(iVar2);
				iVar4 = func_81(iVar2);
				uVar5 = func_79(iVar2);
				uLocal_67 = func_78();
				uLocal_68 = func_77();
				uLocal_69 = func_76();
				uVar6 = func_75(iVar2);
				uVar7 = func_74(iVar2);
				uVar8 = func_73(iVar2);
				uVar12 = func_72(iVar2);
				uVar9 = func_71(iVar2);
				uVar10 = func_70(iVar2);
				uVar11 = func_69(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &Global_3C51, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_88()//Position - 0x4578
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_3B07[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_3B07[iVar0 /*10*/]) || Global_3B07[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_3B07[iVar0 /*10*/], &(Global_3B07[iVar0 /*10*/].f_1));
			}
			if (Global_3B07.f_A1 == iVar0)
			{
				if ((Global_3B07.f_A2 != 0f && Global_3B07.f_A2.f_1 != 0f) && Global_3B07.f_A2.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_3B07.f_A1, Global_3B07.f_A2);
				}
			}
		}
		iVar0++;
	}
	if (Global_4121E6 == 1)
	{
		Global_4121E6 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_412131[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_412131[iVar0 /*9*/]) || Global_412131[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_412131[iVar0 /*9*/].f_8, Global_412131[iVar0 /*9*/], &(Global_412131[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_89()//Position - 0x4688
{
	cLocal_70 = { Global_3C51 };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::_GET_LABEL_TEXT(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_90()//Position - 0x46BB
{
	cLocal_60 = { Global_3C51 };
	StringConCat(&cLocal_60, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_91()//Position - 0x4722
{
	cLocal_55 = { Global_3C51 };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::_GET_LABEL_TEXT(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

int func_92(int iParam0)//Position - 0x4755
{
	switch (iParam0)
	{
		case 2983435581:
		case 3905238264:
		case 2230526984:
		case 1151576899:
		case 3933974410:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case 4043113159:
		case 4051914968:
		case 2877249189:
		case 3943383246:
		case 1854373416:
		case 2541132202:
		case 3941018485:
		case 2411344370:
		case 4248224431:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case 3858056843:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case 2523469160:
		case 2301918294:
		case 2924151779:
		case 3027015765:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case 3027020759:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case 3799881763:
		case 3911255984:
		case 2485681243:
		case 4065905873:
		case 1399593776:
		case 2702778705:
		case 2119072113:
		case 2289245343:
		case 3855541244:
		case 101634771:
		case 4287199792:
		case 2718169666:
		case 3738000079:
		case 510894735:
		case 4198193098:
			return 1;
		
		default:
	}
	return 0;
}

int func_93()//Position - 0x48E9
{
	if (Global_28006E)
	{
		if (func_12(0))
		{
			if (Global_300000 || func_94(0))
			{
				return 1;
			}
		}
	}
	if (Global_28006D)
	{
		if (func_12(0))
		{
			if (Global_380000 || func_94(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_94(bool bParam0)//Position - 0x493C
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

var func_95()//Position - 0x4967
{
	return Global_140842;
}

void func_96()//Position - 0x4973
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (Global_1801E2 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_11625)
	{
		if (Global_1801E2 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_93())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_3E1A))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_3E1A, "CT_AUD"))
		{
			Global_280002 = 1;
		}
	}
	if (func_92(MISC::GET_HASH_KEY(&Global_3E1A)))
	{
		iVar1 = 0;
		Global_280002 = 0;
		iVar0 = 1;
	}
	if (((Global_3DD0 < 5 || Global_3DD0 == 10) || Global_3DD0 == 12) || Global_3DD0 == 13)
	{
		if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_3E1A, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_3E1A, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_3E1A, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_3E1A, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_88();
}

void func_97()//Position - 0x4AD8
{
	while (Global_38A0 == 1 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_38A0 = 0;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
	{
		MISC::SET_BIT(&Global_950, 1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 1);
	}
	Global_38A1 = 0;
	if (Global_3DCA == 0)
	{
		if (!Global_3DDB)
		{
			func_87();
		}
	}
	else
	{
		func_68();
	}
	Global_3961 = 0;
	if (Global_3DD8)
	{
		if (Global_41C7 == 0)
		{
			if (Global_3DDB == 0)
			{
				iLocal_34 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_3961 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_3961 == 1 && Global_3DCE == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				Global_3961 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_3DCE = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::_0xE73364DB90778FFA())
				{
					Global_3961 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_3DCE != 1)
		{
		}
		if (Global_3961 == 0)
		{
		}
	}
	Global_3961 = 0;
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0) || Global_3DCE != 1) || Global_388F == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
	else
	{
		if (Global_3DD6)
		{
			Global_41C8 = 0;
			iLocal_32 = 0;
		}
		if (Global_3DD8 == 0)
		{
			if (Global_3E01 == 0)
			{
				Global_38B3 = Global_38B1.f_1;
				Global_3E01 = 1;
			}
			iLocal_30 = 0;
			if (Global_41C7 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171);
				SYSTEM::WAIT(0);
				Global_3DCE = 3;
				Global_3961 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_94F, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_3961 = 0;
				Global_3DCE = 4;
			}
			Global_38B0 = 0;
			if (Global_3DD9 == 1)
			{
				if (Global_38B1.f_1 == 10)
				{
				}
				if (!Global_38B1.f_1 == 9)
				{
					if (Global_38B1.f_1 > 4)
					{
						if (Global_38A0 == 0)
						{
							Global_38B1.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_38B1.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_38B1.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_3961 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::_0xE73364DB90778FFA())
							{
								Global_3961 = 0;
							}
						}
					}
				}
				if (Global_38B1.f_1 == 6)
				{
				}
				if (Global_38B1.f_1 == 10)
				{
				}
				if (Global_38B1.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_3DCE = 6;
					Global_38A1 = 1;
					return;
				}
				Global_38B1.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_38B1.f_1 != 9 && Global_38A0 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_3961 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::_0xE73364DB90778FFA())
						{
							Global_3961 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_84);
				}
				else
				{
					iLocal_83 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_41C6 = 1;
						Global_38A0 = 1;
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 11))
			{
				if (func_44() == 0)
				{
					func_55();
				}
			}
			if (Global_38A0 == 0)
			{
				if (!Global_41C7 == 0)
				{
					Global_3E07 = 0;
					func_61();
					func_60();
					if (!Global_3DDB)
					{
						if (Global_41C7 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_3C51.f_170, Global_3C51.f_171);
						}
					}
					func_59();
				}
			}
			else
			{
				func_98();
				Global_38A1 = 1;
			}
		}
		else
		{
			Global_38B0 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (Global_38B1.f_1 == 3)
					{
					}
				}
				else
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 21);
				}
			}
			if (Global_3E01 == 0)
			{
				Global_38B3 = Global_38B1.f_1;
				Global_3E01 = 1;
			}
			if (Global_38B1.f_1 == 3)
			{
				Global_38B1.f_1 = 4;
			}
			else
			{
				while (Global_38B1.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_38B1.f_1 == 6)
				{
				}
				Global_38B1.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_38B1.f_1 != 9 && Global_38A0 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), iLocal_84);
				}
				else
				{
					iLocal_83 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_41C6 = 1;
						Global_38A0 = 1;
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 21);
					}
				}
			}
			if (Global_38A0 == 0)
			{
				Global_3DCE = 2;
			}
			else
			{
				func_98();
				Global_38A1 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_78 = HUD::_0x13C4B962653A5280();
				iLocal_81 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				iLocal_76 = MISC::GET_GAME_TIMER();
				iLocal_79 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_98()//Position - 0x4F6E
{
	Global_3960 = 0;
	func_103();
}

void func_99()//Position - 0x4F7E
{
	float fVar0;
	
	fVar0 = func_100(Global_3882[Global_387A /*3*/], Global_387B[Global_387A /*3*/], Global_3889, Global_386C, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_41C4 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_32 = 0;
	}
}

float func_100(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x4FC6
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
	if (func_44() && Global_412201 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_102((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_3869 = { func_101(vParam0, vParam1, fVar2) };
		Global_386C = { func_101(vParam2, vParam3, fVar2) };
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

Vector3 func_101(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x50D8
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_102(float fParam0, float fParam1, float fParam2)//Position - 0x50F2
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

void func_103()//Position - 0x5119
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

bool func_104()//Position - 0x5170
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

bool func_105(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5188
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_106(sParam2, iParam3, 0);
}

int func_106(char* sParam0, int iParam1, bool bParam2)//Position - 0x51D6
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
					func_103();
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
		if (func_34(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_33();
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
				func_27();
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
				if (func_26())
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
			if (func_25())
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
			func_24();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_48();
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
		func_103();
	}
	return 0;
}

int func_107()//Position - 0x54A2
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x54C4
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
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

