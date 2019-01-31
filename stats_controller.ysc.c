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
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 3;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	while (true)
	{
		func_102();
		switch (iLocal_54)
		{
			case 0:
				func_97();
				break;
			
			case 1:
				func_88();
				func_2();
				Global_161F3 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xCC
{
	iLocal_54 = 0;
}

void func_2()//Position - 0xD7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_84();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_83(64)) || (iLocal_55 == 5 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_77();
	if (Global_161F1 || (Global_161F2 && !func_74(0)))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_73(iLocal_58, iVar2);
				iVar2++;
			}
			Global_161F1 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_72(iLocal_58))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_71()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || Global_11623) || Global_161F3) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = HUD::_0x13C4B962653A5280();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_83) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_56) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_57 = HUD::_0x13C4B962653A5280();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_70(iLocal_58, iVar8, &iVar6, &iVar7);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = func_69(iVar7, 4294967295, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_19E56.f_933.f_21B.f_93F[iLocal_58];
			}
			else
			{
				STATS::STAT_GET_INT(iVar6, &iVar3, 4294967295);
			}
			iVar5 = iVar3;
			iVar3 = func_68(iVar3, 0, 100);
			if (func_55(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_54(iVar7, iVar4, 4294967295, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_19E56.f_933.f_21B.f_93F[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_19E56.f_933.f_21B.f_93F[iLocal_58] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, 1);
				}
				if (iVar4 > func_52(iLocal_58, iVar8, 4294967295))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					else if ((!Global_19E56.f_2361 && !func_51(0)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_50(iLocal_58, iVar8)));
					if ((iVar14 % func_50(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_50(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_50(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_45())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_44(117, 4294967295) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										func_8("STAT_HELP2", 4294967295);
										func_4(117, 1, 4294967295, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_50(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar10, 4294967295);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar10, 4294967295);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar10, 4294967295);
								STATS::STAT_SET_INT(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_73(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_54(iVar7, iVar4, 4294967295, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_19E56.f_933.f_21B.f_93F[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_73(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5B8
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7A0
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)//Position - 0x7D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x806
{
	return Global_1407E0;
}

int func_7()//Position - 0x812
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)//Position - 0x81F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_9()//Position - 0x836
{
	if ((HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN()) && !func_43(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (Global_193FA2 == 1)
	{
		return 0;
	}
	if (Global_193F0F == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1805EC == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_EC6CA)
	{
		return 0;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_299 == 1)
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, 4294967295))
			{
				if (func_37(&Global_258B57, 300000, 0) == 1)
				{
					func_36(&Global_258B55);
					func_34(3, 4294967295);
				}
				else if (func_37(&Global_258B55, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (func_26(AUDIO::_0x0626A247D2405330()) == joaat("weapon_sniperrifle") || func_26(AUDIO::_0x0626A247D2405330()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_25(8, 4294967295))
	{
		return 0;
	}
	if (func_24(12, 4294967295))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_23)
	{
		return 0;
	}
	if (Global_18051E)
	{
		return 0;
	}
	if (Global_180522)
	{
		return 0;
	}
	if (Global_180524)
	{
		return 0;
	}
	if (Global_252F9E.f_F28.f_27)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_26862F.f_F72)
	{
		return 0;
	}
	if (Global_252F9E.f_EA2)
	{
		return 0;
	}
	if (!func_19(CAM::_0xDC9DA9E8789F5246(), 1, 0))
	{
		return 0;
	}
	if (func_18(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (Global_252F9E.f_F28.f_27 == 1)
	{
		return 0;
	}
	if (Global_255F11.f_B1C.f_19 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_287)
	{
		return 0;
	}
	if (func_10(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)//Position - 0xB2B
{
	if (iParam0 != func_11())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 26);
	}
	return 0;
}

int func_11()//Position - 0xB55
{
	return 4294967295;
}

int func_12(char* sParam0)//Position - 0xB5E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13()//Position - 0xB71
{
	return Global_252F9E.f_761.f_2B0 != 0;
}

bool func_14()//Position - 0xB85
{
	return Global_252F9E.f_BD4.f_242;
}

bool func_15()//Position - 0xB97
{
	return func_16();
}

bool func_16()//Position - 0xBA3
{
	return Global_14C73C.f_28 == 3;
}

bool func_17(bool bParam0)//Position - 0xBB3
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

bool func_18(int iParam0)//Position - 0xBDC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18C89A[iParam0 /*38*/].f_E, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)//Position - 0xBF3
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

int func_20()//Position - 0xC3D
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xC5A
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

bool func_22()//Position - 0xCB4
{
	return Global_14E0B5.f_70;
}

bool func_23()//Position - 0xCC2
{
	return Global_252F9E.f_A90[0 /*80*/].f_1 != 0;
}

int func_24(int iParam0, int iParam1)//Position - 0xCD8
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				if (Global_14E0B5.f_89[iParam1])
				{
					return 1;
				}
				if (Global_14E0B5.f_AA[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_416, iParam0))
			{
				return 1;
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_417, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)//Position - 0xD44
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

int func_26(int iParam0)//Position - 0xD7F
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()//Position - 0xD93
{
	return Global_255C02.f_245;
}

bool func_28()//Position - 0xDA2
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_EA450.f_8, 13);
}

bool func_29()//Position - 0xDB6
{
	return Global_255C02.f_244;
}

int func_30()//Position - 0xDC5
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0xDE7
{
	return Global_1406D2.f_12;
}

int func_32()//Position - 0xDF5
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0xE17
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0, int iParam1)//Position - 0xE31
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_6();
	}
	Global_150A02 = 0;
	if (MISC::_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_54(1303, 0, iParam1, 1, 0);
			func_54(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_35(int iParam0)//Position - 0xF1C
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)//Position - 0xF7F
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)//Position - 0xF8C
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)//Position - 0xFF6
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

bool func_39(int iParam0, int iParam1)//Position - 0x103B
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_6();
	}
	iVar0 = func_35(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, iParam0);
}

int func_40()//Position - 0x1067
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41()//Position - 0x1122
{
	return Global_140859;
}

bool func_42()//Position - 0x112E
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

bool func_43(int iParam0)//Position - 0x1145
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 13);
}

int func_44(int iParam0, int iParam1)//Position - 0x1161
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2727B6[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_45()//Position - 0x118D
{
	if (!func_48(1))
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	return Global_196EE9;
}

bool func_46()//Position - 0x11B1
{
	return func_47(CAM::_0xDC9DA9E8789F5246());
}

int func_47(int iParam0)//Position - 0x11C1
{
	if (iParam0 != func_11())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_11())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

bool func_48(bool bParam0)//Position - 0x11F6
{
	return func_49(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_49(int iParam0, bool bParam1)//Position - 0x1208
{
	if (!bParam1)
	{
		if (func_47(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_11();
}

int func_50(int iParam0, int iParam1)//Position - 0x1233
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_51(bool bParam0)//Position - 0x1443
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_52(int iParam0, int iParam1, int iParam2)//Position - 0x146E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_53(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_69(1224, iParam2, 0);
					break;
				
				case 3:
					return func_69(1230, iParam2, 0);
					break;
				
				case 2:
					return func_69(1226, iParam2, 0);
					break;
				
				case 4:
					return func_69(1229, iParam2, 0);
					break;
				
				case 5:
					return func_69(1228, iParam2, 0);
					break;
				
				case 6:
					return func_69(1225, iParam2, 0);
					break;
				
				case 7:
					return func_69(1227, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_53(int iParam0)//Position - 0x16BB
{
	return Global_8D15 == iParam0;
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x16C9
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_55(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x16F9
{
	*uParam3 = func_56(iParam0, iParam1, 0, 4294967295);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x171B
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &iVar3, 4294967295);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &iVar3, 4294967295);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &iVar3, 4294967295);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_69(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_67(20, iParam3) / 175f);
				func_64(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(func_62(50, iParam3))));
				func_64(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_63(func_62(47, iParam3))));
				func_64(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_40001.f_5C84) * IntToFloat(func_69(7234, 4294967295, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_61(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_61(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_61(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_61(func_62(52, iParam3))) / 30f);
				func_64(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar3, 4294967295);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar3, 4294967295);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar3, 4294967295);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_69(1499, iParam3, 0)) / 20f);
				func_64(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar3, 4294967295);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar3, 4294967295);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar3, 4294967295);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_69(112, iParam3, 0) / 50)));
				func_64(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_63(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_63(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_63(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_63(func_62(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_63(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_63(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_63(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_63(func_62(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_plane_landings"), &iVar3, 4294967295);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_plane_landings"), &iVar3, 4294967295);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_plane_landings"), &iVar3, 4294967295);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_69(61, iParam3, 0)));
				func_64(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_60(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_60(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_60(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &fVar1, 4294967295);
				fVar0 = ((fVar1 - Global_19E56.f_933.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_67(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar3, 4294967295);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar3, 4294967295);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar3, 4294967295);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19E56.f_933.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_69(34, iParam3, 0);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_64(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar5, 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar6, 4294967295);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19E56.f_933.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19E56.f_933.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar5, 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_hits_peds_vehicles"), &iVar6, 4294967295);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19E56.f_933.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19E56.f_933.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar5, 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar6, 4294967295);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19E56.f_933.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19E56.f_933.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_69(171, iParam3, 0);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_59(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_58(joaat("mpply_shootingrange_wins")) * 1));
				func_64(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_52(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_57(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_50(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_50(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_50(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_50(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_68(iVar2, 0, 100);
	return iVar2;
}

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x242E
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_19E56.f_933.f_21B.f_8B3[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_69(72, iParam2, 0);
					break;
				
				case 3:
					return func_69(74, iParam2, 0);
					break;
				
				case 2:
					return func_69(73, iParam2, 0);
					break;
				
				case 4:
					return func_69(75, iParam2, 0);
					break;
				
				case 5:
					return func_69(76, iParam2, 0);
					break;
				
				case 6:
					return func_69(77, iParam2, 0);
					break;
				
				case 7:
					return func_69(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x2542
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x2560
{
	return Global_19E56.f_4AAF[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_60(int iParam0, int iParam1)//Position - 0x257C
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_19E56.f_7BC[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_61(int iParam0)//Position - 0x25AA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400));
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0));
	return iVar0;
}

int func_62(int iParam0, int iParam1)//Position - 0x25ED
{
	return Global_26B05F[iParam0 /*3*/][func_5(iParam1)];
}

int func_63(int iParam0)//Position - 0x2605
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0));
	return iVar0;
}

var func_64(float fParam0)//Position - 0x2638
{
	if (func_45())
	{
		if (func_65() < Global_40001.f_3126)
		{
			if (*fParam0 + (IntToFloat(func_65()) * Global_40001.f_3125)) <= IntToFloat(Global_40001.f_312F)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_65()) * Global_40001.f_3125));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_65()//Position - 0x2692
{
	if (func_48(1))
	{
		return Global_1841F3[func_66() /*790*/].f_D3.f_6;
	}
	return 0;
}

int func_66()//Position - 0x26B8
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

float func_67(int iParam0, int iParam1)//Position - 0x26CD
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272506[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0f;
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x26F9
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x271E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2750
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_71()//Position - 0x29A7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x29C3
{
	return iParam0 < 3;
}

void func_73(int iParam0, int iParam1)//Position - 0x29CF
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_70(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_69(iVar3, 4294967295, 0);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, 4294967295);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), fVar1, 1);
			break;
		
		case 7:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian3")) != 0 || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor3")) != 0)
			{
				Global_161F2 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(CAM::_0xDC9DA9E8789F5246(), fVar1);
				unk_0x9F2796007DC5EEF5(CAM::_0xDC9DA9E8789F5246(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(CAM::_0xDC9DA9E8789F5246(), fVar1);
			}
			break;
	}
}

int func_74(int iParam0)//Position - 0x2ABC
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)//Position - 0x2ADE
{
	return func_76(iParam0, Global_8D15);
}

int func_76(int iParam0, int iParam1)//Position - 0x2AEF
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

void func_77()//Position - 0x2CD0
{
	func_82();
	func_81();
	func_78();
}

void func_78()//Position - 0x2CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_200000[func_80() /*12745*/].f_1FF2.f_7)
			{
				iLocal_77 = func_61(func_62(147, 4294967295));
				Global_200000[func_80() /*12745*/].f_1FF2.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_200000[func_80() /*12745*/].f_1FF2.f_6;
			}
			if (Global_200000[func_80() /*12745*/].f_1FF2.f_4 == 0)
			{
				Global_200000[func_80() /*12745*/].f_1FF2.f_4 = NETWORK::_GET_POSIX_TIME();
			}
			iLocal_79 = Global_200000[func_80() /*12745*/].f_1FF2.f_4;
			iLocal_78 = Global_200000[func_80() /*12745*/].f_1FF2.f_5;
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_8E0[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_61(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_61(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_61(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_19E56.f_933.f_21B.f_8E0[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_19E56.f_933.f_21B.f_8DC[iLocal_58];
			}
			if (Global_19E56.f_933.f_21B.f_8D4[iLocal_58] == 0)
			{
				Global_19E56.f_933.f_21B.f_8D4[iLocal_58] = NETWORK::_GET_POSIX_TIME();
			}
			iLocal_79 = Global_19E56.f_933.f_21B.f_8D4[iLocal_58];
			iLocal_78 = Global_19E56.f_933.f_21B.f_8D8[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((NETWORK::_GET_POSIX_TIME() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = NETWORK::_GET_POSIX_TIME();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_200000[func_80() /*12745*/].f_1FF2.f_7 = 1;
		}
		else
		{
			Global_19E56.f_933.f_21B.f_8E0[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_61(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_61(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_61(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_61(func_62(147, 4294967295));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_79(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_200000[func_80() /*12745*/].f_1FF2.f_4 = iLocal_79;
		Global_200000[func_80() /*12745*/].f_1FF2.f_5 = iLocal_78;
	}
	else
	{
		Global_19E56.f_933.f_21B.f_8D4[iLocal_58] = iLocal_79;
		Global_19E56.f_933.f_21B.f_8D8[iLocal_58] = iLocal_78;
	}
}

void func_79(int iParam0, int iParam1, int iParam2)//Position - 0x2FA6
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_19E56.f_933.f_21B.f_8B3[iParam1 /*4*/][iParam0] = (Global_19E56.f_933.f_21B.f_8B3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 9954)
			{
				iVar0 = func_69(iVar1, 4294967295, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_54(iVar1, iVar0, 4294967295, 1, 0);
			}
			break;
	}
}

int func_80()//Position - 0x3096
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_81()//Position - 0x30A3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
			if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0)) && !ENTITY::IS_ENTITY_IN_AIR(iVar1)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0) == AUDIO::_0x0626A247D2405330()) && (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar1)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1))))
			{
				bVar0 = false;
				if (ENTITY::GET_ENTITY_SPEED(iVar1) >= 53f)
				{
					func_79(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_76 = HUD::_0x13C4B962653A5280();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
		if (((ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0)) && ENTITY::GET_ENTITY_SPEED(iVar2) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(iVar2))
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_75) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_76, 10000))))
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_82()//Position - 0x31F5
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 4294967295, 0) == AUDIO::_0x0626A247D2405330()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar1))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar1))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar1))))
		{
			if (iLocal_66)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iVar1))
				{
					if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_68) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_69, 1500))))
					{
						iLocal_70 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_71 = HUD::_0x13C4B962653A5280();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(iVar1))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar1))
					{
						if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_70) == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_71, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(HUD::_0x13C4B962653A5280(), iLocal_71)))
						{
						}
						else
						{
							func_79(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (MISC::GET_GAME_TIMER() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_72) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(HUD::_0x13C4B962653A5280(), NETWORK::GET_TIME_OFFSET(iLocal_73, 1000))))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = MISC::GET_GAME_TIMER();
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iLocal_69 = HUD::_0x13C4B962653A5280();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_73 = HUD::_0x13C4B962653A5280();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_83(int iParam0)//Position - 0x3439
{
	return (Global_19AC3 && iParam0) != 0;
}

