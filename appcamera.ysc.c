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
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
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
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
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
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_148())
	{
		Global_411C2E = 99;
		Global_411C2F = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_411C2E = 0;
		Global_411C2F = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_147();
	if (func_146(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_145();
	iLocal_63 = AUDIO::GET_SOUND_ID();
	if (Global_387A == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_41D7 = 0;
	Global_41D8 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::IS_PED_ON_MOUNT(AUDIO::_0x0626A247D2405330()))
		{
			Global_41D7 = 1;
		}
		if (GRAPHICS::_IS_NIGHTVISION_ACTIVE())
		{
			Global_41D7 = 1;
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330()), 0))
		{
			Global_41D7 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			Global_41D7 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(AUDIO::_0x0626A247D2405330()))
		{
			Global_41D7 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_41D7 = 1;
			}
			iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("RHINO") || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("CUTTER")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("KHANJALI")) || (ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("BARRAGE") && VEHICLE::_0xE33FFA906CE74880(iLocal_99, func_144(AUDIO::_0x0626A247D2405330(), 1))))
			{
				Global_41D7 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_99, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_11625)
					{
						if (!func_143())
						{
							BRAIN::TASK_VEHICLE_TEMP_ACTION(AUDIO::_0x0626A247D2405330(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_11625)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(CAM::_0xDC9DA9E8789F5246(), 0);
		}
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 21);
	func_142(0);
	MISC::SET_BIT(&Global_94F, 17);
	if (Global_3877 == 0)
	{
		func_141();
	}
	else
	{
		uLocal_91 = unk_0x9934FEFB3B8C6DB8("camera_gallery");
		uLocal_92 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_92))
		{
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_11625)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_140())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_139(uLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), 3212836864, 3212836864, 3212836864, 3212836864);
		func_138(uLocal_91, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "DISPLAY_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(16);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	vLocal_41 = { Global_3889 };
	vLocal_42 = { Global_3882[Global_387A /*3*/] };
	Global_41D8 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_38B1.f_1 > 3)
	{
		Global_38B1.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 3);
	}
	func_136();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::_0x76BF03FADBF154F5())
	{
	}
	if (Global_440000.f_2402B)
	{
	}
	if (Global_440000.f_2402D == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3892);
		PAD::SET_INPUT_EXCLUSIVE(0, 186);
		RECORDING::_STOP_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (func_135())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
			{
				MISC::SET_BIT(&Global_41212A, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
		}
		if (!Global_19E56.f_36C7.f_51)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_135())
						{
							MISC::SET_BIT(&Global_41212A, 13);
							Global_19E56.f_36C7.f_51 = 1;
							func_134("CELL_FOC_HLP", 4294967295);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_440000.f_2402A == 0 && Global_440000.f_2402B == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_133();
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 200, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_100 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_3896);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_135())
			{
				iLocal_81 = 1;
				Global_38B1.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_38B1.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
			{
				Global_38B1.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_122())
				{
					Global_38B1.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
			}
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
				{
					Global_38B1.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				if ((PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PLAYER::IS_PLAYER_FREE_AIMING(CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_121())
					{
					}
					else
					{
						Global_38B1.f_1 = 3;
						MISC::SET_GAME_PAUSED(0);
					}
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					if (Global_11625 == 1)
					{
						Global_38B1.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(AUDIO::_0x0626A247D2405330()) > 0.3f)
					{
						Global_38B1.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					func_120();
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						func_117(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								func_117(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							RECORDING::_STOP_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_11625 == 0)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 18))
					{
						func_116();
						if ((Global_38B1 == 0 || Global_38B1 == 1) || Global_38B1 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(AUDIO::_0x0626A247D2405330()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
								{
								}
								else
								{
									Global_38B1.f_1 = 3;
									MISC::SET_GAME_PAUSED(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_115();
			}
			if (Global_38B1.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_38B1.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_113();
									if (Global_41DC == 0 && Global_41D9 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, 1);
										HUD::_REMOVE_LOADING_PROMPT();
										iLocal_100 = 0;
										func_112();
										if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
										{
											vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
										}
										func_111();
										iLocal_60++;
										if (func_148())
										{
											func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
										}
										else
										{
											func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_106();
									}
									if (Global_41D9 == 0)
									{
										iLocal_100 = 0;
										HUD::_REMOVE_LOADING_PROMPT();
										if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
										{
											vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
										}
										func_105();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_106();
										if (func_148())
										{
											if (Global_411C2F == 0)
											{
												if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
												{
													func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
												}
											}
										}
										else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
										{
											func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
										}
										func_104();
										func_103(1);
									}
								}
								else if (Global_38B1.f_1 != 9)
								{
									if (Global_41D8 == 1)
									{
										if (Global_41D7 == 0)
										{
											func_102();
										}
									}
									else if ((Global_BAF - Global_BAE) > Global_BB0)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_101())
										{
											if (func_100() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_41D7 == 0)
												{
													func_111();
													Global_41D7 = 1;
													HUD::CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_99(0, 0);
													func_103(0);
													iLocal_66 = 0;
													func_98();
													iLocal_93 = 0;
													func_96(0, 1);
													func_139(Global_389E, "DISPLAY_VIEW", 16f, 3212836864, 3212836864, 3212836864, 3212836864);
													func_94(1);
												}
											}
										}
										if (func_93(2, Global_3891, 0))
										{
											if (func_135())
											{
												if (Global_193F0F || Global_14080E)
												{
												}
												else if (func_100() && iLocal_78)
												{
												}
												else if (!func_101())
												{
													if (iLocal_78 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														func_92(1);
													}
												}
											}
											else if (func_100() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												MISC::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_41D7 == 0)
												{
													func_111();
													Global_41D7 = 1;
													HUD::CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_99(0, 0);
													func_103(0);
													iLocal_66 = 0;
													func_98();
													iLocal_93 = 0;
													func_96(0, 1);
													func_139(Global_389E, "DISPLAY_VIEW", 16f, 3212836864, 3212836864, 3212836864, 3212836864);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_91();
											iLocal_52 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_91();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
										{
											func_91();
											iLocal_53 = 1;
										}
									}
									else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
									{
										func_91();
										iLocal_53 = 0;
									}
									if (Global_41D7 == 1)
									{
										func_84();
									}
									else if (Global_38B1.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_80();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_105();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
													{
														func_138(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_38B1.f_1 > 3)
														{
															func_133();
															func_115();
															func_79();
															RECORDING::_STOP_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_148())
												{
													if (Global_411C2F == 0)
													{
														if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
														{
															func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
														}
													}
												}
												else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
												{
													func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
												}
												func_115();
												func_133();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_106();
												iLocal_87 = 0;
												func_138(uLocal_91, "OPEN_SHUTTER");
											}
											func_104();
											func_103(1);
											func_78();
										}
									}
									if (iLocal_94 == 1)
									{
										func_75();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											MISC::SET_BIT(&Global_94F, 18);
											if (Global_41D7 == 0)
											{
												func_96(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_41D7 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_41DA == 0)
											{
												func_10();
											}
										}
										else
										{
											func_79();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_38B1.f_1 > 3)
					{
						if (Global_41D8 == 1)
						{
							if (Global_41D7 == 0)
							{
								func_102();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, 4294967295, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
					}
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, 4294967295, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = NETWORK::_0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case 4294967295:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, 4294967295, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_96(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							iLocal_104 = 0;
							HUD::_0x9E778248D6685FE0("Gallery");
							HUD::_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_96(0, 1);
						iLocal_62 = 0;
					}
					if (!MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_3895))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_96(0, 1);
				}
			}
		}
		iLocal_59 = MISC::GET_GAME_TIMER();
		if (func_135())
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
			{
				MISC::SET_BIT(&Global_41212A, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			Global_41D7 = 0;
			Global_41D8 = 0;
			Global_41DA = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_92);
			MISC::SET_GAME_PAUSED(0);
			if (Global_395B == 1)
			{
				MISC::SET_BIT(&Global_94F, 17);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, 1);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(CAM::_0xDC9DA9E8789F5246(), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 3);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_41DB = 1;
			AUDIO::STOP_SOUND(iLocal_63);
			AUDIO::RELEASE_SOUND_ID(iLocal_63);
			HUD::_REMOVE_LOADING_PROMPT();
			func_98();
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x696835D78F5EA372(0);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330());
			}
			if (Global_411C2F > 0 && Global_411C2F < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_411C2F]);
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 18);
			func_96(0, 1);
			if (func_146(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
	}
}

void func_1(int iParam0)//Position - 0x1217
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_SET_PHONE_LEAN(1);
		}
		else if (Global_38B1.f_1 > 3)
		{
			MOBILE::_SET_PHONE_LEAN(0);
		}
	}
}

