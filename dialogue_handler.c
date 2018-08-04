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
		if (MISC::IS_BIT_SET(Global_2364, 1))
		{
			if (!MISC::IS_BIT_SET(Global_2363, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_14481)
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14436)
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_2364, 1);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_14666, 0))
		{
			if (!func_105())
			{
				if (!MISC::IS_BIT_SET(Global_14666, 1))
				{
					MISC::SET_BIT(&Global_14666, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_89 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_85 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_89);
				}
				else
				{
					iLocal_86 = MISC::GET_GAME_TIMER();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_103(&Global_15254, &Global_15870, &Global_15790, Global_15803, Global_16785, Global_16786, 0))
					{
						Global_14666 = 0;
					}
				}
				else
				{
					Global_14666 = 0;
				}
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_4456448.f_17, 4))
		{
			if (Global_15800 != 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_15800)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15806)
				{
					if (Global_15796 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_15796 == 0)
				{
					func_85();
				}
				else
				{
					func_95();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15806)
				{
					if (Global_15808)
					{
						func_56();
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

void func_1()
{
	Global_15810 = 0;
	Global_14492 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15811 = 0;
	Global_15812 = 0;
	Global_15813 = 0;
	Global_15814 = 0;
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
	Global_15804 = 0;
	Global_15805 = 0;
	Global_15847 = 0;
	Global_15848 = 0;
	Global_15851 = 0;
	Global_15853 = 0;
	Global_15852 = 0;
	Global_15855 = 0;
	Global_15854 = 0;
	Global_16817 = 0;
	Global_15857 = 0;
	if (Global_14493.f_1 == 10)
	{
	}
	else if (MISC::IS_BIT_SET(Global_2363, 11))
	{
		func_3();
	}
	Global_15806 = 0;
	Global_15807 = 0;
	Global_15808 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16790 = 0;
	Global_16797 = 0;
	Global_16796 = 0;
	Global_16793 = 0;
	Global_16792 = 0;
	Global_16794 = 0;
	Global_16795 = 0;
	Global_15796 = 0;
	Global_15797 = 0;
	Global_15798 = 0;
	Global_15799 = 0;
	Global_16058 = 0;
	Global_16821 = 5000;
	Global_14476 = 0;
	MISC::CLEAR_BIT(&Global_2363, 20);
	MISC::CLEAR_BIT(&Global_2363, 24);
	MISC::CLEAR_BIT(&Global_2364, 23);
	MISC::CLEAR_BIT(&Global_2365, 0);
	MISC::CLEAR_BIT(&Global_2364, 9);
	MISC::CLEAR_BIT(&Global_2364, 31);
	MISC::CLEAR_BIT(&Global_2364, 17);
	MISC::CLEAR_BIT(&Global_2365, 5);
	Global_16784 = 0;
	Global_16783 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_15800 = 4;
	}
	else
	{
		Global_15800 = 0;
		Global_16811 = 0;
		Global_16822 = MISC::GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_70978)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_2363, 11))
			{
				if (!Global_14436)
				{
					BRAIN::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_70978)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_2363, 11);
			}
		}
	}
}

void func_4()
{
	Global_15810 = 0;
	Global_14492 = 0;
	func_2();
}

void func_5()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_15856 == 0)
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
	if (Global_16792 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_16811 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16811 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_16794 > 0)
	{
		iLocal_37 = MISC::GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_16794)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_16792 = 0;
		}
	}
	if (Global_16811 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_15800 = 6;
		}
	}
}

