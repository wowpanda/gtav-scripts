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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	struct<16> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_62[59];
	struct<16> Local_417[59];
	int iLocal_1362 = 0;
	vector3 vLocal_1363 = { 0f, 0f, 0f };
	vector3 vLocal_1366 = { 0f, 0f, 0f };
	var uLocal_1369 = 0;
	int iLocal_1370 = 0;
	bool bLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	struct<314> Local_1374 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_56();
	}
	func_55();
	Global_16932 = 0;
	Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
	Global_14724 = 0;
	func_54();
	func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_48();
	func_46();
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 7;
	}
	iLocal_43 = GET_GAME_TIMER();
	Global_14557 = 0;
	GET_MOBILE_PHONE_POSITION(&vLocal_1366);
	vLocal_1363 = { vLocal_1366 };
	vLocal_1363.x = (vLocal_1363.x - 10f);
	vLocal_1363.y = (vLocal_1363.y + 20f);
	Global_16899 = 0;
	Global_16900 = 1;
	while (true)
	{
		WAIT(0);
		if (Global_16900 == 0 && Global_16899 == 1)
		{
			func_45();
		}
		if (Global_16900 == 1 && Global_16899 == 0)
		{
			func_40();
		}
		if (iLocal_42 == 0)
		{
			iLocal_44 = GET_GAME_TIMER();
			if ((iLocal_44 - iLocal_43) > 500)
			{
				iLocal_42 = 1;
			}
		}
		if ((Global_14553.f_1 != 9 && Global_16900 == 0) && Global_16899 == 0)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (Global_16932 == 0)
					{
						if (Global_2538128 == 0)
						{
							func_39();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16932 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16932 == 0)
			{
				if (func_4())
				{
					Global_16899 = 1;
				}
			}
			else if (func_3(2, Global_14521, 0) || IS_BIT_SET(Global_2424, 12))
			{
				if (ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					WAIT(0);
					CLEAR_BIT(&Global_2424, 12);
					func_2();
					Global_14531 = 1;
					Global_16932 = 0;
					if (Global_14553.f_1 > 3)
					{
						Global_14553.f_1 = 7;
					}
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_56();
					}
					func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_48();
					func_46();
					if (Global_4268043[iLocal_36 /*104*/].f_29 > 0)
					{
						if (Global_4268043[iLocal_36 /*104*/].f_31 == 1)
						{
							Global_4268043[iLocal_36 /*104*/].f_29 = 4;
							Global_4268043[iLocal_36 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4268043[iLocal_36 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		if (func_1())
		{
			func_56();
		}
	}
}

int func_1()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (IS_PC_VERSION())
		{
			if (UPDATE_ONSCREEN_KEYBOARD() == 0 || (_NETWORK_IS_TEXT_CHAT_ACTIVE() && _IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (IS_PAUSE_MENU_ACTIVE() || IS_WARNING_MESSAGE_ACTIVE())
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

int func_4()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_39)
	{
		if (TIMERA() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_14529, 0))
		{
			func_9();
			iLocal_39 = 1;
			SETTIMERA(0);
		}
		if (func_3(2, Global_14530, 0))
		{
			func_6();
			iLocal_39 = 1;
			SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_53(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(2);
		}
		else
		{
			_MOVE_FINGER(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_53(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(1);
		}
		else
		{
			_MOVE_FINGER(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4268043[iLocal_36 /*104*/].f_24 == 1)
	{
		if (Global_14531 == 0)
		{
			if (IS_CONTROL_PRESSED(2, Global_14524))
			{
				func_2();
				Global_14531 = 1;
				func_26();
				if (Global_4268043[iLocal_36 /*104*/].f_27 == 1)
				{
					Global_4268043[iLocal_36 /*104*/].f_99[0] = 0;
					Global_4268043[iLocal_36 /*104*/].f_99[1] = 0;
					Global_4268043[iLocal_36 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4268043[iLocal_36 /*104*/].f_99[Global_14553] = 0;
				}
				if (func_25(iLocal_36))
				{
				}
				else
				{
					Global_4268043[iLocal_36 /*104*/].f_24 = 0;
					Global_4268043[iLocal_36 /*104*/].f_28 = 0;
				}
				_REMOVE_NOTIFICATION(Global_4268043[iLocal_36 /*104*/].f_16);
				func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				if (iLocal_34 > 0)
				{
					iLocal_34 = (iLocal_34 - 1);
				}
				func_46();
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
					Global_16932 = 0;
				}
			}
		}
	}
	else if (Global_14531 == 0)
	{
		if (IS_CONTROL_PRESSED(2, Global_14525))
		{
			if (iLocal_38 == 1)
			{
				if (Global_14553.f_1 > 3)
				{
					StringCopy(&Global_68791, _GET_LABEL_TEXT(&Global_16907), 64);
					if (ARE_STRINGS_EQUAL(&Global_68791, "HARDCODED_4207156"))
					{
						Global_14553.f_1 = 3;
						Global_1688035 = 1;
					}
					else
					{
						Global_68920 = 7;
						SET_BIT(&Global_2424, 10);
						Global_14553.f_1 = 6;
					}
				}
				func_56();
			}
		}
	}
	if (Global_4268043[iLocal_36 /*104*/].f_31 == 1)
	{
		if (Global_14531 == 0)
		{
			if (func_3(2, Global_14525, 0))
			{
				func_23();
				Global_14531 = 1;
				Global_4268043[iLocal_36 /*104*/].f_29 = 2;
				Global_4268043[iLocal_36 /*104*/].f_24 = 1;
				Global_4268043[iLocal_36 /*104*/].f_31 = 0;
				CLEAR_BIT(&Global_2423, 17);
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
		}
	}
	if (Global_14531 == 0 && iLocal_42 == 1)
	{
		if (func_3(2, Global_14522, 0))
		{
			Global_14531 = 1;
			if (Global_4268043[iLocal_36 /*104*/].f_29 > 0)
			{
				func_23();
				Global_4268043[iLocal_36 /*104*/].f_29 = 3;
				Global_4268043[iLocal_36 /*104*/].f_24 = 1;
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
			else if (Global_4268043[iLocal_36 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1738 = 144;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14551 = START_NEW_SCRIPT("appContacts", 4000);
				SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1738 = Global_4268043[iLocal_36 /*104*/].f_17;
				if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_211", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_13();
				func_56();
			}
		}
	}
}

void func_13()
{
	vector3 vVar0[24];
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		WAIT(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_3028);
			if (Global_3028 == 1)
			{
				func_53(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_53(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_53(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_16();
				func_53(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_53(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_53(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_53(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &cVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_53(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_2423, 20))
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char[4] cParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_16()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											uVar6 = Global_37589;
											break;
										
										case 1:
											uVar6 = Global_37590;
											break;
										
										case 2:
											uVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(uVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2429);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (IS_BIT_SET(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && ARE_STRINGS_EQUAL(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && IS_BIT_SET(Global_2424, 6))
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_15(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_18(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam7))
	{
		func_15(cParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam8))
	{
		func_15(cParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam9))
	{
		func_15(cParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam10))
	{
		func_15(cParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam11))
	{
		func_15(cParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_20(char* sParam0)
{
	REQUEST_SCRIPT(sParam0);
	while (!HAS_SCRIPT_LOADED(sParam0))
	{
		WAIT(0);
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (func_22() && IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = GET_PED_PROP_INDEX(PLAYER_PED_ID(), 0);
			if (Global_71590)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || IS_PED_WEARING_HELMET(PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (IS_PED_WEARING_HELMET(PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14496)
			{
				if (Global_1738 != 128)
				{
					if (iVar0 == 0)
					{
						if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_71590)
								{
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 244, 0);
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 243, 0);
									SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 242, 0);
								}
								SET_BIT(&Global_2423, 11);
								TASK_USE_MOBILE_PHONE(PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()
{
	var uVar0;
	int iVar1;
	
	uVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		_MOVE_FINGER(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_27();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_31(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_18(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_29(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14531 == 0)
	{
		if ((func_3(2, Global_14522, 0) || Global_4269293 == 1) || Global_16926 == 1)
		{
			if (Global_4269293 == 0 && Global_16926 == 0)
			{
				func_23();
			}
			Global_14531 = 1;
			iLocal_42 = 0;
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			iLocal_36 = iLocal_19[iLocal_34];
			if (iLocal_34 == iLocal_33 || iLocal_34 > iLocal_33)
			{
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 8;
					Global_16932 = 1;
					iLocal_35 = iLocal_34;
					_0x4737980E8A283806(iLocal_19[iLocal_34], &Local_1374);
				}
				SETTIMERB(0);
				iLocal_40 = 0;
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
				uLocal_45 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
				while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_45) && iLocal_40 == 0)
				{
					WAIT(0);
					if (TIMERB() > 2000)
					{
						iLocal_40 = 1;
					}
				}
				func_37();
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_15("CELL_1");
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(GET_PLAYER_NAME(PLAYER_ID()));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[0 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[1 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[2 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[3 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[4 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[5 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[6 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[7 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[8 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_56[9 /*16*/]));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				switch (Local_1374.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Dock_Tease");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 3:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Warstock");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 4:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Legendary_Motorsport");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 5:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_LS_Customs");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 6:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Elitas_Travel");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 7:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_LS_Tourist_Info");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 8:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_dynasty8");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 9:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_bennys");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 10:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_ammunation");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 11:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_SSSA");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 12:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_maze_bank");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 13:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_shark");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
					
					case 14:
						_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_RP");
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
						break;
				}
				END_SCALEFORM_MOVIE_METHOD();
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_14534, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_34 == iLocal_33)
				{
					if (IS_BIT_SET(Global_4269308, 25))
					{
						CLEAR_BIT(&Global_4269308, 25);
					}
					if (Global_4268042 > 0)
					{
						func_34(8920, uLocal_1369, -1, 1, 0);
						if (Global_4268042 > 0)
						{
							Global_4268042 = 0;
						}
					}
				}
				return;
			}
			if (Global_4268043[iLocal_36 /*104*/].f_24 != 0)
			{
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 8;
				}
				if (Global_4269293 == 1 || Global_16926 == 1)
				{
					iLocal_36 = iLocal_19[0];
					iLocal_35 = 0;
					if (Global_4269293 == 1)
					{
					}
					Global_16926 = 0;
				}
				else
				{
					SETTIMERB(0);
					iLocal_40 = 0;
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
					uLocal_45 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
					while (!IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_45) && iLocal_40 == 0)
					{
						WAIT(0);
						if (TIMERB() > 2000)
						{
							iLocal_40 = 1;
						}
					}
					if (iLocal_40 == 1)
					{
						iLocal_41 = 0;
					}
					else
					{
						iLocal_41 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_45);
					}
					if (iLocal_41 < 0)
					{
						iLocal_41 = 0;
					}
					iLocal_36 = iLocal_19[iLocal_34];
					iLocal_35 = iLocal_34;
				}
				Global_4268043[iLocal_36 /*104*/].f_28 = 1;
				iLocal_38 = 0;
				StringCopy(&Global_16907, "NO_HYPERLINK", 64);
				Var0 = { Global_4268043[iLocal_36 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_16907 = { Var0 };
					iLocal_38 = 1;
					if (Global_14541)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					SET_BIT(&Global_2423, 17);
					Global_4268043[iLocal_36 /*104*/].f_26 = 1;
					Global_4268043[iLocal_36 /*104*/].f_24 = 2;
				}
				if (Global_4268043[iLocal_36 /*104*/].f_26 == 0)
				{
					Global_4268043[iLocal_36 /*104*/].f_24 = 1;
				}
				func_37();
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_15("CELL_1");
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(GET_PLAYER_NAME(PLAYER_ID()));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 145)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_50));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_28044[Global_4268043[iLocal_36 /*104*/].f_17 /*29*/].f_3));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_4268043[iLocal_36 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_4268043[iLocal_36 /*104*/]));
						break;
					
					case 1:
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268043[iLocal_36 /*104*/]));
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_33));
						if (Global_4268043[iLocal_36 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_67), "NULL"))
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268043[iLocal_36 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (DOES_TEXT_LABEL_EXIST(&(Global_4268043[iLocal_36 /*104*/].f_67)))
							{
								ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[iLocal_36 /*104*/].f_67));
							}
							else
							{
								ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_67));
							}
							if (DOES_TEXT_LABEL_EXIST(&(Global_4268043[iLocal_36 /*104*/].f_83)))
							{
								ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[iLocal_36 /*104*/].f_83));
							}
							else
							{
								ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_83));
							}
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268043[iLocal_36 /*104*/]));
						ADD_TEXT_COMPONENT_INTEGER(Global_4268043[iLocal_36 /*104*/].f_49);
						END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268043[iLocal_36 /*104*/]));
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_33));
						ADD_TEXT_COMPONENT_INTEGER(Global_4268043[iLocal_36 /*104*/].f_49);
						if (Global_4268043[iLocal_36 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_67), "NULL"))
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_67));
						}
						if ((Global_4268043[iLocal_36 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/].f_83), "NULL"))
						{
							if (DOES_TEXT_LABEL_EXIST(&(Global_4268043[iLocal_36 /*104*/].f_67)))
							{
								ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[iLocal_36 /*104*/].f_67));
							}
							else
							{
								ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_67));
							}
							if (DOES_TEXT_LABEL_EXIST(&(Global_4268043[iLocal_36 /*104*/].f_83)))
							{
								ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268043[iLocal_36 /*104*/].f_83));
							}
							else
							{
								ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_83));
							}
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_33(iLocal_36);
						break;
					
					case 5:
						func_33(iLocal_36);
						break;
					
					case 6:
						func_33(iLocal_36);
						break;
					
					case 7:
						func_33(iLocal_36);
						break;
					
					case 8:
						func_33(iLocal_36);
						break;
					
					case 9:
						func_33(iLocal_36);
						break;
					
					case 10:
						func_33(iLocal_36);
						break;
					
					case 11:
						func_33(iLocal_36);
						break;
				}
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 145)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iLocal_36 /*104*/].f_50));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_15(&(Global_106565.f_28044[Global_4268043[iLocal_36 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 149)
				{
					_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_maze_bank");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 140)
				{
					_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Warstock");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 155)
				{
					_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_arena");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (Global_4268043[iLocal_36 /*104*/].f_17 == 160)
				{
					_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_diamond");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				END_SCALEFORM_MOVIE_METHOD();
				Global_16932 = 1;
				func_53(Global_14534, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				_REMOVE_NOTIFICATION(Global_4268043[iLocal_36 /*104*/].f_16);
				if (Global_4268043[iLocal_36 /*104*/].f_29 > 0)
				{
					if (Global_14541)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4268043[iLocal_36 /*104*/].f_30 == 1)
				{
					if (Global_14541)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268043[iLocal_36 /*104*/].f_29 > 0)
				{
					if (ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/]), "CELL_FINV"))
					{
						if (Global_14541)
						{
							func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14541)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4268043[iLocal_36 /*104*/].f_24 == 2)
				{
					if (Global_4268043[iLocal_36 /*104*/].f_31 == 1)
					{
						iLocal_38 = 0;
						if (Global_14541)
						{
							func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						SET_BIT(&Global_2423, 17);
					}
					else if (iLocal_38 == 0)
					{
						func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						CLEAR_BIT(&Global_2423, 17);
					}
				}
				else if (Global_14541)
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					SET_BIT(&Global_2423, 17);
				}
				else
				{
					func_19(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					SET_BIT(&Global_2423, 17);
				}
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_4269293 = 0;
			}
			else
			{
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_4269293 = 0;
			}
		}
		if (Global_2538128 == 0)
		{
			if (Global_71590)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		case 1:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106565.f_14135[iParam0 /*104*/]));
	while (iVar0 < Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		switch (Global_106565.f_14135[iParam0 /*104*/].f_32)
		{
			case 4:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2528542.f_1653[iVar0 /*4*/]));
				break;
			
			case 5:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657086[iVar0 /*4*/]));
				break;
			
			case 6:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657127[iVar0 /*4*/]));
				break;
			
			case 7:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657148[iVar0 /*4*/]));
				break;
			
			case 8:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657165[iVar0 /*4*/]));
				break;
			
			case 9:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657178[iVar0 /*4*/]));
				break;
			
			case 10:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657191[iVar0 /*4*/]));
				break;
			
			case 11:
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1657204[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312745;
}