int func_2()//Position - 0x1242
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

int func_3()//Position - 0x1289
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x12CC
{
	iLocal_57 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = GRAPHICS::_GET_NUMBER_OF_PHOTOS();
			iLocal_61 = GRAPHICS::_GET_MAXIMUM_NUMBER_OF_PHOTOS_2();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
					{
						if (func_148())
						{
							if (Global_411C2F == 0)
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
								{
									func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
								}
							}
							func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
						}
						else
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
							{
								func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
							func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
				}
				iLocal_55 = 0;
			}
			HUD::_REMOVE_LOADING_PROMPT();
			break;
		
		case 1:
			if (!HUD::_IS_LOADING_PROMPT_BEING_DISPLAYED())
			{
				HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING("CELL_SPINNER2");
				HUD::_END_TEXT_COMMAND_BUSY_STRING(1);
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_38B1.f_1 = 3;
				Global_41DB = 1;
			}
			HUD::_REMOVE_LOADING_PROMPT();
			break;
	}
}

void func_5()//Position - 0x1467
{
	if (func_93(2, Global_3892, 0))
	{
		func_1(0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			func_112();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			}
			func_111();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 14))
			{
				func_134("CELL_299", 4294967295);
			}
			else
			{
				func_111();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_96(1, 1);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_133();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_79();
			func_120();
			func_115();
		}
		MISC::SET_GAME_PAUSED(0);
		func_112();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
		}
		func_106();
		func_111();
	}
	if (func_93(2, Global_3896, 0))
	{
		func_1(0);
		if (func_100() || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_112();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			}
			func_111();
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
	{
		if (func_93(2, Global_3895, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(0);
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_133();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_133();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_41DB = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_96(0, 1);
			Global_41D7 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			}
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			if (!Global_26862F.f_1828)
			{
				MISC::SET_BIT(&Global_94F, 9);
			}
			iLocal_93 = 0;
			func_139(Global_389E, "DISPLAY_VIEW", 16f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
	}
}

void func_6()//Position - 0x16A1
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_7();
	}
}