void func_6()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16811 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!MISC::IS_BIT_SET(Global_2363, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_70978 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_70978 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_70978 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_16811 == 1)
		{
			if (Global_16812 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
				Global_16812 = 0;
			}
		}
	}
	else if (Global_16811 == 0)
	{
		if (Global_16812 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_16812 = 0;
		}
	}
	if (Global_15853 == 0)
	{
		if (!Global_15813)
		{
			if (!MISC::IS_BIT_SET(Global_2364, 31))
			{
				if (!MISC::IS_BIT_SET(Global_2364, 27))
				{
					if (func_49())
					{
						if (Global_14493.f_1 > 6)
						{
							MISC::SET_BIT(&Global_2364, 24);
							MISC::SET_BIT(&Global_2364, 27);
							MISC::CLEAR_BIT(&Global_2364, 26);
							MISC::CLEAR_BIT(&Global_2364, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_15813 == 0)
	{
		if (Global_15853 == 1)
		{
			MISC::SET_BIT(&Global_2364, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_2364, 23);
		}
		if (Global_15857)
		{
			if (Global_15853 == 0)
			{
				Global_15419 = { Global_15858 };
				Global_15876 = { Global_15864 };
				Global_15810 = 0;
				Global_16817 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15855)
		{
			while (Global_15853 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_14493.f_1 < 6)
				{
					Global_15853 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_15855)
						{
							iLocal_30 = 1;
							Global_16815 = 1;
							func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
							func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14481)
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_2363, 17);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_2363, 17);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_16813 = 1;
							if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
							{
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15942, "CELL_300", &(Global_117[Global_1678 /*10*/].f_4), "CELL_195", 0);
								func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
								func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14481)
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_2363, 17);
						}
					}
					if (func_45(2, Global_14462, 0))
					{
						func_43();
						Global_14419 = 0.19f;
						Global_15853 = 0;
						func_41();
						if (Global_15855)
						{
							Global_15419 = { Global_15936 };
							Global_16817 = 5;
						}
						else if (Global_15798 > 0)
						{
							Global_16058 = 1;
							Global_15800 = 0;
							Global_16821 = 0;
							if (MISC::IS_BIT_SET(Global_2364, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16784 + 1)
								{
									uLocal_94[iVar0] = func_40(&(Global_16059[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_40(&(Global_16421[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16784, &Global_15089, Global_1678, &Global_15876, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_15798 == 2)
							{
								func_22(&Global_15089, Global_1678, &Global_15876, &(Global_15954[0 /*6*/]), &(Global_16006[0 /*6*/]), &(Global_15954[1 /*6*/]), &(Global_16006[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16817 = 1;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15419 = { Global_15894 };
							Global_16817 = 1;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14463, 0) || MISC::IS_BIT_SET(Global_2363, 24))
					{
						func_43();
						Global_14419 = 0.19f;
						Global_15853 = 0;
						func_41();
						if (Global_15855)
						{
							Global_15419 = { Global_15930 };
							Global_16817 = 4;
						}
						else if (Global_15798 > 0)
						{
							Global_16058 = 1;
							Global_15800 = 0;
							Global_16821 = 0;
							if (MISC::IS_BIT_SET(Global_2364, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16783 + 1)
								{
									uLocal_96[iVar1] = func_40(&(Global_16240[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_40(&(Global_16602[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16783, &Global_15089, Global_1678, &Global_15876, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_15798 == 2)
							{
								func_22(&Global_15089, Global_1678, &Global_15876, &(Global_15967[0 /*6*/]), &(Global_16019[0 /*6*/]), &(Global_15967[1 /*6*/]), &(Global_16019[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16817 = 2;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
							func_21();
							return;
						}
						else
						{
							Global_15419 = { Global_15900 };
							Global_16817 = 2;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14465, 0))
					{
						if (Global_15855)
						{
							Global_14419 = 0.19f;
							Global_15853 = 0;
							func_41();
							func_43();
							Global_15419 = { Global_15924 };
							Global_16817 = 3;
							Global_16813 = 0;
							Global_16815 = 0;
							Global_15810 = 0;
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
			while (Global_15853)
			{
				SYSTEM::WAIT(0);
				if (Global_14493.f_1 < 6)
				{
					Global_15853 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14474, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14474, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14481)
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2363, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14462, 0))
					{
						func_43();
						Global_15853 = 0;
						func_41();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "GET_CURRENT_SELECTION");
						iLocal_99 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
						while (!GRAPHICS::_0x768FF8961BA904D6(iLocal_99))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::_0x2DE7EFA66B906036(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_15419 = { Global_15930 };
								Global_16817 = 4;
								break;
							
							case 1:
								Global_15419 = { Global_15924 };
								Global_16817 = 3;
								break;
							
							case 2:
								Global_15419 = { Global_15936 };
								Global_16817 = 5;
								break;
						}
						Global_16813 = 0;
						Global_16815 = 0;
						Global_15810 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14463, 0))
					{
						Global_15853 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15801 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_14493.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_15800 = 6;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14482, true);
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
	else if (Global_14659 == 0)
	{
		if (func_45(2, Global_14461, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_2363, 20))
					{
					}
					else
					{
						Global_14471 = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_15849 = 1;
						Global_15850 = 1;
						Global_15800 = 6;
						func_13();
						Global_14493.f_1 = Global_14495;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	vector3 vVar0[24];
	
	if (Global_14476 == 1)
	{
		return;
	}
	if (Global_14493.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14493.f_1)
	{
		case 6:
			func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_2968);
			if (Global_2968 == 1)
			{
				func_46(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14497), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14497;
			}
			else
			{
				func_46(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14498), -1082130432, -1082130432, -1082130432);
				Global_14473 = Global_14498;
			}
			if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14661 == 0)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2363, 17);
			}
			else if (Global_70978)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2363, 17);
			}
			else
			{
				if (Global_14660 == 1)
				{
					if (Global_14481)
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14481)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2363, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2363, 17);
			if (MISC::IS_BIT_SET(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14492 == 1)
			{
				func_10();
				func_46(Global_14474, "SET_THEME", SYSTEM::TO_FLOAT(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15813)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15815);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
				{
					func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_217", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
				}
				func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15800 == 4 || Global_15800 == 3)
			{
				func_46(Global_14474, "SET_THEME", SYSTEM::TO_FLOAT(Global_105220.f_14022[Global_14493 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15813)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15815);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_16058)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
					{
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_14474, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &cVar0, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
					}
				}
				func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14493 == 0)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
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
		if (Global_14493 == 1)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
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
		if (Global_14493 == 2)
		{
			switch (Global_105220.f_14022[Global_14493 /*20*/].f_6)
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
		if (Global_14493 == 3)
		{
			switch (Global_4267678)
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

void func_11(int iParam0)
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
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2369);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2364, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_9(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_13()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return;
	}
	switch (Global_14495)
	{
		case 5:
			Global_14495 = 6;
			break;
		
		case 6:
			if (MISC::IS_BIT_SET(Global_2364, 5))
			{
				Global_14495 = 6;
				MISC::CLEAR_BIT(&Global_2364, 5);
			}
			else
			{
				Global_14495 = 3;
			}
			break;
		
		case 7:
			Global_14495 = 3;
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Global_2364, 5))
			{
				Global_14495 = 6;
				MISC::CLEAR_BIT(&Global_2364, 5);
			}
			else
			{
				Global_14495 = 3;
			}
			break;
		
		default:
			Global_14495 = 3;
			break;
	}
}

void func_14()
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
		if (func_45(2, Global_14469, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_45(2, Global_14470, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()
{
	func_46(Global_14474, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14482, true);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_14664 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
	if (Global_4267680 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	func_46(Global_14474, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14482, true);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_14664 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
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
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_21()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
	{
		if (Global_14492 == 1)
		{
			if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15847)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2363, 17);
		}
		else
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2363, 17);
			if (MISC::IS_BIT_SET(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam2 > Global_15802)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
				}
				else
				{
					func_102();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_33();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16796 = Global_16797;
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15419.f_370 = Global_16789;
		Global_15796 = Global_15797;
		Global_15798 = Global_15799;
		if (Global_16058 == 0)
		{
			Global_15954[0 /*6*/] = { Global_15980[0 /*6*/] };
			Global_15954[1 /*6*/] = { Global_15980[1 /*6*/] };
			Global_16006[0 /*6*/] = { Global_16032[0 /*6*/] };
			Global_16006[1 /*6*/] = { Global_16032[1 /*6*/] };
			Global_15967[0 /*6*/] = { Global_15993[0 /*6*/] };
			Global_15967[1 /*6*/] = { Global_15993[1 /*6*/] };
			Global_16019[0 /*6*/] = { Global_16045[0 /*6*/] };
			Global_16019[1 /*6*/] = { Global_16045[1 /*6*/] };
		}
		if (Global_15806)
		{
			MISC::CLEAR_BIT(&Global_2363, 20);
			MISC::CLEAR_BIT(&Global_2364, 17);
			MISC::CLEAR_BIT(&Global_2365, 0);
			if (bParam3)
			{
				func_27();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (Global_16058 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
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
				switch (Global_14493.f_1)
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
			Global_15810 = bParam3;
		}
		Global_15802 = iParam2;
		if (Global_15796 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15796)
			{
				StringCopy(&(Global_15419.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15419.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14666 = 0;
		func_48();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15802 || iParam2 == Global_15802)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

void func_24()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	MISC::CLEAR_BIT(&Global_2364, 16);
}

int func_25()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_27()
{
	if (func_12(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_28();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_28()
{
	func_29();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_29()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_32(Global_105220.f_2354.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_31(PLAYER::PLAYER_PED_ID());
			if (func_30(iVar0) && (!func_12(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_30(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
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

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1363073.f_1048, iParam0);
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
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

void func_36(var uParam0)
{
	Global_15797 = uParam0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
}

void func_37()
{
	Global_15848 = 0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_15814 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	Global_2621441 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_15812 = 1;
	}
	else
	{
		Global_15812 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)
{
	return uParam0;
}

void func_41()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14482, true);
		func_42();
	}
}

void func_42()
{
	if (func_17())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_43()
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_14436)
				{
					if (!MISC::IS_BIT_SET(Global_2363, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			if (Global_14436 == 0)
			{
				if (Global_1678 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15800 != 2)
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
		if (Global_104268)
		{
			return 0;
		}
	}
	if (Global_70978)
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
	if (Global_4267680 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_105220.f_14022.f_89)
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

int func_45(int iParam0, int iParam1, int iParam2)
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47()
{
	if (func_44())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_14436)
				{
					if (MISC::IS_BIT_SET(Global_2363, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15800 = 1;
}

int func_49()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_90);
	}
	else
	{
		iLocal_88 = MISC::GET_GAME_TIMER();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14659)
	{
		func_51(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2364, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2363, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2363, 30);
	}
	if (!func_25())
	{
		Global_14493.f_1 = 3;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14430);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2363, 14))
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
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	if (func_45(2, Global_14470, 0))
	{
		if (Global_16811 == 0)
		{
			if (Global_15806)
			{
				if (MISC::IS_BIT_SET(Global_2364, 17))
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

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_55() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_70978)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_70978)
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
			if (!Global_14436)
			{
				if (Global_1678 != 128)
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
								if (Global_70978)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_2363, 11);
								BRAIN::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()
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

void func_56()
{
	if (Global_70978 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_16813 = 1;
		if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
		{
			func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15942, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15942, &(Global_105220.f_28021[Global_1678 /*29*/].f_7), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
			func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14419 = 0.2f;
		if (Global_14481)
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2363, 17);
	}
	if (Global_15853 == 1)
	{
		if (Global_14493.f_1 < 6)
		{
			Global_15853 = 0;
		}
		else
		{
			if (Global_14433 == 0)
			{
				if (func_45(2, Global_14462, 0))
				{
					Global_14419 = 0.19f;
					Global_15853 = 0;
					func_41();
					Global_16818 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14463, 0))
			{
				Global_14419 = 0.19f;
				Global_15853 = 0;
				func_41();
				Global_16818 = 2;
			}
		}
	}
	else if (Global_16818 == 2)
	{
		if (Global_15801 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_15800 = 6;
		}
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14482, true);
		func_13();
		Global_14493.f_1 = Global_14495;
		func_8();
	}
}

void func_57()
{
	if (Global_14667 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::_0xE73364DB90778FFA())
			{
				Global_14667 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_14667 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_15800 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_14667 == 1)
		{
			Global_14667 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_16821 || Global_14667 == 1)
	{
		if (func_45(2, Global_14461, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_2363, 20))
					{
					}
					else
					{
						Global_14471 = 1;
						func_41();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_15849 = 1;
						Global_15800 = 6;
						MISC::CLEAR_BIT(&Global_2363, 27);
						if (!Global_15811)
						{
							MISC::SET_BIT(&Global_2364, 5);
						}
						func_13();
						Global_14493.f_1 = Global_14495;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2363, 27);
		Global_15800 = 4;
		Global_15857 = 0;
		func_60();
		func_59();
		if (!Global_15813)
		{
			if (Global_16817 == 0)
			{
				if (!MISC::IS_BIT_SET(Global_2365, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_2365, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15419.f_368, Global_15419.f_369);
			}
		}
		func_58();
	}
}

void func_58()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_90 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_87 = MISC::GET_GAME_TIMER();
	}
}

void func_59()
{
	if (Global_15813)
	{
		if (Global_70978)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2519572.f_1721), 15);
				}
			}
		}
	}
}

void func_60()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
	{
		if (!Global_15808)
		{
			func_106(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2363, 17);
			if (MISC::IS_BIT_SET(Global_2363, 20))
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14481)
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14436)
				{
					func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15813)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15815);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else if (Global_105220.f_28021[Global_1678 /*29*/].f_24[Global_14493] == 0)
			{
				func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1678 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_105220.f_28021[Global_1678 /*29*/].f_3), &(Global_105220.f_28021[Global_1678 /*29*/].f_7), "CELL_219", &(Global_105220.f_28021[Global_1678 /*29*/].f_3), 0);
			}
		}
		func_46(Global_14474, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_92 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_78);
		iLocal_93 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_81);
	}
	else
	{
		iLocal_77 = MISC::GET_GAME_TIMER();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = MISC::GET_GAME_TIMER();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_15847 == 1)
	{
		if (func_44())
		{
			if (iLocal_92 > 4000)
			{
				if (MISC::IS_BIT_SET(Global_2363, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
					{
						func_41();
						Global_14492 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (MISC::IS_BIT_SET(Global_2363, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14474))
				{
					func_41();
					Global_14492 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_14492 = 3;
	}
	if (Global_14492 == 2)
	{
		iLocal_30 = 0;
		Global_15800 = 4;
		func_54();
		Global_15857 = 0;
		func_60();
		func_59();
		if (!Global_15813)
		{
			if (Global_16817 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15419.f_368, Global_15419.f_369);
			}
		}
		func_58();
		Global_16816 = 0;
	}
	if (Global_15847 == 0)
	{
		if (Global_14492 == 3)
		{
			if (Global_15813)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_16816 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_15800 = 6;
				func_13();
				Global_14493.f_1 = Global_14495;
				func_8();
			}
		}
	}
	else if (Global_14492 == 3)
	{
	}
}

void func_62()
{
}

void func_63()
{
	Global_2525748.f_2 = 1;
	Global_2525748.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2525748 = 0;
			Global_2525748.f_2 = 0;
		}
		else if (func_66(Global_2525748.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2525748.f_20)))
			{
				if (!NETWORK::_NETWORK_IS_FRIEND_ONLINE_2(&(Global_2525748.f_20)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_2525748.f_37)
	{
		func_50(0);
	}
	Global_2525748.f_37 = 0;
	Global_2525748.f_3 = 0;
}

void func_64()
{
	Global_2525748.f_1 = 0;
	Global_2525748 = 0;
	Global_2525748.f_2 = 0;
	Global_2525748.f_33 = -1;
	Global_2525748.f_34 = -1;
	StringCopy(&(Global_2525748.f_4), "", 64);
	StringCopy(&(Global_2525748.f_39[0 /*16*/]), "", 64);
	Global_2525748.f_38 = 0;
	Global_2525748.f_56 = 0;
	Global_2525748.f_57 = 0;
	Global_2525748.f_58 = -2;
	Global_2525748.f_3 = 0;
	func_65(&(Global_2525748.f_20));
}

void func_65(var uParam0)
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

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_67()
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
	while (iLocal_75 < Global_15796)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_15419.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_14668[iVar2 /*6*/] = { Global_15419.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_14668[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14668[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_14668[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14668[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_14668[iVar2 /*6*/]), &(Global_15419.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_42), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_15419.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14668[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_14668[iVar2 /*6*/]), "END", 24);
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
	if (Global_15806 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(uLocal_68);
		AUDIO::_0x61631F5DF50D1C34(uLocal_69);
		AUDIO::START_SCRIPT_CONVERSATION(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_67);
		Global_15800 = 4;
	}
}

int func_68(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)
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

int func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_60), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(sVar0);
}

int func_79(char* sParam0)
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
		return -1;
	}
	return -1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(sVar0);
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(sVar0);
}

void func_82()
{
	cLocal_70 = { Global_15419.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::_GET_LABEL_TEXT(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_83()
{
	cLocal_60 = { Global_15419.f_6[iLocal_75 /*6*/] };
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

void func_84()
{
	cLocal_55 = { Global_15419.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::_GET_LABEL_TEXT(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

void func_85()
{
	func_86();
	AUDIO::_0x0B568201DD99F0EB(uLocal_68);
	AUDIO::_0x61631F5DF50D1C34(uLocal_69);
	if (Global_16792)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_67);
		iLocal_36 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_15419.f_368, Global_15419.f_369, Global_15419.f_370, uLocal_67);
	}
	Global_15800 = 4;
}

void func_86()
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
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_15876))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_15876, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (Global_1573346 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_70978 || func_94())
		{
			if (Global_1573346 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91(MISC::GET_HASH_KEY(&Global_15876)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_15802 < 5 || Global_15802 == 10) || Global_15802 == 12) || Global_15802 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_15876, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_15876, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_15876, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_15876, 14);
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
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16810 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_15419 };
		StringConCat(&cLocal_42, "A", 24);
		Global_14668[iVar2 /*6*/] = { Global_15419 };
		StringConCat(&(Global_14668[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14668[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_14668[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_46, HUD::_GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4267654 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_67 = func_77();
			uLocal_68 = func_76();
			uLocal_69 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14668[iVar2 /*6*/])))
			{
				if (Global_16790 == 0 && Global_16796 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_14668[iVar2 /*6*/]), &Global_16798))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_14668[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16810 = iVar2;
					if (Global_16796 == 1)
					{
						Global_16796 = 0;
					}
				}
			}
			else if (Global_16796 == 0 && Global_16790 == 0)
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
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &Global_15419, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_15089[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_15089[iVar0 /*10*/]) || Global_15089[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_15089[iVar0 /*10*/], &(Global_15089[iVar0 /*10*/].f_1));
			}
			if (Global_15089.f_161 == iVar0)
			{
				if ((Global_15089.f_162 != 0f && Global_15089.f_162.f_1 != 0f) && Global_15089.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_15089.f_161, Global_15089.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4267654 == 1)
	{
		Global_4267654 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4267473[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4267473[iVar0 /*9*/]) || Global_4267473[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4267473[iVar0 /*9*/].f_8, Global_4267473[iVar0 /*9*/], &(Global_4267473[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()
{
	cLocal_70 = { Global_15419 };
	StringConCat(&cLocal_70, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = HUD::_GET_LABEL_TEXT(&cLocal_70);
		if (MISC::IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_89()
{
	cLocal_60 = { Global_15419 };
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

void func_90()
{
	cLocal_55 = { Global_15419 };
	StringConCat(&cLocal_55, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = HUD::_GET_LABEL_TEXT(&cLocal_55);
		if (MISC::IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
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
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
			return 1;
		
		default:
	}
	return 0;
}

int func_92()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_93(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_93(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71226, 0);
}

var func_94()
{
	return Global_1312831;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (Global_1573346 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_70978)
	{
		if (Global_1573346 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_15876))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_15876, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_91(MISC::GET_HASH_KEY(&Global_15876)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_15802 < 5 || Global_15802 == 10) || Global_15802 == 12) || Global_15802 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_15876, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_15876, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_15876, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::_REQUEST_ADDITIONAL_TEXT_2(&Global_15876, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_87();
}

void func_96()
{
	while (Global_14476 == 1 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_14476 = 0;
	if (MISC::IS_BIT_SET(Global_2363, 20))
	{
		MISC::SET_BIT(&Global_2364, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2364, 1);
	}
	Global_14477 = 0;
	if (Global_15796 == 0)
	{
		if (!Global_15813)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14667 = 0;
	if (Global_15810)
	{
		if (Global_16817 == 0)
		{
			if (Global_15813 == 0)
			{
				iLocal_34 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15419.f_368, Global_15419.f_369);
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
		Global_14667 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_14667 == 1 && Global_15800 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_14667 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_15800 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::_0xE73364DB90778FFA())
				{
					Global_14667 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_15800 != 1)
		{
		}
		if (Global_14667 == 0)
		{
		}
	}
	Global_14667 = 0;
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 0) || Global_15800 != 1) || Global_14459 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
	}
	else
	{
		if (Global_15808)
		{
			Global_16818 = 0;
			iLocal_32 = 0;
		}
		if (Global_15810 == 0)
		{
			if (Global_15851 == 0)
			{
				Global_14495 = Global_14493.f_1;
				Global_15851 = 1;
			}
			iLocal_30 = 0;
			if (Global_16817 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15419.f_368, Global_15419.f_369);
				SYSTEM::WAIT(0);
				Global_15800 = 3;
				Global_14667 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_2363, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_14667 = 0;
				Global_15800 = 4;
			}
			Global_14492 = 0;
			if (Global_15811 == 1)
			{
				if (Global_14493.f_1 == 10)
				{
				}
				if (!Global_14493.f_1 == 9)
				{
					if (Global_14493.f_1 > 4)
					{
						if (Global_14476 == 0)
						{
							Global_14493.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_14493.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_14493.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_14667 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::_0xE73364DB90778FFA())
							{
								Global_14667 = 0;
							}
						}
					}
				}
				if (Global_14493.f_1 == 6)
				{
				}
				if (Global_14493.f_1 == 10)
				{
				}
				if (Global_14493.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_15800 = 6;
					Global_14477 = 1;
					return;
				}
				Global_14493.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_14493.f_1 != 9 && Global_14476 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_14667 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::_0xE73364DB90778FFA())
						{
							Global_14667 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_84);
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
						Global_16816 = 1;
						Global_14476 = 1;
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_2363, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_14476 == 0)
			{
				if (!Global_16817 == 0)
				{
					Global_15857 = 0;
					func_60();
					func_59();
					if (!Global_15813)
					{
						if (Global_16817 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15419.f_368, Global_15419.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_14477 = 1;
			}
		}
		else
		{
			Global_14492 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_14493.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_2364, 21);
				}
			}
			if (Global_15851 == 0)
			{
				Global_14495 = Global_14493.f_1;
				Global_15851 = 1;
			}
			if (Global_14493.f_1 == 3)
			{
				Global_14493.f_1 = 4;
			}
			else
			{
				while (Global_14493.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_14493.f_1 == 6)
				{
				}
				Global_14493.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_82 = MISC::GET_GAME_TIMER();
			}
			while (Global_14493.f_1 != 9 && Global_14476 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_84);
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
						Global_16816 = 1;
						Global_14476 = 1;
						MISC::CLEAR_BIT(&Global_2364, 21);
					}
				}
			}
			if (Global_14476 == 0)
			{
				Global_15800 = 2;
			}
			else
			{
				func_97();
				Global_14477 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_78 = NETWORK::GET_NETWORK_TIME();
				iLocal_81 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_76 = MISC::GET_GAME_TIMER();
				iLocal_79 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_97()
{
	Global_14666 = 0;
	func_102();
}

void func_98()
{
	float fVar0;
	
	fVar0 = func_99(Global_14446[Global_14438 /*3*/], Global_14439[Global_14438 /*3*/], Global_14453, Global_14424, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16814 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_32 = 0;
	}
}

float func_99(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4267681 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2363, 14) && Global_14493.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14446[Global_14438 /*3*/].f_1 == Var0.f_1)
			{
				Global_4267681 = 1;
			}
		}
	}
	if (func_44() && Global_4267681 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_101((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_14421 = { func_100(vParam0, vParam1, fVar2) };
		Global_14424 = { func_100(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_14421 = { vParam1 };
		Global_14424 = { vParam3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14424, 0);
	return fVar1;
}

Vector3 func_100(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_101(float fParam0, float fParam1, float fParam2)
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

void func_102()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16811 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15800 = 6;
		return;
	}
}

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_102();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_33();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			MISC::CLEAR_BIT(&Global_2363, 20);
			MISC::CLEAR_BIT(&Global_2364, 17);
			MISC::CLEAR_BIT(&Global_2365, 0);
			if (bParam2)
			{
				func_27();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_26())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
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
				switch (Global_14493.f_1)
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
				if (MISC::IS_BIT_SET(Global_2363, 9))
				{
					return 0;
				}
			}
			func_24();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_48();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_102();
	}
	return 0;
}

int func_105()
{
	if (Global_15800 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

