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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_51 = { 8.79494f, 0.59893f, 154.8464f };
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::_SET_DIRECTOR_MODE(0);
	unk_0x94F537C792F0039D(0);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_41();
	if (MISC::_0xA049A5BE0F04F2F8() || MISC::_0x3BBBD13E5041A79E())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	MISC::_USE_FREEMODE_MAP_BEHAVIOR(0);
	func_40(joaat("mp_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("title_update_registration"));
	func_40(3738198764, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(3738198764);
	func_40(2944166021, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(2944166021);
	Global_41243F = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_52)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0);
	Global_11627 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_28006E = 0;
			Global_28006D = 0;
			func_40(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 0) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 1)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 0))
				{
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 1))
				{
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41243F, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			MISC::START_SAVE_DATA(&Global_19E56, 1, 1);
			MISC::REGISTER_FLOAT_TO_SAVE(&Global_19E56, "fSaveVersion");
			MISC::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_19E56;
			}
			Global_19E56 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	MISC::START_SAVE_DATA(&Global_200000, 12746, 0);
	MISC::_START_SAVE_ARRAY(&Global_200000, 12746, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_20(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_18(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_14(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_12(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_11(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_10(&(Global_200000[iVar1 /*12745*/]), iVar1);
		func_3(&(Global_200000[iVar1 /*12745*/]), iVar1);
		iVar1++;
	}
	MISC::STOP_SAVE_STRUCT();
	MISC::STOP_SAVE_DATA();
	iVar2 = 12746;
	iVar3 = MISC::_0xA09F896CE912481F(0);
	if (iVar2 != iVar3)
	{
	}
	if (!NETWORK::_0xEA14EEF5B7CD2C30() && !NETWORK::_0x1D4DC17C38FEAFF0())
	{
		NETWORK::_0xB606E6CC59664972(0);
	}
	PATHFIND::_0x228E5C6AD4D74BFD(0);
	unk_0x94F537C792F0039D(0);
	func_2();
	func_1();
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_1()//Position - 0x3E7
{
	Global_1E[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_1E[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_1E[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_1E[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_1E[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_1E[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_1E[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_1E[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_1E[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_1E[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_1E[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_1E[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_1E[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_1E[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_1E[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_1E[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_1E[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_1E[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_1E[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_1E[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_1E[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_1E[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_1E[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_1E[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_1E[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_1E[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_1E[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_1E[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_1E[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_1E[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_1E[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_1E[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_1E[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_1E[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_1E[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_1E[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_1E[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_1E[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_1E[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_1E[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_1E[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_1E[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_1E[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_1E[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_1E[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_1E[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_1E[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_1E[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_1E[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_1E[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_1E[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_1E[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_1E[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_1E[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_1E[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_1E[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_1E[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_1E[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_1E[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_1E[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_1E[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()//Position - 0xB04
{
	Global_23579 = 1;
	Global_2357A = 1;
}

void func_3(var uParam0, int iParam1)//Position - 0xB16
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)//Position - 0xB4E
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE.f_13), 8, &cVar0);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_31AE.f_13[0 /*7*/]), 7, "TEMPSTAT_DATE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/]), "TEMPSTAT_DATE.year");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE.f_13[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	MISC::STOP_SAVE_STRUCT();
	HUD::_0x583049884A2EEE3C();
}

void func_5(var uParam0, int iParam1)//Position - 0xC18
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE.f_F), 4, &cVar0);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_31AE.f_F[0 /*3*/]), 3, "TEMPSTAT_VEC");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31AE.f_F[0 /*3*/]), "TEMPSTAT_VEC.x");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31AE.f_F[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31AE.f_F[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	MISC::STOP_SAVE_STRUCT();
	HUD::_0x583049884A2EEE3C();
}

void func_6(var uParam0, int iParam1)//Position - 0xC91
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE.f_6), 9, &cVar0);
	MISC::_0x8269816F6CFD40F8(&(uParam0->f_31AE.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	HUD::_0x583049884A2EEE3C();
}

void func_7(var uParam0, int iParam1)//Position - 0xCCC
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE.f_4), 2, &cVar0);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_31AE.f_4[0]), "TEMPSTAT_BOOL");
	HUD::_0x583049884A2EEE3C();
}

void func_8(var uParam0, int iParam1)//Position - 0xD06
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE.f_2), 2, &cVar0);
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_31AE.f_2[0]), "TEMPSTAT_FLOAT");
	HUD::_0x583049884A2EEE3C();
}

void func_9(var uParam0, int iParam1)//Position - 0xD40
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31AE), 2, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31AE[0]), "TEMPSTAT_INT1");
	HUD::_0x583049884A2EEE3C();
}

void func_10(var uParam0, int iParam1)//Position - 0xD76
{
	vector3 vVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_3118), 150, &cVar0);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3118), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3118.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3118.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3118.f_12), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		MISC::_0x48F069265A0E4BEC(&(uParam0->f_3118.f_12[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3118.f_73), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_3118.f_73[iVar1]), &cVar5);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3118.f_84), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3118.f_84[iVar1]), &cVar6);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3118.f_95), "mpAnyVecBought");
	MISC::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)//Position - 0xEF0
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	MISC::_START_SAVE_STRUCT(&(uParam0->f_3027), 241, &Var0);
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027), "BOUNTY_GAMERH64_1");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_1), "BOUNTY_GAMERH64_2");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_2), "BOUNTY_GAMERH64_3");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_3), "BOUNTY_GAMERH64_4");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_4), "BOUNTY_GAMERH64_5");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_5), "BOUNTY_GAMERH64_6");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_6), "BOUNTY_GAMERH64_7");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_7), "BOUNTY_GAMERH64_8");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_8), "BOUNTY_GAMERH64_9");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_9), "BOUNTY_GAMERH64_10");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_A), "BOUNTY_GAMERH64_11");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_B), "BOUNTY_GAMERH64_12");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_C), "BOUNTY_GAMERH64_13");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3027.f_D), "BOUNTY_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3027.f_E), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3027.f_F), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_A), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_B), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		MISC::_0xA735353C77334EA0(&(uParam0->f_3027.f_F[iVar2 /*13*/].f_C), &cVar1);
		iVar2++;
	}
	HUD::_0x583049884A2EEE3C();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3027.f_E0), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3027.f_E0[iVar2]), &cVar1);
		iVar2++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)//Position - 0x1316
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_1FF2), &cVar0);
}

