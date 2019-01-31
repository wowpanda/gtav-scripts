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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_60 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 20;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	vector3 vLocal_218 = { 0f, 0f, 0f };
	vector3 vLocal_219 = { 0f, 0f, 0f };
	vector3 vLocal_220 = { 0f, 0f, 0f };
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	vLocal_218 = { 0f, 0f, 0f };
	vLocal_219 = { vLocal_218 };
	vLocal_220 = { vLocal_218 };
	iLocal_223 = 3;
	iLocal_228 = 24818;
	iLocal_231 = 24816;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(178))
	{
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	func_78();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_77())
		{
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
		if (func_76(0))
		{
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
		if (func_75(14))
		{
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
		if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 0) && func_70() == 1) && !func_69())
		{
			func_1();
		}
		else
		{
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		}
	}
}

void func_1()//Position - 0xFB
{
	switch (iLocal_221)
	{
		case 0:
			func_45();
			func_41();
			func_32();
			func_30();
			func_21();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 1) && !bLocal_214)
			{
				iLocal_221++;
			}
			break;
		
		case 1:
			if (func_17(&iLocal_208) > 5f)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 3))
				{
					func_14(28, iLocal_83[20], 1);
					func_7(28);
					MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 3);
					func_5(63, 1);
					iLocal_221++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_221++;
			}
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 0);
			func_2();
			break;
	}
}