void func_37()
{
	int iVar0;
	
	if (iLocal_1362)
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_46);
	}
	iLocal_1362 = 0;
	if (Global_4268043[iLocal_36 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (ARE_STRINGS_EQUAL(&(Global_4268043[iLocal_36 /*104*/]), &(Local_62[iVar0 /*6*/])))
			{
				if (func_38(&(Local_62[iVar0 /*6*/])))
				{
					StringCopy(&Local_46, "BAT_CASE_", 64);
					StringIntConCat(&Local_46, Global_1688029, 64);
				}
				else
				{
					Local_46 = { Local_417[iVar0 /*16*/] };
				}
				iLocal_1362 = 1;
				REQUEST_STREAMED_TEXTURE_DICT(&Local_46, 0);
				while (!HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_46))
				{
					WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_38(var uParam0)
{
	switch (GET_HASH_KEY(uParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_39()
{
	if (iLocal_39)
	{
		if (TIMERA() > 50)
		{
			iLocal_39 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
		}
	}
	if (iLocal_39 == 0)
	{
		if (func_3(2, Global_14529, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
				func_9();
			}
			iLocal_39 = 1;
			SETTIMERA(0);
		}
		if (func_3(2, Global_14530, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_32)
			{
				iLocal_34 = 0;
			}
			func_6();
			iLocal_39 = 1;
			SETTIMERA(0);
		}
	}
}

void func_40()
{
	float fVar0;
	
	fVar0 = func_41(vLocal_1366, vLocal_1363, Global_14513, -90f, 0f, 90f, 350f, 0);
	SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16900 = 0;
		iLocal_18 = 0;
	}
}

float func_41(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269587 == 0)
	{
		if (IS_BIT_SET(Global_2423, 14) && Global_14553.f_1 < 4)
		{
			GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14506[Global_14498 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269587 = 1;
			}
		}
	}
	if (func_44() && Global_4269587 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GET_GAME_TIMER();
	}
	fVar3 = func_43((TO_FLOAT((GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SIN((fVar3 * 90f));
		}
		Global_14481 = { func_42(vParam0, vParam3, fVar4) };
		Global_14484 = { func_42(vParam6, vParam9, fVar4) };
	}
	else
	{
		Global_14481 = { vParam3 };
		Global_14484 = { vParam9 };
	}
	SET_MOBILE_PHONE_POSITION(Global_14481);
	SET_MOBILE_PHONE_ROTATION(Global_14484, 0);
	return fVar3;
}

Vector3 func_42(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_43(float fParam0, float fParam1, float fParam2)
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

int func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (!_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (IS_ENTITY_IN_WATER(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((IS_PED_SWIMMING(PLAYER_PED_ID()) || IS_PED_SWIMMING_UNDER_WATER(PLAYER_PED_ID())) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_HANGING_ON_TO_VEHICLE(PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				uVar3 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
				if ((((((((IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(uVar3)) || IS_THIS_MODEL_A_BICYCLE(GET_ENTITY_MODEL(uVar3))) || IS_THIS_MODEL_A_QUADBIKE(GET_ENTITY_MODEL(uVar3))) || GET_ENTITY_MODEL(uVar3) == joaat("seashark")) || GET_ENTITY_MODEL(uVar3) == joaat("seashark2")) || GET_ENTITY_MODEL(uVar3) == joaat("rhino")) || GET_ENTITY_MODEL(uVar3) == joaat("submersible")) || GET_ENTITY_MODEL(uVar3) == joaat("submersible2")) || GET_ENTITY_MODEL(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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

void func_45()
{
	float fVar0;
	
	fVar0 = func_41(vLocal_1363, vLocal_1366, -90f, 0f, 90f, Global_14513, 350f, 0);
	SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16899 = 0;
		func_56();
		iLocal_18 = 0;
	}
}

void func_46()
{
	if (Global_4269293 == 0)
	{
		if (iLocal_35 < 0)
		{
			iLocal_35 = 0;
		}
		func_47(Global_14534, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_53(Global_14534, "DISPLAY_VIEW", 8f, TO_FLOAT(iLocal_35), -1082130432, -1082130432, -1082130432);
		if (Global_14541)
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_32 > 0)
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_71590)
		{
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_19(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
	}
	else
	{
		iLocal_35 = 0;
	}
}

void func_47(var uParam0, char* sParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_15(cParam2);
	if (!IS_STRING_NULL_OR_EMPTY(cParam3))
	{
		func_15(cParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam4))
	{
		func_15(cParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam5))
	{
		func_15(cParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(cParam6))
	{
		func_15(cParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_48()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	char cVar17[64];
	int iVar33;
	int iVar34[10];
	int iVar45;
	
	iLocal_32 = 0;
	iLocal_33 = 0;
	func_26();
	iVar13 = 0;
	iVar14 = 0;
	while (iVar13 < 11)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		iVar15 = 0;
		iVar16 = 11;
		Global_4268043[iVar16 /*104*/].f_18 = -1;
		Global_4268043[iVar16 /*104*/].f_18.f_1 = 0;
		Global_4268043[iVar16 /*104*/].f_18.f_2 = 0;
		Global_4268043[iVar16 /*104*/].f_18.f_3 = 0;
		Global_4268043[iVar16 /*104*/].f_18.f_5 = 0;
		while (iVar15 < 12)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_56();
			}
			if (iVar0[iVar15] == 0)
			{
				if (Global_4268043[iVar15 /*104*/].f_24 != 0)
				{
					if (Global_4268043[iVar15 /*104*/].f_99[Global_14553] == 1)
					{
						if (func_52(Global_4268043[iVar15 /*104*/].f_18, Global_4268043[iVar16 /*104*/].f_18))
						{
							iVar16 = iVar15;
							if (Global_4268043[iVar16 /*104*/].f_28 == 0)
							{
								iLocal_37 = 0;
							}
							else
							{
								iLocal_37 = 1;
							}
						}
					}
				}
			}
			iVar15++;
		}
		iLocal_19[iVar13] = iVar16;
		iVar0[iVar16] = 1;
		if (Global_4268043[iVar16 /*104*/].f_24 != 0)
		{
			if (Global_4268043[iVar16 /*104*/].f_99[Global_14553] == 1)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_37);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				if (Global_4268043[iVar16 /*104*/].f_17 == 145)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268043[iVar16 /*104*/].f_50));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_15(&(Global_106565.f_28044[Global_4268043[iVar16 /*104*/].f_17 /*29*/].f_3));
				}
				cVar17 = { Global_4268043[iVar16 /*104*/] };
				if (func_38(&(Global_4268043[iVar16 /*104*/])))
				{
					iVar33 = func_49(7315, -1, -1);
					switch (iVar33)
					{
						case 0:
							StringCopy(&cVar17, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&cVar17, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&cVar17, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&cVar17, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&cVar17, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&cVar17, "_SUB", 64);
				}
				func_15(&cVar17);
				END_SCALEFORM_MOVIE_METHOD();
				iLocal_32++;
				iLocal_33++;
			}
		}
		iVar13++;
	}
	iVar13 = iLocal_32;
	iVar45 = 0;
	while (iVar13 < (iLocal_1373 + iLocal_32))
	{
		iVar14 = 0;
		iVar45 = 0;
		while (iVar14 < iLocal_1373 && iVar45 == 0)
		{
			_0x4737980E8A283806(iVar14, &Local_1374);
			if (iVar34[iVar14] == 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				if (iVar13 == 0)
				{
					if (Global_4268042 == 0)
					{
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					}
					else
					{
						SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					}
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_2));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_23[0 /*16*/]));
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_1374.f_23[1 /*16*/]));
				END_TEXT_COMMAND_SCALEFORM_STRING();
				END_SCALEFORM_MOVIE_METHOD();
				iVar34[iVar14] = 1;
				iLocal_19[iVar13] = iVar14;
				iVar45 = 1;
				iLocal_32++;
				if (iVar14 == 0)
				{
					uLocal_1369 = Local_1374.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	uVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

int func_52(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_53(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam2));
	if (fParam3 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(ROUND(fParam6));
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_54()
{
	switch (unk_0x83D607D7994DEF3A())
	{
		case -1:
			_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 0:
			_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 1:
			_0x07DBD622D9533857("gta5mkt_fr");
			break;
		
		case 2:
			_0x07DBD622D9533857("gta5mkt_ge");
			break;
		
		case 3:
			_0x07DBD622D9533857("gta5mkt_it");
			break;
		
		case 4:
			_0x07DBD622D9533857("gta5mkt_sp");
			break;
		
		case 5:
			_0x07DBD622D9533857("gta5mkt_pt");
			break;
		
		case 6:
			_0x07DBD622D9533857("gta5mkt_pl");
			break;
		
		case 7:
			_0x07DBD622D9533857("gta5mkt_ru");
			break;
		
		case 8:
			_0x07DBD622D9533857("gta5mkt_ko");
			break;
		
		case 9:
			_0x07DBD622D9533857("gta5mkt_ch");
			break;
		
		case 10:
			_0x07DBD622D9533857("gta5mkt_ja");
			break;
		
		case 11:
			_0x07DBD622D9533857("gta5mkt_me");
			break;
		
		case 12:
			_0x07DBD622D9533857("gta5mkt_cn");
			break;
	}
	_SC_INBOX_GET_EMAILS(0, 6);
	WAIT(0);
	iLocal_1370 = 1;
	bLocal_1371 = false;
	while (iLocal_1370 && Global_14553.f_1 > 3)
	{
		WAIT(0);
		iLocal_1372 = _0x16DA8172459434AA();
		if (func_4())
		{
			Global_14553.f_1 = 3;
			iLocal_1370 = 0;
			bLocal_1371 = false;
		}
		switch (iLocal_1372)
		{
			case 3:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 0:
				iLocal_1370 = 0;
				bLocal_1371 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
			
			case 2:
				iLocal_1370 = 0;
				bLocal_1371 = false;
				break;
		}
	}
	if (bLocal_1371)
	{
		iLocal_1373 = _0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_1373 = 0;
	}
}

void func_55()
{
	StringCopy(&(Local_62[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_417[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_417[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_417[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_62[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_417[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_62[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_417[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_62[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_417[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_62[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_417[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_417[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_417[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_62[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_417[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_417[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_417[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_62[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_417[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_62[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_417[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_62[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_417[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_62[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_417[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_417[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_417[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_62[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_417[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_62[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_417[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_62[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_417[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_62[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_417[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_62[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_417[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_62[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_417[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_62[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_417[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_62[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_417[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_62[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_417[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_62[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_417[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_62[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_417[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_62[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_417[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_62[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_417[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_62[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_417[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_62[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_417[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_62[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_417[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_62[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_417[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_62[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_417[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_62[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_417[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_62[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_417[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_62[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_417[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_62[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_417[39 /*16*/]), "", 64);
	StringCopy(&(Local_62[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_417[40 /*16*/]), "", 64);
	StringCopy(&(Local_62[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_417[41 /*16*/]), "", 64);
	StringCopy(&(Local_62[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_417[42 /*16*/]), "", 64);
	StringCopy(&(Local_62[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_417[43 /*16*/]), "", 64);
	StringCopy(&(Local_62[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_417[44 /*16*/]), "", 64);
	StringCopy(&(Local_62[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_417[45 /*16*/]), "", 64);
	StringCopy(&(Local_62[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_417[46 /*16*/]), "", 64);
	StringCopy(&(Local_62[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_417[47 /*16*/]), "", 64);
	StringCopy(&(Local_62[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_417[48 /*16*/]), "", 64);
	StringCopy(&(Local_62[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_417[49 /*16*/]), "", 64);
	StringCopy(&(Local_62[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_417[50 /*16*/]), "", 64);
	StringCopy(&(Local_62[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_417[51 /*16*/]), "", 64);
	StringCopy(&(Local_62[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_417[52 /*16*/]), "", 64);
	StringCopy(&(Local_62[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_417[53 /*16*/]), "", 64);
	StringCopy(&(Local_62[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_417[54 /*16*/]), "", 64);
	StringCopy(&(Local_62[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_417[55 /*16*/]), "", 64);
	StringCopy(&(Local_62[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_417[56 /*16*/]), "", 64);
	StringCopy(&(Local_62[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_417[57 /*16*/]), "", 64);
	StringCopy(&(Local_62[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_417[58 /*16*/]), "", 64);
}

void func_56()
{
	if (func_44() == 0)
	{
		SET_MOBILE_PHONE_POSITION(Global_14506[Global_14498 /*3*/]);
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_57(0);
	}
	if (iLocal_1362)
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_46);
	}
	Global_16900 = 0;
	Global_16899 = 0;
	TERMINATE_THIS_THREAD();
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_14725)
	{
		func_59(0, 0);
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
	if (!func_58())
	{
		Global_14553.f_1 = 3;
	}
}

int func_58()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_60(0))
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

int func_60(int iParam0)
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

bool func_61()
{
	return IS_BIT_SET(Global_1681628, 19);
}