void func_13(var uParam0, char[4] cParam1)//Position - 0x1337
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 4149, cParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_B), "iNewVehPurchased");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_A), "iSaveCoupons");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_C), "iLastBruciePillReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_D), "iLastSecVanReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_E), "iLastBountyReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F), "iLastParaReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iLastCrateDropReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iLastGangAttackReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastImpExpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastInsuranceReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastSurvivalReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastBikerBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastVagosBackupReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastLesterVehReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastPersonalVehDeliveryReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastPegasusVehicleReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1A), "iLastMerryweatherReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1B), "iLastLesterHelpReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1C), "iLastLesterReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1D), "iLastGeraldReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1E), "iLastSimeonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1F), "iLastMartinReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastRonReqJobReminder");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iRecentlyPassedMissionBitset");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iRecentlyPassedMissionTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastImportExportDelTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastImportExportListTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iMyLastImportExportListDay");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iVehicleWebsiteReminderTime");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_27), "bDefaultClothesSet");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_28), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_28)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_28[iVar0]), &Var1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2E), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2E[iVar0]), &Var1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4F7), "iLastCrewCharWasIn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4F8), "iStripperUnlockedBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4F9), "iGeneralBS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4FA), "iCarsModifiedTimeStamp");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_4FB), 10, "GOLF_fLongestDriveHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_4FB)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_4FB[iVar2]), &cVar3);
		iVar2++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_505), 10, "GOLF_fLongestPuttHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_505)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_505[iVar2]), &cVar3);
		iVar2++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_50F), "GOLF_iBestRound");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_510), "GOLF_fLongestDrive");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_511), "GOLF_fLongestPutt");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_512), "iShareLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_513), "iShareLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_514), "iReceiveLJCashTotal");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_515), "iReceiveLJCashTime");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_516), "LAST_ACC_PROP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_517), "MULTI1_PROP_VAL");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52C), "LAST_ACC_SMPLINT");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_518), 20, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_518)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_518[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52D), "KR_PATCH_UPDATE");
	iVar4 = 0;
	MISC::_START_SAVE_ARRAY(&(uParam0->f_A79), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_A79)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_A79[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	iVar4 = 0;
	MISC::_START_SAVE_ARRAY(&(uParam0->f_E10), 317, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_E10)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_E10[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_52E), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_52E[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_52E[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		HUD::_0x583049884A2EEE3C();
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_640), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_640[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_640[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		HUD::_0x583049884A2EEE3C();
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_752), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_752[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_752[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		HUD::_0x583049884A2EEE3C();
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_825), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_START_SAVE_ARRAY(&(uParam0->f_825[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_825[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		HUD::_0x583049884A2EEE3C();
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_8F8), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_8F8[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_90E), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_90E[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_924), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_924[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_93A), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_93A[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_950), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_950[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_966), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_966[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_97C), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_97C[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_A3B), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_A3B[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_992), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::_0x8269816F6CFD40F8(&(uParam0->f_992[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_A51), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_A), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_B), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_A51[iVar4 /*13*/].f_C), &cVar6);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_F4D), "DO_CompletedObjectives");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_F4E), "DO_LoggedInToday");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F4F), "DO_xValue");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F50), "DO_LastHistoryLength");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F51), "DO_LastResetTime");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_F52), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F52[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_F52[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F52[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_F5C), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F5C[iVar4]), &Var1);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_F75), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_F75[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_FA6), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_FA6[iVar0]), &Var1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_FB1), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_FB1)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_FB1[iVar0]), &Var1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_FB4), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_A), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_B), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FB4[iVar4 /*13*/].f_C), &cVar8);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_FDC), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_A), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_B), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		MISC::_0xA735353C77334EA0(&(uParam0->f_FDC[iVar4 /*13*/].f_C), &cVar9);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1004), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_1004[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	HUD::_0x583049884A2EEE3C();
	HUD::_0x583049884A2EEE3C();
}