int func_2()//Position - 0x1CE
{
	if (func_76(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

bool func_3(int iParam0)//Position - 0x219
{
	return func_4(iParam0, 0);
}

bool func_4(int iParam0, int iParam1)//Position - 0x228
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)//Position - 0x24B
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)//Position - 0x2A8
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

void func_7(int iParam0)//Position - 0x2E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_B5F8[iVar0 /*203*/].f_9 - 1);
	if (!Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_91A4[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_8(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_91A4[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x64F
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_9(HUD::_SET_NOTIFICATION_MESSAGE(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		else
		{
			func_9(HUD::_SET_NOTIFICATION_MESSAGE("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_10(iParam1)), 0));
		}
		switch (Global_38B1)
		{
			case 0:
				StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
				Global_919C++;
				if (Global_919C > 16)
				{
					Global_919C = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
				Global_919E++;
				if (Global_919E > 16)
				{
					Global_919E = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
				Global_919D++;
				if (Global_919D > 16)
				{
					Global_919D = 16;
				}
				break;
			
			default:
				StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x1190AB7024CBD8CB(4294967295, "Notification", &Global_38A6, true);
	}
}

void func_9(int iParam0)//Position - 0x82D
{
	Global_919F[Global_91A3] = iParam0;
	Global_41F0 = 1;
	Global_41EF = iParam0;
	Global_91A3++;
	if (Global_91A3 == 3)
	{
		Global_91A3 = 0;
	}
}

char* func_10(int iParam0)//Position - 0x85B
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)//Position - 0xBC0
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_12(int iParam0)//Position - 0x1013
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 4294967295)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_13(int iParam0)//Position - 0x1044
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_B5F8[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_B5F8[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_B5F8[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 4294967295 && iVar2 != 4294967295)
	{
		return iVar1;
	}
	return 4294967295;
}

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x10A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_B5F8[iVar0 /*203*/].f_2 = iParam0;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_B5F8[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = 4294967295;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 4294967295)
		{
			if (Global_B5F8[iVar0 /*203*/].f_4[iVar1] == Global_91A4[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B5F8[iVar0 /*203*/].f_4[Global_B5F8[iVar0 /*203*/].f_3] = Global_91A4[iParam1 /*12*/].f_3;
			Global_B5F8[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = 4294967295;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 4294967295)
		{
			if (Global_B5F8[iVar0 /*203*/].f_4[iVar1] == Global_91A4[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B5F8[iVar0 /*203*/].f_4[Global_B5F8[iVar0 /*203*/].f_3] = Global_91A4[iParam1 /*12*/].f_2;
			Global_B5F8[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_B5F8[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_B5F8[iVar0 /*203*/].f_4[iVar1], Global_B5F8[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x12A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = 4294967295;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_9EA1[iParam1 /*46*/].f_2A - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_9EA1[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_12(Global_91A4[iVar5 /*12*/].f_1) };
		if (Global_91A4[iVar5 /*12*/].f_2 == iParam0 && !Global_91A4[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_91A4[iVar5 /*12*/].f_2;
		iVar0 = Global_B48E[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_B48E[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_919C = (Global_919C - 1);
						if (Global_919C < 0)
						{
							Global_919C = 0;
						}
						break;
					
					case 1:
						Global_919D = (Global_919D - 1);
						if (Global_919D < 0)
						{
							Global_919D = 0;
						}
						break;
					
					case 2:
						Global_919E = (Global_919E - 1);
						if (Global_919E < 0)
						{
							Global_919E = 0;
						}
						break;
					}
				}
		}
		Global_B48E[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_B48E[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_B48E[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_56[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B48E[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_B48E[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_B48E[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_919C = (Global_919C - 1);
						if (Global_919C < 0)
						{
							Global_919C = 0;
						}
						break;
					
					case 1:
						Global_919D = (Global_919D - 1);
						if (Global_919D < 0)
						{
							Global_919D = 0;
						}
						break;
					
					case 2:
						Global_919E = (Global_919E - 1);
						if (Global_919E < 0)
						{
							Global_919E = 0;
						}
						break;
					}
				}
		}
		iVar8 = 4294967295;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_B5F8[iVar9 /*203*/].f_1 == iParam1 && Global_B5F8[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 4294967295)
		{
			return;
		}
		Global_B48E[iParam0 /*120*/].f_12[iVar0] = Global_B5F8[iVar8 /*203*/].f_1;
		Global_B48E[iParam0 /*120*/].f_1[iVar0] = (Global_B5F8[iVar8 /*203*/].f_9 - 1);
		Global_B48E[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_56[iVar0] = 1;
		Global_B48E[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B48E[iParam0 /*120*/]++;
		iVar10 = Global_B48E[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_B5F8[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_91A4[iVar11 /*12*/].f_2;
		if (Global_B5F8[iVar8 /*203*/].f_A[(Global_B5F8[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_B5F8[iVar8 /*203*/].f_A[(Global_B5F8[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_91A4[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B48E[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)//Position - 0x1677
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B5F8[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 4294967295;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = 4294967295;
	iVar5 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B5F8[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_B5F8[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_B5F8[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_B5F8[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_B5F8[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_B5F8[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_B48E[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_B48E[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_B48E[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_B48E[iVar6 /*120*/].f_12[iVar8] == Global_B5F8[iVar4 /*203*/].f_1)
							{
								if (Global_B48E[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_919C = (Global_919C - 1);
											break;
										
										case 1:
											Global_919D = (Global_919D - 1);
											break;
										
										case 2:
											Global_919E = (Global_919E - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_B5F8[iVar4 /*203*/].f_2 = iParam0;
	Global_B5F8[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_B5F8[iVar4 /*203*/] = 1;
	}
	Global_19E56.f_5211.f_136++;
	if (Global_19E56.f_5211.f_136 == 0)
	{
		Global_19E56.f_5211.f_136 = 1;
	}
	Global_B5F8[iVar4 /*203*/].f_1 = Global_19E56.f_5211.f_136;
	Global_B5F8[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

float func_17(int iParam0)//Position - 0x188F
{
	if (func_20(iParam0))
	{
		if (func_19(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_18(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)//Position - 0x18CB
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_19(var uParam0)//Position - 0x1923
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_20(var uParam0)//Position - 0x1933
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_21()//Position - 0x1943
{
	switch (iLocal_81)
	{
		case 0:
			if (bLocal_214)
			{
				if (!func_29())
				{
					iLocal_211 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_26());
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					iLocal_222 = func_26();
					Global_645C = iLocal_222;
					SYSTEM::SETTIMERB(0);
					unk_0x1190AB7024CBD8CB(4294967295, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_81 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 7500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || func_25()) || func_24())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_211, "SHARD_ANIM_OUT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.33f);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				SYSTEM::SETTIMERB(0);
				iLocal_81 = 2;
			}
			else
			{
				func_23();
				if (Global_645C > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246())) || func_29()) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || func_25()) || func_24())
			{
				iLocal_81 = 3;
			}
			else
			{
				func_23();
				if (Global_645C > iLocal_222)
				{
					iLocal_81 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_214 = false;
			iLocal_81 = 0;
			break;
	}
}

void func_22()//Position - 0x1AED
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_211);
	}
}

void func_23()//Position - 0x1B04
{
	if (!func_29())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_211))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_211, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()//Position - 0x1B36
{
	if (Global_8D15 == 9 || Global_8D15 == 10)
	{
		return Global_19910;
	}
	Global_19910 = 0;
	return 0;
}

int func_25()//Position - 0x1B63
{
	if (((Global_16C30 == 13 || Global_16C30 == 10) || Global_16C30 == 11) || Global_16C30 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()//Position - 0x1BA1
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 1);
	}
	return iVar0;
}

int func_27()//Position - 0x1BC6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)//Position - 0x1C0C
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

int func_29()//Position - 0x1C1E
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

void func_30()//Position - 0x1C48
{
	if (func_31() && !iLocal_216)
	{
		iLocal_216 = 1;
		iLocal_79 = 7;
	}
	if (!func_31() && iLocal_216)
	{
		iLocal_216 = 0;
	}
}

int func_31()//Position - 0x1C77
{
	if (Global_38A2)
	{
		return 1;
	}
	return 0;
}

void func_32()//Position - 0x1C8D
{
	if (func_17(&iLocal_205) > 3f)
	{
		func_37(0);
		func_36(&iLocal_205, 0f);
		func_35(&iLocal_205);
	}
	if ((func_17(&iLocal_205) <= 3f && func_34(0)) && func_33(AUDIO::_0x0626A247D2405330()))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(0, 177) || (PAD::IS_CONTROL_JUST_PRESSED(0, 24) && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))) || (func_31() && !iLocal_216))
		{
			func_36(&iLocal_205, 0f);
			func_35(&iLocal_205);
		}
	}
}

int func_33(int iParam0)//Position - 0x1D19
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1D3A
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

void func_35(int iParam0)//Position - 0x1D94
{
	if (func_20(iParam0))
	{
		if (!func_19(iParam0))
		{
			iParam0->f_2 = (func_18(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_36(int iParam0, float fParam1)//Position - 0x1DCE
{
	iParam0->f_1 = (func_18(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_37(int iParam0)//Position - 0x1DFC
{
	if (func_40())
	{
		return;
	}
	if (Global_3959)
	{
		func_39(0, 0);
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
	if (!func_38())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_38()//Position - 0x1E76
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)//Position - 0x1E9D
{
	if (bParam0)
	{
		if (func_34(0))
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

bool func_40()//Position - 0x1F11
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_41()//Position - 0x1F23
{
	if (iLocal_217)
	{
		if ((func_17(&iLocal_208) > 5f && func_44() >= 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 1))
		{
			switch (iLocal_224)
			{
				case 0:
					func_14(28, iLocal_83[(20 - func_44())], 1);
					iLocal_225 = 0;
					iLocal_224++;
					break;
				
				case 1:
					if (iLocal_225 < 10)
					{
						func_42(28, func_43(iLocal_225));
						iLocal_225++;
					}
					else
					{
						iLocal_224++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_224++;
					break;
				
				case 3:
					func_36(&iLocal_208, 0f);
					func_35(&iLocal_208);
					iLocal_217 = 0;
					iLocal_224 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_42(int iParam0, char* sParam1)//Position - 0x1FE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_43(int iParam0)//Position - 0x209B
{
	switch (iParam0)
	{
		case 0:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_44()//Position - 0x2882
{
	return (20 - func_27());
}

void func_45()//Position - 0x2891
{
	switch (iLocal_79)
	{
		case 0:
			if (func_68())
			{
				if ((!func_67() && Global_411C2E == 0) && Global_411C2F == 0)
				{
					iLocal_79 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_212 = func_62(&iLocal_213, 60f, iLocal_226, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_227, iLocal_228);
			if (iLocal_212 == 0)
			{
				iLocal_212 = func_62(&iLocal_213, 60f, iLocal_229, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_230, iLocal_231);
				if (iLocal_212 == 0)
				{
					iLocal_79 = 7;
				}
				else
				{
					iLocal_79 = 4;
				}
			}
			else
			{
				iLocal_79 = 4;
			}
			break;
		
		case 4:
			if (!func_61(iLocal_213))
			{
				func_60(1);
				iLocal_79 = 5;
			}
			else
			{
				if (!iLocal_215)
				{
				}
				else
				{
					iLocal_215 = 0;
				}
				iLocal_79 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_80)
			{
				case 0:
					func_59("PW_HELP_1", 4294967295);
					if (func_58())
					{
						if (func_34(0))
						{
							func_57(99);
							if (func_56("PW_HELP_1"))
							{
								HUD::CLEAR_THIS_PRINT("PW_HELP_1");
							}
							iLocal_80 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 176) || PAD::IS_CONTROL_JUST_PRESSED(0, 178))
					{
						func_60(0);
						func_55(99);
						if (func_56("PW_HELP_1"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_1");
						}
						iLocal_79 = 7;
					}
					break;
				
				case 1:
					func_59("PW_HELP_2", 4294967295);
					if (func_54(99))
					{
						iLocal_80 = 0;
						func_60(0);
						func_55(99);
						if (func_56("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 6;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 177))
					{
						iLocal_80 = 0;
						func_60(0);
						func_55(99);
						if (func_56("PW_HELP_2"))
						{
							HUD::CLEAR_THIS_PRINT("PW_HELP_2");
						}
						iLocal_79 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_53(iLocal_213);
			func_50(iLocal_82);
			STATS::STAT_SET_INT(joaat("num_hidden_packages_7"), func_27(), 1);
			bLocal_214 = true;
			func_47(&iLocal_205);
			func_47(&iLocal_208);
			iLocal_217 = 1;
			iLocal_79 = 7;
			break;
		
		case 7:
			func_46();
			iLocal_79 = 8;
			break;
		
		case 8:
			if (!func_68())
			{
				iLocal_79 = 0;
			}
			break;
	}
}

void func_46()//Position - 0x2AD3
{
	iLocal_80 = 0;
	iLocal_82 = 0;
	iLocal_212 = 0;
	iLocal_213 = 0;
	iLocal_215 = 0;
	vLocal_219 = { vLocal_218 };
	vLocal_220 = { vLocal_218 };
	func_60(0);
	func_55(99);
	if (func_56("PW_HELP_1"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_1");
	}
	if (func_56("PW_HELP_2"))
	{
		HUD::CLEAR_THIS_PRINT("PW_HELP_2");
	}
}

void func_47(int iParam0)//Position - 0x2B2C
{
	if (!func_20(iParam0))
	{
		func_49(iParam0);
	}
	else
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)//Position - 0x2B4D
{
	func_36(iParam0, 0f);
}

void func_49(int iParam0)//Position - 0x2B5C
{
	if (!func_20(iParam0))
	{
		func_48(iParam0);
	}
}

void func_50(int iParam0)//Position - 0x2B74
{
	int iVar0;
	
	iVar0 = func_52(92);
	Global_24D678[iVar0 /*83*/] = 92;
	StringCopy(&(Global_24D678[iVar0 /*83*/].f_1), func_51(iParam0), 64);
	StringCopy(&(Global_24D678[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

char* func_51(int iParam0)//Position - 0x2BB3
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_52(int iParam0)//Position - 0x2CD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D678[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D678[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_53(int iParam0)//Position - 0x2D24
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 4);
				iLocal_82 = 1;
			}
			break;
		
		case 1462895032:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 5);
				iLocal_82 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 6);
				iLocal_82 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 7);
				iLocal_82 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 8);
				iLocal_82 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 9);
				iLocal_82 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 10);
				iLocal_82 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 11);
				iLocal_82 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 14);
				iLocal_82 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 16);
				iLocal_82 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 18);
				iLocal_82 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 19);
				iLocal_82 = 13;
			}
			break;
		
		case 1125994524:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 21);
				iLocal_82 = 15;
			}
			break;
		
		case 1832265812:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 22);
				iLocal_82 = 16;
			}
			break;
		
		case 3753204865:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 23);
				iLocal_82 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 24);
				iLocal_82 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 25);
				iLocal_82 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 26);
				iLocal_82 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 29);
				iLocal_82 = 2;
			}
			break;
		
		case 2910340283:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 31);
				iLocal_82 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_54(int iParam0)//Position - 0x3115
{
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_19E56.f_6D76[iParam0 /*29*/].f_12 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x314B
{
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		Global_19E56.f_6D76[iParam0 /*29*/].f_12 = 0;
		return 1;
	}
	return 0;
}

int func_56(char* sParam0)//Position - 0x3177
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_57(int iParam0)//Position - 0x318A
{
	Global_3956 = iParam0;
}

int func_58()//Position - 0x3197
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_59(char* sParam0, int iParam1)//Position - 0x31B4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_60(bool bParam0)//Position - 0x31CB
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_94F, 28);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 28);
	}
}

int func_61(int iParam0)//Position - 0x31ED
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1462895032:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1125994524:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1832265812:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3753204865:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2910340283:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_215 = 1;
			break;
	}
	return 1;
}

int func_62(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x3511
{
	int iVar0;
	float fVar1;
	
	iVar0 = CAM::_0x89215EC747DF244A(fParam1, iParam2, fParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (PED::GET_PED_TYPE(iVar0) == 28)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				*iParam0 = ENTITY::GET_ENTITY_MODEL(iVar0);
				if (func_66(iVar0, 31086))
				{
					fVar1 = func_65(AUDIO::_0x0626A247D2405330(), iVar0, 1);
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(AUDIO::_0x0626A247D2405330(), iVar0))
					{
					}
					if (func_64(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_63(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_63(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x35E2
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case 1462895032:
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case 1125994524:
			iVar0 = 30;
			break;
		
		case 1832265812:
			iVar0 = 30;
			break;
		
		case 3753204865:
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case 2910340283:
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_64(int iParam0)//Position - 0x3711
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

float func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x374F
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_66(int iParam0, int iParam1)//Position - 0x37AD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	vLocal_220 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, iParam1)) };
	if (iLocal_213 == 3753204865 || iLocal_213 == joaat("a_c_rat"))
	{
		vLocal_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24816)) };
	}
	else
	{
		vLocal_219 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(iParam0, 24818)) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vLocal_219, &fVar0, &fVar1);
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vLocal_220, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_67()//Position - 0x389A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_951, 3))
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x38B5
{
	if (Global_41DA)
	{
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x38CB
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x38F6
{
	func_71();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_71()//Position - 0x390F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_74(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_73(AUDIO::_0x0626A247D2405330());
			if (func_72(iVar0) && (!func_75(14) || Global_19A3D))
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

bool func_72(int iParam0)//Position - 0x3A0C
{
	return iParam0 < 3;
}

int func_73(int iParam0)//Position - 0x3A18
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)//Position - 0x3A55
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

bool func_75(int iParam0)//Position - 0x3A7F
{
	return Global_8D15 == iParam0;
}

bool func_76(bool bParam0)//Position - 0x3A8D
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_77()//Position - 0x3AB8
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

void func_78()//Position - 0x3B73
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2725.f_63, 2))
	{
		MISC::SET_BIT(&(Global_19E56.f_2725.f_63), 2);
	}
	iLocal_221 = 0;
	iLocal_216 = func_31();
	iLocal_83[0] = 249;
	iLocal_83[1] = 250;
	iLocal_83[2] = 251;
	iLocal_83[3] = 252;
	iLocal_83[4] = 253;
	iLocal_83[5] = 254;
	iLocal_83[6] = 255;
	iLocal_83[7] = 256;
	iLocal_83[8] = 257;
	iLocal_83[9] = 258;
	iLocal_83[10] = 259;
	iLocal_83[11] = 260;
	iLocal_83[12] = 261;
	iLocal_83[13] = 262;
	iLocal_83[14] = 263;
	iLocal_83[15] = 264;
	iLocal_83[16] = 265;
	iLocal_83[17] = 266;
	iLocal_83[18] = 267;
	iLocal_83[19] = 268;
	iLocal_83[20] = 269;
}

