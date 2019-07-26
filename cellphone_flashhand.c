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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	char cLocal_50[16] = "";
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
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
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_14722 = 145;
	CLEAR_BIT(&Global_2424, 8);
	CLEAR_BIT(&Global_2423, 14);
	CLEAR_BIT(&Global_4269308, 3);
	CLEAR_BIT(&Global_2424, 10);
	CLEAR_BIT(&Global_2423, 17);
	CLEAR_BIT(&Global_2423, 9);
	CLEAR_BIT(&Global_2423, 26);
	CLEAR_BIT(&Global_2423, 23);
	CLEAR_BIT(&Global_2424, 24);
	CLEAR_BIT(&Global_2424, 25);
	CLEAR_BIT(&Global_2424, 27);
	CLEAR_BIT(&Global_2424, 26);
	CLEAR_BIT(&Global_2423, 30);
	Global_2538128 = 0;
	iLocal_78 = 0;
	_0x1072F115DAB0717E(0, 0);
	SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_14519 = 0;
	iLocal_30 = 0;
	Global_14497 = 0;
	Global_14537 = 0;
	Global_14538 = 0;
	func_107();
	Global_14484 = { Global_14516 };
	Global_14557 = 4;
	Global_14558 = 0;
	Global_3028 = 1;
	Global_14533 = Global_14557;
	if (Global_14535 == 0)
	{
		Global_14536 = 0;
		if (Global_71590)
		{
			Global_14534 = REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			iLocal_44 = 1;
			if (iLocal_44 == 1)
			{
			}
		}
		else if (Global_14496)
		{
			Global_14541 = 1;
			Global_14534 = REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_14534 = REQUEST_SCALEFORM_MOVIE(&(Global_106565.f_14045[Global_14553 /*20*/]));
		}
		SETTIMERA(0);
		while (!HAS_SCALEFORM_MOVIE_LOADED(Global_14534) && Global_14536 == 0)
		{
			WAIT(0);
			if (TIMERA() > 20000)
			{
				Global_14536 = 1;
			}
			if (IS_PC_VERSION())
			{
				if (DECOR_EXIST_ON(PLAYER_PED_ID(), "Synched"))
				{
					if (TIMERA() > 2000)
					{
						Global_14536 = 1;
					}
				}
			}
			if (Global_14552 == 1)
			{
				func_106();
			}
		}
		if (Global_14536 == 1)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
			{
				func_105(Global_14534, "SHUTDOWN_MOVIE");
			}
			WAIT(0);
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14534);
			Global_14494 = 0;
			Global_14535 = 0;
			Global_14723 = 0;
			if (Global_106565.f_14045.f_84 == 1)
			{
				Global_106565.f_14045.f_84 = 0;
				CLEAR_FLOATING_HELP(0, 1);
			}
			Global_14497 = 1;
			Global_14553.f_1 = 3;
			func_104();
			Global_14541 = 0;
			DESTROY_MOBILE_PHONE();
			CLEAR_BIT(&Global_2423, 9);
			CLEAR_BIT(&Global_2423, 27);
			CLEAR_BIT(&Global_2423, 30);
			CLEAR_BIT(&Global_2424, 5);
			CLEAR_BIT(&Global_2424, 21);
			CLEAR_BIT(&Global_2425, 2);
			if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				STOP_PED_RINGTONE(PLAYER_PED_ID());
			}
			if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				STOP_PED_RINGTONE(PLAYER_PED_ID());
			}
			Global_14725 = 0;
			Global_16926 = 0;
			Global_16925 = 0;
			Global_15879 = 0;
			func_102();
			func_100();
			Global_4269587 = 0;
			TERMINATE_THIS_THREAD();
		}
		Global_14477 = 0.1f;
		Global_14478 = 0.38f;
		Global_14479 = 0.195f;
		Global_14480 = 0.05f;
		if ((IS_XBOX360_VERSION() || IS_DURANGO_VERSION()) || IS_PC_VERSION())
		{
			GET_HUD_COLOUR(18, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 2f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
			GET_HUD_COLOUR(9, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 1f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
			GET_HUD_COLOUR(6, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 3f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
		}
		else
		{
			GET_HUD_COLOUR(9, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 2f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
			GET_HUD_COLOUR(126, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 1f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
			GET_HUD_COLOUR(6, &uLocal_64, &uLocal_65, &uLocal_66, &uLocal_67);
			func_99(Global_14534, "SET_SOFT_KEYS_COLOUR", 3f, TO_FLOAT(uLocal_64), TO_FLOAT(uLocal_65), TO_FLOAT(uLocal_66), -1082130432);
		}
		if (Global_14536 == 0)
		{
		}
		func_98();
		if (Global_71590)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
		}
		Global_14535 = 1;
	}
	Global_2426 = 99;
	func_97();
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		iLocal_56 = GET_ENTITY_HEALTH(PLAYER_PED_ID());
	}
	if (IS_RADAR_HIDDEN())
	{
		Global_16880 = 1;
	}
	else
	{
		Global_16880 = 0;
	}
	func_99(Global_14534, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14495 = 1;
	if (Global_71590)
	{
		Global_14727 = 0;
		Global_4269584 = func_94(2028, -1, 0);
		if (Global_4269584 < 1 || Global_4269584 > 7)
		{
			Global_4269584 = 1;
		}
		func_99(Global_14534, "SET_THEME", TO_FLOAT(Global_4269584), -1082130432, -1082130432, -1082130432, -1082130432);
		func_93();
		Global_4269585 = func_94(2027, -1, 0);
		if (Global_4269585 == 0)
		{
			Var16 = { func_92(PLAYER_ID()) };
			iVar29 = 0;
			if (_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_4269588 == 1)
			{
			}
			if ((NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && _0x72D918C99BCACC54(0)) && Global_4269588 == 0)
			{
				if (_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_BACKGROUND_CREW_IMAGE");
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_99(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_99(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_99(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(Global_4269585), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_14496)
		{
			Global_14727 = 0;
		}
		else if (Global_106565.f_14045.f_88 == 1 || Global_106565.f_14045.f_89 == 1)
		{
			Global_14727 = 0;
		}
		else
		{
			Global_14727 = 0;
		}
		func_99(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3227 == 0)
		{
			func_99(Global_14534, "SET_BACKGROUND_IMAGE", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			SET_MOBILE_PHONE_SCALE(575f);
		}
		func_93();
	}
	uLocal_45 = func_91();
	if (Global_14496 == 0)
	{
		func_80();
	}
	Global_14531 = 0;
	Global_14726 = 0;
	CLEAR_BIT(&Global_2423, 9);
	Global_2458608 = 0;
	if (func_78(0) && NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2458608 = 1;
	}
	func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_77();
	func_75();
	func_74(1);
	PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_14542, 1);
	SETTIMERB(0);
	while (Global_14553.f_1 < 6 && Global_14536 == 0)
	{
		WAIT(0);
		if (TIMERB() > 10000)
		{
			Global_14536 = 1;
		}
		if (Global_14553.f_1 < 4)
		{
			Global_14536 = 1;
		}
	}
	if (Global_14553.f_1 == 5 || Global_14553.f_1 == 6)
	{
		if (func_73(14))
		{
			func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
		}
		if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_99(Global_14534, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_99(Global_14534, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14541)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14541)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14727 == 0)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else if (Global_71590)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			if (Global_14726 == 1)
			{
				if (Global_14541)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			SET_BIT(&Global_2423, 17);
		}
	}
	Global_14539 = 1;
	func_71();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_62 = GET_NETWORK_TIME();
	}
	else
	{
		iLocal_57 = GET_GAME_TIMER();
	}
	if (Global_14723 == 1)
	{
		if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_106565.f_14045.f_84 == 0)
			{
				Global_106565.f_14045.f_84 = 1;
				if (Global_14498 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_70("CELL_7052", 10000);
			}
		}
	}
	if (Global_71590 == 0)
	{
		iLocal_18 = GET_GAME_TIMER() + 375;
	}
	if (func_69())
	{
		iLocal_36 = 1;
	}
	else
	{
		iLocal_36 = 0;
	}
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
		{
			iLocal_37 = 1;
			if (func_69())
			{
				func_68();
			}
		}
		else
		{
			iLocal_37 = 0;
		}
	}
	if (IS_PC_VERSION())
	{
		if (Global_71590 == 0)
		{
			iLocal_59 = GET_GAME_TIMER();
			iLocal_61 = 0;
		}
	}
	while (true)
	{
		WAIT(0);
		if (IS_BIT_SET(Global_4269308, 24))
		{
			if (!Global_14726)
			{
				if (Global_14553.f_1 == 6 || Global_14553.f_1 > 6)
				{
					CLEAR_BIT(&Global_4269308, 24);
					func_77();
					func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_74(1);
					if (Global_14553.f_1 == 6)
					{
						func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_67())
		{
			DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_71590 == 0)
		{
			if (iLocal_32)
			{
				if (Global_14553.f_1 == 6 || Global_14553.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_14553.f_1 > 4)
			{
				if ((IS_BIT_SET(Global_2423, 14) && Global_4269587 == 0) && Global_14493 == 0)
				{
					if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
					{
						if (func_66())
						{
							GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_14499[Global_14498 /*3*/].f_1 != Local_33.f_1)
							{
								func_64();
							}
						}
						else
						{
							GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_14506[Global_14498 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_67())
								{
								}
								if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_62();
								}
							}
						}
						if (iLocal_37 == 0)
						{
							if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
							{
								iLocal_37 = 1;
								func_62();
								func_68();
							}
						}
						else if (!IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
						{
							iLocal_37 = 0;
							func_64();
							if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
							{
								if (Global_15866 != 2)
								{
									func_61();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (func_69())
							{
								iLocal_36 = 1;
								if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
								{
									func_68();
								}
								func_64();
							}
						}
						else
						{
							if (GET_PED_STEALTH_MOVEMENT(PLAYER_PED_ID()))
							{
								if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
								{
									DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_69() == 0)
							{
								iLocal_36 = 0;
								func_62();
							}
						}
					}
				}
			}
		}
		if (Global_2458608 == 1)
		{
			if (!func_78(0) || !NETWORK_IS_SIGNED_ONLINE())
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_14553.f_1 > 3)
					{
						Global_14538 = 1;
						func_60();
						func_56(0);
						Global_2458608 = 0;
					}
				}
			}
		}
		if (Global_14728 == 0)
		{
			if ((Global_36425 != 15 || Global_2428 == 1) || func_55(0))
			{
				if (!Global_14726)
				{
					if (Global_14553.f_1 == 6)
					{
						Global_2429 = 42;
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14728 = 1;
			}
		}
		else if ((Global_36425 == 15 && func_55(0) == 0) && Global_2428 == 0)
		{
			if (!Global_14726)
			{
				if (Global_14553.f_1 == 6)
				{
					Global_2429 = 255;
					func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14728 = 0;
		}
		if (Global_14729 == 0)
		{
			if (IS_BIT_SET(Global_2424, 3))
			{
				if (!Global_14726)
				{
					if (Global_14553.f_1 == 6)
					{
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_77();
						func_75();
						func_74(1);
						func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14729 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_2424, 3))
		{
			if (!Global_14726)
			{
				if (Global_14553.f_1 == 6)
				{
					func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_77();
					func_75();
					func_74(1);
					func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14533), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14729 = 0;
		}
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_14481.f_1 != Global_14499[Global_14498 /*3*/].f_1 || func_69())
			{
				if (Global_14553.f_1 > 3)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_71590)
						{
							if (Global_14553.f_1 == 9)
							{
								if (Global_15919 == 1 || IS_BIT_SET(Global_2424, 23))
								{
									SET_INPUT_EXCLUSIVE(0, Global_14522);
								}
							}
							else
							{
								SET_INPUT_EXCLUSIVE(0, Global_14522);
							}
						}
						else
						{
							SET_INPUT_EXCLUSIVE(0, Global_14522);
						}
					}
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						SET_INPUT_EXCLUSIVE(0, Global_14523);
						if (IS_BIT_SET(Global_2423, 17))
						{
							SET_INPUT_EXCLUSIVE(0, Global_14524);
						}
					}
					if (!func_54() && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						SET_INPUT_EXCLUSIVE(0, Global_14525);
					}
				}
			}
			if (Global_14481.f_1 == Global_14499[Global_14498 /*3*/].f_1)
			{
			}
		}
		if (!_IS_INPUT_DISABLED(2))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_68807)
			{
				if (!func_67())
				{
					SET_INPUT_EXCLUSIVE(0, 180);
					SET_INPUT_EXCLUSIVE(0, 181);
					ENABLE_CONTROL_ACTION(0, 180, 1);
					ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				SET_INPUT_EXCLUSIVE(0, Global_14527);
				if (!func_54())
				{
					SET_INPUT_EXCLUSIVE(0, Global_14528);
				}
				if (Global_14553.f_1 > 4)
				{
					SET_INPUT_EXCLUSIVE(0, Global_14530);
				}
			}
		}
		if (func_53(2, Global_14521, 0))
		{
			iLocal_54 = 1;
			SETTIMERA(0);
		}
		if (iLocal_31 == 1)
		{
			if (!IS_CONTROL_PRESSED(2, Global_14522))
			{
				Global_2427 = 1;
				iLocal_31 = 0;
			}
			if (!Global_14553.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_54)
		{
			if (IS_CONTROL_PRESSED(2, Global_14521))
			{
				if (TIMERA() > 5000)
				{
					Global_14553.f_1 = 3;
					func_51();
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		Global_3031 = GET_GAME_TIMER();
		if (Global_14540)
		{
			func_71();
			Global_14539 = 1;
			Global_14540 = 0;
		}
		if (Global_14725 == 0)
		{
			HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_45();
			func_44();
			SET_TEXT_RENDER_ID(iLocal_42);
			if (Global_14539 == 1)
			{
				SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_14496)
				{
					DRAW_SCALEFORM_MOVIE(Global_14534, Global_14473, Global_14474, Global_14475, Global_14476, 255, 255, 255, 255, 0);
				}
				else
				{
					DRAW_SCALEFORM_MOVIE(Global_14534, Global_14473, Global_14474, Global_14475, Global_14476, 255, 255, 255, 255, 0);
				}
				func_97();
			}
			if (Global_14493 == 1)
			{
				if (Global_14553.f_1 > 3)
				{
					func_43();
				}
			}
			else if (Global_14553.f_1 > 3)
			{
				if (Global_4269587 == 1)
				{
					func_42();
				}
				if (IS_BIT_SET(Global_2424, 25))
				{
					if (Global_71590 == 1)
					{
						func_41();
					}
				}
				else if (!IS_BIT_SET(Global_2424, 24))
				{
					if (IS_BIT_SET(Global_2424, 26))
					{
						if (func_53(2, Global_14520, 0))
						{
							SET_BIT(&Global_2424, 25);
							CLEAR_BIT(&Global_2424, 26);
							CLEAR_BIT(&Global_2425, 2);
						}
					}
				}
				else if (Global_71590 == 1)
				{
					func_40();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_14553.f_1 == 6)
			{
				func_36();
			}
		}
		else if (!IS_BIT_SET(Global_2423, 23))
		{
			if (Global_14553.f_1 == 5 || Global_14553.f_1 == 6)
			{
				if (Global_14725 == 0)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_14496 == 0)
						{
							if (IS_BIT_SET(Global_2423, 14))
							{
								if (!Global_71590)
								{
									if (iLocal_31 == 0)
									{
										if (!func_73(14))
										{
											func_35();
										}
										else if (Global_2458608)
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
						if (IS_BIT_SET(Global_2423, 9))
						{
							func_20(0, 0, 1, 1);
						}
						else if (Global_16925 == 0)
						{
							if (!IS_BIT_SET(Global_4269308, 3))
							{
								if (Global_71590)
								{
									func_19();
								}
								func_18();
								func_16();
							}
						}
						else
						{
							if (Global_71590)
							{
								func_19();
							}
							if (!IS_BIT_SET(Global_4269308, 3))
							{
								if (Global_16925 == 1)
								{
									if (IS_BIT_SET(Global_4269308, 1))
									{
										if (IS_BIT_SET(Global_2423, 14))
										{
											if (Global_71590)
											{
												func_20(7, 0, 1, 0);
											}
											else
											{
												Global_16926 = 0;
											}
											Global_16925 = 0;
											CLEAR_BIT(&Global_4269308, 1);
										}
									}
									else if (IS_BIT_SET(Global_2423, 14))
									{
										func_20(7, 0, 1, 0);
										Global_16925 = 0;
									}
								}
								else
								{
									if (Global_16925 == 3)
									{
										func_20(1, 0, 1, 0);
										Global_16925 = 0;
									}
									if (Global_16925 == 2)
									{
										func_20(14, 0, 1, 0);
										Global_16925 = 0;
									}
									if (Global_16925 == 4)
									{
										func_20(23, 0, 1, 0);
										Global_16925 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (HAS_SCRIPT_LOADED(&(Global_2430[Global_14556 /*15*/].f_5)))
		{
			if (Global_14556 == 0)
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[Global_14556 /*15*/].f_9) == 0)
				{
					Global_14551 = START_NEW_SCRIPT(&(Global_2430[Global_14556 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_14556 == 23)
				{
					if (IS_BIT_SET(Global_4269308, 4) == 0 && Global_1573916 == 0)
					{
					}
				}
				if (Global_14556 == 2 || iVar32 == 1)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[Global_14556 /*15*/].f_9) == 0)
					{
						Global_14551 = START_NEW_SCRIPT(&(Global_2430[Global_14556 /*15*/].f_5), 4592);
					}
				}
				else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[Global_14556 /*15*/].f_9) == 0)
				{
					Global_14551 = START_NEW_SCRIPT(&(Global_2430[Global_14556 /*15*/].f_5), 2552);
				}
			}
			SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2430[Global_14556 /*15*/].f_5));
			Global_2426 = 99;
			CLEAR_BIT(&Global_2423, 23);
		}
		if (_IS_INPUT_DISABLED(2))
		{
			if (IS_PAUSE_MENU_ACTIVE())
			{
				DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_14553.f_1 == 1)
		{
			func_7();
		}
		if (Global_14553.f_1 == 0)
		{
			func_7();
		}
		if (Global_14553.f_1 == 3)
		{
			func_7();
		}
		else
		{
			if (Global_15879)
			{
				if (Global_14553.f_1 == 9)
				{
					if (Global_71590)
					{
						if (!IS_BIT_SET(Global_2424, 31))
						{
							if (!IS_BIT_SET(Global_2424, 27))
							{
								if (func_6())
								{
									if (!IS_BIT_SET(Global_2423, 9))
									{
										if (func_53(2, Global_14525, 0))
										{
											if (!IS_PC_VERSION())
											{
												if (!Global_14552 == 1)
												{
													if (Global_14553.f_1 > 6)
													{
														SET_BIT(&Global_2424, 24);
														SET_BIT(&Global_2424, 27);
														CLEAR_BIT(&Global_2424, 26);
														CLEAR_BIT(&Global_2424, 25);
														SET_BIT(&(Global_2528542.f_1723), 17);
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
			if (Global_14536 == 1)
			{
				Global_14538 = 1;
				func_56(0);
			}
			if (Global_14537 == 1)
			{
				Global_14538 = 1;
				func_56(0);
			}
			if (Global_71590)
			{
				if (!IS_BIT_SET(Global_2425, 0))
				{
					if (IS_PAUSE_MENU_ACTIVE() && !func_5())
					{
						if (Global_2534821.f_1 == 1)
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
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
				{
					if (GET_ENTITY_SUBMERGED_LEVEL(PLAYER_PED_ID()) > 0.3f)
					{
						SET_BIT(&Global_2424, 4);
					}
					if (GET_ENTITY_SUBMERGED_LEVEL(PLAYER_PED_ID()) == 1f)
					{
						Global_14538 = 1;
						func_60();
						func_56(0);
					}
				}
				if (func_73(14))
				{
					if ((GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/] || GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/]) || GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
					{
						iLocal_79 = 0;
					}
					else if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						iLocal_79 = 1;
					}
				}
				if ((((((((((((((IS_PED_IN_ANY_TRAIN(PLAYER_PED_ID()) || IS_PLAYER_RIDING_TRAIN(PLAYER_ID())) || IS_PED_ON_MOUNT(PLAYER_PED_ID())) || IS_STUNT_JUMP_IN_PROGRESS()) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_JACKING(PLAYER_PED_ID())) || IS_PED_IN_COVER(PLAYER_PED_ID(), 0)) || IS_PED_HANGING_ON_TO_VEHICLE(PLAYER_PED_ID())) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_71851 == 1) || func_3(PLAYER_PED_ID())) || IS_VEHICLE_DRIVEABLE(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID()), 0)) || IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID())) || _IS_NIGHTVISION_ACTIVE()) || iLocal_79)
				{
					if (!Global_14496)
					{
						SET_BIT(&Global_2424, 4);
					}
				}
				if (IS_PC_VERSION())
				{
					if (Global_71590 == 0)
					{
						if (iLocal_61 == 0)
						{
							if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
							{
								if (!IS_PED_SITTING_IN_VEHICLE(PLAYER_PED_ID(), GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0)))
								{
									iLocal_59 = GET_GAME_TIMER();
									iLocal_61 = 1;
								}
							}
						}
						else
						{
							iLocal_60 = GET_GAME_TIMER();
							iLocal_63 = (iLocal_60 - iLocal_59);
							if (iLocal_63 < 4000)
							{
								SET_BIT(&Global_2424, 4);
							}
							else
							{
								iLocal_61 = 0;
							}
						}
					}
				}
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_71590)
					{
						GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed") && Global_14553.f_1 < 7)
						{
							SET_BIT(&Global_2424, 4);
						}
					}
				}
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					uLocal_70 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (GET_ENTITY_MODEL(uLocal_70) == joaat("submersible") || GET_ENTITY_MODEL(uLocal_70) == joaat("submersible2"))
					{
						iLocal_73 = 1;
					}
					else
					{
						iLocal_73 = 0;
					}
					if (((((GET_ENTITY_MODEL(uLocal_70) == joaat("rhino") || GET_ENTITY_MODEL(uLocal_70) == joaat("cutter")) || GET_ENTITY_MODEL(uLocal_70) == joaat("chernobog")) || GET_ENTITY_MODEL(uLocal_70) == joaat("khanjali")) || iLocal_73) || IS_VEHICLE_DRIVEABLE(uLocal_70, 0) == 0)
					{
						SET_BIT(&Global_2424, 4);
					}
					if (((((((((((((((GET_ENTITY_MODEL(uLocal_70) == joaat("valkyrie") || GET_ENTITY_MODEL(uLocal_70) == joaat("insurgent")) || GET_ENTITY_MODEL(uLocal_70) == joaat("technical")) || GET_ENTITY_MODEL(uLocal_70) == joaat("trash")) || GET_ENTITY_MODEL(uLocal_70) == joaat("trash2")) || GET_ENTITY_MODEL(uLocal_70) == joaat("limo2")) || GET_ENTITY_MODEL(uLocal_70) == joaat("insurgent3")) || GET_ENTITY_MODEL(uLocal_70) == joaat("halftrack")) || GET_ENTITY_MODEL(uLocal_70) == joaat("dune3")) || GET_ENTITY_MODEL(uLocal_70) == joaat("trailersmall2")) || GET_ENTITY_MODEL(uLocal_70) == joaat("technical2")) || GET_ENTITY_MODEL(uLocal_70) == joaat("boxville5")) || GET_ENTITY_MODEL(uLocal_70) == joaat("mogul")) || GET_ENTITY_MODEL(uLocal_70) == joaat("bombushka")) || GET_ENTITY_MODEL(uLocal_70) == joaat("tula")) || GET_ENTITY_MODEL(uLocal_70) == joaat("chernobog"))
					{
						if (IS_PED_SITTING_IN_VEHICLE(PLAYER_PED_ID(), uLocal_70))
						{
							iVar33 = func_2(PLAYER_PED_ID(), uLocal_70);
							if (iVar33 != -2)
							{
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("insurgent") || GET_ENTITY_MODEL(uLocal_70) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("trash") || GET_ENTITY_MODEL(uLocal_70) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("insurgent3"))
								{
									if (iVar33 == 3)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("halftrack"))
								{
									if (iVar33 == 1)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("dune3"))
								{
									if (iVar33 == 0)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (GET_ENTITY_MODEL(uLocal_70) == joaat("trailersmall2"))
								{
									if (iVar33 == -1)
									{
										SET_BIT(&Global_2424, 4);
									}
								}
								if (_0xE33FFA906CE74880(uLocal_70, iVar33))
								{
									SET_BIT(&Global_2424, 4);
								}
							}
						}
					}
					if (IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_71590 == 0)
						{
							if (Global_14553.f_1 == 6 || Global_14553.f_1 == 7)
							{
								bVar34 = true;
								if (GET_ENTITY_MODEL(uLocal_70) == 886810209 && IS_ENTITY_IN_WATER(uLocal_70))
								{
									bVar34 = false;
								}
								if (((IS_THIS_MODEL_A_HELI(GET_ENTITY_MODEL(uLocal_70)) || IS_THIS_MODEL_A_PLANE(GET_ENTITY_MODEL(uLocal_70))) || GET_ENTITY_MODEL(uLocal_70) == joaat("submersible")) || GET_ENTITY_MODEL(uLocal_70) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_56(0);
								}
							}
						}
					}
				}
				else
				{
					if (IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_71590 == 0)
						{
							if (Global_14553.f_1 == 6 || Global_14553.f_1 == 7)
							{
								func_56(0);
							}
						}
					}
					iLocal_73 = 0;
				}
				if (IS_PED_SWIMMING_UNDER_WATER(PLAYER_PED_ID()))
				{
					Global_14538 = 1;
					func_60();
					func_56(0);
				}
				if (Global_71590 == 0)
				{
					if (GET_ENTITY_HEALTH(PLAYER_PED_ID()) < iLocal_56)
					{
						if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							Global_14538 = 1;
							func_60();
							func_56(0);
						}
					}
					if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
					{
						if (IS_PED_SWIMMING_UNDER_WATER(PLAYER_PED_ID()))
						{
							Global_14538 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				else if (func_67())
				{
					if (GET_ENTITY_HEALTH(PLAYER_PED_ID()) < iLocal_56)
					{
						if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							Global_14538 = 1;
							func_60();
							func_56(0);
						}
					}
				}
				if (IS_AIM_CAM_ACTIVE())
				{
					if (!IS_PED_IN_COVER(PLAYER_PED_ID(), 1))
					{
						if (!func_67())
						{
							GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iLocal_69, 1);
							if ((iLocal_69 == joaat("weapon_sniperrifle") || iLocal_69 == joaat("weapon_heavysniper")) || iLocal_69 == joaat("weapon_remotesniper"))
							{
								bLocal_68 = true;
							}
							else
							{
								bLocal_68 = false;
							}
							if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_68)
								{
									Global_14538 = 1;
									func_60();
									func_56(0);
								}
							}
						}
					}
				}
				if (IS_PED_BEING_JACKED(PLAYER_PED_ID()))
				{
					Global_14538 = 1;
					func_60();
					func_56(0);
				}
				if (IS_PED_BEING_STUNNED(PLAYER_PED_ID(), 0))
				{
					Global_14538 = 1;
					func_60();
					func_56(0);
				}
				if (IS_PLAYER_BEING_ARRESTED(PLAYER_ID(), 1))
				{
					Global_14538 = 1;
					func_60();
					func_56(0);
				}
				if (IS_PED_RAGDOLL(PLAYER_PED_ID()) || IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
				{
					if (Global_71590 == 0)
					{
						Global_14538 = 1;
						func_60();
						func_56(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_71590 && Global_2534821.f_1) && Global_2534821.f_37) && Global_14553.f_1 == 9)
				{
					iVar35 = 1;
					if (!IS_BIT_SET(Global_2424, 24))
					{
						if (IS_BIT_SET(Global_2424, 26))
						{
							SET_BIT(&Global_2424, 25);
							CLEAR_BIT(&Global_2424, 26);
							CLEAR_BIT(&Global_2425, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_14538 = 1;
					func_60();
					func_56(0);
				}
			}
		}
		if (Global_14531 == 1)
		{
			func_1();
		}
		if (Global_14552 == 2)
		{
			if (_IS_INPUT_DISABLED(2))
			{
				SET_INPUT_EXCLUSIVE(0, Global_14522);
				SET_INPUT_EXCLUSIVE(0, Global_14523);
				DISABLE_CONTROL_ACTION(0, 24, 1);
				DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				STOP_PED_RINGTONE(PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!IS_CONTROL_PRESSED(2, Global_14522) && !IS_CONTROL_PRESSED(2, Global_14521))
	{
		Global_14531 = 0;
	}
}

int func_2(int iParam0, var uParam1)
{
	if (!IS_ENTITY_DEAD(iParam0, 0) && !IS_ENTITY_DEAD(uParam1, 0))
	{
		if (IS_PED_SITTING_IN_VEHICLE(iParam0, uParam1))
		{
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 2, 0) == iParam0)
			{
				return 2;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 8, 0) == iParam0)
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
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
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
	return IS_BIT_SET(Global_1681628, 5);
}

bool func_6()
{
	return Global_2534821.f_1;
}

void func_7()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	
	Global_16925 = 0;
	Global_16926 = 0;
	SET_INPUT_EXCLUSIVE(0, Global_14523);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_14519 == 0)
	{
		SET_MOBILE_PHONE_SCALE(500f);
		if (func_66())
		{
			iLocal_18 = GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_14519 = 1;
	}
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (IS_PED_RINGTONE_PLAYING(PLAYER_PED_ID()))
		{
			STOP_PED_RINGTONE(PLAYER_PED_ID());
		}
	}
	if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (IS_PED_RINGTONE_PLAYING(PLAYER_PED_ID()))
		{
			STOP_PED_RINGTONE(PLAYER_PED_ID());
		}
	}
	if (Global_106565.f_14045.f_84 == 1)
	{
		Global_106565.f_14045.f_84 = 0;
		CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (IS_BIT_SET(Global_2423, 30) || IS_BIT_SET(Global_2425, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_14513 };
	if (Global_14538 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((IS_BIT_SET(Global_2424, 26) || IS_BIT_SET(Global_2423, 30)) || IS_BIT_SET(Global_2425, 2))
	{
		vLocal_75 = { Global_14499[Global_14498 /*3*/] };
	}
	else
	{
		vLocal_75 = { Global_14506[Global_14498 /*3*/] };
	}
	fVar4 = func_13(vLocal_75, Global_14499[Global_14498 /*3*/], Global_14513, vVar1, fVar0, 0);
	if (!iLocal_43 && fVar4 >= 1f)
	{
		DESTROY_MOBILE_PHONE();
		iLocal_43 = 1;
	}
	if (iLocal_43 && (GET_GAME_TIMER() - iLocal_18) > 500)
	{
		SET_INPUT_EXCLUSIVE(0, Global_14523);
		if (Global_14553.f_1 == 3)
		{
		}
		if (Global_14553.f_1 == 1)
		{
		}
		if (Global_14553.f_1 == 0)
		{
		}
		SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_14494 = 0;
		Global_14535 = 0;
		Global_14723 = 0;
		if (Global_106565.f_14045.f_84 == 1)
		{
			Global_106565.f_14045.f_84 = 0;
			CLEAR_FLOATING_HELP(0, 1);
		}
		Global_14497 = 1;
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			STOP_PED_RINGTONE(PLAYER_PED_ID());
		}
		if (Global_16880 == 0)
		{
		}
		Global_14725 = 0;
		if (func_10(0))
		{
			func_9();
		}
		CLEAR_BIT(&Global_2424, 8);
		CLEAR_BIT(&Global_2423, 14);
		CLEAR_BIT(&Global_2423, 9);
		CLEAR_BIT(&Global_2423, 27);
		CLEAR_BIT(&Global_2423, 30);
		CLEAR_BIT(&Global_2424, 5);
		CLEAR_BIT(&Global_2424, 19);
		CLEAR_BIT(&Global_2424, 21);
		CLEAR_BIT(&Global_2424, 24);
		CLEAR_BIT(&Global_2424, 25);
		CLEAR_BIT(&Global_2424, 27);
		CLEAR_BIT(&Global_2424, 26);
		CLEAR_BIT(&Global_2425, 2);
		Global_2538128 = 0;
		iLocal_78 = 0;
		if (!IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			func_8();
		}
		SETTIMERA(0);
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[2 /*15*/].f_9) == 0)
		{
			while (IS_THREAD_ACTIVE(Global_14551))
			{
				WAIT(0);
				SET_INPUT_EXCLUSIVE(0, Global_14523);
				if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
				{
					SET_TEXT_RENDER_ID(iLocal_42);
					DRAW_SCALEFORM_MOVIE(Global_14534, Global_14473, Global_14474, Global_14475, Global_14476, 255, 255, 255, 255, 0);
				}
				if (TIMERA() > 5000)
				{
					TERMINATE_THREAD(Global_14551);
				}
			}
		}
		Global_14541 = 0;
		if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
		{
			func_105(Global_14534, "SHUTDOWN_MOVIE");
		}
		WAIT(0);
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14534);
		Global_14519 = 0;
		SET_INPUT_EXCLUSIVE(0, Global_14523);
		if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (Global_2534821.f_1)
			{
				if (Global_71590)
				{
					PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14542, 1);
				}
			}
		}
		func_102();
		func_100();
		Global_15879 = 0;
		Global_4269587 = 0;
		TERMINATE_THIS_THREAD();
	}
}

void func_8()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_9()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	CLEAR_BIT(&Global_2423, 25);
	SET_BIT(&Global_2424, 11);
}

int func_10(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, Global_36425);
}

int func_12(int iParam0, int iParam1)
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

float func_13(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)
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
	if (func_66() && Global_4269587 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GET_GAME_TIMER();
	}
	fVar3 = func_15((TO_FLOAT((GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_14481 = { func_14(vParam0, vParam3, fVar4) };
		Global_14484 = { func_14(vParam6, vParam9, fVar4) };
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

Vector3 func_14(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_15(float fParam0, float fParam1, float fParam2)
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

void func_16()
{
	if (Global_14531 == 0)
	{
		if (func_53(2, Global_14525, 0))
		{
			if (Global_71590 == 0)
			{
				if (Global_14727)
				{
					if (Global_14726 == 0)
					{
						Global_14726 = 1;
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_74(2);
						func_17();
						func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
						Global_14533 = Global_14558;
					}
					else
					{
						Global_14726 = 0;
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_74(1);
						func_17();
						func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
						Global_14533 = Global_14557;
					}
				}
			}
		}
	}
}

void func_17()
{
	if (Global_14727 == 0)
	{
		func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_2423, 17);
	}
	else if (Global_71590)
	{
		func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_2423, 17);
	}
	else
	{
		if (Global_14726 == 1)
		{
			if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14541)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		SET_BIT(&Global_2423, 17);
	}
}

void func_18()
{
	if (IS_BIT_SET(Global_2424, 10) || iLocal_78 == 1)
	{
		Global_3030 = GET_GAME_TIMER();
		Global_3029 = 0;
		Global_14531 = 1;
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
		uLocal_29 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
		iLocal_30 = 1;
	}
	else if (Global_14531 == 0)
	{
		if (func_53(2, Global_14522, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_3030 = GET_GAME_TIMER();
				Global_3029 = 0;
				Global_14531 = 1;
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "GET_CURRENT_SELECTION");
				uLocal_29 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
				iLocal_30 = 1;
			}
		}
	}
}

void func_19()
{
	if (Global_14531 == 0)
	{
		if (func_53(2, Global_14520, 1))
		{
			if (func_94(2090, -1, 0) == 1)
			{
				if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_2424, 3))
					{
						if (!Global_14496)
						{
							if (!IS_BIT_SET(Global_4269308, 3))
							{
								if (!IS_BIT_SET(Global_2423, 14))
								{
									Global_14531 = 1;
									SET_BIT(&Global_4269308, 3);
									func_20(3, 0, 1, 0);
									Global_16925 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_107();
	if (Global_71590 == 0)
	{
		if (func_73(14))
		{
			if (Global_16925 == 2 || Global_16925 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14553.f_1 == 9)
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
	if (Global_14519 == 1)
	{
		return 0;
	}
	if (Global_14553.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!IS_THREAD_ACTIVE(Global_14550))
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14553.f_1 < 4)
			{
				func_21("cellphone_flashhand");
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14550 = START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14535)
	{
		WAIT(0);
	}
	func_77();
	func_75();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
	{
		Global_3029 = 0;
		Global_14553.f_1 = 7;
		func_21(&(Global_2430[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
			{
				Global_14551 = START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
		{
			Global_14551 = START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 2552);
		}
		SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2430[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_21(char* sParam0)
{
	REQUEST_SCRIPT(sParam0);
	while (!HAS_SCRIPT_LOADED(sParam0))
	{
		WAIT(0);
	}
}

int func_22(int iParam0)
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

void func_23()
{
	if (Global_14532)
	{
		if (TIMERA() > 50)
		{
			Global_14532 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[1])
					{
						func_32();
						Global_14533 = 1;
					}
					break;
				
				case 1:
					if (Global_2992[2])
					{
						func_32();
						Global_14533 = 2;
					}
					break;
				
				case 2:
					if (Global_2992[3])
					{
						func_32();
						func_30();
						Global_14533 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_14533 = 4;
					}
					break;
				
				case 3:
					if (Global_2992[4])
					{
						func_32();
						Global_14533 = 4;
					}
					break;
				
				case 4:
					if (Global_2992[5])
					{
						func_32();
						Global_14533 = 5;
					}
					break;
				
				case 5:
					if (Global_2992[6])
					{
						func_32();
						func_30();
						Global_14533 = 6;
					}
					break;
				
				case 6:
					if (Global_2992[7])
					{
						func_32();
						Global_14533 = 7;
					}
					break;
				
				case 7:
					if (Global_2992[8])
					{
						func_32();
						Global_14533 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_14533 = 0;
					}
					break;
				
				case 8:
					if (Global_2992[0])
					{
						func_32();
						func_30();
						Global_14533 = 0;
					}
					else
					{
						func_28();
						func_30();
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[8])
					{
						func_28();
						func_25();
						Global_14533 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_14533 = 7;
					}
					break;
				
				case 1:
					if (Global_2992[0])
					{
						func_28();
						Global_14533 = 0;
					}
					else if (Global_2992[8])
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
					if (Global_2992[1])
					{
						func_28();
						Global_14533 = 1;
					}
					break;
				
				case 3:
					if (Global_2992[2])
					{
						func_28();
						func_25();
						Global_14533 = 2;
					}
					break;
				
				case 4:
					if (Global_2992[3])
					{
						func_28();
						Global_14533 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_14730 = 1;
						Global_14533 = 2;
					}
					break;
				
				case 5:
					if (Global_2992[4])
					{
						func_28();
						Global_14533 = 4;
					}
					break;
				
				case 6:
					if (Global_2992[5])
					{
						func_25();
						func_28();
						Global_14533 = 5;
					}
					break;
				
				case 7:
					if (Global_2992[6])
					{
						func_28();
						Global_14533 = 6;
					}
					break;
				
				case 8:
					if (Global_2992[7])
					{
						func_28();
						Global_14533 = 7;
					}
					break;
				}
			}
	}
	if (Global_14532 == 0)
	{
		if (func_53(2, Global_14528, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 2:
					if (Global_2992[0] == 1)
					{
						Global_14533 = 0;
					}
					else
					{
						Global_14533 = 1;
						Global_14730 = 1;
					}
					break;
				
				case 5:
					Global_14533 = 3;
					break;
				
				case 6:
					Global_14533 = 7;
					break;
				
				case 7:
					if (Global_2992[Global_14533 + 1] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 6;
						Global_14730 = 1;
					}
					break;
				
				case 8:
					Global_14533 = 6;
					break;
				
				default:
					Global_14533++;
					break;
			}
			if (Global_14730 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14527, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					Global_14533 = 2;
					break;
				
				case 1:
					if (Global_2992[0] == 1)
					{
						Global_14533 = 0;
					}
					else
					{
						Global_14533 = 2;
						Global_14730 = 1;
					}
					break;
				
				case 3:
					Global_14533 = 5;
					break;
				
				case 6:
					if (Global_2992[8] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 7;
						Global_14730 = 1;
					}
					break;
				
				default:
					Global_14533 = (Global_14533 - 1);
					break;
			}
			if (Global_14730 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14529, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[6])
					{
						Global_14533 = 6;
					}
					break;
				
				case 1:
					if (Global_2992[7])
					{
						Global_14533 = 7;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 4;
					}
					break;
				
				case 2:
					if (Global_2992[8])
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 5;
					}
					break;
				
				case 3:
					if (Global_2992[0])
					{
						Global_14533 = 0;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 6;
					}
					break;
				
				case 4:
					if (Global_2992[1])
					{
						Global_14533 = 1;
					}
					break;
				
				case 5:
					if (Global_2992[2])
					{
						Global_14533 = 2;
					}
					break;
				
				case 6:
					if (Global_2992[3])
					{
						Global_14533 = 3;
					}
					break;
				
				case 7:
					if (Global_2992[4])
					{
						Global_14533 = 4;
					}
					break;
				
				case 8:
					if (Global_2992[5])
					{
						Global_14533 = 5;
					}
					break;
			}
			if (Global_14730 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14530, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[3])
					{
						Global_14533 = 3;
					}
					break;
				
				case 1:
					if (Global_2992[4])
					{
						Global_14533 = 4;
					}
					break;
				
				case 2:
					if (Global_2992[5])
					{
						Global_14533 = 5;
					}
					break;
				
				case 3:
					if (Global_2992[6])
					{
						Global_14533 = 6;
					}
					break;
				
				case 4:
					if (Global_2992[7])
					{
						Global_14533 = 7;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 1;
					}
					break;
				
				case 5:
					if (Global_2992[8])
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 2;
					}
					break;
				
				case 6:
					if (Global_2992[0])
					{
						Global_14533 = 0;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 3;
					}
					break;
				
				case 7:
					if (Global_2992[1])
					{
						Global_14533 = 1;
					}
					break;
				
				case 8:
					if (Global_2992[2])
					{
						Global_14533 = 2;
					}
					break;
			}
			if (Global_14730 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
	}
	if (Global_2430[23 /*15*/].f_10 == 57)
	{
		if (Global_14532 == 1 && Global_14533 == 8)
		{
			if (iLocal_80 == 0)
			{
				iLocal_80 = 1;
				func_24(12);
			}
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

void func_25()
{
	func_99(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_26();
}

void func_26()
{
	if (func_27())
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

int func_27()
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

void func_28()
{
	func_99(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_29();
}

void func_29()
{
	if (func_27())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(3);
		}
		else
		{
			_MOVE_FINGER(4);
		}
	}
}

void func_30()
{
	func_99(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_31();
}

void func_31()
{
	if (func_27())
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

void func_32()
{
	func_99(Global_14534, "SET_INPUT_EVENT", TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
	func_33();
}

void func_33()
{
	if (func_27())
	{
		if (Global_14730 == 0)
		{
			_MOVE_FINGER(4);
		}
		else
		{
			_MOVE_FINGER(3);
		}
	}
}

void func_34()
{
	if (Global_14532)
	{
		if (TIMERA() > 50)
		{
			Global_14532 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14533)
			{
				case 6:
					if (Global_2992[7])
					{
						func_32();
						Global_14533 = 7;
					}
					break;
				
				case 7:
					if (Global_2992[6])
					{
						func_28();
						Global_14533 = 6;
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14533)
			{
				case 6:
					if (Global_2992[7])
					{
						func_32();
						Global_14533 = 7;
					}
					break;
				
				case 7:
					if (Global_2992[6])
					{
						func_28();
						Global_14533 = 6;
					}
					break;
				}
			}
	}
	if (Global_14532 == 0)
	{
		if (func_53(2, Global_14528, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 2:
					Global_14533 = 0;
					break;
				
				case 5:
					Global_14533 = 3;
					break;
				
				case 7:
					if (Global_2992[Global_14533 + 1] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 6;
						Global_14730 = 1;
					}
					break;
				
				case 8:
					Global_14533 = 6;
					break;
				
				default:
					Global_14533++;
					break;
			}
			if (Global_14730 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14527, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					Global_14533 = 2;
					break;
				
				case 3:
					Global_14533 = 5;
					break;
				
				case 6:
					if (Global_2992[8] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 7;
						Global_14730 = 1;
					}
					break;
				
				default:
					Global_14533 = (Global_14533 - 1);
					break;
			}
			if (Global_14730 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
	}
}

void func_35()
{
	if (Global_14532)
	{
		if (TIMERA() > 50)
		{
			Global_14532 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[1])
					{
						func_32();
						Global_14533 = 1;
					}
					break;
				
				case 1:
					if (Global_2992[2])
					{
						func_32();
						Global_14533 = 2;
					}
					break;
				
				case 2:
					if (Global_2992[3])
					{
						func_32();
						func_30();
						Global_14533 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_14533 = 4;
					}
					break;
				
				case 3:
					if (Global_2992[4])
					{
						func_32();
						Global_14533 = 4;
					}
					break;
				
				case 4:
					if (Global_2992[5])
					{
						func_32();
						Global_14533 = 5;
					}
					break;
				
				case 5:
					if (Global_2992[6])
					{
						func_32();
						func_30();
						Global_14533 = 6;
					}
					break;
				
				case 6:
					if (Global_2992[7])
					{
						func_32();
						Global_14533 = 7;
					}
					break;
				
				case 7:
					if (Global_2992[8])
					{
						func_32();
						Global_14533 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_14533 = 0;
					}
					break;
				
				case 8:
					if (Global_2992[0])
					{
						func_32();
						func_30();
						Global_14533 = 0;
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[8])
					{
						func_28();
						func_25();
						Global_14533 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_14533 = 7;
					}
					break;
				
				case 1:
					if (Global_2992[0])
					{
						func_28();
						Global_14533 = 0;
					}
					break;
				
				case 2:
					if (Global_2992[1])
					{
						func_28();
						Global_14533 = 1;
					}
					break;
				
				case 3:
					if (Global_2992[2])
					{
						func_28();
						func_25();
						Global_14533 = 2;
					}
					break;
				
				case 4:
					if (Global_2992[3])
					{
						func_28();
						Global_14533 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_14730 = 1;
						Global_14533 = 2;
					}
					break;
				
				case 5:
					if (Global_2992[4])
					{
						func_28();
						Global_14533 = 4;
					}
					break;
				
				case 6:
					if (Global_2992[5])
					{
						func_25();
						func_28();
						Global_14533 = 5;
					}
					break;
				
				case 7:
					if (Global_2992[6])
					{
						func_28();
						Global_14533 = 6;
					}
					break;
				
				case 8:
					if (Global_2992[7])
					{
						func_28();
						Global_14533 = 7;
					}
					break;
				}
			}
	}
	if (Global_14532 == 0)
	{
		if (func_53(2, Global_14528, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 2:
					Global_14533 = 0;
					break;
				
				case 5:
					Global_14533 = 3;
					break;
				
				case 7:
					if (Global_2992[Global_14533 + 1] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 6;
						Global_14730 = 1;
					}
					break;
				
				case 8:
					Global_14533 = 6;
					break;
				
				default:
					Global_14533++;
					break;
			}
			if (Global_14730 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14527, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					Global_14533 = 2;
					break;
				
				case 3:
					Global_14533 = 5;
					break;
				
				case 6:
					if (Global_2992[8] == 1)
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14533 = 7;
						Global_14730 = 1;
					}
					break;
				
				default:
					Global_14533 = (Global_14533 - 1);
					break;
			}
			if (Global_14730 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14529, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[6])
					{
						Global_14533 = 6;
					}
					break;
				
				case 1:
					if (Global_2992[7])
					{
						Global_14533 = 7;
					}
					break;
				
				case 2:
					if (Global_2992[8])
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 5;
					}
					break;
				
				case 3:
					if (Global_2992[0])
					{
						Global_14533 = 0;
					}
					break;
				
				case 4:
					if (Global_2992[1])
					{
						Global_14533 = 1;
					}
					break;
				
				case 5:
					if (Global_2992[2])
					{
						Global_14533 = 2;
					}
					break;
				
				case 6:
					if (Global_2992[3])
					{
						Global_14533 = 3;
					}
					break;
				
				case 7:
					if (Global_2992[4])
					{
						Global_14533 = 4;
					}
					break;
				
				case 8:
					if (Global_2992[5])
					{
						Global_14533 = 5;
					}
					break;
			}
			if (Global_14730 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
		if (func_53(2, Global_14530, 0))
		{
			Global_14730 = 0;
			switch (Global_14533)
			{
				case 0:
					if (Global_2992[3])
					{
						Global_14533 = 3;
					}
					break;
				
				case 1:
					if (Global_2992[4])
					{
						Global_14533 = 4;
					}
					break;
				
				case 2:
					if (Global_2992[5])
					{
						Global_14533 = 5;
					}
					break;
				
				case 3:
					if (Global_2992[6])
					{
						Global_14533 = 6;
					}
					break;
				
				case 4:
					if (Global_2992[7])
					{
						Global_14533 = 7;
					}
					break;
				
				case 5:
					if (Global_2992[8])
					{
						Global_14533 = 8;
					}
					else
					{
						Global_14730 = 1;
						Global_14533 = 2;
					}
					break;
				
				case 6:
					if (Global_2992[0])
					{
						Global_14533 = 0;
					}
					break;
				
				case 7:
					if (Global_2992[1])
					{
						Global_14533 = 1;
					}
					break;
				
				case 8:
					if (Global_2992[2])
					{
						Global_14533 = 2;
					}
					break;
			}
			if (Global_14730 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_14532 = 1;
			SETTIMERA(0);
		}
	}
}

void func_36()
{
	int iVar0;
	var uVar1;
	
	if (IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_29);
		if (Global_14726 == 0)
		{
			Global_14557 = iLocal_28;
		}
		else
		{
			Global_14558 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_14556 = Global_2956[iLocal_28];
		if (IS_BIT_SET(Global_2424, 10))
		{
			Global_14556 = 2;
			CLEAR_BIT(&Global_2424, 10);
		}
		if (iLocal_78 == 1)
		{
			Global_14557 = 1;
			Global_14556 = 0;
			Global_2538128 = 0;
			iLocal_78 = 0;
		}
		iVar0 = 0;
		if (IS_THREAD_ACTIVE(Global_14551))
		{
			iVar0 = 1;
		}
		if (Global_14556 == 3)
		{
			if (IS_BIT_SET(Global_2424, 3))
			{
				iVar0 = 1;
			}
			else if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
			{
				if (((((((IS_PED_ON_MOUNT(PLAYER_PED_ID()) || IS_STUNT_JUMP_IN_PROGRESS()) || IS_PLAYER_CLIMBING(PLAYER_ID())) || IS_PED_JACKING(PLAYER_PED_ID())) || IS_PED_HANGING_ON_TO_VEHICLE(PLAYER_PED_ID())) || IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID())) || IS_VEHICLE_DRIVEABLE(SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER_PED_ID()), 0)) || _IS_NIGHTVISION_ACTIVE())
				{
					iVar0 = 1;
				}
				if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
				{
					if (IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					uVar1 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (GET_ENTITY_UPRIGHT_VALUE(uVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_71590)
				{
					if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
					{
						GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14556 == 2)
		{
			if (IS_BIT_SET(Global_2424, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_14556 == 23 && ARE_STRINGS_EQUAL(&(Global_2430[Global_14556 /*15*/]), "CELL_BENWEB"))
		{
			if (IS_BIT_SET(Global_2424, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_71590)
		{
			if (Global_14556 == 15 || Global_14556 == 5)
			{
			}
			else
			{
				if (Global_14556 == 23)
				{
					if (((IS_BIT_SET(Global_4269308, 4) == 0 && Global_1573916 == 0) && IS_BIT_SET(Global_4269308, 20) == 0) && IS_BIT_SET(Global_4269308, 22) == 0)
					{
					}
					if ((((IS_BIT_SET(Global_4269308, 20) == 1 && IS_BIT_SET(Global_4269308, 4) == 0) && Global_1573916 == 0) && IS_BIT_SET(Global_4269308, 22) == 0) && IS_BIT_SET(Global_4269308, 26) == 0)
					{
						iVar0 = 1;
						SET_BIT(&Global_4269308, 21);
					}
				}
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (GET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 78, 1) || IS_PLAYER_FREE_AIMING(PLAYER_ID()))
					{
						if (Global_14556 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					CLEAR_BIT(&Global_2423, 17);
					Global_14553.f_1 = 7;
					if (IS_BIT_SET(Global_2423, 23))
					{
					}
					else
					{
						func_38();
						REQUEST_SCRIPT(&(Global_2430[Global_14556 /*15*/].f_5));
						SET_BIT(&Global_2423, 23);
					}
				}
				else
				{
					if (Global_14556 == 2 || Global_14556 == 3)
					{
					}
					func_37();
				}
			}
		}
		else
		{
			switch (Global_14556)
			{
				case 3:
					if (Global_105618 == 1)
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
					SET_BIT(&Global_2423, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_14728 == 0)
					{
						if ((Global_2427 == 0 && iLocal_31 == 0) && Global_36425 == 15)
						{
							iLocal_31 = 1;
							func_38();
							if (!Global_106565.f_14045.f_85)
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
			if (_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_14556 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_73(14))
			{
				if (Global_14556 != 3 && Global_14556 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
				Global_14553.f_1 = 7;
				if (IS_BIT_SET(Global_2423, 23))
				{
				}
				else
				{
					REQUEST_SCRIPT(&(Global_2430[Global_14556 /*15*/].f_5));
					SET_BIT(&Global_2423, 23);
				}
			}
			else if (Global_14556 != 20)
			{
				if (Global_106565.f_14045.f_86 == 0)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_14556 == 3)
						{
							if (IS_PLAYER_PLAYING(PLAYER_ID()))
							{
								if (IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
								{
									func_70("CELL_38", -1);
									Global_106565.f_14045.f_86 = 1;
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

void func_37()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

void func_38()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_39();
	}
}

void func_39()
{
	if (func_27())
	{
		_MOVE_FINGER(5);
	}
}

void func_40()
{
	if (Global_14519 == 0)
	{
		if (func_13(Global_14506[Global_14498 /*3*/], Global_14499[Global_14498 /*3*/], Global_14513, Global_14513, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			CLEAR_BIT(&Global_2424, 24);
			SET_BIT(&Global_2424, 26);
		}
	}
}

void func_41()
{
	if (Global_14519 == 0)
	{
		if (func_13(Global_14499[Global_14498 /*3*/], Global_14506[Global_14498 /*3*/], Global_14513, Global_14513, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			CLEAR_BIT(&Global_2424, 25);
			if (Global_15879)
			{
				CLEAR_BIT(&Global_2424, 27);
			}
		}
	}
}

void func_42()
{
	if (Global_14519 == 0 && Global_14493 == 0)
	{
		if (func_13(Global_14506[Global_14498 /*3*/], Global_14499[Global_14498 /*3*/], Global_14513, Global_14513, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4269587 = 0;
		}
	}
}

void func_43()
{
	float fVar0;
	float fVar1;
	
	if (IS_BIT_SET(Global_2425, 2))
	{
		SET_BIT(&Global_2424, 8);
		SET_BIT(&Global_2423, 14);
		Global_14493 = 0;
		iLocal_18 = 0;
		SET_MOBILE_PHONE_ROTATION(Global_14513, 0);
	}
	else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_13(Global_14499[Global_14498 /*3*/], Global_14506[Global_14498 /*3*/], Global_14516, Global_14513, 450f, 1);
		if (fVar0 >= 1f)
		{
			SET_BIT(&Global_2424, 8);
			SET_BIT(&Global_2423, 14);
			Global_14493 = 0;
			iLocal_18 = 0;
			CLEAR_BIT(&Global_2425, 2);
			iLocal_38 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			SET_BIT(&Global_2424, 8);
		}
	}
	else
	{
		if (iLocal_38 == 0)
		{
			vLocal_39 = { Global_14506[Global_14498 /*3*/] };
			vLocal_39.x = (vLocal_39.x - 10f);
			vLocal_39.y = (vLocal_39.y + 20f);
			iLocal_38 = 1;
		}
		fVar1 = func_13(Global_14499[Global_14498 /*3*/], vLocal_39, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			SET_BIT(&Global_2424, 8);
			SET_BIT(&Global_2423, 14);
			Global_14493 = 0;
			iLocal_18 = 0;
			CLEAR_BIT(&Global_2425, 2);
			iLocal_38 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			SET_BIT(&Global_2424, 8);
		}
	}
}

void func_44()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_63 = GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), uLocal_62);
	}
	else
	{
		iLocal_58 = GET_GAME_TIMER();
		iLocal_63 = (iLocal_58 - iLocal_57);
	}
	if (iLocal_63 > 4000)
	{
		uLocal_45 = func_91();
		if (IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_62 = GET_NETWORK_TIME();
		}
		else
		{
			iLocal_57 = GET_GAME_TIMER();
		}
	}
}

void func_45()
{
	if (Global_14552 == 1)
	{
		func_106();
		if (Global_14531 == 0)
		{
			if (func_53(2, Global_14523, 0))
			{
				if (IS_BIT_SET(Global_2424, 8))
				{
					if (Global_15913 == 0)
					{
						func_37();
						Global_14531 = 1;
						Global_14552 = 3;
						Global_15915 = 1;
						if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							STOP_PED_RINGTONE(PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_14531 == 0)
		{
			if (func_53(2, Global_14522, 0))
			{
				if (IS_BIT_SET(Global_2424, 8))
				{
					func_38();
					Global_14531 = 1;
					Global_14552 = 2;
					if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
					{
						STOP_PED_RINGTONE(PLAYER_PED_ID());
					}
					func_50();
					func_49();
				}
			}
		}
	}
	else
	{
		if (iLocal_55 == 0)
		{
			if (IS_BIT_SET(Global_2423, 27))
			{
				iLocal_55 = 1;
				SETTIMERB(0);
			}
		}
		else
		{
			if (Global_14553.f_1 > 3)
			{
				if (TIMERB() > 1500)
				{
					if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
					{
						if (!IS_PED_RINGTONE_PLAYING(PLAYER_PED_ID()))
						{
							if (Global_14496)
							{
								PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER_PED_ID(), 1);
							}
							else if (!IS_BIT_SET(Global_2425, 5))
							{
								PLAY_PED_RINGTONE("Remote_Ring", PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!IS_BIT_SET(Global_2423, 27))
			{
				iLocal_55 = 0;
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					STOP_PED_RINGTONE(PLAYER_PED_ID());
				}
			}
		}
		if (Global_14552 == 0)
		{
			if (Global_14531 == 0)
			{
				if (func_53(2, Global_14521, 0) || Global_2538128 == 1)
				{
					if (IS_PLAYER_PLAYING(PLAYER_ID()))
					{
						if (IS_PLAYER_CONTROL_ON(PLAYER_ID()))
						{
							if (IS_BIT_SET(Global_2424, 8))
							{
								switch (Global_14553.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_14725 == 0)
										{
											if (Global_14726 == 1)
											{
												func_37();
												Global_14726 = 0;
												func_99(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_77();
												func_75();
												func_74(1);
												func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
												{
													PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_14542, 1);
												}
												iLocal_18 = 0;
												Global_14553.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_14553.f_1 = 3;
										break;
									
									case 7:
										if (IS_BIT_SET(Global_2423, 23) == 1)
										{
										}
										if ((Global_3031 - Global_3030) > Global_3032 && IS_BIT_SET(Global_2423, 23) == 0)
										{
											if (IS_BIT_SET(Global_2424, 0))
											{
											}
											else
											{
												func_37();
												Global_3029 = 1;
												Global_14553.f_1 = 6;
												if (Global_71590)
												{
													func_99(Global_14534, "SET_THEME", TO_FLOAT(Global_4269584), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_2426 = 99;
												if (Global_2538128 == 0)
												{
													func_46();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_1738 == 132)
										{
											if (Global_2534821.f_1 || IS_BIT_SET(Global_2424, 20))
											{
												func_37();
												func_68();
											}
										}
										else
										{
											func_37();
											func_68();
											Global_15915 = 1;
										}
										break;
									
									case 9:
										if (Global_15866 == 0)
										{
											Global_14553.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2538128 == 1)
								{
									iLocal_78 = 1;
									Global_2538128 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_46()
{
	vector3 vVar0;
	
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
			func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_74(Global_3028);
			if (Global_3028 == 1)
			{
				func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_99(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_72(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_93();
				func_99(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_48("CELL_300");
					func_48("CELL_217");
					func_48("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_99(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_99(Global_14534, "SET_THEME", TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_15879)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_48("CELL_300");
					func_48("CELL_219");
					func_48("CELL_219");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&vVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&vVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &vVar0, "CELL_195", 0);
					}
					else
					{
						func_99(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &vVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_99(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_47();
			break;
		
		default:
			break;
	}
}

void func_47()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_2423, 20))
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_48(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_49()
{
	if (Global_15879)
	{
		if (Global_71590)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
			{
				if (!IS_PC_VERSION())
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					SET_BIT(&(Global_2528542.f_1723), 15);
				}
			}
		}
	}
}

void func_50()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (!Global_15874)
		{
			func_72(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_72(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_2423, 17);
			if (IS_BIT_SET(Global_2423, 20))
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_72(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15879)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
				END_TEXT_COMMAND_SCALEFORM_STRING();
				func_48("CELL_300");
				func_48("CELL_219");
				func_48("CELL_219");
				END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
			{
				func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(4), TO_FLOAT(0), TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_219", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
			}
		}
		func_99(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	Global_14732 = 0;
	func_52();
}

void func_52()
{
	if (IS_MOBILE_PHONE_CALL_ONGOING() || Global_14552 == 1)
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = Global_14555;
		return;
	}
}

int func_53(int iParam0, var uParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
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

int func_54()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_56(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_14725)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_14553.f_1 = 3;
	}
}

int func_57()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_59()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_60()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (func_69() && IS_PED_IN_COVER(PLAYER_PED_ID(), 0))
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

void func_62()
{
	if ((IS_BIT_SET(Global_2423, 14) && Global_4269587 == 0) && Global_14493 == 0)
	{
		if (func_67())
		{
		}
		else
		{
			func_63();
		}
		if (Global_14553.f_1 == 9)
		{
			if (Global_15879 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_63()
{
	struct<2> Var0;
	
	GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14506[Global_14498 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14493 = 1;
	}
}

void func_64()
{
	if ((IS_BIT_SET(Global_2423, 14) && Global_4269587 == 0) && Global_14493 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (IS_BIT_SET(Global_2424, 26))
			{
				CLEAR_BIT(&Global_2424, 24);
				CLEAR_BIT(&Global_2424, 25);
				CLEAR_BIT(&Global_2424, 27);
				CLEAR_BIT(&Global_2424, 26);
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
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
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
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
		if (Global_14553.f_1 == 9)
		{
			if (Global_15879 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14499[Global_14498 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4269587 = 1;
	}
}

int func_66()
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
		if (func_73(14))
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

int func_67()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_68()
{
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (IS_BIT_SET(Global_2423, 11))
			{
				if (!Global_14496)
				{
					TASK_USE_MOBILE_PHONE(PLAYER_PED_ID(), 0, 1);
				}
				if (Global_71590)
				{
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 244, 1);
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 243, 1);
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 242, 1);
				}
				CLEAR_BIT(&Global_2423, 11);
			}
		}
	}
}

int func_69()
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

void func_70(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_71()
{
	GET_MOBILE_PHONE_RENDER_ID(&iLocal_42);
	if (iLocal_42 == -1)
	{
	}
}

void func_72(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_48(cParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_48(iParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_48(iParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_48(iParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_48(iParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

bool func_73(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_74(int iParam0)
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
		if (func_73(14))
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
								func_48(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(uVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2430[iVar1 /*15*/].f_10);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_48(&(Global_2430[iVar1 /*15*/]));
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
								func_48(&(Global_2430[iVar1 /*15*/]));
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
								func_48(&(Global_2430[iVar1 /*15*/]));
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
								func_48(&(Global_2430[iVar1 /*15*/]));
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
								func_48(&(Global_2430[iVar1 /*15*/]));
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_72(Global_14534, "SET_DATA_SLOT", TO_FLOAT(1), TO_FLOAT(iVar0), TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_75()
{
	if (Global_71590 == 0)
	{
		Global_2430[14 /*15*/].f_4 = -99;
		Global_2430[4 /*15*/].f_4 = -99;
		if (Global_2458608)
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

void func_76(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2430[iParam0 /*15*/]), sParam1, 16);
	Global_2430[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2430[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2430[iParam0 /*15*/].f_9 = GET_HASH_KEY(sParam3);
	Global_2430[iParam0 /*15*/].f_10 = iParam4;
	Global_2430[iParam0 /*15*/].f_11 = iParam5;
	Global_2430[iParam0 /*15*/].f_12 = iParam6;
	Global_2430[iParam0 /*15*/].f_13 = iParam7;
	Global_2430[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2430[iParam0 /*15*/].f_12 == 0)
	{
		Global_2430[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_13 == 0)
	{
		Global_2430[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_14 == 0)
	{
		Global_2430[iParam0 /*15*/].f_14 = 0;
	}
}

void func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2430[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71590 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (Global_106565.f_28044[iVar2 /*29*/].f_19[Global_14553] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_76(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_76(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_76(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36425 == 15 && func_55(0) == 0) && Global_2428 == 0)
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 0;
			Global_2429 = 255;
		}
		else
		{
			func_76(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 1;
			Global_2429 = 42;
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
		if (Global_106565.f_14045.f_89 == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106565.f_14045.f_88 == 1)
		{
			func_76(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_76(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_76(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_76(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_76(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_76(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
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
		if (IS_BIT_SET(Global_4269308, 4) == 1)
		{
			func_76(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_76(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_76(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_76(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_76(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_76(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
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
		if (!IS_BIT_SET(Global_4269308, 4) == 1)
		{
			if (Global_1573916)
			{
				func_76(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269308, 20) == 1)
			{
				func_76(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269308, 22) == 1)
			{
				func_76(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269308, 26) == 1)
			{
				func_76(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((IS_BIT_SET(Global_4269308, 4) == 0 && Global_1573916 == 0) && IS_BIT_SET(Global_4269308, 20) == 0) && IS_BIT_SET(Global_4269308, 22) == 0) && IS_BIT_SET(Global_4269308, 26) == 0)
		{
			func_76(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_78(int iParam0)
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
	if (NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
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

int func_79()
{
	if (IS_ORBIS_VERSION())
	{
		if (!_0xBD545D44CCE70597())
		{
			if (_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_80()
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		iLocal_71 = GET_ZONE_SCUMMINESS(GET_ZONE_AT_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1)));
	}
	switch (iLocal_71)
	{
		case 0:
			iLocal_46 = 5;
			break;
		
		case 1:
			iLocal_46 = 5;
			break;
		
		case 2:
			iLocal_46 = 4;
			break;
		
		case 3:
			iLocal_46 = 4;
			break;
		
		case 4:
			iLocal_46 = 3;
			break;
		
		case 5:
			iLocal_46 = 2;
			break;
		
		default:
			iLocal_46 = 3;
			break;
	}
	iLocal_72 = GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_72 < 2)
	{
		if (iLocal_46 > 2)
		{
			iLocal_46 = (iLocal_46 - 1);
		}
	}
	if (iLocal_73 == 1 || func_81())
	{
		iLocal_46 = 0;
	}
	func_99(Global_14534, "SET_PROVIDER_ICON", TO_FLOAT(uLocal_45), TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		iVar0 = func_87();
		if (func_86(iVar0))
		{
			vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
			iVar4 = 0;
			while (iVar4 < Global_106565.f_7682.f_136)
			{
				if (IS_BIT_SET(Global_106565.f_7682[iVar4 /*15*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_85(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_106565.f_7682.f_764)
			{
				if (IS_BIT_SET(Global_106565.f_7682.f_651[iVar4 /*14*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_83(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_106565.f_7682.f_866)
			{
				if (IS_BIT_SET(Global_106565.f_7682.f_765[iVar4 /*10*/].f_2, iVar0))
				{
					if (func_84(vVar1, func_82(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	return Global_106565.f_7682.f_765[iParam0 /*10*/].f_7;
}

int func_83(int iParam0)
{
	return Global_106565.f_7682.f_651[iParam0 /*14*/].f_7;
}

int func_84(vector3 vParam0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_36426)
		{
			return 0;
		}
		if (VDIST2(vParam0, Global_36426[iParam3 /*5*/]) <= (Global_36426[iParam3 /*5*/].f_3 * Global_36426[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_36426[iParam3 /*5*/].f_4 != -1)
		{
			return func_84(vParam0, Global_36426[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	return Global_106565.f_7682[iParam0 /*15*/].f_7;
}

bool func_86(int iParam0)
{
	return iParam0 < 3;
}

var func_87()
{
	func_88();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_88()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_90(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_89(PLAYER_PED_ID());
			if (func_86(iVar0) && (!func_73(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_86(Global_106565.f_2357.f_539.f_4321))
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

int func_89(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
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

int func_90(int iParam0)
{
	if (func_86(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_91()
{
	func_107();
	return Global_106565.f_14045[Global_14553 /*20*/].f_8;
}

struct<13> func_92(var uParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_93()
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

int func_94(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_95(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
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

var func_96()
{
	return Global_1312745;
}

void func_97()
{
	if (func_73(14))
	{
		if (Global_2458608)
		{
			if (Global_14553.f_1 == 6)
			{
				if (Global_14533 == 7)
				{
					func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_14533 = 6;
					func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_14553.f_1 == 6)
		{
			func_99(Global_14534, "DISPLAY_VIEW", 1f, TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_48 = GET_CLOCK_MINUTES();
	if (iLocal_48 != Global_2426)
	{
		Global_2426 = iLocal_48;
		uLocal_47 = GET_CLOCK_HOURS();
		iLocal_49 = GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_49)
		{
			case 0:
				StringCopy(&cLocal_50, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&cLocal_50, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&cLocal_50, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&cLocal_50, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&cLocal_50, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&cLocal_50, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&cLocal_50, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&cLocal_50, "CELL_206", 16);
				break;
		}
		func_72(Global_14534, "SET_TITLEBAR_TIME", TO_FLOAT(uLocal_47), TO_FLOAT(iLocal_48), -1f, -1f, -1f, &cLocal_50, 0, 0, 0, 0);
		if (Global_14496 == 0)
		{
			func_80();
		}
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			iLocal_56 = GET_ENTITY_HEALTH(PLAYER_PED_ID());
		}
	}
}

void func_98()
{
	if (Global_71590)
	{
		StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
		CREATE_MOBILE_PHONE(0);
	}
	else if (Global_14496)
	{
		CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_14553)
		{
			case 0:
				StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
				CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
				CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
				CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
				CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_14516 = { -90f, -130f, 0f };
	if (GET_IS_HIDEF())
	{
		Global_14498 = 0;
		Global_14499[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 117.2f), (GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_14506[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 117.2f), (GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_14498 = 0;
		Global_14499[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 85.7f), (GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_14506[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 85.7f), (GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_14481 = { Global_14499[Global_14498 /*3*/] };
	SET_MOBILE_PHONE_POSITION(Global_14499[Global_14498 /*3*/]);
	SET_MOBILE_PHONE_ROTATION(Global_14516, 0);
	Global_14493 = 1;
}

void func_99(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_100()
{
	Global_2534821.f_1 = 0;
	Global_2534821 = 0;
	Global_2534821.f_2 = 0;
	Global_2534821.f_33 = -1;
	Global_2534821.f_34 = -1;
	StringCopy(&(Global_2534821.f_4), "", 64);
	StringCopy(&(Global_2534821.f_39[0 /*16*/]), "", 64);
	Global_2534821.f_38 = 0;
	Global_2534821.f_56 = 0;
	Global_2534821.f_57 = 0;
	Global_2534821.f_58 = -2;
	Global_2534821.f_3 = 0;
	func_101(&(Global_2534821.f_20));
}

void func_101(var uParam0)
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

void func_102()
{
	Global_2534821.f_2 = 1;
	Global_2534821.f_38 = 1;
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				WAIT(0);
			}
			NETWORK_SESSION_VOICE_LEAVE();
			Global_2534821 = 0;
			Global_2534821.f_2 = 0;
		}
		else if (func_103(Global_2534821.f_20))
		{
			if (NETWORK_IS_FRIEND(&(Global_2534821.f_20)))
			{
				if (!_NETWORK_IS_FRIEND_ONLINE_2(&(Global_2534821.f_20)))
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
	if (Global_2534821.f_37)
	{
		func_56(0);
	}
	Global_2534821.f_37 = 0;
	Global_2534821.f_3 = 0;
}

bool func_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_104()
{
	Global_14732 = 0;
	func_8();
}

void func_105(var uParam0, char* sParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_106()
{
	SET_INPUT_EXCLUSIVE(0, Global_14522);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 69, 1);
	if (_IS_INPUT_DISABLED(2))
	{
		SET_INPUT_EXCLUSIVE(0, Global_14522);
		SET_INPUT_EXCLUSIVE(0, Global_14523);
		DISABLE_CONTROL_ACTION(0, 24, 1);
		DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_71590)
	{
		Global_106565.f_14045[3 /*20*/].f_10 = func_94(1197, -1, 0);
	}
	if (IS_PC_VERSION())
	{
		if (DECOR_EXIST_ON(PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((GET_GAME_TIMER() - iLocal_74) >= 300 || iLocal_74 == 0) || iLocal_74 > GET_GAME_TIMER())
		{
			SET_PAD_SHAKE(0, 100, 100);
			iLocal_74 = GET_GAME_TIMER();
		}
	}
	else if (Global_106565.f_14045[Global_14553 /*20*/].f_10 == 1)
	{
		if (((GET_GAME_TIMER() - iLocal_74) >= 300 || iLocal_74 == 0) || iLocal_74 > GET_GAME_TIMER())
		{
			SET_PAD_SHAKE(0, 100, 100);
			iLocal_74 = GET_GAME_TIMER();
		}
	}
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (!IS_PED_RINGTONE_PLAYING(PLAYER_PED_ID()))
		{
			if (Global_71590)
			{
				if (!ARE_STRINGS_EQUAL(&(Global_3228[3 /*2811*/][1 /*281*/].f_144[func_94(1198, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					PLAY_PED_RINGTONE(&(Global_3228[3 /*2811*/][1 /*281*/].f_144[func_94(1198, -1, 0) /*6*/]), PLAYER_PED_ID(), 1);
				}
			}
			else if (!ARE_STRINGS_EQUAL(&(Global_106565.f_14045[Global_14553 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (IS_PC_VERSION())
					{
						if (DECOR_EXIST_ON(PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							PLAY_PED_RINGTONE(&(Global_106565.f_14045[Global_14553 /*20*/].f_11), PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						PLAY_PED_RINGTONE(&(Global_106565.f_14045[Global_14553 /*20*/].f_11), PLAYER_PED_ID(), 1);
					}
				}
			}
		}
	}
}

void func_107()
{
	if (func_73(14))
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
		Global_14553 = func_87();
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