void func_14(var uParam0, int iParam1)//Position - 0x24D6
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_17B6), &cVar0, iParam1);
}

void func_15(var uParam0, char[4] cParam1, int iParam2)//Position - 0x24F9
{
	char cVar0[64];
	int iVar1;
	
	MISC::_START_SAVE_STRUCT(uParam0, 2108, cParam1);
	MISC::_START_SAVE_ARRAY(uParam0, 1886, "CAR_APP_DATA");
	iVar1 = 0;
	while (iVar1 < 145)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		func_17(uParam0[iVar1 /*13*/], &cVar0);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::STOP_SAVE_STRUCT();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_787), 146, "CAR_HIDDEN");
	iVar1 = 0;
	while (iVar1 < 145)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_787[iVar1]), &cVar0);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	func_16(&(uParam0->f_75E), "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_819), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_81B), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_81A), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_820), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_81C), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_821), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_822), &cVar0);
	MISC::_START_SAVE_ARRAY(&(uParam0->f_823), 11, "SAVED_VEH_SLOT");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_823[iVar1]), &cVar0);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_82E), 11, "SAVED_VEH_PRIO");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_82E[iVar1]), &cVar0);
		iVar1++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_839), "LAST_USED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_83A), "NEW_SAVED");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_83B), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)//Position - 0x26FA
{
	MISC::_START_SAVE_STRUCT(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_A), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_B), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_C), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_D), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_E), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iTyreSmoke");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_15), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1A), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1B), "Cost");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_1C), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_21), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_24), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_23), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_22), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_25), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_28), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_26), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_27), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, char[4] cParam1)//Position - 0x28B2
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 13, cParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iModCountWheels");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_A), "bSendDataToCloud");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_B), "bDeleteData");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_C), "bUpdateMods");
	MISC::STOP_SAVE_STRUCT();
}

