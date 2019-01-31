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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_45(Global_389E, "SET_DATA_SLOT_EMPTY", 13f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_44();
	if (Global_387A == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_C74[Global_38B1 /*2811*/][2 /*281*/].f_103 = Global_19E56.f_36C7[Global_38B1 /*20*/].f_6;
	Global_C74[Global_38B1 /*2811*/][4 /*281*/].f_103 = Global_19E56.f_36C7[Global_38B1 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_11625)
		{
			Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_103 = func_43(1198, 4294967295, 0);
			Global_C74[Global_38B1 /*2811*/][2 /*281*/].f_103 = func_43(2028, 4294967295, 0);
			Global_C74[Global_38B1 /*2811*/][4 /*281*/].f_103 = func_43(2027, 4294967295, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_36C7[Global_38B1 /*20*/].f_B), &(Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_90[iVar0 /*6*/])))
		{
			Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_103 = iVar0;
		}
		iVar0++;
	}
	if (Global_11625)
	{
		Global_19E56.f_36C7[3 /*20*/].f_A = func_43(1197, 4294967295, 0);
	}
	Global_C74[Global_38B1 /*2811*/][3 /*281*/].f_103 = Global_19E56.f_36C7[Global_38B1 /*20*/].f_A;
	func_42();
	if (Global_11625)
	{
		Global_C74[3 /*2811*/][0 /*281*/] = 190;
		Global_C74[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_C74[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_C74[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_C74[3 /*2811*/][0 /*281*/].f_118 = 1;
		StringCopy(&(Global_C74[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_C74[3 /*2811*/][0 /*281*/].f_7C[0] = 1;
		Global_C74[3 /*2811*/][0 /*281*/].f_54[0] = 170;
		Global_C74[3 /*2811*/][0 /*281*/].f_68[0] = 19;
		StringCopy(&(Global_C74[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_C74[3 /*2811*/][0 /*281*/].f_7C[1] = 1;
		Global_C74[3 /*2811*/][0 /*281*/].f_54[1] = 175;
		Global_C74[3 /*2811*/][0 /*281*/].f_68[1] = 19;
		StringCopy(&(Global_C74[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_C74[3 /*2811*/][0 /*281*/].f_7C[2] = 0;
		Global_C74[3 /*2811*/][0 /*281*/].f_54[2] = 190;
		Global_C74[3 /*2811*/][0 /*281*/].f_68[2] = 26;
		if (func_43(2090, 4294967295, 0) == 0)
		{
			Global_C74[3 /*2811*/][0 /*281*/].f_103 = 0;
		}
		else
		{
			Global_C74[3 /*2811*/][0 /*281*/].f_103 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_30)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_38B1.f_1 != 9)
		{
			switch (Global_38B1.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							SYSTEM::SETTIMERB(0);
							Global_19E56.f_36C7.f_52 = 1;
							iLocal_37 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_37 = 0;
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_3891, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
							{
								AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
							}
							iLocal_33 = 0;
							func_9();
							Global_389B = 1;
							func_45(Global_389E, "SET_DATA_SLOT_EMPTY", 13f, 3212836864, 3212836864, 3212836864, 3212836864);
							func_33();
							if (Global_38B1.f_1 > 3)
							{
								Global_38B1.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_38B3 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x44E
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x491
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
	}
	if (bLocal_36)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	if (Global_19E56.f_36C7.f_53 == 0 || Global_19E56.f_36C7.f_52 == 0)
	{
		func_3();
	}
	MISC::SET_GAME_PAUSED(0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_3()//Position - 0x4F4
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

int func_4(int iParam0)//Position - 0x571
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x593
{
	return func_6(iParam0, Global_8D15);
}

int func_6(int iParam0, int iParam1)//Position - 0x5A4
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

void func_7()//Position - 0x785
{
	func_44();
	Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_7C[2] = 1;
}

int func_8()//Position - 0x7A4
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x7CD
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x7EE
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

void func_11()//Position - 0x860
{
	int iVar0;
	
	iLocal_34 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_PAD_SHAKE(0, 100, 100);
	}
}

void func_12()//Position - 0x895
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = MISC::GET_GAME_TIMER();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_3899, 0) || func_10(2, Global_389A, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_30 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
			uLocal_21 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_27 = iLocal_18[GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_21)];
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(AUDIO::_0x0626A247D2405330());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(AUDIO::_0x0626A247D2405330()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_90[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_90[iLocal_27 /*6*/]), AUDIO::_0x0626A247D2405330(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_389B == 0)
	{
		if (func_10(2, Global_3892, 0))
		{
			func_23();
			Global_389B = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
			uLocal_21 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_26 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103;
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_6 = Global_C74[Global_38B1 /*2811*/][2 /*281*/].f_104[iVar0];
				func_45(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_11625)
				{
					Global_4121FE = Global_C74[3 /*2811*/][2 /*281*/].f_103;
					func_20(2028, Global_C74[3 /*2811*/][2 /*281*/].f_103, 4294967295, 1, 0);
					func_45(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_4121FE), 3212836864, 3212836864, 3212836864, 3212836864);
				}
				else
				{
					func_45(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				}
				func_19();
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_389E, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 3212836864, 3212836864, 3212836864);
			}
			if (iLocal_23 == 4)
			{
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_9 = Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_11625)
				{
					Global_4121FF = Global_C74[3 /*2811*/][4 /*281*/].f_103;
					func_20(2027, Global_C74[3 /*2811*/][4 /*281*/].f_103, 4294967295, 1, 0);
					if (Global_4121FF == 0)
					{
						Var2 = { func_17(CAM::_0xDC9DA9E8789F5246()) };
						iVar3 = 0;
						if (NETWORK::_0x72D918C99BCACC54(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2) && NETWORK::_0x72D918C99BCACC54(0)) && Global_412202 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
						}
						else
						{
							func_45(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), 3212836864, 3212836864, 3212836864, 3212836864);
						}
					}
					else
					{
						func_45(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4121FF), 3212836864, 3212836864, 3212836864, 3212836864);
					}
				}
				else
				{
					func_45(Global_389E, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_9), 3212836864, 3212836864, 3212836864, 3212836864);
				}
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_389E, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 3212836864, 3212836864, 3212836864);
			}
			if (iLocal_23 == 1)
			{
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_B = { Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_90[Global_C74[Global_38B1 /*2811*/][1 /*281*/].f_103 /*6*/] };
				if (Global_11625)
				{
					func_20(1198, Global_C74[3 /*2811*/][1 /*281*/].f_103, 4294967295, 1, 0);
				}
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_389E, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 3212836864, 3212836864, 3212836864);
			}
			if (iLocal_23 == 3)
			{
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_A = Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_11625)
				{
					func_20(1197, Global_19E56.f_36C7[3 /*20*/].f_A, 4294967295, 1, 0);
				}
				if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_A == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_11625 == 1)
				{
					Global_C74[3 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_45(Global_389E, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 3212836864, 3212836864, 3212836864);
					func_20(2090, Global_C74[3 /*2811*/][iLocal_23 /*281*/].f_103, 4294967295, 1, 0);
				}
				else
				{
					Global_C74[0 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_C74[1 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_C74[2 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
					{
						if (Global_8D15 == 15)
						{
							if (Global_19E56.f_36C7.f_52 == 0)
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_45(Global_389E, "SET_SLEEP_MODE", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
								MISC::SET_BIT(&Global_94F, 25);
								MISC::SET_BIT(&Global_950, 11);
								if (Global_19E56.f_36C7.f_53 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
									func_15("CELL_7051", 4294967295);
									Global_19E56.f_36C7.f_53 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_389E, "SET_SLEEP_MODE", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 25);
						MISC::SET_BIT(&Global_950, 11);
					}
				}
			}
			func_13(Global_389E, "SET_HEADER", &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1152
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_14(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_14(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_14(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_14(sParam6);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_14(char* sParam0)//Position - 0x11AD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_15(char* sParam0, int iParam1)//Position - 0x11BF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_16(char* sParam0)//Position - 0x11D6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

struct<13> func_17(int iParam0)//Position - 0x11EC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1203
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
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_14(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_14(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_14(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_14(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_19()//Position - 0x12B6
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

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x152D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)//Position - 0x155D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_22();
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

var func_22()//Position - 0x1591
{
	return Global_1407E0;
}

void func_23()//Position - 0x159D
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_24();
	}
}

void func_24()//Position - 0x15C2
{
	if (func_25())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_25()//Position - 0x15D6
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

void func_26()//Position - 0x161D
{
	if (Global_389B == 0)
	{
		if (func_10(2, Global_3892, 0))
		{
			func_23();
			Global_389B = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
			uLocal_21 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_24 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_11625 == 0)
					{
						if (Global_8D15 == 15)
						{
							if (Global_19E56.f_36C7.f_52 == 0)
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_38B1.f_1 > 3)
			{
				Global_38B1.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_27()//Position - 0x16EF
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_45(Global_389E, "SET_DATA_SLOT_EMPTY", 22f, 3212836864, 3212836864, 3212836864, 3212836864);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_11625)
	{
		StringCopy(&(Global_C74[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(CAM::_0xDC9DA9E8789F5246()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
		{
			StringCopy(&(Global_C74[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_54[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7C[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_54[iVar3] < Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_54[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_68[iVar4]), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_11625 == 1)
			{
				func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7C[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_389E, "DISPLAY_VIEW", 22f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_13(Global_389E, "SET_HEADER", &(Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_7[Global_C74[Global_38B1 /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
	if (Global_38A5)
	{
		func_18(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
}

void func_28()//Position - 0x1A34
{
	if (iLocal_42)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_3899, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_389A, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_29()//Position - 0x1AE1
{
	func_45(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_30();
}

void func_30()//Position - 0x1B1E
{
	if (func_25())
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

void func_31()//Position - 0x1B41
{
	func_45(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_32();
}

void func_32()//Position - 0x1B7E
{
	if (func_25())
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

void func_33()//Position - 0x1BA1
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_C74[Global_38B1 /*2811*/][3 /*281*/].f_118 = 0;
		}
		else
		{
			Global_C74[Global_38B1 /*2811*/][3 /*281*/].f_118 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_C74[Global_38B1 /*2811*/][iVar2 /*281*/].f_118 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_C74[Global_38B1 /*2811*/][iVar2 /*281*/] < Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/])
					{
						if (Global_11625)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_41(iVar2, iVar3);
							func_18(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C74[Global_38B1 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_C74[Global_38B1 /*2811*/][iVar1 /*281*/].f_118 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_389E, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_24), 3212836864, 3212836864, 3212836864);
	func_13(Global_389E, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_38A5)
	{
		func_18(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
}

int func_34()//Position - 0x1E6D
{
	if (Global_11625)
	{
		Global_38B1 = 3;
	}
	else
	{
		Global_38B1 = func_35();
	}
	if (Global_38B1 > 3)
	{
		Global_38B1 = 3;
	}
	return Global_19E56.f_36C7[Global_38B1 /*20*/].f_7;
}

var func_35()//Position - 0x1EA3
{
	func_36();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_36()//Position - 0x1EBC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_40(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_39(AUDIO::_0x0626A247D2405330());
			if (func_38(iVar0) && (!func_37(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_38(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_37(int iParam0)//Position - 0x1FB9
{
	return Global_8D15 == iParam0;
}

bool func_38(int iParam0)//Position - 0x1FC7
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x1FD3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x2010
{
	if (func_38(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)//Position - 0x203A
{
	switch (iParam0)
	{
		case 0:
			if (Global_11625)
			{
				iLocal_29 = 19;
			}
			else if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_C74[Global_38B1 /*2811*/][3 /*281*/].f_103 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_C74[Global_38B1 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()//Position - 0x20BC
{
	if (Global_8D15 != 15)
	{
		func_44();
		Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_7C[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x20E3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_21(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_44()//Position - 0x2115
{
	if (func_37(14))
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
		Global_38B1 = func_35();
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x21B7
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