int func_84()//Position - 0x344A
{
	func_85();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_85()//Position - 0x3463
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_87(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_86(AUDIO::_0x0626A247D2405330());
			if (func_72(iVar0) && (!func_53(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_72(Global_19E56.f_933.f_21B.f_10CD))
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

int func_86(int iParam0)//Position - 0x3560
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)//Position - 0x359D
{
	if (func_72(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_88()//Position - 0x35C7
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_91(CAM::_0xDC9DA9E8789F5246());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				}
				break;
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("PS_UPDATE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_65);
		HUD::_SET_NOTIFICATION_MESSAGE_2(func_90(iLocal_63), func_89(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = MISC::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_84 = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_89(int iParam0)//Position - 0x368B
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return 4294967295;
}

char* func_90(int iParam0)//Position - 0x370A
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_91(int iParam0)//Position - 0x3794
{
	int iVar0;
	
	iVar0 = func_94(iParam0);
	if (iVar0 == 4294967295)
	{
		func_92(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_92(int iParam0, bool bParam1)//Position - 0x37CA
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_94(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_150F14)
	{
		if (iParam0 == Global_150F14.f_1)
		{
			return;
		}
	}
	if (func_93(iParam0))
	{
		return;
	}
	if (Global_150F3A >= 32)
	{
		return;
	}
	Global_150F19[Global_150F3A] = iParam0;
	Global_150F3A++;
	if (bParam1)
	{
	}
}

int func_93(int iParam0)//Position - 0x3836
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F3A)
	{
		if (Global_150F19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x3868
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_150F12 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F12)
	{
		if (Global_150E71[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_150E71[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_95(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_95(int iParam0)//Position - 0x38E7
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_150F12)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_150E71[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_150E71[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_150E71[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_150F12)
	{
		Global_150E71[iVar2 /*5*/] = { Global_150E71[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_96(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_96(var uParam0)//Position - 0x399C
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

void func_97()//Position - 0x39C9
{
	float fVar0;
	int iVar1;
	
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_101(CAM::_0xDC9DA9E8789F5246()))
		{
			return;
		}
		if (func_100() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_100() == 0)
		{
			iLocal_53 = 2;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_99())
	{
		func_98();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_57 = HUD::_0x13C4B962653A5280();
	}
	iLocal_72 = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_73 = HUD::_0x13C4B962653A5280();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_80() /*12745*/].f_1FF2.f_4F9, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_69(192, 4294967295, 0)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_68(iVar1, 0, 100);
			func_79(3, 2, iVar1);
			MISC::SET_BIT(&(Global_200000[func_80() /*12745*/].f_1FF2.f_4F9), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_98()//Position - 0x3AB3
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_70(3, iVar0, &uVar1, &iVar2);
				func_54(iVar2, func_52(3, iVar0, 4294967295), 4294967295, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, 4294967295, 1);
		Global_161F1 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_70(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, func_52(iVar3, iVar4, 4294967295), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_19E56.f_933.f_21B.f_93F[0] = func_52(0, 0, 4294967295);
		Global_19E56.f_933.f_21B.f_93F[1] = func_52(1, 0, 4294967295);
		Global_19E56.f_933.f_21B.f_93F[2] = func_52(2, 0, 4294967295);
		Global_19E56.f_933.f_21B.f_91E = 1;
		Global_161F1 = 1;
	}
}

int func_99()//Position - 0x3BA7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_19E56.f_933.f_21B.f_91E;
}

int func_100()//Position - 0x3BCA
{
	return Global_6373;
}

int func_101(int iParam0)//Position - 0x3BD5
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_1, iParam0);
	}
	return 1;
}

void func_102()//Position - 0x3BFA
{
	if (iLocal_54 != 0 && iLocal_53 != 3)
	{
		if (iLocal_53 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_53 = 3;
			}
			if (!func_99())
			{
				iLocal_53 = 3;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_101(CAM::_0xDC9DA9E8789F5246())) || func_100() != 0)
			{
				iLocal_53 = 3;
			}
		}
		if (iLocal_53 == 3)
		{
			iLocal_54 = 2;
		}
	}
}