void func_18(var uParam0, int iParam1)//Position - 0x2959
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_1582), &cVar0);
}

void func_19(var uParam0, char[4] cParam1)//Position - 0x297A
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 564, cParam1);
	MISC::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_8), "GARAGE_TV_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_A), "GARAGE_RADIO_ON");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_B), "GARAGE_RADIO_STATION_ID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_C), "NUMBERS_TIMES_SMOKED");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_D), "NUMBER_TIMES_DRANK");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_E), "NUMBER_TIMES_STRIPPERS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_F), "NUMBERS_TIMES_SMOKED_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "NUMBER_TIMES_DRANK_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "NUMBER_TIMES_STRIPPERS_SECOND");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "NUMBER_TIMES_DRANK3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS3");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBER_TIMES_DRANK4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS4");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBER_TIMES_DRANK5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1A), "NUMBER_TIMES_STRIPPERS5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1B), "NUMBERS_TIMES_SMOKEDYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1C), "NUMBER_TIMES_DRANKYacht");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1D), "NUMBER_TIMES_STRIPPERSYacht");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1E), "DATE_LAST_CLEANED_APARTMENT");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_1F), "SHOWERS_TAKEN");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_20), 17, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_31), 17, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_31[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_42), 17, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_42[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_42[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_53), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::_0xFAA457EF263E8763(&(uParam0->f_53[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	HUD::_0x583049884A2EEE3C();
}

void func_20(var uParam0, int iParam1)//Position - 0x2CDA
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_157C), &cVar0);
}

void func_21(var uParam0, char[4] cParam1)//Position - 0x2CFB
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 6, cParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	HUD::_0x583049884A2EEE3C();
}

void func_22(var uParam0, int iParam1)//Position - 0x2D59
{
	vector3 vVar0;
	
	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_23(uParam0, &vVar0);
}

void func_23(var uParam0, char* sParam1)//Position - 0x2D77
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	MISC::_START_SAVE_ARRAY(uParam0, 5500, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(uParam0[iVar0 /*141*/], &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
}

void func_24(var uParam0, char[4] cParam1)//Position - 0x2DBE
{
	MISC::_START_SAVE_STRUCT(uParam0, 141, cParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_66), "VEHICLE_BS");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_68), "PAID_PREMIUM");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_69), "PAID_PLAYER");
	MISC::_0xFAA457EF263E8763(&(uParam0->f_79), "RADIO_STATION");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "IMPOUND_TIME");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_89), "COLOUR_GROUP1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8A), "COLOUR_GROUP2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8B), "PRICE_PAID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8C), "OBTAIN_TIME");
	MISC::STOP_SAVE_STRUCT();
}

void func_25(var uParam0, char* sParam1)//Position - 0x2E4A
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	MISC::_START_SAVE_STRUCT(uParam0, 102, sParam1);
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4E), "iSpawnVehicleHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4F), "iHornID");
	MISC::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_50), "fEnveffScale");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_61), "iColour5");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iLivery2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iColour6");
	func_26(&(uParam0->f_51), "GamerHandleOfCarOwner");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5E), "OwnerStatus");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5F), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_60), "iPVSlot");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iPlayerIndex");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iIEPlayerVehicle");
	MISC::STOP_SAVE_STRUCT();
}

void func_26(var uParam0, char* sParam1)//Position - 0x2EFA
{
	MISC::_START_SAVE_STRUCT(uParam0, 13, sParam1);
	MISC::_0xA735353C77334EA0(uParam0, "Data64_1");
	MISC::_0xA735353C77334EA0(&(uParam0->f_1), "Data64_2");
	MISC::_0xA735353C77334EA0(&(uParam0->f_2), "Data64_3");
	MISC::_0xA735353C77334EA0(&(uParam0->f_3), "Data64_4");
	MISC::_0xA735353C77334EA0(&(uParam0->f_4), "Data64_5");
	MISC::_0xA735353C77334EA0(&(uParam0->f_5), "Data64_6");
	MISC::_0xA735353C77334EA0(&(uParam0->f_6), "Data64_7");
	MISC::_0xA735353C77334EA0(&(uParam0->f_7), "Data64_8");
	MISC::_0xA735353C77334EA0(&(uParam0->f_8), "Data64_9");
	MISC::_0xA735353C77334EA0(&(uParam0->f_9), "Data64_10");
	MISC::_0xA735353C77334EA0(&(uParam0->f_A), "Data64_11");
	MISC::_0xA735353C77334EA0(&(uParam0->f_B), "Data64_12");
	MISC::_0xA735353C77334EA0(&(uParam0->f_C), "Data64_13");
	MISC::STOP_SAVE_STRUCT();
}

