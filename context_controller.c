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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<4> Local_101 = { 0, 0, 0, 0 } ;
	struct<16> Local_102 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0);
	Global_36759 = 0;
	func_38();
	StringCopy(&Global_36760, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_70856;
	while (true)
	{
		if (Global_70856)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_70856 != iVar8)
		{
			func_25();
			func_38();
			iVar2 = -1;
			iVar8 = Global_70856;
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				SYSTEM::WAIT(2000);
			}
		}
		if (Global_36765)
		{
			if (Global_36767 > -1)
			{
				if (!Global_36565[Global_36767 /*32*/].f_6)
				{
					if (!func_23(Global_36767, 1))
					{
						Global_36767 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_36765)
			{
				if (Global_36767 != iVar2)
				{
					if (func_18(Global_36767))
					{
						func_25();
						if (!Global_36565[iVar2 /*32*/].f_5 && Global_36565[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_36565[iVar2 /*32*/].f_7)
								{
									if (!Global_36565[iVar2 /*32*/].f_6)
									{
										if (!Global_36565[iVar2 /*32*/].f_12)
										{
											func_17(Global_36565[iVar2 /*32*/].f_8, Global_36565[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_36565[iVar2 /*32*/].f_8, Global_36565[iVar2 /*32*/].f_13, Global_36565[iVar2 /*32*/].f_3, Global_36565[iVar2 /*32*/].f_30);
										}
										Global_36767 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (PAD::IS_CONTROL_RELEASED(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
						{
							Global_36565[iVar2 /*32*/].f_4 = 1;
							Global_36565[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_36565[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_36758 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
							{
								if (PAD::IS_CONTROL_ENABLED(0, 101))
								{
									bVar5 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
								}
								if (PAD::IS_CONTROL_ENABLED(0, 74))
								{
									bVar4 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_36565[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_36565[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_36565[iVar2 /*32*/].f_7 || Global_36565[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_36758)
				{
					func_25();
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_36565[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_36759)
				{
					Global_36759 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_36565[iVar2 /*32*/].f_4 || Global_36565[iVar2 /*32*/].f_7))
					{
						Global_36759 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_36565[iVar2 /*32*/].f_7 || Global_36565[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			SYSTEM::SETTIMERA(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_36764 = 0;
		Global_36765 = 0;
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	bool bVar0;
	
	if (!bLocal_98)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_103 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_99)
	{
		if (bLocal_100)
		{
			HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_101);
		if (bLocal_100)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Local_102);
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_36760);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Local_102);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, bVar0, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_101);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_36760);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, bVar0, 50);
	}
	switch (iLocal_103)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_3()
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(PLAYER::PLAYER_ID(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_8() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_8())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	HUD::_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] && Global_36565[iVar0 /*32*/].f_4)
		{
			if (Global_36565[iVar0 /*32*/].f_31 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_36565[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_36565[iVar0 /*32*/] = 0;
					Global_36565[iVar0 /*32*/].f_31 = 0;
					Global_36565[iVar0 /*32*/] = 0;
					Global_36565[iVar0 /*32*/].f_4 = 0;
					Global_36565[iVar0 /*32*/].f_5 = 0;
					Global_36565[iVar0 /*32*/].f_2 = 0;
					Global_36565[iVar0 /*32*/].f_7 = 0;
					Global_36565[iVar0 /*32*/].f_6 = 0;
					Global_36565[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_36767 != -1 || bLocal_98)
	{
		bLocal_98 = false;
		Global_36767 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_36767)
			{
				func_25();
			}
			Global_36565[iVar0 /*32*/].f_31 = 0;
			Global_36565[iVar0 /*32*/] = 0;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = 0;
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_6 = 0;
			Global_36565[iVar0 /*32*/].f_1 = -1;
			Global_36565[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_36565[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1)
		{
			if (Global_36565[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			if (Global_36565[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_36565[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_101 = { Param0 };
	Local_102 = { Param1 };
	bLocal_98 = true;
	bLocal_99 = true;
	iLocal_103 = uParam2;
	bLocal_100 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_101 = { Param0 };
	bLocal_98 = true;
	bLocal_99 = false;
	iLocal_103 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_89907 && Global_89906)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_98)
		{
			return 1;
		}
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::_0x214CD562A939246A())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_68215)
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 1;
	}
	if (Global_36764)
	{
		return 1;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1357530.f_1048, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_22(int iParam0)
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_36565[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36565[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_36565[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_36760);
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_36565[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_36760);
		if (Global_36565[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_36565[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_36565[iVar0 /*32*/].f_13));
		}
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return iVar1;
}

int func_24(int iParam0)
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
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_36767 = -1;
}

void func_26()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_32())
	{
		if (func_31(0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2447174.f_671.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_68328 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_68328)
	{
		case 3:
			Global_68326 = 0;
			break;
		
		case 4:
			Global_68326 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_70856 && func_29())
	{
		return 0;
	}
	if (!Global_70856 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SCRIPT::REQUEST_SCRIPT("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
		return 1;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	return 1;
}

var func_28()
{
	return Global_68216;
}

var func_29()
{
	return Global_1656139;
}

void func_30()
{
	Global_2447174.f_671.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2447174.f_671.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2447174.f_671.f_31);
	}
	return Global_2447174.f_671.f_28;
}

bool func_32()
{
	return Global_68215;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_53077[iVar1] < 0)
		{
			Global_53077[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_35()
{
	struct<13> Var0;
	
	if (Global_1573304 != -1)
	{
		Var0 = Global_1573305[0];
		Var0.f_1 = Global_1573305[1];
		Var0.f_2 = Global_1573305[2];
		Var0.f_3 = Global_1573305[3];
		Var0.f_4 = Global_1573305[4];
		Var0.f_5 = Global_1573305[5];
		Var0.f_6 = Global_1573305[6];
		Var0.f_7 = Global_1573305[7];
		Var0.f_8 = Global_1573305[8];
		Var0.f_9 = Global_1573305[9];
		Var0.f_10 = Global_1573305[10];
		Var0.f_11 = Global_1573305[11];
		Var0.f_12 = Global_1573305[12];
		if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (!iLocal_104)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
				{
					iLocal_104 = 1;
				}
			}
			if (iLocal_104)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 24);
					}
					Global_1573304 = -1;
					iLocal_104 = 0;
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 24);
			}
			Global_1573304 = -1;
			iLocal_104 = 0;
		}
		else
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_2097152[func_37() /*12130*/].f_11953.f_18[Global_1573304 /*6*/]), NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&Var0), 24);
			}
			Global_1573304 = -1;
			iLocal_104 = 0;
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_37()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_38()
{
	int iVar0;
	
	Global_36758 = 0;
	Global_36764 = 0;
	Global_36765 = 0;
	Global_36766 = 1;
	Global_36767 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_36565[iVar0 /*32*/] = 0;
		iVar0++;
	}
}