void func_7()//Position - 0x16C7
{
	if (func_2())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_8()//Position - 0x16DB
{
	iLocal_100 = 1;
	Global_41DC = 1;
	HUD::CLEAR_FLOATING_HELP(0, 1);
}

int func_9()//Position - 0x16F0
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_38B1.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()//Position - 0x1738
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_70();
		func_66();
		func_65();
		fLocal_36 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_37 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_84 = 1;
				func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_61();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_84 = 0;
			func_106();
		}
		if (iLocal_85 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_85 = 1;
				func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
				}
				else if (!func_135())
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				func_60();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_85 = 0;
			func_106();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_106();
	}
	func_120();
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 200, 1);
	}
	if (func_135())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
		{
			MISC::SET_BIT(&Global_41212A, 2);
			func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_106 == 0) && !func_135())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 2);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
					{
						func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_41212A, 2);
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SET_SEETHROUGH(false);
			func_59("CELL_FOCUS");
			GRAPHICS::SET_SEETHROUGH(true);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (!func_58(14))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 10))
			{
				if ((Global_11625 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_FOCUS_LOCK");
					GRAPHICS::SET_SEETHROUGH(true);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_4124BE));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					GRAPHICS::SET_SEETHROUGH(false);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 10);
				}
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 10))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 10);
		}
		iLocal_33 = MISC::GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				vLocal_35 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_38B1.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				iLocal_32 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, 182) && !func_135())
		{
			unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
			iLocal_83 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SET_SEETHROUGH(false);
			func_59("CELL_FOCUS");
			GRAPHICS::SET_SEETHROUGH(true);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, 182) && !func_135())
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
		iLocal_83 = 1;
		if (!func_58(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SET_SEETHROUGH(true);
			func_59("CELL_FOCUS");
			GRAPHICS::SET_SEETHROUGH(true);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
	if (func_148())
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_106 == 0) && !func_135())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330());
						if (Global_38B1 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(AUDIO::_0x0626A247D2405330(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(AUDIO::_0x0626A247D2405330(), 1);
							if (iVar3 != 4294967295)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == 4294967295 && iVar3 > 4294967295)
									{
										if (iLocal_24 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330());
						unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
					}
				}
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_106 == 0) && !func_135())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_411C2E], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							unk_0x696835D78F5EA372(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						unk_0x696835D78F5EA372(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					unk_0x696835D78F5EA372(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					unk_0x696835D78F5EA372(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_135())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_106 == 0)
		{
			if (func_148())
			{
				Global_411C2F++;
				unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
			}
			if (Global_411C2F == 13)
			{
				func_103(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_411C2F - 1)]);
				Global_411C2F = 0;
				func_56();
				if (iLocal_21 == 1)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 2);
					iLocal_21 = 0;
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
				}
			}
			if (Global_411C2F > 0 && Global_411C2F < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0xE2BBD32891C18569(sLocal_20[Global_411C2F], 0);
			}
		}
	}
	if (Global_411C2F > 0)
	{
		if (iLocal_26 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_411C2F]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_103(1);
				}
				if (iLocal_21 == 0)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
					{
						iLocal_21 = 1;
					}
				}
				MISC::SET_BIT(&Global_41212A, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_20[Global_411C2F], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_411C2F == 1 || Global_411C2F == 3)
			{
			}
			if (Global_411C2F == 2 || Global_411C2F == 4)
			{
			}
		}
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_106 == 0) && !func_135())
	{
		if (func_148())
		{
			func_98();
			Global_411C2E++;
			unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
		}
		if (Global_411C2E == 13)
		{
			Global_411C2E = 0;
		}
		if (Global_411C2E == 0)
		{
			if (func_148())
			{
				func_98();
			}
		}
		else
		{
			func_104();
		}
		func_55();
	}
	if ((NETWORK::_0x5C497525F803486B(0, 184) && iLocal_106 == 0) && !func_135())
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
			{
				vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
				unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_138(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_38B1.f_1 > 3)
				{
					func_133();
					func_115();
					func_79();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_63);
					iLocal_82 = 1;
					func_54(1);
					func_53();
					MISC::SET_BIT(&Global_951, 3);
					iLocal_32 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_54(0);
					iLocal_82 = 0;
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 3);
				}
				iLocal_86 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_38B1.f_1 > 3)
				{
					func_133();
					func_115();
					func_79();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				func_138(uLocal_91, "OPEN_SHUTTER");
				if (func_148())
				{
					if (Global_411C2F == 0)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
						{
							func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						}
					}
				}
				else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
				}
				func_115();
				func_133();
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_51();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_65 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
					{
						unk_0x1190AB7024CBD8CB(iLocal_63, "Camera_Zoom", &Global_38A6, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_65 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
				{
					unk_0x1190AB7024CBD8CB(iLocal_63, "Camera_Zoom", &Global_38A6, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_63);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_63);
		}
	}
	if (func_93(2, Global_3892, 0))
	{
		fLocal_38 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_39 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::_0x1072F115DAB0717E(0, 0);
		MISC::SET_BIT(&Global_94F, 21);
		AUDIO::STOP_SOUND(iLocal_63);
		iLocal_78 = 1;
		func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_139(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
		unk_0x1190AB7024CBD8CB(4294967295, "Camera_Shoot", &Global_38A6, 1);
		func_138(uLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
		if (!func_148())
		{
			func_98();
		}
		Global_41DA = 1;
		HUD::CLEAR_FLOATING_HELP(0, 1);
		while (Global_41D9 < 6 && Global_38B1.f_1 > 3)
		{
			func_133();
			func_115();
			func_79();
			func_120();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(0, 0);
		if (Global_3877)
		{
			func_1(1);
		}
		iLocal_86 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_38B1.f_1 > 3)
		{
			func_133();
			func_115();
			func_79();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_138(uLocal_91, "OPEN_SHUTTER");
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 21);
		func_106();
		if (Global_38B1.f_1 > 3)
		{
			if (Global_11625)
			{
				func_20(1086, 1, 4294967295);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_103(0);
		}
		func_115();
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
	{
		if (func_93(2, Global_3895, 0))
		{
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_133();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_133();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_41DB = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_41D7 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
			}
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			if (!Global_26862F.f_1828)
			{
				MISC::SET_BIT(&Global_94F, 9);
			}
			MISC::SET_GAME_PAUSED(0);
			iLocal_93 = 0;
			func_139(Global_389E, "DISPLAY_VIEW", 16f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
	}
}

int func_11()//Position - 0x2641
{
	func_12();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_12()//Position - 0x265A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_15(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_14(AUDIO::_0x0626A247D2405330());
			if (func_13(iVar0) && (!func_58(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_13(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_13(int iParam0)//Position - 0x2757
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x2763
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x27A0
{
	if (func_13(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)//Position - 0x27CA
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_17()//Position - 0x27ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2581E6[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)//Position - 0x2822
{
	if (Global_14084D)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140859) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x28A8
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_3872 = { Global_3882[Global_387A /*3*/] };
	func_96(0, 1);
	func_99(0, 0);
	func_103(0);
	iLocal_66 = 0;
	func_98();
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
	{
		if (NETWORK::_0x76BF03FADBF154F5() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x290B
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x294D
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_25(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_25(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_25(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_25(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_25(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_25(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_25(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x3158
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)//Position - 0x3188
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)//Position - 0x3392
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_25(uParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)//Position - 0x33C4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_26();
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

var func_26()//Position - 0x33F8
{
	return Global_1407E0;
}

void func_27()//Position - 0x3404
{
	if (iLocal_106 == 1)
	{
		func_50();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
		if (!func_135())
		{
			func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		else
		{
			func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_11625 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					func_48();
				}
				else
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(5f);
						func_46(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
				{
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!PAD::_IS_INPUT_DISABLED(0))
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_135())
					{
						if (func_148())
						{
							func_47(6f);
							func_46(7f);
							if (bLocal_30)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_63(uLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_135())
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
				{
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!PAD::_IS_INPUT_DISABLED(0))
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					if (!func_135())
					{
						if (func_148())
						{
							func_47(7f);
							func_46(8f);
							if (bLocal_30)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_63(uLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
	}
}

void func_28(float fParam0)//Position - 0x3976
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, true), "CELL_ACTION");
}

int func_29(int iParam0)//Position - 0x3996
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_45(Global_40004A, Global_40004B))
		{
			if (iParam0 == 0 || !func_30(Global_40004A, Global_40004B, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x39D6
{
	return func_31(AUDIO::_0x0626A247D2405330(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x39F0
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 5;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_38(iParam0);
			if (!iVar3 == 4294967295)
			{
				if (func_37(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_36(iParam0);
			if (!iVar4 == 4294967295)
			{
				if (func_34(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_33(iParam0);
			if (!iVar5 == 0)
			{
				if (func_32(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)//Position - 0x3ABF
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x3B00
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_34(var uParam0, int iParam1)//Position - 0x3B13
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)//Position - 0x3B23
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x3B64
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

bool func_37(var uParam0, int iParam1)//Position - 0x3B77
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)//Position - 0x3B87
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x3B9A
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_43(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 40:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 41:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 42:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 43:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 44:
				case 45:
				case 46:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_44(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 40, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 41, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)//Position - 0xA730
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)//Position - 0xA742
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)//Position - 0xA793
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xA7A5
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 5, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 7, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 10:
					func_44(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_44(uParam4, 2, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_44(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)//Position - 0xBC6F
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_45(int iParam0, int iParam1)//Position - 0xBCC1
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_46(float fParam0)//Position - 0xBDB8
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, true), "CELL_BORDER");
}

void func_47(float fParam0)//Position - 0xBDD8
{
	if (Global_1965E6 == 1)
	{
		fParam0 = -1f;
	}
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, true), "CELL_FILTER");
}

void func_48()//Position - 0xBE03
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, true), "CELL_GRID");
	func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_47(5f);
	func_46(6f);
	func_49(7f);
	func_28(8f);
	if (bLocal_29)
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
	}
	if (!func_58(14))
	{
		if ((Global_11625 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::SET_SEETHROUGH(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_4124BE));
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_49(float fParam0)//Position - 0xBF10
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, true), "CELL_ACCYC");
}

void func_50()//Position - 0xBF30
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
}

void func_51()//Position - 0xC00C
{
	if (iLocal_106 == 1)
	{
		func_52();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
					}
				}
				else if ((Global_11625 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					func_48();
				}
				else
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(5f);
						func_46(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					if (func_148())
					{
						func_47(6f);
						func_46(7f);
						func_63(uLocal_92, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
			{
				if (!func_135())
				{
					if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
				func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_63(uLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
				if (func_148())
				{
					if (!func_135())
					{
						func_47(7f);
						func_46(8f);
						if (bLocal_30)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
						}
						func_63(uLocal_92, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_135())
					{
						if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						if (!func_135())
						{
							func_47(4f);
							func_46(5f);
							func_63(uLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
	}
}

void func_52()//Position - 0xC4C3
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
	func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
}

void func_53()//Position - 0xC59C
{
	if (iLocal_82)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
	}
}

void func_54(int iParam0)//Position - 0xC5BA
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_440000.f_2402A == 1)
	{
	}
	else if (Global_440000.f_2402B == 1)
	{
	}
	else
	{
		MOBILE::_DISABLE_PHONE_THIS_FRAME(iParam0);
	}
}

void func_55()//Position - 0xC5F3
{
	if (iLocal_28 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_411C2E], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x696835D78F5EA372(0);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			unk_0x696835D78F5EA372(1);
		}
	}
}

void func_56()//Position - 0xC62B
{
	func_139(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
	if (!func_148())
	{
		if (Global_1965E6 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_57()//Position - 0xC66A
{
	if (func_58(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if ((ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
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
	return 1;
}

bool func_58(int iParam0)//Position - 0xC6E6
{
	return Global_8D15 == iParam0;
}

void func_59(char* sParam0)//Position - 0xC6F4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_60()//Position - 0xC706
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, true), "CELL_RT_RSTICK");
		func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_RT_RSTICK");
		func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_61()//Position - 0xC7B5
{
	if (PAD::_IS_INPUT_DISABLED(2) || MISC::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_63(uLocal_92, "SET_DATA_SLOT", 4f, PAD::_0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_58(14))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_LT_LSTICKZ");
		func_63(uLocal_92, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_62()//Position - 0xC867
{
	if (Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_21 == 233 && Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_B0 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_63(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0xC8A6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_64(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_59(sParam4);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_64(char* sParam0)//Position - 0xC8E5
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

void func_65()//Position - 0xC8F3
{
	if (Global_11625)
	{
		switch (Global_422B)
		{
			case 0:
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					func_134("CELL_CAM_SELFIE_0_KM", 4294967295);
				}
				else
				{
					func_134("CELL_CAM_SELFIE_0", 4294967295);
				}
				Global_422B++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_INPUT_DISABLED(2))
					{
						func_134("CELL_CAM_SELFIE_1_KM", 4294967295);
					}
					else
					{
						func_134("CELL_CAM_SELFIE_1", 4294967295);
					}
					Global_422B++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_422A)
		{
			case 0:
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					func_134("CELL_CAM_SELFIE_0_KM", 4294967295);
				}
				else
				{
					func_134("CELL_CAM_SELFIE_0", 4294967295);
				}
				Global_422A++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_INPUT_DISABLED(2))
					{
						func_134("CELL_CAM_SELFIE_1_KM", 4294967295);
					}
					else
					{
						func_134("CELL_CAM_SELFIE_1", 4294967295);
					}
					Global_422A++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_66()//Position - 0xC9EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			fVar7 = PAD::_0x4F8A26A890FD62FB(0, 290);
			fVar8 = PAD::_0x4F8A26A890FD62FB(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_69(fVar5);
		func_68(fVar6);
		func_67(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_67(float fParam0)//Position - 0xCB6E
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_111);
}

void func_68(float fParam0)//Position - 0xCB9A
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_112);
}

void func_69(float fParam0)//Position - 0xCBC6
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_113);
}

void func_70()//Position - 0xCBF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_135())
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_135())
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = PAD::_0x4F8A26A890FD62FB(0, 290);
			fVar9 = PAD::_0x4F8A26A890FD62FB(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_74(fVar6);
		func_73(fVar7);
		func_72(fVar4);
		if (!func_58(14))
		{
			func_71(fVar5);
		}
	}
	else if (!unk_0xE11F00B4AC919F45(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!unk_0xE11F00B4AC919F45(2, iVar10) && !unk_0xE11F00B4AC919F45(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_58(14))
		{
			func_71(fVar5);
		}
	}
}

void func_71(float fParam0)//Position - 0xCF31
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_109);
}

void func_72(float fParam0)//Position - 0xCF5D
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_110);
}

void func_73(float fParam0)//Position - 0xCF89
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_108);
}

void func_74(float fParam0)//Position - 0xCFC5
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_107);
}

void func_75()//Position - 0xCFF9
{
	if (Global_11729 || Global_1172A)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_440000.f_2402A == 0 && Global_440000.f_2402B == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_3877)
		{
			if (Global_3959)
			{
				if (iLocal_100 == 0)
				{
					if (Global_38B1.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_77(255, 255, 255, 255);
			func_76(0.059f, 0.644f, "CELL_284", 0);
			func_77(255, 255, 255, 255);
			func_76(0.165f, 0.644f, "CELL_285", 0);
			func_77(255, 255, 255, 255);
			func_76(0.275f, 0.75f, "CELL_280", 0);
			func_77(255, 255, 255, 255);
			func_76(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_3877)
	{
	}
	else
	{
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.75f, func_62(), 0);
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.79f, "CELL_286", 0);
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xD148
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD160
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_78()//Position - 0xD19F
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_39);
}

void func_79()//Position - 0xD1B8
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 39, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_80()//Position - 0xD212
{
	vLocal_44 = { Global_3882[Global_387A /*3*/] };
	if (Global_3877)
	{
		if (func_83())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_83() == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_387B[Global_387A /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 22))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_82();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_81();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_81()//Position - 0xD411
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
}

void func_82()//Position - 0xD4E3
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 3212836864, 3212836864, 3212836864, 3212836864);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
}

int func_83()//Position - 0xD5E3
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
		if (func_58(14))
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

void func_84()//Position - 0xD80A
{
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
	vLocal_43 = { Global_3889 };
	vLocal_44 = { Global_3882[Global_387A /*3*/] };
	if (func_83())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_3877)
	{
		func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_54(0);
		iLocal_82 = 0;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_85();
		}
		if (iLocal_72)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_83() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			func_96(0, 1);
		}
		else if (func_83() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_85();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_85();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
}

void func_85()//Position - 0xDB14
{
	func_1(0);
	if (func_83() == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_387B[Global_387A /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3882[Global_387A /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	Global_41D7 = 0;
	func_99(0, 0);
	func_103(0);
	iLocal_66 = 0;
	func_98();
	Global_38A4 = 1;
	Global_41DA = 0;
	if (Global_38B1.f_1 > 4)
	{
		Global_38B1.f_1 = 6;
		Global_389B = 1;
		func_86();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
	{
		func_138(uLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_92);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
	if (Global_395B == 1)
	{
		MISC::SET_BIT(&Global_94F, 17);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 18);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 21);
	HUD::CLEAR_FLOATING_HELP(0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 3);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 3);
	MISC::SET_GAME_PAUSED(0);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(CAM::_0xDC9DA9E8789F5246(), 1);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_41DB = 1;
	AUDIO::STOP_SOUND(iLocal_63);
	AUDIO::RELEASE_SOUND_ID(iLocal_63);
	HUD::_REMOVE_LOADING_PROMPT();
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(AUDIO::_0x0626A247D2405330());
	}
	func_98();
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	unk_0x696835D78F5EA372(0);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_411C2F > 0 && Global_411C2F < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_411C2F]);
	}
	func_96(0, 1);
	if (func_146(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_86()//Position - 0xDC9E
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
			func_139(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_90(Global_BAC);
			if (Global_BAC == 1)
			{
				func_139(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B5;
			}
			else
			{
				func_139(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B6), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B6;
			}
			if (Global_38A5)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_395B == 0)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else if (Global_11625)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else
			{
				if (Global_395A == 1)
				{
					if (Global_38A5)
					{
						func_89(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_89(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_38A5)
				{
					func_89(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_89(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_94F, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_139(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_89(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_89(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_38B0 == 1)
			{
				func_88();
				func_139(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_59("CELL_300");
					func_59("CELL_217");
					func_59("CELL_217");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
				{
					func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_217", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
				}
				func_139(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_3DCE == 4 || Global_3DCE == 3)
			{
				func_139(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_88();
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_59("CELL_300");
					func_59("CELL_219");
					func_59("CELL_219");
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
						func_139(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_139(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &cVar0, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
					}
				}
				func_139(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_87();
			break;
		
		default:
			break;
	}
}

void func_87()//Position - 0xE279
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (Global_38B0 == 1)
		{
			if (Global_38A5)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DFD)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_89(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			func_89(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_89(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_89(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_88()//Position - 0xE409
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

void func_89(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xE680
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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
		func_59(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_59(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_59(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_59(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_59(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_90(int iParam0)//Position - 0xE733
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
		if (func_58(14))
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
								func_59(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_59(&(Global_956[iVar1 /*15*/]));
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
								func_59(&(Global_956[iVar1 /*15*/]));
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
								func_59(&(Global_956[iVar1 /*15*/]));
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
								func_59(&(Global_956[iVar1 /*15*/]));
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
								func_59(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_89(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_91()//Position - 0xECD9
{
	switch (iLocal_51)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, 1);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_51();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, 1);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_82();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_81();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_92(bool bParam0)//Position - 0xED67
{
	if (bParam0)
	{
		if (!func_101())
		{
			MISC::SET_BIT(&Global_199D01, 17);
		}
	}
	else if (func_101())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_199D01, 17);
	}
}

int func_93(int iParam0, int iParam1, int iParam2)//Position - 0xED9A
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

void func_94(bool bParam0)//Position - 0xEE0C
{
	if (bParam0)
	{
		if (!func_95())
		{
			MISC::SET_BIT(&Global_199D01, 18);
		}
	}
	else if (func_95())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_199D01, 18);
	}
}

bool func_95()//Position - 0xEE3F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 18);
}

void func_96(bool bParam0, bool bParam1)//Position - 0xEE51
{
	if (bParam0)
	{
		if (func_97(0))
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

int func_97(int iParam0)//Position - 0xEEC5
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

void func_98()//Position - 0xEF1F
{
	if ((Global_440000.f_2402A == 0 && Global_440000.f_2402B == 0) && Global_1965E6 == 0)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_99(int iParam0, int iParam1)//Position - 0xEF56
{
	if (Global_440000.f_2402A == 1)
	{
	}
	else if (Global_440000.f_2402B == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_100()//Position - 0xEF88
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 15))
	{
		return 1;
	}
	return 0;
}

bool func_101()//Position - 0xEFA4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 17);
}

void func_102()//Position - 0xEFB6
{
	if (Global_3877)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_83())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_83() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	if (Global_3877)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_83())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_41D8 = 0;
				func_99(1, 1);
				iLocal_66 = 1;
				func_103(1);
				func_56();
				func_104();
				func_54(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_115();
				func_139(uLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), 3212836864, 3212836864, 3212836864, 3212836864);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
				}
				func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
				func_141();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
		Global_41D8 = 0;
	}
}

void func_103(bool bParam0)//Position - 0xF32E
{
	if (func_148())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(1);
				if (Global_411C2F > 0 && Global_411C2F < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_20[Global_411C2F], 0);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_104()//Position - 0xF38C
{
	if (Global_411C2E > 0 && Global_411C2E < 99)
	{
		if (Global_1965E6 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_411C2E]);
		}
	}
}

void func_105()//Position - 0xF3BD
{
	if (Global_3877)
	{
		iLocal_76 = 0;
		func_56();
		func_96(1, 1);
		func_99(1, 1);
		iLocal_66 = 1;
		Global_41DB = 1;
	}
}

void func_106()//Position - 0xF3E5
{
	if (Global_440000.f_2402A == 1 && func_107(1))
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_51();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_27();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_107(int iParam0)//Position - 0xF456
{
	if ((func_110() || func_109()) || (func_108() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_108()//Position - 0xF485
{
	return Global_255C02.f_10;
}

var func_109()//Position - 0xF493
{
	return Global_255C02.f_F;
}

var func_110()//Position - 0xF4A1
{
	return Global_255C02.f_E;
}

void func_111()//Position - 0xF4AF
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

void func_112()//Position - 0xF4D1
{
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_113()//Position - 0xF4EE
{
	func_114();
}

void func_114()//Position - 0xF4FA
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_115()//Position - 0xF519
{
	if (Global_38B1.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_116()//Position - 0xF54B
{
	if (func_58(14))
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
		Global_38B1 = func_11();
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

void func_117(int iParam0)//Position - 0xF5ED
{
	if (func_119())
	{
		return;
	}
	if (Global_3959)
	{
		func_96(0, 0);
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
	if (!func_118())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_118()//Position - 0xF667
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_119()//Position - 0xF68E
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_120()//Position - 0xF6A0
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_100 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3896);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_3893);
		PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 280, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 77, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 78, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 108, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 109, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 111, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 112, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 139, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_121()//Position - 0xF87F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 4294967295, 0))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == AUDIO::_0x0626A247D2405330())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122()//Position - 0xF8D2
{
	var uVar0;
	
	func_129(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_128())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_127())
	{
		return 1;
	}
	if (func_126(157))
	{
		if (!func_125())
		{
			return 1;
		}
	}
	if (func_126(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_123() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_123()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0xF95C
{
	switch (func_124())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_124()//Position - 0xF990
{
	return Global_6373;
}

bool func_125()//Position - 0xF99B
{
	return Global_255C02.f_24B;
}

int func_126(int iParam0)//Position - 0xF9AA
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_127()//Position - 0xF9C1
{
	return Global_25824F;
}

bool func_128()//Position - 0xF9CD
{
	return Global_255C02.f_246;
}

void func_129(var uParam0)//Position - 0xF9DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_130(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_130(int iParam0)//Position - 0xFA4F
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_132(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_131(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_131(int iParam0, var uParam1)//Position - 0xFAD0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1, bool bParam2)//Position - 0xFB2F
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

void func_133()//Position - 0xFB79
{
	if (iLocal_106 == 1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_134(char* sParam0, int iParam1)//Position - 0xFBB8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_135()//Position - 0xFBCF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

void func_136()//Position - 0xFBE0
{
	if (func_137())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_41DB = 1;
			Global_38B1.f_1 = 3;
			HUD::_REMOVE_LOADING_PROMPT();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
				{
					if (func_148())
					{
						if (Global_411C2F == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
							{
								func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
						}
						func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
					}
					else
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 2))
						{
							func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
						}
						func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
			{
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 3212836864, 3212836864, 3212836864);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		HUD::_REMOVE_LOADING_PROMPT();
	}
}

int func_137()//Position - 0xFD3E
{
	if (Global_440000.f_2402A == 1)
	{
		if (Global_11625)
		{
			return 0;
		}
	}
	if (Global_440000.f_2402B == 1)
	{
		if (Global_11625)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_138(var uParam0, char* sParam1)//Position - 0xFD9A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xFDAF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
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

int func_140()//Position - 0xFE12
{
	if (Global_11625)
	{
		Global_38B1 = 3;
	}
	else
	{
		Global_38B1 = func_11();
	}
	if (Global_38B1 > 3)
	{
		Global_38B1 = 3;
	}
	return Global_19E56.f_36C7[Global_38B1 /*20*/].f_7;
}

void func_141()//Position - 0xFE48
{
	if (Global_38B1.f_1 > 3)
	{
		Global_38B1.f_1 = 8;
	}
	Global_41DA = 0;
	iLocal_78 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		vLocal_34 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	}
	if (Global_3877)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_115();
			func_79();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
		}
		func_138(uLocal_91, "OPEN_SHUTTER");
		func_133();
		func_106();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_99(1, 1);
		func_103(1);
		func_56();
		func_104();
		func_54(0);
		iLocal_66 = 1;
	}
}

void func_142(int iParam0)//Position - 0xFEDC
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 15);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 15);
	}
}

bool func_143()//Position - 0xFEFF
{
	return Global_140842;
}

int func_144(int iParam0, int iParam1)//Position - 0xFF0B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = 4294967295;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_145()//Position - 0xFF90
{
}

int func_146(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xFF98
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_147()//Position - 0xFFCB
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_107);
			MOBILE::_0x3117D84EFA60F77B(fLocal_108);
			MOBILE::_0xAC2890471901861C(fLocal_109);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_107);
			MOBILE::_0x3117D84EFA60F77B(fLocal_108);
			MOBILE::_0xAC2890471901861C(fLocal_109);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_110);
	MOBILE::_0xD6ADE981781FCA09(fLocal_111);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_112);
	MOBILE::_0x466DA42C89865553(fLocal_113);
	func_53();
}

int func_148()//Position - 0x1003A
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