void func_27(var uParam0, char* sParam1)//Position - 0x2FAA
{
	int iVar0;
	char cVar1[16];
	
	MISC::_START_SAVE_STRUCT(uParam0, 78, sParam1);
	MISC::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	MISC::_0x6F7794F28C6B2535(&(uParam0->f_1), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3E), "iTyreR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3F), "iTyreG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_40), "iTyreB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_41), "iWindowTintColour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_43), "iLivery");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_45), "iWheelType");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_44), "eRoofState");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4D), "iFlags");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_47), "iCustomR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_48), "iCustomG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_49), "iCustomB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4A), "iNeonR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4B), "iNeonG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4C), "iNeonB");
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_42), "eModel");
	MISC::_START_SAVE_ARRAY(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::_START_SAVE_ARRAY(&(uParam0->f_3B), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3B[iVar0]), &cVar1);
		iVar0++;
	}
	HUD::_0x583049884A2EEE3C();
	MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_46), "eLockState");
	MISC::STOP_SAVE_STRUCT();
}

void func_28(float fParam0)//Position - 0x3146
{
	func_37();
	if (fParam0 == 1f)
	{
		func_35();
	}
	if (fParam0 <= 1.1f)
	{
		func_34();
	}
	if (fParam0 < 1.5f)
	{
		func_32();
	}
	if (fParam0 <= 1.5f)
	{
		func_31();
	}
	if (fParam0 == 1.5f)
	{
		func_30();
	}
	if (fParam0 < 1.7f)
	{
		func_29();
	}
}

void func_29()//Position - 0x31A8
{
	Global_19E56.f_6726.f_4 = 0;
}

void func_30()//Position - 0x31BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("content_hanger_veh"), &iVar0, 4294967295);
	STATS::STAT_GET_INT(joaat("content_marina_veh"), &iVar1, 4294967295);
	STATS::STAT_GET_INT(joaat("content_heli_veh"), &iVar2, 4294967295);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_19E56.f_29C.f_518 = (Global_19E56.f_29C.f_518 - iVar0);
	}
}

void func_31()//Position - 0x3219
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6242[iVar1], iVar0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_6242[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				MISC::SET_BIT(&(Global_19E56.f_6242[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_32()//Position - 0x3288
{
	if ((((func_33(54) || func_33(55)) || func_33(56)) || func_33(57)) || func_33(58))
	{
		MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 6);
	}
}

int func_33(int iParam0)//Position - 0x32D7
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_34()//Position - 0x3303
{
}

void func_35()//Position - 0x330B
{
	if (Global_19E56.f_2361.f_63.f_CD[7] != 0)
	{
		if (!Global_19E56.f_2361.f_14A[86 /*6*/])
		{
			Global_19E56.f_2361.f_14A[86 /*6*/] = 1;
		}
	}
	if (Global_19E56.f_2361.f_63.f_CD[8] != 0)
	{
		if (!Global_19E56.f_2361.f_14A[71 /*6*/])
		{
			Global_19E56.f_2361.f_14A[71 /*6*/] = 1;
		}
	}
	if (Global_19E56.f_2361.f_63.f_CD[9] != 0)
	{
		if (!Global_19E56.f_2361.f_14A[91 /*6*/])
		{
			Global_19E56.f_2361.f_14A[91 /*6*/] = 1;
		}
	}
	if (Global_19E56.f_2361.f_63.f_CD[10] != 0)
	{
		if (!Global_19E56.f_2361.f_14A[67 /*6*/])
		{
			Global_19E56.f_2361.f_14A[67 /*6*/] = 1;
		}
	}
	if (Global_19E56.f_2361.f_63.f_CD[11] != 0)
	{
		if (!Global_19E56.f_2361.f_14A[77 /*6*/])
		{
			Global_19E56.f_2361.f_14A[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

void func_36(int iParam0, int iParam1)//Position - 0x342B
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_19E56.f_27B6[iParam0 /*12*/] };
	uVar1 = Global_19E56.f_27B6[iParam0 /*12*/].f_4;
	uVar2 = Global_19E56.f_27B6[iParam0 /*12*/].f_5;
	uVar3 = Global_19E56.f_27B6[iParam0 /*12*/].f_6;
	uVar4 = Global_19E56.f_27B6[iParam0 /*12*/].f_7;
	uVar5 = Global_19E56.f_27B6[iParam0 /*12*/].f_8;
	uVar6 = Global_19E56.f_27B6[iParam0 /*12*/].f_9;
	uVar7 = Global_19E56.f_27B6[iParam0 /*12*/].f_A;
	uVar8 = Global_19E56.f_27B6[iParam0 /*12*/].f_B;
	Global_19E56.f_27B6[iParam0 /*12*/] = { Global_19E56.f_27B6[iParam1 /*12*/] };
	Global_19E56.f_27B6[iParam0 /*12*/].f_4 = Global_19E56.f_27B6[iParam1 /*12*/].f_4;
	Global_19E56.f_27B6[iParam0 /*12*/].f_5 = Global_19E56.f_27B6[iParam1 /*12*/].f_5;
	Global_19E56.f_27B6[iParam0 /*12*/].f_6 = Global_19E56.f_27B6[iParam1 /*12*/].f_6;
	Global_19E56.f_27B6[iParam0 /*12*/].f_7 = Global_19E56.f_27B6[iParam1 /*12*/].f_7;
	Global_19E56.f_27B6[iParam0 /*12*/].f_8 = Global_19E56.f_27B6[iParam1 /*12*/].f_8;
	Global_19E56.f_27B6[iParam0 /*12*/].f_9 = Global_19E56.f_27B6[iParam1 /*12*/].f_9;
	Global_19E56.f_27B6[iParam0 /*12*/].f_A = Global_19E56.f_27B6[iParam1 /*12*/].f_A;
	Global_19E56.f_27B6[iParam0 /*12*/].f_B = Global_19E56.f_27B6[iParam1 /*12*/].f_B;
	Global_19E56.f_27B6[iParam1 /*12*/] = { Var0 };
	Global_19E56.f_27B6[iParam1 /*12*/].f_4 = uVar1;
	Global_19E56.f_27B6[iParam1 /*12*/].f_5 = uVar2;
	Global_19E56.f_27B6[iParam1 /*12*/].f_6 = uVar3;
	Global_19E56.f_27B6[iParam1 /*12*/].f_7 = uVar4;
	Global_19E56.f_27B6[iParam1 /*12*/].f_8 = uVar5;
	Global_19E56.f_27B6[iParam1 /*12*/].f_9 = uVar6;
	Global_19E56.f_27B6[iParam1 /*12*/].f_A = uVar7;
	Global_19E56.f_27B6[iParam1 /*12*/].f_B = uVar8;
}

void func_37()//Position - 0x362F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_19E56.f_612C[iVar0 /*4*/]))
		{
			if (Global_19E56.f_612C[iVar0 /*4*/] != 145)
			{
				Global_19E56.f_612C[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_38(int iParam0)//Position - 0x367A
{
	return iParam0 < 3;
}

void func_39()//Position - 0x3686
{
	RENDERING::_0x7E2BD3EF6C205F09("No_Filter", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	RENDERING::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)//Position - 0x36E8
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_41()//Position - 0x3717
{
	if (((UNK::_0xEF7D17BC6C85264C() || unk_0x9EAB956EA786E129()) || NETWORK::_0x88B588B41FF7868E()) || NETWORK::_0x67FC09BC554A75E5())
	{
		return 1;
	}
	return 0;
}

